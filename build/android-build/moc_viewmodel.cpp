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
    QByteArrayData data[60];
    char stringdata0[790];
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
QT_MOC_LITERAL(7, 107, 18), // "AccountDataChanged"
QT_MOC_LITERAL(8, 126, 19), // "HistoryModelChanged"
QT_MOC_LITERAL(9, 146, 17), // "getNotifySettings"
QT_MOC_LITERAL(10, 164, 11), // "getNewsList"
QT_MOC_LITERAL(11, 176, 14), // "getDevicesList"
QT_MOC_LITERAL(12, 191, 14), // "getMeasureList"
QT_MOC_LITERAL(13, 206, 13), // "getLimitsList"
QT_MOC_LITERAL(14, 220, 14), // "getAccountData"
QT_MOC_LITERAL(15, 235, 15), // "getActiveDevice"
QT_MOC_LITERAL(16, 251, 10), // "getHistory"
QT_MOC_LITERAL(17, 262, 19), // "resetNotifySettings"
QT_MOC_LITERAL(18, 282, 4), // "name"
QT_MOC_LITERAL(19, 287, 10), // "updateNews"
QT_MOC_LITERAL(20, 298, 14), // "activateDevice"
QT_MOC_LITERAL(21, 313, 2), // "id"
QT_MOC_LITERAL(22, 316, 9), // "addDevice"
QT_MOC_LITERAL(23, 326, 9), // "setLimits"
QT_MOC_LITERAL(24, 336, 6), // "radius"
QT_MOC_LITERAL(25, 343, 9), // "authorize"
QT_MOC_LITERAL(26, 353, 5), // "login"
QT_MOC_LITERAL(27, 359, 6), // "secret"
QT_MOC_LITERAL(28, 366, 15), // "onnewsListFound"
QT_MOC_LITERAL(29, 382, 8), // "NewsList"
QT_MOC_LITERAL(30, 391, 5), // "items"
QT_MOC_LITERAL(31, 397, 18), // "ondevicesListFound"
QT_MOC_LITERAL(32, 416, 10), // "DeviceList"
QT_MOC_LITERAL(33, 427, 18), // "onmeasureListFound"
QT_MOC_LITERAL(34, 446, 11), // "MeasureList"
QT_MOC_LITERAL(35, 458, 17), // "onlimitsListFound"
QT_MOC_LITERAL(36, 476, 10), // "LimitsList"
QT_MOC_LITERAL(37, 487, 21), // "onnotifySettingsFound"
QT_MOC_LITERAL(38, 509, 10), // "NotifyList"
QT_MOC_LITERAL(39, 520, 18), // "onaccountDataFound"
QT_MOC_LITERAL(40, 539, 7), // "Account"
QT_MOC_LITERAL(41, 547, 19), // "onactiveDeviceFound"
QT_MOC_LITERAL(42, 567, 14), // "onhistoryFound"
QT_MOC_LITERAL(43, 582, 13), // "SituationList"
QT_MOC_LITERAL(44, 596, 17), // "onnewsListChanged"
QT_MOC_LITERAL(45, 614, 9), // "onaddNews"
QT_MOC_LITERAL(46, 624, 11), // "onsetLimits"
QT_MOC_LITERAL(47, 636, 4), // "news"
QT_MOC_LITERAL(48, 641, 14), // "NewsListModel*"
QT_MOC_LITERAL(49, 656, 6), // "notify"
QT_MOC_LITERAL(50, 663, 16), // "NotifyListModel*"
QT_MOC_LITERAL(51, 680, 7), // "devices"
QT_MOC_LITERAL(52, 688, 17), // "DevicesListModel*"
QT_MOC_LITERAL(53, 706, 7), // "measure"
QT_MOC_LITERAL(54, 714, 17), // "MeasureListModel*"
QT_MOC_LITERAL(55, 732, 7), // "history"
QT_MOC_LITERAL(56, 740, 17), // "HistoryListModel*"
QT_MOC_LITERAL(57, 758, 14), // "activeDeviceID"
QT_MOC_LITERAL(58, 773, 7), // "account"
QT_MOC_LITERAL(59, 781, 8) // "Account*"

    },
    "ViewModel\0NotifyModelChanged\0\0"
    "NewsModelChanged\0DevicesModelChanged\0"
    "MeasureModelChanged\0ActiveDeviceChanged\0"
    "AccountDataChanged\0HistoryModelChanged\0"
    "getNotifySettings\0getNewsList\0"
    "getDevicesList\0getMeasureList\0"
    "getLimitsList\0getAccountData\0"
    "getActiveDevice\0getHistory\0"
    "resetNotifySettings\0name\0updateNews\0"
    "activateDevice\0id\0addDevice\0setLimits\0"
    "radius\0authorize\0login\0secret\0"
    "onnewsListFound\0NewsList\0items\0"
    "ondevicesListFound\0DeviceList\0"
    "onmeasureListFound\0MeasureList\0"
    "onlimitsListFound\0LimitsList\0"
    "onnotifySettingsFound\0NotifyList\0"
    "onaccountDataFound\0Account\0"
    "onactiveDeviceFound\0onhistoryFound\0"
    "SituationList\0onnewsListChanged\0"
    "onaddNews\0onsetLimits\0news\0NewsListModel*\0"
    "notify\0NotifyListModel*\0devices\0"
    "DevicesListModel*\0measure\0MeasureListModel*\0"
    "history\0HistoryListModel*\0activeDeviceID\0"
    "account\0Account*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ViewModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      32,   14, // methods
       7,  242, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      21,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  174,    2, 0x06 /* Public */,
       3,    0,  175,    2, 0x06 /* Public */,
       4,    0,  176,    2, 0x06 /* Public */,
       5,    0,  177,    2, 0x06 /* Public */,
       6,    0,  178,    2, 0x06 /* Public */,
       7,    0,  179,    2, 0x06 /* Public */,
       8,    0,  180,    2, 0x06 /* Public */,
       9,    0,  181,    2, 0x06 /* Public */,
      10,    1,  182,    2, 0x06 /* Public */,
      11,    0,  185,    2, 0x06 /* Public */,
      12,    0,  186,    2, 0x06 /* Public */,
      13,    0,  187,    2, 0x06 /* Public */,
      14,    0,  188,    2, 0x06 /* Public */,
      15,    0,  189,    2, 0x06 /* Public */,
      16,    0,  190,    2, 0x06 /* Public */,
      17,    1,  191,    2, 0x06 /* Public */,
      19,    0,  194,    2, 0x06 /* Public */,
      20,    1,  195,    2, 0x06 /* Public */,
      22,    1,  198,    2, 0x06 /* Public */,
      23,    2,  201,    2, 0x06 /* Public */,
      25,    2,  206,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      28,    1,  211,    2, 0x0a /* Public */,
      31,    1,  214,    2, 0x0a /* Public */,
      33,    1,  217,    2, 0x0a /* Public */,
      35,    1,  220,    2, 0x0a /* Public */,
      37,    1,  223,    2, 0x0a /* Public */,
      39,    1,  226,    2, 0x0a /* Public */,
      41,    1,  229,    2, 0x0a /* Public */,
      42,    1,  232,    2, 0x0a /* Public */,
      44,    0,  235,    2, 0x0a /* Public */,
      45,    0,  236,    2, 0x0a /* Public */,
      46,    2,  237,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QDate,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   18,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   21,
    QMetaType::Void, QMetaType::QString,   21,
    QMetaType::Void, QMetaType::Float, QMetaType::QString,   24,   21,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   26,   27,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 29,   30,
    QMetaType::Void, 0x80000000 | 32,   30,
    QMetaType::Void, 0x80000000 | 34,   30,
    QMetaType::Void, 0x80000000 | 36,   30,
    QMetaType::Void, 0x80000000 | 38,   30,
    QMetaType::Void, 0x80000000 | 40,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, 0x80000000 | 43,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    2,    2,

 // properties: name, type, flags
      47, 0x80000000 | 48, 0x00495009,
      49, 0x80000000 | 50, 0x00495009,
      51, 0x80000000 | 52, 0x00495009,
      53, 0x80000000 | 54, 0x00495009,
      55, 0x80000000 | 56, 0x00495009,
      57, QMetaType::QString, 0x00495001,
      58, 0x80000000 | 59, 0x00495009,

 // properties: notify_signal_id
       1,
       0,
       2,
       3,
       6,
       4,
       5,

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
        case 5: _t->AccountDataChanged(); break;
        case 6: _t->HistoryModelChanged(); break;
        case 7: _t->getNotifySettings(); break;
        case 8: _t->getNewsList((*reinterpret_cast< const QDate(*)>(_a[1]))); break;
        case 9: _t->getDevicesList(); break;
        case 10: _t->getMeasureList(); break;
        case 11: _t->getLimitsList(); break;
        case 12: _t->getAccountData(); break;
        case 13: _t->getActiveDevice(); break;
        case 14: _t->getHistory(); break;
        case 15: _t->resetNotifySettings((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 16: _t->updateNews(); break;
        case 17: _t->activateDevice((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 18: _t->addDevice((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 19: _t->setLimits((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 20: _t->authorize((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 21: _t->onnewsListFound((*reinterpret_cast< const NewsList(*)>(_a[1]))); break;
        case 22: _t->ondevicesListFound((*reinterpret_cast< const DeviceList(*)>(_a[1]))); break;
        case 23: _t->onmeasureListFound((*reinterpret_cast< const MeasureList(*)>(_a[1]))); break;
        case 24: _t->onlimitsListFound((*reinterpret_cast< const LimitsList(*)>(_a[1]))); break;
        case 25: _t->onnotifySettingsFound((*reinterpret_cast< const NotifyList(*)>(_a[1]))); break;
        case 26: _t->onaccountDataFound((*reinterpret_cast< const Account(*)>(_a[1]))); break;
        case 27: _t->onactiveDeviceFound((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 28: _t->onhistoryFound((*reinterpret_cast< const SituationList(*)>(_a[1]))); break;
        case 29: _t->onnewsListChanged(); break;
        case 30: _t->onaddNews(); break;
        case 31: _t->onsetLimits((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
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
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewModel::AccountDataChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (ViewModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewModel::HistoryModelChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (ViewModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewModel::getNotifySettings)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (ViewModel::*)(const QDate & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewModel::getNewsList)) {
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
            using _t = void (ViewModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewModel::getMeasureList)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (ViewModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewModel::getLimitsList)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (ViewModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewModel::getAccountData)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (ViewModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewModel::getActiveDevice)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (ViewModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewModel::getHistory)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (ViewModel::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewModel::resetNotifySettings)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (ViewModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewModel::updateNews)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (ViewModel::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewModel::activateDevice)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (ViewModel::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewModel::addDevice)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (ViewModel::*)(float , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewModel::setLimits)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (ViewModel::*)(QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewModel::authorize)) {
                *result = 20;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Account* >(); break;
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< DevicesListModel* >(); break;
        case 4:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< HistoryListModel* >(); break;
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
        case 4: *reinterpret_cast< HistoryListModel**>(_v) = _t->getHistoryModel(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->getActiveDeviceID(); break;
        case 6: *reinterpret_cast< Account**>(_v) = _t->getAccount(); break;
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
        if (_id < 32)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 32;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 32)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 32;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
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
void ViewModel::AccountDataChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void ViewModel::HistoryModelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void ViewModel::getNotifySettings()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void ViewModel::getNewsList(const QDate & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void ViewModel::getDevicesList()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void ViewModel::getMeasureList()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void ViewModel::getLimitsList()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void ViewModel::getAccountData()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void ViewModel::getActiveDevice()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void ViewModel::getHistory()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void ViewModel::resetNotifySettings(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void ViewModel::updateNews()
{
    QMetaObject::activate(this, &staticMetaObject, 16, nullptr);
}

// SIGNAL 17
void ViewModel::activateDevice(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void ViewModel::addDevice(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void ViewModel::setLimits(float _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void ViewModel::authorize(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
