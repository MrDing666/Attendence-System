/****************************************************************************
** Meta object code from reading C++ file 'ManageLogin.h'
**
** Created: Sat Oct 19 23:11:36 2019
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ManageLogin.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ManageLogin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ManageLogin[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x08,
      36,   12,   12,   12, 0x08,
      59,   12,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ManageLogin[] = {
    "ManageLogin\0\0on_ptn_login_clicked()\0"
    "on_ptn_reset_clicked()\0on_pbn_back_clicked()\0"
};

const QMetaObject ManageLogin::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ManageLogin,
      qt_meta_data_ManageLogin, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ManageLogin::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ManageLogin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ManageLogin::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ManageLogin))
        return static_cast<void*>(const_cast< ManageLogin*>(this));
    return QWidget::qt_metacast(_clname);
}

int ManageLogin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_ptn_login_clicked(); break;
        case 1: on_ptn_reset_clicked(); break;
        case 2: on_pbn_back_clicked(); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
