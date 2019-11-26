/****************************************************************************
** Meta object code from reading C++ file 'SearchCard.h'
**
** Created: Sun Oct 20 16:33:04 2019
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "SearchCard.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SearchCard.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SearchCard[] = {

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
      27,   12,   11,   11, 0x08,
      62,   56,   11,   11, 0x08,
      90,   83,   11,   11, 0x08,
     120,   11,   11,   11, 0x08,
     146,   11,   11,   11, 0x08,
     173,   11,   11,   11, 0x08,
     195,   11,   11,   11, 0x08,
     219,   11,   11,   11, 0x08,
     246,   11,   11,   11, 0x08,
     258,  253,   11,   11, 0x08,
     278,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SearchCard[] = {
    "SearchCard\0\0cmdType,result\0"
    "on_search_error(int,QString)\0decID\0"
    "onNewCard(qlonglong)\0cardid\0"
    "on_search_success(QByteArray)\0"
    "on_btn_dbselect_clicked()\0"
    "on_btn_dbrefresh_clicked()\0"
    "on_pbn_back_clicked()\0on_pbn_search_clicked()\0"
    "on_pbn_searchLog_clicked()\0load()\0"
    "card\0log_load(qlonglong)\0"
    "on_pbn_handsearch_clicked()\0"
};

const QMetaObject SearchCard::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SearchCard,
      qt_meta_data_SearchCard, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SearchCard::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SearchCard::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SearchCard::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SearchCard))
        return static_cast<void*>(const_cast< SearchCard*>(this));
    return QWidget::qt_metacast(_clname);
}

int SearchCard::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_search_error((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: onNewCard((*reinterpret_cast< qlonglong(*)>(_a[1]))); break;
        case 2: on_search_success((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 3: on_btn_dbselect_clicked(); break;
        case 4: on_btn_dbrefresh_clicked(); break;
        case 5: on_pbn_back_clicked(); break;
        case 6: on_pbn_search_clicked(); break;
        case 7: on_pbn_searchLog_clicked(); break;
        case 8: load(); break;
        case 9: log_load((*reinterpret_cast< qlonglong(*)>(_a[1]))); break;
        case 10: on_pbn_handsearch_clicked(); break;
        default: ;
        }
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
