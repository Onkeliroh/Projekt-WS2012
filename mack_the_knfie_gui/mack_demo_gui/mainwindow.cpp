#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "about_dialog.h"
#include "config_dialog.h"
#include "md5.h"
//#include "scripts.h"
#include <string>
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <sstream>
#include <iomanip>
#include <iterator>
#include <fstream>
#include <QMessageBox>

std::string hashes_location;



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    _currentUser(0),
    _loggedin(false)
{
    ui->setupUi(this);
}

std::string
MainWindow::md5(std::string data){
    MD5_CTX             context;
    unsigned char       digest [16];
    memset(digest,0,16);

    unsigned char* buf = (unsigned char*)malloc(data.length() * sizeof(unsigned char));
    memset(buf,0,data.length() * sizeof(unsigned char));
    memcpy(buf,data.c_str(),data.length());

    MD5_Init( &context );
    MD5_Update( &context, buf, data.length());
    MD5_Final( digest, &context );

    std::stringstream ss;

    for(int i = 0; i < 16; ++i)
        ss << std::setfill ('0') << std::setw (2) << std::hex << (unsigned int)(digest[i] & 0xff);


    free(buf);
    return ss.str();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_createUserBtn_clicked()
{
    ui->debug_edit->clear();
    ui->debug_edit->append("");
    if(!(ui->userEdit->text().isEmpty()))
        if(ui->passwordEdit->text() == ui->passwordEdit2->text()){

            if(ui->userTable->findItems(ui->userEdit->text(),Qt::MatchExactly).isEmpty()){
                int rcount = ui->userTable->rowCount();
                ui->userTable->insertRow(rcount);


                QTableWidgetItem *newItem = new QTableWidgetItem(ui->userEdit->text());
                ui->userTable->setItem(rcount,0,newItem);

                std::string pw(ui->passwordEdit->text().toStdString());
                std::string hash(md5(pw));
                std::cout << "pw: " << pw << " hash: " << hash <<  "\n";

                _userList.push_back(user(ui->userEdit->text().toStdString(),hash));

                newItem = new QTableWidgetItem(hash.c_str());
                ui->userTable->setItem(rcount,1,newItem);

                ui->debug_edit->append("Benutzer erstellt");
                ui->userEdit->setText("");
                ui->passwordEdit->setText("");
                ui->passwordEdit2->setText("");
                ui->debug_edit->repaint();
            }
            else{
                //ui->debugLabel->setText(QString().fromUtf8("Benutzer existiert bereits"));
                ui->debug_edit->append(QString().fromUtf8("Benutzer existiert bereits"));
            }
        }
        else{
            //ui->debugLabel->setText(QString().fromUtf8("Passwort stimmt nicht überein"));
            ui->debug_edit->append(QString().fromUtf8("Passwort stimmt nicht überein"));
        }
    else{
        //ui->debugLabel->setText("Bitte Benutzernamen eingeben");
        ui->debug_edit->append("Bitte geben sie einen Benutzernamen an");
    }
}


void MainWindow::on_loginBtn_clicked()
{
    std::string username = ui->userLoginEdit->text().toStdString();

    if(_userList.empty()) ui->loginLabel->setText("Benutzer nicht gefunden");

    int i = 0;
    for (std::vector<user>::iterator it=_userList.begin() ; it != _userList.end(); it++ ){
        if((*it)._name == username){

            std::string pw(ui->userPasswordEdit->text().toStdString());
            std::string hash(md5(pw));

            if(hash == (*it)._password){

                _currentUser = i;
                std::string s = "Eingeloggt als ";
                s.append(username);
                ui->loginLabel->setText(s.c_str());

                ui->textEdit->setText(QString().fromStdString((*it)._secret));

                std::cout << "User login: " << (*it)._name << "\n";
                _loggedin = true;
            }
            else{
                ui->loginLabel->setText("Falsches Passwort");
                _loggedin = false;
            }

            break;
        }
        else{
            ui->loginLabel->setText("Benutzer nicht gefunden");
            _loggedin = false;
        }
        ++i;
    }

}

void MainWindow::on_tabWidget_selected(const QString &arg1)
{
    if(arg1.toStdString().compare("Benutzerkonto anlegen")){
        _loggedin = false;
        ui->loginLabel->setText("");
        ui->userPasswordEdit->setText("");
        ui->userLoginEdit->setText("");
        ui->textEdit->setText("");
    }
}

void MainWindow::on_textEdit_textChanged()
{
    if(_loggedin){
        _userList[_currentUser]._secret  = ui->textEdit->document()->toPlainText().toStdString();
        std::cout << "hi folks " << _userList[_currentUser]._secret << "\n";
        std::cout << "User text: " << _userList[_currentUser]._name << "\n";
    }
}

void MainWindow::on_logoutBtn_clicked()
{
    _loggedin = false;
    ui->loginLabel->setText("");
    ui->userPasswordEdit->setText("");
    ui->userLoginEdit->setText("");
    ui->textEdit->setText("");
}

void MainWindow::on_searchEdit_returnPressed()
{

    int rcount = ui->userTable->rowCount();
    for(int i = 0; i < rcount; ++i){
        ui->userTable->removeRow(0);
    }

    if((ui->searchEdit->text().isEmpty())){
        for (std::vector<user>::iterator it=_userList.begin() ; it != _userList.end(); it++ ){

            rcount = ui->userTable->rowCount();
            ui->userTable->insertRow(rcount);


            QTableWidgetItem *newItem = new QTableWidgetItem(QString().fromUtf8((*it)._name.c_str()));
            ui->userTable->setItem(rcount,0,newItem);



            newItem = new QTableWidgetItem(QString().fromUtf8((*it)._password.c_str()));
            ui->userTable->setItem(rcount,1,newItem);
        }
    }
    else{
        for (std::vector<user>::iterator it=_userList.begin() ; it != _userList.end(); it++ ){

            if((ui->searchEdit->text().toStdString()) == ((*it)._password)){
                rcount = ui->userTable->rowCount();
                ui->userTable->insertRow(rcount);

                QTableWidgetItem *newItem = new QTableWidgetItem(QString().fromUtf8((*it)._name.c_str()));
                ui->userTable->setItem(rcount,0,newItem);

                newItem = new QTableWidgetItem(QString().fromUtf8((*it)._password.c_str()));
                ui->userTable->setItem(rcount,1,newItem);
            }
        }
    }
}

void MainWindow::on_action_About_triggered()
{
    QDialog *about = new about_dialog();
    about->exec();
}

void MainWindow::on_action_Configuration_triggered()
{
    QDialog *conf = new config_dialog();
    conf->exec();
}

void MainWindow::on_action_Close_triggered()
{
    this->close();
}

void MainWindow::on_crackButton_clicked()
{
    ui->tabWidget->setCurrentIndex(3);
    upload(ui->targetfile_path->text().toStdString());

    std::stringstream run_cmd;
    if (ui->cracker_box->currentIndex() == 0){ // bruteforce
        run_cmd <<
                " ./bin/mack_the_knife " <<
                " -C Brute_Cracker " <<
                " --cracker.device " << ui->device_box->currentText().toStdString() <<
                " --cracker.target-file " << ui->targetfile_path->text().toStdString() <<
                " --cracker.algorithm " << " MD5_Algorithm " <<
                " --cracker.length " << ui->brute_length_box->value() <<
                " --cracker.keytable " << ui->brute_keytable_edit->text().toStdString() ;
    }
    else if (ui->cracker_box->currentIndex() == 1){ // dictionary
        run_cmd <<
                " ./bin/mack_the_knife " <<
                " -C Dictionary_Cracker " <<
                " --cracker.device " << ui->device_box->currentText().toStdString() <<
                " --cracker.target-file " << ui->targetfile_path->text().toStdString() <<
                " --cracker.algorithm " << " MD5_Algorithm " <<
                " --cracker.dictionary " << ui->dict_dict_edit->text().toStdString() <<
                " --cracker.digits " << ui->dict_digits_box->value() <<
                " --cracker.hostmem " << ui->dict_hostmem_box->value() <<
                " --cracker.varycase ";
        if (ui->dict_varycase_checkbox->isTristate())
            run_cmd << "true";
        else
            run_cmd << "false";
    }
    else if (ui->cracker_box->currentIndex() == 2){ // rainbowtable
        run_cmd <<
                " ./bin/mack_the_knife " <<
                " -C Rainbow_Cuda_Cracker " <<
                " --cracker.device " << ui->device_box->currentText().toStdString() <<
                " --cracker.target-file " << ui->targetfile_path->text().toStdString() <<
                " --cracker.algorithm " << " MD5_Algorithm " <<
                " --cracker.length " << ui->rainbow_target_length_box->value() <<
                " --cracker.keytable " << ui->rainbow_keytable_edit->text().toStdString() <<
                " --cracker.chainlength " << ui->rainbow_chain_length_box->value() <<
                " --cracker.rainbowtable " << ui->rainbow_table_edit->text().toStdString();
    }

    run_mack(run_cmd.str());
}

void MainWindow::run_mack(std::string mackstring)
{
    FILE *fp;
    char line[130];
    char* c;

    ui->consoleTextEdit->clear();
    ui->consoleTextEdit->appendPlainText("Fuehre Mack the Knife mit folgendem Kommando aus:");
    ui->consoleTextEdit->appendPlainText(QString::fromStdString(mackstring));
    ui->consoleTextEdit->appendPlainText("-------------------------------------------------");
    ui->consoleTextEdit->repaint();

    std::string cmd("./run.sh ");
    cmd.append(mackstring);

    std::cout << cmd << "\n";

    fp = popen(cmd.c_str(), "r");

    while ( fgets( line, sizeof line, fp))
    {
        c = strchr(line,'\n');
        (*c) = 0;
        ui->consoleTextEdit->appendPlainText(QString(line));
        fflush(fp);
        ui->consoleTextEdit->repaint();
    }
    pclose(fp);

}

void MainWindow::upload(std::string hashfilename)
{
    //write hashes to file
    std::fstream hashfile;

    //std::string hashfilename = ui->hashfileEdit->text().toStdString();

    hashfile.open(hashfilename.c_str(), std::fstream::trunc | std::fstream::out);

    if (!_userList.empty()){
        for (std::vector<user>::iterator it=_userList.begin() ; it != _userList.end(); it++ ){
            hashfile << (*it)._password << "\n";
        }

        hashfile.close();

        //upload hashes to cuda server
        FILE *fp;
        char line[130];
        char* c;

        //std::string cmd = get_default_upload_script();
        std::string cmd("./upload.sh "); //editieren
        cmd.append(hashfilename);

        std::cout<<cmd;
        fp = popen(cmd.c_str(), "r");

        while ( fgets( line, sizeof line, fp))
        {
            c = strchr(line,'\n');
            (*c) = 0;
            ui->consoleTextEdit->appendPlainText(QString(line));
        }
        pclose(fp);
    }
    else {
        QMessageBox messageBox;
        messageBox.critical(0,"Error","Es liegen keine Nutzerkonten vor.\nBitte legen sie ein Nutzerkonto an.");
        messageBox.setFixedSize(500,200);
    }
}

void MainWindow::on_cracker_box_currentIndexChanged(int index)
{
    if (index == 0)
    {
        ui->brute_cracker_frame->setVisible(true);
        ui->dict_cracker_frame->setVisible(false);
        ui->rainbow_cracker_frame->setVisible(false);
    }
    else if ( index == 1)
    {
        ui->dict_cracker_frame->setVisible(true);
        ui->brute_cracker_frame->setVisible(false);
        ui->rainbow_cracker_frame->setVisible(false);
    }
    else if ( index == 2)
    {
        ui->dict_cracker_frame->setVisible(false);
        ui->brute_cracker_frame->setVisible(false);
        ui->rainbow_cracker_frame->setVisible(true);
    }
}

void MainWindow::on_tabWidget_currentChanged(int index)
{
    on_cracker_box_currentIndexChanged(ui->cracker_box->currentIndex());
}

void MainWindow::on_actionGerman_triggered()
{
}
