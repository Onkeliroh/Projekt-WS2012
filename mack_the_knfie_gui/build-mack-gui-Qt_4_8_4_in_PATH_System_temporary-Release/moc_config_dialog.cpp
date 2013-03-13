/****************************************************************************
** Meta object code from reading C++ file 'config_dialog.h'
**
** Created: Tue Mar 12 19:01:43 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mack_demo_gui/config_dialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'config_dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_config_dialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x08,
      41,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_config_dialog[] = {
    "config_dialog\0\0on_close_button_clicked()\0"
    "on_ok_button_clicked()\0"
};

void config_dialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        config_dialog *_t = static_cast<config_dialog *>(_o);
        switch (_id) {
        case 0: _t->on_close_button_clicked(); break;
        case 1: _t->on_ok_button_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData config_dialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject config_dialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_config_dialog,
      qt_meta_data_config_dialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &config_dialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *config_dialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *config_dialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_config_dialog))
        return static_cast<void*>(const_cast< config_dialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int config_dialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
