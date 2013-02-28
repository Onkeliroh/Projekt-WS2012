#-------------------------------------------------
#
# Project created by QtCreator 2012-07-02T15:16:00
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = mack-gui
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    md5.cpp \
    user.cpp \
    about_dialog.cpp \
    config_dialog.cpp \
    scripts.cpp

HEADERS  += mainwindow.h \
    md5.h \
    user.h \
    about_dialog.h \
    config_dialog.h \
    scripts.h

FORMS    += mainwindow.ui \
    about_dialog.ui \
    config_dialog.ui

RESOURCES += \
    ress.qrc
