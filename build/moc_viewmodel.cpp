/****************************************************************************
** Meta object code from reading C++ file 'viewmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ViewModel/viewmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'viewmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ViewModel_t {
    QByteArrayData data[16];
    char stringdata0[168];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ViewModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ViewModel_t qt_meta_stringdata_ViewModel = {
    {
QT_MOC_LITERAL(0, 0, 9), // "ViewModel"
QT_MOC_LITERAL(1, 10, 16), // "NewsModelChanged"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 16), // "GameModelChanged"
QT_MOC_LITERAL(4, 45, 7), // "getNews"
QT_MOC_LITERAL(5, 53, 13), // "ondataChanged"
QT_MOC_LITERAL(6, 67, 8), // "NewsList"
QT_MOC_LITERAL(7, 76, 8), // "new_news"
QT_MOC_LITERAL(8, 85, 15), // "ondataExtracted"
QT_MOC_LITERAL(9, 101, 9), // "onGameSet"
QT_MOC_LITERAL(10, 111, 5), // "index"
QT_MOC_LITERAL(11, 117, 9), // "ongetNews"
QT_MOC_LITERAL(12, 127, 4), // "news"
QT_MOC_LITERAL(13, 132, 14), // "NewsListModel*"
QT_MOC_LITERAL(14, 147, 5), // "games"
QT_MOC_LITERAL(15, 153, 14) // "GameListModel*"

    },
    "ViewModel\0NewsModelChanged\0\0"
    "GameModelChanged\0getNews\0ondataChanged\0"
    "NewsList\0new_news\0ondataExtracted\0"
    "onGameSet\0index\0ongetNews\0news\0"
    "NewsListModel*\0games\0GameListModel*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ViewModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       2,   64, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    0,   50,    2, 0x06 /* Public */,
       4,    1,   51,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   54,    2, 0x0a /* Public */,
       8,    1,   57,    2, 0x0a /* Public */,
       9,    1,   60,    2, 0x0a /* Public */,
      11,    0,   63,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QDate,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void,

 // properties: name, type, flags
      12, 0x80000000 | 13, 0x00495009,
      14, 0x80000000 | 15, 0x00495009,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

void ViewModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ViewModel *_t = static_cast<ViewModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->NewsModelChanged(); break;
        case 1: _t->GameModelChanged(); break;
        case 2: _t->getNews((*reinterpret_cast< const QDate(*)>(_a[1]))); break;
        case 3: _t->ondataChanged((*reinterpret_cast< const NewsList(*)>(_a[1]))); break;
        case 4: _t->ondataExtracted((*reinterpret_cast< const NewsList(*)>(_a[1]))); break;
        case 5: _t->onGameSet((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->ongetNews(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ViewModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewModel::NewsModelChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ViewModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewModel::GameModelChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ViewModel::*)(const QDate & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewModel::getNews)) {
                *result = 2;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< GameListModel* >(); break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< NewsListModel* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        ViewModel *_t = static_cast<ViewModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< NewsListModel**>(_v) = _t->getNewsModel(); break;
        case 1: *reinterpret_cast< GameListModel**>(_v) = _t->getGameModel(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject ViewModel::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ViewModel.data,
      qt_meta_data_ViewModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ViewModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ViewModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ViewModel.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ViewModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ViewModel::NewsModelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ViewModel::GameModelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ViewModel::getNews(const QDate & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
