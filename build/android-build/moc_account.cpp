/****************************************************************************
** Meta object code from reading C++ file 'account.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../DataNotion/account.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'account.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Account_t {
    QByteArrayData data[18];
    char stringdata0[199];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Account_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Account_t qt_meta_stringdata_Account = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Account"
QT_MOC_LITERAL(1, 8, 11), // "nameChanged"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 13), // "avatarChanged"
QT_MOC_LITERAL(4, 35, 18), // "informationChanged"
QT_MOC_LITERAL(5, 54, 18), // "deviceCountChanged"
QT_MOC_LITERAL(6, 73, 10), // "regChanged"
QT_MOC_LITERAL(7, 84, 16), // "accstatusChanged"
QT_MOC_LITERAL(8, 101, 17), // "authorizedChanged"
QT_MOC_LITERAL(9, 119, 12), // "loginChanged"
QT_MOC_LITERAL(10, 132, 4), // "name"
QT_MOC_LITERAL(11, 137, 6), // "avatar"
QT_MOC_LITERAL(12, 144, 11), // "information"
QT_MOC_LITERAL(13, 156, 11), // "devicecount"
QT_MOC_LITERAL(14, 168, 3), // "reg"
QT_MOC_LITERAL(15, 172, 9), // "accstatus"
QT_MOC_LITERAL(16, 182, 5), // "login"
QT_MOC_LITERAL(17, 188, 10) // "authorized"

    },
    "Account\0nameChanged\0\0avatarChanged\0"
    "informationChanged\0deviceCountChanged\0"
    "regChanged\0accstatusChanged\0"
    "authorizedChanged\0loginChanged\0name\0"
    "avatar\0information\0devicecount\0reg\0"
    "accstatus\0login\0authorized"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Account[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       8,   62, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    0,   55,    2, 0x06 /* Public */,
       4,    0,   56,    2, 0x06 /* Public */,
       5,    0,   57,    2, 0x06 /* Public */,
       6,    0,   58,    2, 0x06 /* Public */,
       7,    0,   59,    2, 0x06 /* Public */,
       8,    0,   60,    2, 0x06 /* Public */,
       9,    0,   61,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      10, QMetaType::QString, 0x00495103,
      11, QMetaType::QString, 0x00495103,
      12, QMetaType::QString, 0x00495103,
      13, QMetaType::Int, 0x00495103,
      14, QMetaType::QDate, 0x00495103,
      15, QMetaType::QString, 0x00495103,
      16, QMetaType::QString, 0x00495103,
      17, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,
       7,
       6,

       0        // eod
};

void Account::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Account *_t = static_cast<Account *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->nameChanged(); break;
        case 1: _t->avatarChanged(); break;
        case 2: _t->informationChanged(); break;
        case 3: _t->deviceCountChanged(); break;
        case 4: _t->regChanged(); break;
        case 5: _t->accstatusChanged(); break;
        case 6: _t->authorizedChanged(); break;
        case 7: _t->loginChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Account::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Account::nameChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Account::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Account::avatarChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Account::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Account::informationChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Account::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Account::deviceCountChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Account::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Account::regChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Account::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Account::accstatusChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (Account::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Account::authorizedChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (Account::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Account::loginChanged)) {
                *result = 7;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        Account *_t = static_cast<Account *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->getName(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->getAvatar(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->getInformation(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->getDevicecount(); break;
        case 4: *reinterpret_cast< QDate*>(_v) = _t->getReg(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->getAccstatus(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->getLogin(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->getAuthorized(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        Account *_t = static_cast<Account *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setName(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setAvatar(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setInformation(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setDevicecount(*reinterpret_cast< int*>(_v)); break;
        case 4: _t->setReg(*reinterpret_cast< QDate*>(_v)); break;
        case 5: _t->setAccstatus(*reinterpret_cast< QString*>(_v)); break;
        case 6: _t->setLogin(*reinterpret_cast< QString*>(_v)); break;
        case 7: _t->setAuthorized(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Account::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Account.data,
      qt_meta_data_Account,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Account::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Account::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Account.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Account::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 8;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Account::nameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Account::avatarChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Account::informationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Account::deviceCountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void Account::regChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void Account::accstatusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void Account::authorizedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void Account::loginChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
