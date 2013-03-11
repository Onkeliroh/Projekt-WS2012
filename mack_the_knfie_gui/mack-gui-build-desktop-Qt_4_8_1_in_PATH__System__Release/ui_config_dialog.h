/********************************************************************************
** Form generated from reading UI file 'config_dialog.ui'
**
** Created: Sat Mar 9 16:37:35 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIG_DIALOG_H
#define UI_CONFIG_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QFormLayout>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_config_dialog
{
public:
    QPushButton *ok_button;
    QPushButton *close_button;
    QFrame *config_frame;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *mack_path_label;
    QLineEdit *mack_path_edit;
    QLabel *target_path_label;
    QLineEdit *target_path_edit;

    void setupUi(QDialog *config_dialog)
    {
        if (config_dialog->objectName().isEmpty())
            config_dialog->setObjectName(QString::fromUtf8("config_dialog"));
        config_dialog->resize(593, 466);
        ok_button = new QPushButton(config_dialog);
        ok_button->setObjectName(QString::fromUtf8("ok_button"));
        ok_button->setGeometry(QRect(480, 430, 86, 27));
        close_button = new QPushButton(config_dialog);
        close_button->setObjectName(QString::fromUtf8("close_button"));
        close_button->setGeometry(QRect(390, 430, 86, 27));
        config_frame = new QFrame(config_dialog);
        config_frame->setObjectName(QString::fromUtf8("config_frame"));
        config_frame->setGeometry(QRect(9, 9, 571, 411));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(config_frame->sizePolicy().hasHeightForWidth());
        config_frame->setSizePolicy(sizePolicy);
        config_frame->setFrameShape(QFrame::StyledPanel);
        config_frame->setFrameShadow(QFrame::Raised);
        formLayoutWidget = new QWidget(config_frame);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(-1, -1, 571, 411));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setContentsMargins(10, 10, 10, 10);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setLabelAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        formLayout->setContentsMargins(0, 0, 0, 0);
        mack_path_label = new QLabel(formLayoutWidget);
        mack_path_label->setObjectName(QString::fromUtf8("mack_path_label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, mack_path_label);

        mack_path_edit = new QLineEdit(formLayoutWidget);
        mack_path_edit->setObjectName(QString::fromUtf8("mack_path_edit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, mack_path_edit);

        target_path_label = new QLabel(formLayoutWidget);
        target_path_label->setObjectName(QString::fromUtf8("target_path_label"));

        formLayout->setWidget(1, QFormLayout::LabelRole, target_path_label);

        target_path_edit = new QLineEdit(formLayoutWidget);
        target_path_edit->setObjectName(QString::fromUtf8("target_path_edit"));

        formLayout->setWidget(1, QFormLayout::FieldRole, target_path_edit);


        retranslateUi(config_dialog);

        QMetaObject::connectSlotsByName(config_dialog);
    } // setupUi

    void retranslateUi(QDialog *config_dialog)
    {
        config_dialog->setWindowTitle(QApplication::translate("config_dialog", "Configuration", 0, QApplication::UnicodeUTF8));
        ok_button->setText(QApplication::translate("config_dialog", "OK", 0, QApplication::UnicodeUTF8));
        close_button->setText(QApplication::translate("config_dialog", "Schliessen", 0, QApplication::UnicodeUTF8));
        mack_path_label->setText(QApplication::translate("config_dialog", "Mack the Knife Path", 0, QApplication::UnicodeUTF8));
        mack_path_edit->setText(QApplication::translate("config_dialog", "/home/dpollack/mtk/bin/mack_the_knife", 0, QApplication::UnicodeUTF8));
        target_path_label->setText(QApplication::translate("config_dialog", "Target-File Path", 0, QApplication::UnicodeUTF8));
        target_path_edit->setText(QApplication::translate("config_dialog", "/home/dpollack/tmp/hashes", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class config_dialog: public Ui_config_dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIG_DIALOG_H
