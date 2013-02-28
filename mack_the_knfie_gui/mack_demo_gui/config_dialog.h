#ifndef CONFIG_DIALOG_H
#define CONFIG_DIALOG_H

#include <QDialog>

namespace Ui {
class config_dialog;
}

class config_dialog : public QDialog
{
    Q_OBJECT
    
public:
    explicit config_dialog(QWidget *parent = 0);
    ~config_dialog();
    
private slots:


    void on_close_button_clicked();

private:
    Ui::config_dialog *ui;
};

#endif // CONFIG_DIALOG_H
