/****************************************************************************
** Meta object code from reading C++ file 'networkunit.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Model/LogicUnits/networkunit.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'networkunit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_NetworkUnit_t {
    QByteArrayData data[22];
    char stringdata0[310];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NetworkUnit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NetworkUnit_t qt_meta_stringdata_NetworkUnit = {
    {
QT_MOC_LITERAL(0, 0, 11), // "NetworkUnit"
QT_MOC_LITERAL(1, 12, 20), // "authorizationSucceed"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 19), // "authorizationFailed"
QT_MOC_LITERAL(4, 54, 18), // "userDataDownloaded"
QT_MOC_LITERAL(5, 73, 4), // "name"
QT_MOC_LITERAL(6, 78, 6), // "avatar"
QT_MOC_LITERAL(7, 85, 11), // "information"
QT_MOC_LITERAL(8, 97, 11), // "devicecount"
QT_MOC_LITERAL(9, 109, 3), // "reg"
QT_MOC_LITERAL(10, 113, 9), // "accstatus"
QT_MOC_LITERAL(11, 123, 5), // "login"
QT_MOC_LITERAL(12, 129, 14), // "connectionLost"
QT_MOC_LITERAL(13, 144, 21), // "connectionEstablished"
QT_MOC_LITERAL(14, 166, 21), // "measureDataDownloaded"
QT_MOC_LITERAL(15, 188, 12), // "Measurements"
QT_MOC_LITERAL(16, 201, 18), // "onUserDataFinished"
QT_MOC_LITERAL(17, 220, 23), // "onAuthorizationFinished"
QT_MOC_LITERAL(18, 244, 14), // "onDownloadData"
QT_MOC_LITERAL(19, 259, 21), // "onMeasureDataFinished"
QT_MOC_LITERAL(20, 281, 6), // "onauth"
QT_MOC_LITERAL(21, 288, 21) // "ondownloadAccountData"

    },
    "NetworkUnit\0authorizationSucceed\0\0"
    "authorizationFailed\0userDataDownloaded\0"
    "name\0avatar\0information\0devicecount\0"
    "reg\0accstatus\0login\0connectionLost\0"
    "connectionEstablished\0measureDataDownloaded\0"
    "Measurements\0onUserDataFinished\0"
    "onAuthorizationFinished\0onDownloadData\0"
    "onMeasureDataFinished\0onauth\0"
    "ondownloadAccountData"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NetworkUnit[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x06 /* Public */,
       3,    0,   75,    2, 0x06 /* Public */,
       4,    7,   76,    2, 0x06 /* Public */,
      12,    0,   91,    2, 0x06 /* Public */,
      13,    0,   92,    2, 0x06 /* Public */,
      14,    1,   93,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      16,    0,   96,    2, 0x08 /* Private */,
      17,    0,   97,    2, 0x08 /* Private */,
      18,    0,   98,    2, 0x08 /* Private */,
      19,    0,   99,    2, 0x08 /* Private */,
      20,    2,  100,    2, 0x0a /* Public */,
      21,    0,  105,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::Int, QMetaType::QDate, QMetaType::QString, QMetaType::QString,    5,    6,    7,    8,    9,   10,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 15,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    2,    2,
    QMetaType::Void,

       0        // eod
};

void NetworkUnit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        NetworkUnit *_t = static_cast<NetworkUnit *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->authorizationSucceed(); break;
        case 1: _t->authorizationFailed(); break;
        case 2: _t->userDataDownloaded((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< QDate(*)>(_a[5])),(*reinterpret_cast< QString(*)>(_a[6])),(*reinterpret_cast< QString(*)>(_a[7]))); break;
        case 3: _t->connectionLost(); break;
        case 4: _t->connectionEstablished(); break;
        case 5: _t->measureDataDownloaded((*reinterpret_cast< Measurements(*)>(_a[1]))); break;
        case 6: _t->onUserDataFinished(); break;
        case 7: _t->onAuthorizationFinished(); break;
        case 8: _t->onDownloadData(); break;
        case 9: _t->onMeasureDataFinished(); break;
        case 10: _t->onauth((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 11: _t->ondownloadAccountData(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (NetworkUnit::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NetworkUnit::authorizationSucceed)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (NetworkUnit::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NetworkUnit::authorizationFailed)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (NetworkUnit::*)(QString , QString , QString , int , QDate , QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NetworkUnit::userDataDownloaded)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (NetworkUnit::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NetworkUnit::connectionLost)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (NetworkUnit::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NetworkUnit::connectionEstablished)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (NetworkUnit::*)(Measurements );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NetworkUnit::measureDataDownloaded)) {
                *result = 5;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject NetworkUnit::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_NetworkUnit.data,
      qt_meta_data_NetworkUnit,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *NetworkUnit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NetworkUnit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_NetworkUnit.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int NetworkUnit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void NetworkUnit::authorizationSucceed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void NetworkUnit::authorizationFailed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void NetworkUnit::userDataDownloaded(QString _t1, QString _t2, QString _t3, int _t4, QDate _t5, QString _t6, QString _t7)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void NetworkUnit::connectionLost()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void NetworkUnit::connectionEstablished()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void NetworkUnit::measureDataDownloaded(Measurements _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
