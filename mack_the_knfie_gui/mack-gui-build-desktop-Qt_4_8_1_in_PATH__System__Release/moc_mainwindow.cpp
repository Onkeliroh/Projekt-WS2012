/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created: Thu Feb 28 19:24:48 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mack_demo_gui/mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x08,
      39,   11,   11,   11, 0x08,
      66,   61,   11,   11, 0x08,
      97,   11,   11,   11, 0x08,
     123,   11,   11,   11, 0x08,
     146,   11,   11,   11, 0x08,
     176,   11,   11,   11, 0x08,
     204,   11,   11,   11, 0x08,
     240,   11,   11,   11, 0x08,
     268,   11,   11,   11, 0x08,
     299,  293,   11,   11, 0x08,
     339,  293,   11,   11, 0x08,
     372,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0on_createUserBtn_clicked()\0"
    "on_loginBtn_clicked()\0arg1\0"
    "on_tabWidget_selected(QString)\0"
    "on_textEdit_textChanged()\0"
    "on_logoutBtn_clicked()\0"
    "on_searchEdit_returnPressed()\0"
    "on_action_About_triggered()\0"
    "on_action_Configuration_triggered()\0"
    "on_action_Close_triggered()\0"
    "on_crackButton_clicked()\0index\0"
    "on_cracker_box_currentIndexChanged(int)\0"
    "on_tabWidget_currentChanged(int)\0"
    "on_actionGerman_triggered()\0"
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->on_createUserBtn_clicked(); break;
        case 1: _t->on_loginBtn_clicked(); break;
        case 2: _t->on_tabWidget_selected((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on_textEdit_textChanged(); break;
        case 4: _t->on_logoutBtn_clicked(); break;
        case 5: _t->on_searchEdit_returnPressed(); break;
        case 6: _t->on_action_About_triggered(); break;
        case 7: _t->on_action_Configuration_triggered(); break;
        case 8: _t->on_action_Close_triggered(); break;
        case 9: _t->on_crackButton_clicked(); break;
        case 10: _t->on_cracker_box_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->on_tabWidget_currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->on_actionGerman_triggered(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MainWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
