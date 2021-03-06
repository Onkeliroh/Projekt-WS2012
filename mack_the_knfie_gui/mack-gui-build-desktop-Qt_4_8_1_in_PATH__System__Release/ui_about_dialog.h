/********************************************************************************
** Form generated from reading UI file 'about_dialog.ui'
**
** Created: Fri Mar 15 16:33:26 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_DIALOG_H
#define UI_ABOUT_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_about_dialog
{
public:
    QAction *actionClose;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *logo_label;
    QLabel *info_label;
    QPushButton *pushButton;

    void setupUi(QDialog *about_dialog)
    {
        if (about_dialog->objectName().isEmpty())
            about_dialog->setObjectName(QString::fromUtf8("about_dialog"));
        about_dialog->setWindowModality(Qt::NonModal);
        about_dialog->resize(270, 390);
        actionClose = new QAction(about_dialog);
        actionClose->setObjectName(QString::fromUtf8("actionClose"));
        horizontalLayout = new QHBoxLayout(about_dialog);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(10, 0, 10, 10);
        logo_label = new QLabel(about_dialog);
        logo_label->setObjectName(QString::fromUtf8("logo_label"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(logo_label->sizePolicy().hasHeightForWidth());
        logo_label->setSizePolicy(sizePolicy);
        logo_label->setMinimumSize(QSize(0, 0));
        logo_label->setMaximumSize(QSize(100, 100));
        logo_label->setTextFormat(Qt::AutoText);
        logo_label->setPixmap(QPixmap(QString::fromUtf8(":/test02.png")));
        logo_label->setScaledContents(true);
        logo_label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(logo_label);

        info_label = new QLabel(about_dialog);
        info_label->setObjectName(QString::fromUtf8("info_label"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(info_label->sizePolicy().hasHeightForWidth());
        info_label->setSizePolicy(sizePolicy1);
        info_label->setWordWrap(true);

        verticalLayout->addWidget(info_label);

        pushButton = new QPushButton(about_dialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton, 0, Qt::AlignHCenter);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(about_dialog);

        QMetaObject::connectSlotsByName(about_dialog);
    } // setupUi

    void retranslateUi(QDialog *about_dialog)
    {
        about_dialog->setWindowTitle(QApplication::translate("about_dialog", "\303\234ber", 0, QApplication::UnicodeUTF8));
        actionClose->setText(QApplication::translate("about_dialog", "Close", 0, QApplication::UnicodeUTF8));
        actionClose->setShortcut(QApplication::translate("about_dialog", "Esc", 0, QApplication::UnicodeUTF8));
        info_label->setText(QApplication::translate("about_dialog", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">What is Mack the Knife?</span></p><p>Mack the Knife is a modular password cracking framework which relies on heavy parallel computing on the GPU using Nvidia's CUDA technology. The name <span style=\" font-weight:600;\">Mack the Knife</span> comes from the protagonist from Bertolt Brecht's &quot;The Threepenny Opera&quot; and is supposed to be a reference to the well known password cracker John the Ripper. </p></body></html>", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("about_dialog", "&Schliessen", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class about_dialog: public Ui_about_dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_DIALOG_H
