/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Fri Mar 15 16:34:00 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QFormLayout>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpinBox>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QTableWidget>
#include <QtGui/QTextEdit>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_About;
    QAction *action_Configuration;
    QAction *action_Close;
    QAction *actionGerman;
    QAction *actionEnglish;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QTabWidget *tabWidget;
    QWidget *create_tab;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QLineEdit *userEdit;
    QLineEdit *passwordEdit;
    QLineEdit *passwordEdit2;
    QPushButton *createUserBtn;
    QTextEdit *debug_edit;
    QVBoxLayout *verticalLayout_6;
    QTableWidget *userTable;
    QLineEdit *searchEdit;
    QWidget *login_tab;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *userLoginEdit;
    QLineEdit *userPasswordEdit;
    QPushButton *loginBtn;
    QPushButton *logoutBtn;
    QLabel *loginLabel;
    QTextEdit *textEdit;
    QWidget *macktab;
    QGridLayout *gridLayout_5;
    QTabWidget *cracker_prev;
    QWidget *general_cracker_tab;
    QGridLayout *gridLayout_4;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *targetfile_path;
    QLabel *label_4;
    QComboBox *algorithm_box;
    QComboBox *device_box;
    QWidget *specific_cracker_tab;
    QGridLayout *gridLayout_3;
    QFrame *brute_cracker_frame;
    QFormLayout *formLayout_3;
    QLabel *label_5;
    QSpinBox *brute_length_box;
    QLabel *label_7;
    QLineEdit *brute_keytable_edit;
    QFrame *dict_cracker_frame;
    QFormLayout *formLayout_2;
    QLabel *label_3;
    QLineEdit *dict_dict_edit;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QSpinBox *dict_hostmem_box;
    QSpinBox *dict_digits_box;
    QCheckBox *dict_varycase_checkbox;
    QFrame *rainbow_cracker_frame;
    QFormLayout *formLayout_4;
    QLabel *label_6;
    QSpinBox *rainbow_target_length_box;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLineEdit *rainbow_table_edit;
    QLineEdit *rainbow_keytable_edit;
    QSpinBox *rainbow_chain_length_box;
    QPushButton *crackButton;
    QLabel *label_14;
    QComboBox *cracker_box;
    QWidget *managetab;
    QGridLayout *gridLayout_2;
    QPlainTextEdit *consoleTextEdit;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QMenuBar *menuBar;
    QMenu *menuAbout;
    QMenu *menuLanguage;
    QMenu *menuOptions;
    QMenu *menuFile;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(588, 483);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/test02.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        action_About = new QAction(MainWindow);
        action_About->setObjectName(QString::fromUtf8("action_About"));
        action_Configuration = new QAction(MainWindow);
        action_Configuration->setObjectName(QString::fromUtf8("action_Configuration"));
        action_Close = new QAction(MainWindow);
        action_Close->setObjectName(QString::fromUtf8("action_Close"));
        actionGerman = new QAction(MainWindow);
        actionGerman->setObjectName(QString::fromUtf8("actionGerman"));
        actionEnglish = new QAction(MainWindow);
        actionEnglish->setObjectName(QString::fromUtf8("actionEnglish"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        tabWidget->setMinimumSize(QSize(570, 13));
        tabWidget->setTabPosition(QTabWidget::North);
        create_tab = new QWidget();
        create_tab->setObjectName(QString::fromUtf8("create_tab"));
        create_tab->setAutoFillBackground(false);
        horizontalLayout_2 = new QHBoxLayout(create_tab);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        userEdit = new QLineEdit(create_tab);
        userEdit->setObjectName(QString::fromUtf8("userEdit"));

        verticalLayout->addWidget(userEdit);

        passwordEdit = new QLineEdit(create_tab);
        passwordEdit->setObjectName(QString::fromUtf8("passwordEdit"));
        passwordEdit->setAutoFillBackground(false);
        passwordEdit->setInputMethodHints(Qt::ImhHiddenText|Qt::ImhNoAutoUppercase|Qt::ImhNoPredictiveText);
        passwordEdit->setMaxLength(6);
        passwordEdit->setEchoMode(QLineEdit::Password);
        passwordEdit->setPlaceholderText(QString::fromUtf8("2. Passwort"));

        verticalLayout->addWidget(passwordEdit);

        passwordEdit2 = new QLineEdit(create_tab);
        passwordEdit2->setObjectName(QString::fromUtf8("passwordEdit2"));
        passwordEdit2->setAutoFillBackground(false);
        passwordEdit2->setInputMethodHints(Qt::ImhHiddenText|Qt::ImhNoAutoUppercase|Qt::ImhNoPredictiveText);
        passwordEdit2->setMaxLength(6);
        passwordEdit2->setEchoMode(QLineEdit::Password);
        passwordEdit2->setPlaceholderText(QString::fromUtf8("3. Passwort wiederholen"));

        verticalLayout->addWidget(passwordEdit2);

        createUserBtn = new QPushButton(create_tab);
        createUserBtn->setObjectName(QString::fromUtf8("createUserBtn"));
        createUserBtn->setFocusPolicy(Qt::ClickFocus);

        verticalLayout->addWidget(createUserBtn);

        debug_edit = new QTextEdit(create_tab);
        debug_edit->setObjectName(QString::fromUtf8("debug_edit"));
        debug_edit->setUndoRedoEnabled(false);
        debug_edit->setReadOnly(true);

        verticalLayout->addWidget(debug_edit);


        horizontalLayout_2->addLayout(verticalLayout);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        userTable = new QTableWidget(create_tab);
        if (userTable->columnCount() < 2)
            userTable->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        userTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        userTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        userTable->setObjectName(QString::fromUtf8("userTable"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(userTable->sizePolicy().hasHeightForWidth());
        userTable->setSizePolicy(sizePolicy1);
        QFont font;
        font.setFamily(QString::fromUtf8("Monospace"));
        userTable->setFont(font);
        userTable->setAutoFillBackground(true);
        userTable->horizontalHeader()->setStretchLastSection(true);

        verticalLayout_6->addWidget(userTable);

        searchEdit = new QLineEdit(create_tab);
        searchEdit->setObjectName(QString::fromUtf8("searchEdit"));

        verticalLayout_6->addWidget(searchEdit);


        horizontalLayout_2->addLayout(verticalLayout_6);

        tabWidget->addTab(create_tab, QString());
        login_tab = new QWidget();
        login_tab->setObjectName(QString::fromUtf8("login_tab"));
        gridLayout = new QGridLayout(login_tab);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        userLoginEdit = new QLineEdit(login_tab);
        userLoginEdit->setObjectName(QString::fromUtf8("userLoginEdit"));

        verticalLayout_3->addWidget(userLoginEdit);

        userPasswordEdit = new QLineEdit(login_tab);
        userPasswordEdit->setObjectName(QString::fromUtf8("userPasswordEdit"));
        userPasswordEdit->setMaxLength(6);
        userPasswordEdit->setEchoMode(QLineEdit::Password);

        verticalLayout_3->addWidget(userPasswordEdit);

        loginBtn = new QPushButton(login_tab);
        loginBtn->setObjectName(QString::fromUtf8("loginBtn"));

        verticalLayout_3->addWidget(loginBtn);

        logoutBtn = new QPushButton(login_tab);
        logoutBtn->setObjectName(QString::fromUtf8("logoutBtn"));

        verticalLayout_3->addWidget(logoutBtn);

        loginLabel = new QLabel(login_tab);
        loginLabel->setObjectName(QString::fromUtf8("loginLabel"));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        loginLabel->setFont(font1);

        verticalLayout_3->addWidget(loginLabel);


        gridLayout->addLayout(verticalLayout_3, 0, 0, 1, 1);

        textEdit = new QTextEdit(login_tab);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        gridLayout->addWidget(textEdit, 0, 1, 1, 1);

        tabWidget->addTab(login_tab, QString());
        macktab = new QWidget();
        macktab->setObjectName(QString::fromUtf8("macktab"));
        sizePolicy1.setHeightForWidth(macktab->sizePolicy().hasHeightForWidth());
        macktab->setSizePolicy(sizePolicy1);
        gridLayout_5 = new QGridLayout(macktab);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        cracker_prev = new QTabWidget(macktab);
        cracker_prev->setObjectName(QString::fromUtf8("cracker_prev"));
        general_cracker_tab = new QWidget();
        general_cracker_tab->setObjectName(QString::fromUtf8("general_cracker_tab"));
        sizePolicy1.setHeightForWidth(general_cracker_tab->sizePolicy().hasHeightForWidth());
        general_cracker_tab->setSizePolicy(sizePolicy1);
        gridLayout_4 = new QGridLayout(general_cracker_tab);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(5, 10, 5, 5);
        label = new QLabel(general_cracker_tab);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        label_2 = new QLabel(general_cracker_tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        targetfile_path = new QLineEdit(general_cracker_tab);
        targetfile_path->setObjectName(QString::fromUtf8("targetfile_path"));

        formLayout->setWidget(1, QFormLayout::FieldRole, targetfile_path);

        label_4 = new QLabel(general_cracker_tab);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setEnabled(false);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_4);

        algorithm_box = new QComboBox(general_cracker_tab);
        algorithm_box->setObjectName(QString::fromUtf8("algorithm_box"));
        algorithm_box->setEnabled(false);

        formLayout->setWidget(2, QFormLayout::FieldRole, algorithm_box);

        device_box = new QComboBox(general_cracker_tab);
        device_box->setObjectName(QString::fromUtf8("device_box"));

        formLayout->setWidget(0, QFormLayout::FieldRole, device_box);


        gridLayout_4->addLayout(formLayout, 0, 0, 1, 1);

        cracker_prev->addTab(general_cracker_tab, QString());
        specific_cracker_tab = new QWidget();
        specific_cracker_tab->setObjectName(QString::fromUtf8("specific_cracker_tab"));
        sizePolicy1.setHeightForWidth(specific_cracker_tab->sizePolicy().hasHeightForWidth());
        specific_cracker_tab->setSizePolicy(sizePolicy1);
        gridLayout_3 = new QGridLayout(specific_cracker_tab);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        brute_cracker_frame = new QFrame(specific_cracker_tab);
        brute_cracker_frame->setObjectName(QString::fromUtf8("brute_cracker_frame"));
        brute_cracker_frame->setFrameShape(QFrame::StyledPanel);
        brute_cracker_frame->setFrameShadow(QFrame::Raised);
        formLayout_3 = new QFormLayout(brute_cracker_frame);
        formLayout_3->setSpacing(6);
        formLayout_3->setContentsMargins(11, 11, 11, 11);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        formLayout_3->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label_5 = new QLabel(brute_cracker_frame);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_5);

        brute_length_box = new QSpinBox(brute_cracker_frame);
        brute_length_box->setObjectName(QString::fromUtf8("brute_length_box"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, brute_length_box);

        label_7 = new QLabel(brute_cracker_frame);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_7);

        brute_keytable_edit = new QLineEdit(brute_cracker_frame);
        brute_keytable_edit->setObjectName(QString::fromUtf8("brute_keytable_edit"));

        formLayout_3->setWidget(1, QFormLayout::FieldRole, brute_keytable_edit);


        gridLayout_3->addWidget(brute_cracker_frame, 1, 0, 1, 1);

        dict_cracker_frame = new QFrame(specific_cracker_tab);
        dict_cracker_frame->setObjectName(QString::fromUtf8("dict_cracker_frame"));
        sizePolicy1.setHeightForWidth(dict_cracker_frame->sizePolicy().hasHeightForWidth());
        dict_cracker_frame->setSizePolicy(sizePolicy1);
        dict_cracker_frame->setMinimumSize(QSize(13, 0));
        dict_cracker_frame->setFrameShape(QFrame::StyledPanel);
        dict_cracker_frame->setFrameShadow(QFrame::Raised);
        formLayout_2 = new QFormLayout(dict_cracker_frame);
        formLayout_2->setSpacing(6);
        formLayout_2->setContentsMargins(11, 11, 11, 11);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label_3 = new QLabel(dict_cracker_frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_3);

        dict_dict_edit = new QLineEdit(dict_cracker_frame);
        dict_dict_edit->setObjectName(QString::fromUtf8("dict_dict_edit"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, dict_dict_edit);

        label_8 = new QLabel(dict_cracker_frame);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_8);

        label_9 = new QLabel(dict_cracker_frame);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_9);

        label_10 = new QLabel(dict_cracker_frame);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_10);

        dict_hostmem_box = new QSpinBox(dict_cracker_frame);
        dict_hostmem_box->setObjectName(QString::fromUtf8("dict_hostmem_box"));
        dict_hostmem_box->setMinimum(512);
        dict_hostmem_box->setMaximum(6144);
        dict_hostmem_box->setSingleStep(2);
        dict_hostmem_box->setValue(2048);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, dict_hostmem_box);

        dict_digits_box = new QSpinBox(dict_cracker_frame);
        dict_digits_box->setObjectName(QString::fromUtf8("dict_digits_box"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, dict_digits_box);

        dict_varycase_checkbox = new QCheckBox(dict_cracker_frame);
        dict_varycase_checkbox->setObjectName(QString::fromUtf8("dict_varycase_checkbox"));
        dict_varycase_checkbox->setChecked(true);

        formLayout_2->setWidget(3, QFormLayout::FieldRole, dict_varycase_checkbox);


        gridLayout_3->addWidget(dict_cracker_frame, 2, 0, 1, 1);

        rainbow_cracker_frame = new QFrame(specific_cracker_tab);
        rainbow_cracker_frame->setObjectName(QString::fromUtf8("rainbow_cracker_frame"));
        rainbow_cracker_frame->setFrameShape(QFrame::StyledPanel);
        rainbow_cracker_frame->setFrameShadow(QFrame::Raised);
        formLayout_4 = new QFormLayout(rainbow_cracker_frame);
        formLayout_4->setSpacing(6);
        formLayout_4->setContentsMargins(11, 11, 11, 11);
        formLayout_4->setObjectName(QString::fromUtf8("formLayout_4"));
        label_6 = new QLabel(rainbow_cracker_frame);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label_6);

        rainbow_target_length_box = new QSpinBox(rainbow_cracker_frame);
        rainbow_target_length_box->setObjectName(QString::fromUtf8("rainbow_target_length_box"));

        formLayout_4->setWidget(0, QFormLayout::FieldRole, rainbow_target_length_box);

        label_11 = new QLabel(rainbow_cracker_frame);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        formLayout_4->setWidget(1, QFormLayout::LabelRole, label_11);

        label_12 = new QLabel(rainbow_cracker_frame);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        formLayout_4->setWidget(2, QFormLayout::LabelRole, label_12);

        label_13 = new QLabel(rainbow_cracker_frame);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        formLayout_4->setWidget(3, QFormLayout::LabelRole, label_13);

        rainbow_table_edit = new QLineEdit(rainbow_cracker_frame);
        rainbow_table_edit->setObjectName(QString::fromUtf8("rainbow_table_edit"));

        formLayout_4->setWidget(3, QFormLayout::FieldRole, rainbow_table_edit);

        rainbow_keytable_edit = new QLineEdit(rainbow_cracker_frame);
        rainbow_keytable_edit->setObjectName(QString::fromUtf8("rainbow_keytable_edit"));

        formLayout_4->setWidget(2, QFormLayout::FieldRole, rainbow_keytable_edit);

        rainbow_chain_length_box = new QSpinBox(rainbow_cracker_frame);
        rainbow_chain_length_box->setObjectName(QString::fromUtf8("rainbow_chain_length_box"));
        rainbow_chain_length_box->setMinimum(16);
        rainbow_chain_length_box->setMaximum(1024);
        rainbow_chain_length_box->setSingleStep(2);
        rainbow_chain_length_box->setValue(32);

        formLayout_4->setWidget(1, QFormLayout::FieldRole, rainbow_chain_length_box);


        gridLayout_3->addWidget(rainbow_cracker_frame, 0, 0, 1, 1);

        cracker_prev->addTab(specific_cracker_tab, QString());

        gridLayout_5->addWidget(cracker_prev, 1, 1, 3, 1);

        crackButton = new QPushButton(macktab);
        crackButton->setObjectName(QString::fromUtf8("crackButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(crackButton->sizePolicy().hasHeightForWidth());
        crackButton->setSizePolicy(sizePolicy2);
        crackButton->setAutoDefault(false);
        crackButton->setDefault(false);
        crackButton->setFlat(false);

        gridLayout_5->addWidget(crackButton, 4, 1, 1, 1);

        label_14 = new QLabel(macktab);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Maximum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_14->sizePolicy().hasHeightForWidth());
        label_14->setSizePolicy(sizePolicy3);
        label_14->setMinimumSize(QSize(100, 0));
        label_14->setMaximumSize(QSize(200, 16777215));
        label_14->setWordWrap(true);

        gridLayout_5->addWidget(label_14, 1, 0, 1, 1);

        cracker_box = new QComboBox(macktab);
        cracker_box->setObjectName(QString::fromUtf8("cracker_box"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(cracker_box->sizePolicy().hasHeightForWidth());
        cracker_box->setSizePolicy(sizePolicy4);
        cracker_box->setMinimumSize(QSize(125, 0));
        cracker_box->setMaximumSize(QSize(200, 16777215));
        cracker_box->setInsertPolicy(QComboBox::InsertAlphabetically);

        gridLayout_5->addWidget(cracker_box, 2, 0, 1, 1);

        tabWidget->addTab(macktab, QString());
        managetab = new QWidget();
        managetab->setObjectName(QString::fromUtf8("managetab"));
        gridLayout_2 = new QGridLayout(managetab);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        consoleTextEdit = new QPlainTextEdit(managetab);
        consoleTextEdit->setObjectName(QString::fromUtf8("consoleTextEdit"));
        consoleTextEdit->setReadOnly(true);

        gridLayout_2->addWidget(consoleTextEdit, 0, 0, 1, 1);

        tabWidget->addTab(managetab, QString());

        verticalLayout_2->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        mainToolBar->setEnabled(true);
        mainToolBar->setMinimumSize(QSize(0, 13));
        mainToolBar->setCursor(QCursor(Qt::ArrowCursor));
        mainToolBar->setMovable(false);
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        statusBar->setContextMenuPolicy(Qt::DefaultContextMenu);
        statusBar->setAcceptDrops(false);
        MainWindow->setStatusBar(statusBar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 588, 24));
        menuAbout = new QMenu(menuBar);
        menuAbout->setObjectName(QString::fromUtf8("menuAbout"));
        menuLanguage = new QMenu(menuAbout);
        menuLanguage->setObjectName(QString::fromUtf8("menuLanguage"));
        menuOptions = new QMenu(menuBar);
        menuOptions->setObjectName(QString::fromUtf8("menuOptions"));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        MainWindow->setMenuBar(menuBar);
        QWidget::setTabOrder(passwordEdit, passwordEdit2);
        QWidget::setTabOrder(passwordEdit2, userTable);
        QWidget::setTabOrder(userTable, searchEdit);
        QWidget::setTabOrder(searchEdit, userLoginEdit);
        QWidget::setTabOrder(userLoginEdit, userEdit);
        QWidget::setTabOrder(userEdit, userPasswordEdit);
        QWidget::setTabOrder(userPasswordEdit, loginBtn);
        QWidget::setTabOrder(loginBtn, logoutBtn);
        QWidget::setTabOrder(logoutBtn, textEdit);
        QWidget::setTabOrder(textEdit, consoleTextEdit);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuOptions->menuAction());
        menuBar->addAction(menuAbout->menuAction());
        menuAbout->addAction(action_About);
        menuAbout->addAction(menuLanguage->menuAction());
        menuLanguage->addAction(actionGerman);
        menuLanguage->addAction(actionEnglish);
        menuOptions->addAction(action_Configuration);
        menuFile->addAction(action_Close);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);
        cracker_prev->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Mack the Knife - Hochschulinformationstag Demonstration", 0, QApplication::UnicodeUTF8));
        action_About->setText(QApplication::translate("MainWindow", "&\303\234ber", 0, QApplication::UnicodeUTF8));
        action_Configuration->setText(QApplication::translate("MainWindow", "&Konfiguration", 0, QApplication::UnicodeUTF8));
        action_Close->setText(QApplication::translate("MainWindow", "&Schliessen", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        action_Close->setToolTip(QApplication::translate("MainWindow", "Close Program", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        action_Close->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", 0, QApplication::UnicodeUTF8));
        actionGerman->setText(QApplication::translate("MainWindow", "Deutsch", 0, QApplication::UnicodeUTF8));
        actionEnglish->setText(QApplication::translate("MainWindow", "Englisch", 0, QApplication::UnicodeUTF8));
        userEdit->setPlaceholderText(QApplication::translate("MainWindow", "1. Benutzername", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        passwordEdit->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        passwordEdit->setAccessibleDescription(QString());
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        passwordEdit2->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        passwordEdit2->setAccessibleDescription(QString());
#endif // QT_NO_ACCESSIBILITY
        createUserBtn->setText(QApplication::translate("MainWindow", "Benutzer erstellen", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = userTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "Nutzer", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = userTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "Passwort", 0, QApplication::UnicodeUTF8));
        searchEdit->setPlaceholderText(QApplication::translate("MainWindow", "Hashsuche", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(create_tab), QApplication::translate("MainWindow", "1. Benutzerkonto anlegen", 0, QApplication::UnicodeUTF8));
        userLoginEdit->setPlaceholderText(QApplication::translate("MainWindow", "Benutzername", 0, QApplication::UnicodeUTF8));
        userPasswordEdit->setPlaceholderText(QApplication::translate("MainWindow", "Passwort", 0, QApplication::UnicodeUTF8));
        loginBtn->setText(QApplication::translate("MainWindow", "Login", 0, QApplication::UnicodeUTF8));
        logoutBtn->setText(QApplication::translate("MainWindow", "Logout", 0, QApplication::UnicodeUTF8));
        loginLabel->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(login_tab), QApplication::translate("MainWindow", "2. Login", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "Grafikkarte:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "Ziel Pfad:", 0, QApplication::UnicodeUTF8));
        targetfile_path->setText(QApplication::translate("MainWindow", "hashes", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "Algorithmus: ", 0, QApplication::UnicodeUTF8));
        algorithm_box->clear();
        algorithm_box->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "MD5", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "RC4", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "SHA256", 0, QApplication::UnicodeUTF8)
        );
        device_box->clear();
        device_box->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "1", 0, QApplication::UnicodeUTF8)
        );
        cracker_prev->setTabText(cracker_prev->indexOf(general_cracker_tab), QApplication::translate("MainWindow", "Allgemein", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "Ziel L\303\244nge:", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("MainWindow", "Zeichentabelle:", 0, QApplication::UnicodeUTF8));
        brute_keytable_edit->setText(QApplication::translate("MainWindow", "resources/char_tables/visible_german.txt", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "W\303\266rterbuch:", 0, QApplication::UnicodeUTF8));
        dict_dict_edit->setText(QApplication::translate("MainWindow", "tests/resources/mack/crackers/dict/de.dict", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("MainWindow", "Zahlen", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("MainWindow", "RAM:", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("MainWindow", "Gro\303\237- & Kleinschreibung:", 0, QApplication::UnicodeUTF8));
        dict_varycase_checkbox->setText(QString());
        label_6->setText(QApplication::translate("MainWindow", "Ziel L\303\244nge:", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("MainWindow", "Ketten L\303\244nge:", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("MainWindow", "Zeichentabelle:", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("MainWindow", "Rainbowtable:", 0, QApplication::UnicodeUTF8));
        cracker_prev->setTabText(cracker_prev->indexOf(specific_cracker_tab), QApplication::translate("MainWindow", "Speziell", 0, QApplication::UnicodeUTF8));
        crackButton->setText(QApplication::translate("MainWindow", "Crack", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("MainWindow", "W\303\244hle einen Cracker aus:", 0, QApplication::UnicodeUTF8));
        cracker_box->clear();
        cracker_box->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Brute force", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Dictionary", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Rainbowtable", 0, QApplication::UnicodeUTF8)
        );
        tabWidget->setTabText(tabWidget->indexOf(macktab), QApplication::translate("MainWindow", "3. Mack the Knife", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(managetab), QApplication::translate("MainWindow", "4. Ausgabe", 0, QApplication::UnicodeUTF8));
        mainToolBar->setWindowTitle(QApplication::translate("MainWindow", "test", 0, QApplication::UnicodeUTF8));
        menuAbout->setTitle(QApplication::translate("MainWindow", "Hilfe", 0, QApplication::UnicodeUTF8));
        menuLanguage->setTitle(QApplication::translate("MainWindow", "Sprache", 0, QApplication::UnicodeUTF8));
        menuOptions->setTitle(QApplication::translate("MainWindow", "Optionen", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("MainWindow", "Datei", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
