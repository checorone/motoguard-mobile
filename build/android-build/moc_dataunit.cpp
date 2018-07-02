/****************************************************************************
** Meta object code from reading C++ file 'dataunit.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Model/LogicUnits/dataunit.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dataunit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DataUnit_t {
    QByteArrayData data[7];
    char stringdata0[77];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DataUnit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DataUnit_t qt_meta_stringdata_DataUnit = {
    {
QT_MOC_LITERAL(0, 0, 8), // "DataUnit"
QT_MOC_LITERAL(1, 9, 17), // "newsListExtracted"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 8), // "NewsList"
QT_MOC_LITERAL(4, 37, 17), // "onextractNewsList"
QT_MOC_LITERAL(5, 55, 4), // "date"
QT_MOC_LITERAL(6, 60, 16) // "oninsertNewsList"

    },
    "DataUnit\0newsListExtracted\0\0NewsList\0"
    "onextractNewsList\0date\0oninsertNewsList"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DataUnit[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   34,    2, 0x0a /* Public */,
       6,    1,   37,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QDate,    2,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QDate,    5,
    QMetaType::Void, 0x80000000 | 3,    2,

       0        // eod
};

void DataUnit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DataUnit *_t = static_cast<DataUnit *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->newsListExtracted((*reinterpret_cast< const NewsList(*)>(_a[1])),(*reinterpret_cast< QDate(*)>(_a[2]))); break;
        case 1: _t->onextractNewsList((*reinterpret_cast< const QDate(*)>(_a[1]))); break;
        case 2: _t->oninsertNewsList((*reinterpret_cast< const NewsList(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DataUnit::*)(const NewsList & , QDate );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataUnit::newsListExtracted)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DataUnit::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_DataUnit.data,
      qt_meta_data_DataUnit,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *DataUnit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DataUnit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DataUnit.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DataUnit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void DataUnit::newsListExtracted(const NewsList & _t1, QDate _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
