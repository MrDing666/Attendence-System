/****************************************************************************
** Meta object code from reading C++ file 'DeleteCard.h'
**
** Created: Sat Oct 19 23:11:42 2019
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../DeleteCard.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DeleteCard.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DeleteCard[] = {

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
      12,   11,   11,   11, 0x08,
      34,   11,   11,   11, 0x08,
      47,   41,   11,   11, 0x08,
      68,   11,   11,   11, 0x08,
      94,   11,   11,   11, 0x08,
     121,   11,   11,   11, 0x08,
     146,   11,   11,   11, 0x08,
     185,  170,   11,   11, 0x08,
     221,  214,   11,   11, 0x08,
     262,  251,   11,   11, 0x08,
     292,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_DeleteCard[] = {
    "DeleteCard\0\0on_btn_back_clicked()\0"
    "load()\0decID\0onNewCard(qlonglong)\0"
    "on_btn_dbselect_clicked()\0"
    "on_btn_dbrefresh_clicked()\0"
    "on_ptn_release_clicked()\0"
    "on_ptn_delete_clicked()\0cmdType,result\0"
    "on_search_error(int,QString)\0cardid\0"
    "on_search_success(QByteArray)\0block,data\0"
    "on_ted_showID(int,QByteArray)\0"
    "on_btn_start_clicked()\0"
};

const QMetaObject DeleteCard::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_DeleteCard,
      qt_meta_data_DeleteCard, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DeleteCard::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DeleteCard::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DeleteCard::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DeleteCard))
        return static_cast<void*>(const_cast< DeleteCard*>(this));
    return QWidget::qt_metacast(_clname);
}

int DeleteCard::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_btn_back_clicked(); break;
        case 1: load(); break;
        case 2: onNewCard((*reinterpret_cast< qlonglong(*)>(_a[1]))); break;
        case 3: on_btn_dbselect_clicked(); break;
        case 4: on_btn_dbrefresh_clicked(); break;
        case 5: on_ptn_release_clicked(); break;
        case 6: on_ptn_delete_clicked(); break;
        case 7: on_search_error((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 8: on_search_success((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 9: on_ted_showID((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 10: on_btn_start_clicked(); break;
        default: ;
        }
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
