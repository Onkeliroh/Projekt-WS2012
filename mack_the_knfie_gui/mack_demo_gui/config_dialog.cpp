#include "config_dialog.h"
#include "ui_config_dialog.h"

config_dialog::config_dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::config_dialog)
{
    ui->setupUi(this);
}

config_dialog::~config_dialog()
{
    delete ui;
}

void config_dialog::on_close_button_clicked()
{
    this->close();
}
