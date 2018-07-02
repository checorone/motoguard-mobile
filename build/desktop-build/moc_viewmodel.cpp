/****************************************************************************
** Meta object code from reading C++ file 'viewmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../ViewModel/viewmodel.h"
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
    QByteArrayData data[47];
    char stringdata0[663];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ViewModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ViewModel_t qt_meta_stringdata_ViewModel = {
    {
QT_MOC_LITERAL(0, 0, 9), // "ViewModel"
QT_MOC_LITERAL(1, 10, 18), // "NotifyModelChanged"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 16), // "NewsModelChanged"
QT_MOC_LITERAL(4, 47, 19), // "DevicesModelChanged"
QT_MOC_LITERAL(5, 67, 19), // "MeasureModelChanged"
QT_MOC_LITERAL(6, 87, 19), // "ActiveDeviceChanged"
QT_MOC_LITERAL(7, 107, 17), // "getNotifySettings"
QT_MOC_LITERAL(8, 125, 19), // "resetNotifySettings"
QT_MOC_LITERAL(9, 145, 4), // "name"
QT_MOC_LITERAL(10, 150, 11), // "getNewsList"
QT_MOC_LITERAL(11, 162, 14), // "updateNewsList"
QT_MOC_LITERAL(12, 177, 14), // "getDevicesList"
QT_MOC_LITERAL(13, 192, 14), // "activateDevice"
QT_MOC_LITERAL(14, 207, 2), // "id"
QT_MOC_LITERAL(15, 210, 9), // "addDevice"
QT_MOC_LITERAL(16, 220, 14), // "getMeasureList"
QT_MOC_LITERAL(17, 235, 9), // "setLimits"
QT_MOC_LITERAL(18, 245, 6), // "radius"
QT_MOC_LITERAL(19, 252, 23), // "onnotifySettingsChanged"
QT_MOC_LITERAL(20, 276, 21), // "onnotifySettingsFound"
QT_MOC_LITERAL(21, 298, 10), // "NotifyList"
QT_MOC_LITERAL(22, 309, 5), // "items"
QT_MOC_LITERAL(23, 315, 17), // "onnewsListChanged"
QT_MOC_LITERAL(24, 333, 15), // "onnewsListFound"
QT_MOC_LITERAL(25, 349, 8), // "NewsList"
QT_MOC_LITERAL(26, 358, 20), // "ondevicesListChanged"
QT_MOC_LITERAL(27, 379, 18), // "ondevicesListFound"
QT_MOC_LITERAL(28, 398, 10), // "DeviceList"
QT_MOC_LITERAL(29, 409, 20), // "onmeasureListChanged"
QT_MOC_LITERAL(30, 430, 18), // "onmeasureListFound"
QT_MOC_LITERAL(31, 449, 11), // "MeasureList"
QT_MOC_LITERAL(32, 461, 18), // "onresetNotifyModel"
QT_MOC_LITERAL(33, 480, 14), // "onaddNewsModel"
QT_MOC_LITERAL(34, 495, 17), // "onupdateNewsModel"
QT_MOC_LITERAL(35, 513, 16), // "onActivateDevice"
QT_MOC_LITERAL(36, 530, 11), // "onAddDevice"
QT_MOC_LITERAL(37, 542, 11), // "onsetLimits"
QT_MOC_LITERAL(38, 554, 4), // "news"
QT_MOC_LITERAL(39, 559, 14), // "NewsListModel*"
QT_MOC_LITERAL(40, 574, 6), // "notify"
QT_MOC_LITERAL(41, 581, 16), // "NotifyListModel*"
QT_MOC_LITERAL(42, 598, 7), // "devices"
QT_MOC_LITERAL(43, 606, 17), // "DevicesListModel*"
QT_MOC_LITERAL(44, 624, 7), // "measure"
QT_MOC_LITERAL(45, 632, 17), // "MeasureListModel*"
QT_MOC_LITERAL(46, 650, 12) // "activeDevice"

    },
    "ViewModel\0NotifyModelChanged\0\0"
    "NewsModelChanged\0DevicesModelChanged\0"
    "MeasureModelChanged\0ActiveDeviceChanged\0"
    "getNotifySettings\0resetNotifySettings\0"
    "name\0getNewsList\0updateNewsList\0"
    "getDevicesList\0activateDevice\0id\0"
    "addDevice\0getMeasureList\0setLimits\0"
    "radius\0onnotifySettingsChanged\0"
    "onnotifySettingsFound\0NotifyList\0items\0"
    "onnewsListChanged\0onnewsListFound\0"
    "NewsList\0ondevicesListChanged\0"
    "ondevicesListFound\0DeviceList\0"
    "onmeasureListChanged\0onmeasureListFound\0"
    "MeasureList\0onresetNotifyModel\0"
    "onaddNewsModel\0onupdateNewsModel\0"
    "onActivateDevice\0onAddDevice\0onsetLimits\0"
    "news\0NewsListModel*\0notify\0NotifyListModel*\0"
    "devices\0DevicesListModel*\0measure\0"
    "MeasureListModel*\0activeDevice"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ViewModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      28,   14, // methods
       5,  212, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      14,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  154,    2, 0x06 /* Public */,
       3,    0,  155,    2, 0x06 /* Public */,
       4,    0,  156,    2, 0x06 /* Public */,
       5,    0,  157,    2, 0x06 /* Public */,
       6,    0,  158,    2, 0x06 /* Public */,
       7,    0,  159,    2, 0x06 /* Public */,
       8,    1,  160,    2, 0x06 /* Public */,
      10,    1,  163,    2, 0x06 /* Public */,
      11,    0,  166,    2, 0x06 /* Public */,
      12,    0,  167,    2, 0x06 /* Public */,
      13,    1,  168,    2, 0x06 /* Public */,
      15,    1,  171,    2, 0x06 /* Public */,
      16,    0,  174,    2, 0x06 /* Public */,
      17,    2,  175,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      19,    0,  180,    2, 0x0a /* Public */,
      20,    1,  181,    2, 0x0a /* Public */,
      23,    0,  184,    2, 0x0a /* Public */,
      24,    1,  185,    2, 0x0a /* Public */,
      26,    0,  188,    2, 0x0a /* Public */,
      27,    1,  189,    2, 0x0a /* Public */,
      29,    0,  192,    2, 0x0a /* Public */,
      30,    1,  193,    2, 0x0a /* Public */,
      32,    1,  196,    2, 0x0a /* Public */,
      33,    0,  199,    2, 0x0a /* Public */,
      34,    0,  200,    2, 0x0a /* Public */,
      35,    1,  201,    2, 0x0a /* Public */,
      36,    1,  204,    2, 0x0a /* Public */,
      37,    2,  207,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QDate,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float, QMetaType::QString,   18,   14,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 21,   22,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 25,   22,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 28,   22,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 31,   22,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   18,   14,

 // properties: name, type, flags
      38, 0x80000000 | 39, 0x00495009,
      40, 0x80000000 | 41, 0x00495009,
      42, 0x80000000 | 43, 0x00495009,
      44, 0x80000000 | 45, 0x00495009,
      46, QMetaType::Int, 0x00495001,

 // properties: notify_signal_id
       1,
       0,
       2,
       3,
       4,

       0        // eod
};

void ViewModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ViewModel *_t = static_cast<ViewModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->NotifyModelChanged(); break;
        case 1: _t->NewsModelChanged(); break;
        case 2: _t->DevicesModelChanged(); break;
        case 3: _t->MeasureModelChanged(); break;
        case 4: _t->ActiveDeviceChanged(); break;
        case 5: _t->getNotifySettings(); break;
        case 6: _t->resetNotifySettings((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->getNewsList((*reinterpret_cast< const QDate(*)>(_a[1]))); break;
        case 8: _t->updateNewsList(); break;
        case 9: _t->getDevicesList(); break;
        case 10: _t->activateDevice((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: _t->addDevice((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 12: _t->getMeasureList(); break;
        case 13: _t->setLimits((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 14: _t->onnotifySettingsChanged(); break;
        case 15: _t->onnotifySettingsFound((*reinterpret_cast< const NotifyList(*)>(_a[1]))); break;
        case 16: _t->onnewsListChanged(); break;
        case 17: _t->onnewsListFound((*reinterpret_cast< const NewsList(*)>(_a[1]))); break;
        case 18: _t->ondevicesListChanged(); break;
        case 19: _t->ondevicesListFound((*reinterpret_cast< const DeviceList(*)>(_a[1]))); break;
        case 20: _t->onmeasureListChanged(); break;
        case 21: _t->onmeasureListFound((*reinterpret_cast< const MeasureList(*)>(_a[1]))); break;
        case 22: _t->onresetNotifyModel((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 23: _t->onaddNewsModel(); break;
        case 24: _t->onupdateNewsModel(); break;
        case 25: _t->onActivateDevice((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 26: _t->onAddDevice((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 27: _t->onsetLimits((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ViewModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewModel::NotifyModelChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ViewModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewModel::NewsModelChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ViewModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewModel::DevicesModelChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ViewModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewModel::MeasureModelChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ViewModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewModel::ActiveDeviceChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ViewModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewModel::getNotifySettings)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (ViewModel::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewModel::resetNotifySettings)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (ViewModel::*)(const QDate & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewModel::getNewsList)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (ViewModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewModel::updateNewsList)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (ViewModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewModel::getDevicesList)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (ViewModel::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewModel::activateDevice)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (ViewModel::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewModel::addDevice)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (ViewModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewModel::getMeasureList)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (ViewModel::*)(float , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewModel::setLimits)) {
                *result = 13;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< DevicesListModel* >(); break;
        case 3:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MeasureListModel* >(); break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< NewsListModel* >(); break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< NotifyListModel* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        ViewModel *_t = static_cast<ViewModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< NewsListModel**>(_v) = _t->getNewsModel(); break;
        case 1: *reinterpret_cast< NotifyListModel**>(_v) = _t->getNotifyModel(); break;
        case 2: *reinterpret_cast< DevicesListModel**>(_v) = _t->getDevicesModel(); break;
        case 3: *reinterpret_cast< MeasureListModel**>(_v) = _t->getMeasureModel(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->getActiveDevice(); break;
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
        if (_id < 28)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 28;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 28)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 28;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ViewModel::NotifyModelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ViewModel::NewsModelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ViewModel::DevicesModelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void ViewModel::MeasureModelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void ViewModel::ActiveDeviceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void ViewModel::getNotifySettings()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void ViewModel::resetNotifySettings(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void ViewModel::getNewsList(const QDate & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void ViewModel::updateNewsList()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void ViewModel::getDevicesList()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void ViewModel::activateDevice(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void ViewModel::addDevice(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void ViewModel::getMeasureList()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void ViewModel::setLimits(float _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
