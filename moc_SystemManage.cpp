/****************************************************************************
** Meta object code from reading C++ file 'SystemManage.h'
**
** Created: Sun Oct 20 16:33:14 2019
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "SystemManage.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SystemManage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SystemManage[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x08,
      21,   13,   13,   13, 0x08,
      47,   13,   13,   13, 0x08,
      74,   13,   13,   13, 0x08,
      96,   13,   13,   13, 0x08,
     125,  119,   13,   13, 0x08,
     157,  142,   13,   13, 0x08,
     193,  186,   13,   13, 0x08,
     234,  223,   13,   13, 0x08,
     264,   13,   13,   13, 0x08,
     289,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SystemManage[] = {
    "SystemManage\0\0load()\0on_btn_dbselect_clicked()\0"
    "on_btn_dbrefresh_clicked()\0"
    "on_pbn_back_clicked()\0on_pbn_start_clicked()\0"
    "decID\0onNewCard(ulong)\0cmdType,result\0"
    "on_search_error(int,QString)\0cardid\0"
    "on_search_success(QByteArray)\0block,data\0"
    "on_ted_showID(int,QByteArray)\0"
    "on_pbn_addName_clicked()\0"
    "on_ptn_delete_clicked()\0"
};

const QMetaObject SystemManage::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SystemManage,
      qt_meta_data_SystemManage, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SystemManage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SystemManage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SystemManage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SystemManage))
        return static_cast<void*>(const_cast< SystemManage*>(this));
    return QWidget::qt_metacast(_clname);
}

int SystemManage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: load(); break;
        case 1: on_btn_dbselect_clicked(); break;
        case 2: on_btn_dbrefresh_clicked(); break;
        case 3: on_pbn_back_clicked(); break;
        case 4: on_pbn_start_clicked(); break;
        case 5: onNewCard((*reinterpret_cast< ulong(*)>(_a[1]))); break;
        case 6: on_search_error((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 7: on_search_success((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 8: on_ted_showID((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 9: on_pbn_addName_clicked(); break;
        case 10: on_ptn_delete_clicked(); break;
        default: ;
        }
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
