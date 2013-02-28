#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <string>
#include <vector>
#include "user.h"


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    std::string md5(std::string data);
    ~MainWindow();   
    
private slots:
    void on_createUserBtn_clicked();

    void on_loginBtn_clicked();

    void on_tabWidget_selected(const QString &arg1);

    void on_textEdit_textChanged();

    void on_logoutBtn_clicked();

    void on_runMackBtn_clicked();

    void on_saveFileBtn_clicked();

    void on_searchEdit_returnPressed();

    void on_action_About_triggered();

    void on_action_Configuration_triggered();

    void on_action_Close_triggered();

    void on_crackButton_clicked();

    void on_cracker_box_currentIndexChanged(int index);

    void on_tabWidget_currentChanged(int index);

private:
    Ui::MainWindow *ui;
    std::vector<user>_userList;
    int _currentUser;
    bool _loggedin;

    void run_mack();
};

#endif // MAINWINDOW_H
