/****************************************************************************
** Meta object code from reading C++ file 'mainlogicunit.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Model/mainlogicunit.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainlogicunit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainLogicUnit_t {
    QByteArrayData data[9];
    char stringdata0[98];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainLogicUnit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainLogicUnit_t qt_meta_stringdata_MainLogicUnit = {
    {
QT_MOC_LITERAL(0, 0, 13), // "MainLogicUnit"
QT_MOC_LITERAL(1, 14, 11), // "dataChanged"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 8), // "NewsList"
QT_MOC_LITERAL(4, 36, 13), // "dataExtracted"
QT_MOC_LITERAL(5, 50, 7), // "getNews"
QT_MOC_LITERAL(6, 58, 9), // "ongetNews"
QT_MOC_LITERAL(7, 68, 13), // "ondataChanged"
QT_MOC_LITERAL(8, 82, 15) // "ondataExtracted"

    },
    "MainLogicUnit\0dataChanged\0\0NewsList\0"
    "dataExtracted\0getNews\0ongetNews\0"
    "ondataChanged\0ondataExtracted"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainLogicUnit[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    1,   47,    2, 0x06 /* Public */,
       5,    1,   50,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   53,    2, 0x0a /* Public */,
       7,    1,   56,    2, 0x0a /* Public */,
       8,    1,   59,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, QMetaType::QDate,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QDate,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,

       0        // eod
};

void MainLogicUnit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainLogicUnit *_t = static_cast<MainLogicUnit *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dataChanged((*reinterpret_cast< const NewsList(*)>(_a[1]))); break;
        case 1: _t->dataExtracted((*reinterpret_cast< const NewsList(*)>(_a[1]))); break;
        case 2: _t->getNews((*reinterpret_cast< const QDate(*)>(_a[1]))); break;
        case 3: _t->ongetNews((*reinterpret_cast< const QDate(*)>(_a[1]))); break;
        case 4: _t->ondataChanged((*reinterpret_cast< const NewsList(*)>(_a[1]))); break;
        case 5: _t->ondataExtracted((*reinterpret_cast< const NewsList(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainLogicUnit::*)(const NewsList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainLogicUnit::dataChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MainLogicUnit::*)(const NewsList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainLogicUnit::dataExtracted)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MainLogicUnit::*)(const QDate & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainLogicUnit::getNews)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainLogicUnit::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_MainLogicUnit.data,
      qt_meta_data_MainLogicUnit,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainLogicUnit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainLogicUnit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainLogicUnit.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MainLogicUnit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void MainLogicUnit::dataChanged(const NewsList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainLogicUnit::dataExtracted(const NewsList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MainLogicUnit::getNews(const QDate & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
