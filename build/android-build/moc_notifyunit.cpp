/****************************************************************************
** Meta object code from reading C++ file 'notifyunit.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Model/LogicUnits/notifyunit.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'notifyunit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_NotifyUnit_t {
    QByteArrayData data[17];
    char stringdata0[243];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NotifyUnit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NotifyUnit_t qt_meta_stringdata_NotifyUnit = {
    {
QT_MOC_LITERAL(0, 0, 10), // "NotifyUnit"
QT_MOC_LITERAL(1, 11, 15), // "dangerSituation"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 15), // "DangerSituation"
QT_MOC_LITERAL(4, 44, 14), // "getMeasureList"
QT_MOC_LITERAL(5, 59, 13), // "getNotifyList"
QT_MOC_LITERAL(6, 73, 13), // "getLimitsList"
QT_MOC_LITERAL(7, 87, 15), // "getActiveDevice"
QT_MOC_LITERAL(8, 103, 16), // "onconnectionLost"
QT_MOC_LITERAL(9, 120, 18), // "onmeasureListFound"
QT_MOC_LITERAL(10, 139, 11), // "MeasureList"
QT_MOC_LITERAL(11, 151, 17), // "onnotifyListFound"
QT_MOC_LITERAL(12, 169, 10), // "NotifyList"
QT_MOC_LITERAL(13, 180, 17), // "onlimitsListFound"
QT_MOC_LITERAL(14, 198, 10), // "LimitsList"
QT_MOC_LITERAL(15, 209, 19), // "onactiveDeviceFound"
QT_MOC_LITERAL(16, 229, 13) // "oncheckLimits"

    },
    "NotifyUnit\0dangerSituation\0\0DangerSituation\0"
    "getMeasureList\0getNotifyList\0getLimitsList\0"
    "getActiveDevice\0onconnectionLost\0"
    "onmeasureListFound\0MeasureList\0"
    "onnotifyListFound\0NotifyList\0"
    "onlimitsListFound\0LimitsList\0"
    "onactiveDeviceFound\0oncheckLimits"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NotifyUnit[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,
       4,    0,   72,    2, 0x06 /* Public */,
       5,    0,   73,    2, 0x06 /* Public */,
       6,    0,   74,    2, 0x06 /* Public */,
       7,    0,   75,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   76,    2, 0x0a /* Public */,
       9,    1,   77,    2, 0x0a /* Public */,
      11,    1,   80,    2, 0x0a /* Public */,
      13,    1,   83,    2, 0x0a /* Public */,
      15,    1,   86,    2, 0x0a /* Public */,
      16,    0,   89,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,    2,
    QMetaType::Void, 0x80000000 | 12,    2,
    QMetaType::Void, 0x80000000 | 14,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,

       0        // eod
};

void NotifyUnit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        NotifyUnit *_t = static_cast<NotifyUnit *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dangerSituation((*reinterpret_cast< DangerSituation(*)>(_a[1]))); break;
        case 1: _t->getMeasureList(); break;
        case 2: _t->getNotifyList(); break;
        case 3: _t->getLimitsList(); break;
        case 4: _t->getActiveDevice(); break;
        case 5: _t->onconnectionLost(); break;
        case 6: _t->onmeasureListFound((*reinterpret_cast< MeasureList(*)>(_a[1]))); break;
        case 7: _t->onnotifyListFound((*reinterpret_cast< NotifyList(*)>(_a[1]))); break;
        case 8: _t->onlimitsListFound((*reinterpret_cast< LimitsList(*)>(_a[1]))); break;
        case 9: _t->onactiveDeviceFound((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->oncheckLimits(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (NotifyUnit::*)(DangerSituation );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NotifyUnit::dangerSituation)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (NotifyUnit::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NotifyUnit::getMeasureList)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (NotifyUnit::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NotifyUnit::getNotifyList)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (NotifyUnit::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NotifyUnit::getLimitsList)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (NotifyUnit::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NotifyUnit::getActiveDevice)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject NotifyUnit::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_NotifyUnit.data,
      qt_meta_data_NotifyUnit,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *NotifyUnit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NotifyUnit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_NotifyUnit.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int NotifyUnit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void NotifyUnit::dangerSituation(DangerSituation _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void NotifyUnit::getMeasureList()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void NotifyUnit::getNotifyList()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void NotifyUnit::getLimitsList()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void NotifyUnit::getActiveDevice()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
