/****************************************************************************
** Meta object code from reading C++ file 'IEEE14443Control.h'
**
** Created: Sun Oct 20 16:33:06 2019
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QRFID/IEEE14443/IEEE14443Control.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'IEEE14443Control.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_IEEE14443Control[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      34,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: signature, parameters, type, tag, flags
      33,   18,   17,   17, 0x05,
      59,   52,   17,   17, 0x05,
      92,   81,   17,   17, 0x05,
     125,  119,   17,   17, 0x05,
     142,  119,   17,   17, 0x05,
     177,  165,   17,   17, 0x05,
     199,  119,   17,   17, 0x05,
     218,  119,   17,   17, 0x05,
     243,  239,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
     277,  272,  267,   17, 0x0a,
     292,   17,   17,   17, 0x0a,
     299,   17,   17,   17, 0x0a,
     311,   17,   17,   17, 0x0a,
     322,   17,  267,   17, 0x0a,
     334,  119,  267,   17, 0x0a,
     348,   81,  267,   17, 0x0a,
     374,  165,  267,   17, 0x0a,
     394,  119,  267,   17, 0x0a,
     409,  165,  267,   17, 0x0a,
     431,  165,  267,   17, 0x0a,
     455,   17,   17,   17, 0x08,
     480,   17,   17,   17, 0x08,
     503,   17,   17,   17, 0x08,
     523,   17,   17,   17, 0x08,
     544,   17,   17,   17, 0x08,
     560,   17,   17,   17, 0x08,
     575,   17,   17,   17, 0x08,
     595,   17,   17,   17, 0x08,
     613,   17,   17,   17, 0x08,
     629,   17,   17,   17, 0x08,
     653,  650,   17,   17, 0x08,
     678,   17,   17,   17, 0x08,
     694,   17,   17,   17, 0x08,
     712,  239,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_IEEE14443Control[] = {
    "IEEE14443Control\0\0cmdType,result\0"
    "error(int,QString)\0cardid\0"
    "foundCard(QByteArray)\0block,data\0"
    "dataReaded(int,QByteArray)\0block\0"
    "dataWritten(int)\0walletInitialised(int)\0"
    "block,money\0walletGetted(int,int)\0"
    "walletCharged(int)\0walletRecharged(int)\0"
    "pkg\0recvPackage(QByteArray)\0bool\0port\0"
    "start(QString)\0stop()\0closeAnti()\0"
    "openAnti()\0getCardId()\0readCard(int)\0"
    "writeCard(int,QByteArray)\0walletInit(int,int)\0"
    "walletGet(int)\0walletCharge(int,int)\0"
    "walletRecharge(int,int)\0"
    "process_walletRecharge()\0"
    "process_walletCharge()\0process_walletGet()\0"
    "process_walletInit()\0process_write()\0"
    "process_read()\0process_authCheck()\0"
    "process_selCard()\0process_getId()\0"
    "process_searchCard()\0on\0"
    "process_antiControl(int)\0onCommTimeOut()\0"
    "onPortDataReady()\0onRecvedPackage(QByteArray)\0"
};

const QMetaObject IEEE14443Control::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_IEEE14443Control,
      qt_meta_data_IEEE14443Control, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &IEEE14443Control::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *IEEE14443Control::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *IEEE14443Control::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_IEEE14443Control))
        return static_cast<void*>(const_cast< IEEE14443Control*>(this));
    return QObject::qt_metacast(_clname);
}

int IEEE14443Control::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: error((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: foundCard((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 2: dataReaded((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 3: dataWritten((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: walletInitialised((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: walletGetted((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: walletCharged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: walletRecharged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: recvPackage((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 9: { bool _r = start((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: stop(); break;
        case 11: closeAnti(); break;
        case 12: openAnti(); break;
        case 13: { bool _r = getCardId();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: { bool _r = readCard((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 15: { bool _r = writeCard((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 16: { bool _r = walletInit((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 17: { bool _r = walletGet((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 18: { bool _r = walletCharge((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 19: { bool _r = walletRecharge((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 20: process_walletRecharge(); break;
        case 21: process_walletCharge(); break;
        case 22: process_walletGet(); break;
        case 23: process_walletInit(); break;
        case 24: process_write(); break;
        case 25: process_read(); break;
        case 26: process_authCheck(); break;
        case 27: process_selCard(); break;
        case 28: process_getId(); break;
        case 29: process_searchCard(); break;
        case 30: process_antiControl((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 31: onCommTimeOut(); break;
        case 32: onPortDataReady(); break;
        case 33: onRecvedPackage((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 34;
    }
    return _id;
}

// SIGNAL 0
void IEEE14443Control::error(int _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void IEEE14443Control::foundCard(const QByteArray & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void IEEE14443Control::dataReaded(int _t1, const QByteArray & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void IEEE14443Control::dataWritten(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void IEEE14443Control::walletInitialised(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void IEEE14443Control::walletGetted(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void IEEE14443Control::walletCharged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void IEEE14443Control::walletRecharged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void IEEE14443Control::recvPackage(QByteArray _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
QT_END_MOC_NAMESPACE
