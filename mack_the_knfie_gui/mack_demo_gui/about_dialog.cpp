#include "about_dialog.h"
#include "ui_about_dialog.h"

about_dialog::about_dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::about_dialog)
{
    ui->setupUi(this);
}

about_dialog::~about_dialog()
{
    delete ui;
}

void about_dialog::on_pushButton_clicked()
{
    this->close();
}


void about_dialog::on_actionClose_triggered()
{
    this->close();
}
