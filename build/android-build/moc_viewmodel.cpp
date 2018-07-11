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
    QByteArrayData data[73];
    char stringdata0[944];
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
QT_MOC_LITERAL(7, 107, 16), // "FulldevIDChanged"
QT_MOC_LITERAL(8, 124, 18), // "AccountDataChanged"
QT_MOC_LITERAL(9, 143, 19), // "HistoryModelChanged"
QT_MOC_LITERAL(10, 163, 11), // "BusyChanged"
QT_MOC_LITERAL(11, 175, 11), // "showMessage"
QT_MOC_LITERAL(12, 187, 5), // "label"
QT_MOC_LITERAL(13, 193, 4), // "text"
QT_MOC_LITERAL(14, 198, 17), // "getNotifySettings"
QT_MOC_LITERAL(15, 216, 11), // "getNewsList"
QT_MOC_LITERAL(16, 228, 14), // "getDevicesList"
QT_MOC_LITERAL(17, 243, 14), // "getMeasureList"
QT_MOC_LITERAL(18, 258, 13), // "getLimitsList"
QT_MOC_LITERAL(19, 272, 14), // "getAccountData"
QT_MOC_LITERAL(20, 287, 15), // "getActiveDevice"
QT_MOC_LITERAL(21, 303, 13), // "getFullDevice"
QT_MOC_LITERAL(22, 317, 10), // "getHistory"
QT_MOC_LITERAL(23, 328, 19), // "resetNotifySettings"
QT_MOC_LITERAL(24, 348, 4), // "name"
QT_MOC_LITERAL(25, 353, 10), // "updateNews"
QT_MOC_LITERAL(26, 364, 14), // "activateDevice"
QT_MOC_LITERAL(27, 379, 2), // "id"
QT_MOC_LITERAL(28, 382, 9), // "addDevice"
QT_MOC_LITERAL(29, 392, 9), // "setLimits"
QT_MOC_LITERAL(30, 402, 6), // "radius"
QT_MOC_LITERAL(31, 409, 9), // "authorize"
QT_MOC_LITERAL(32, 419, 5), // "login"
QT_MOC_LITERAL(33, 425, 6), // "secret"
QT_MOC_LITERAL(34, 432, 15), // "onnewsListFound"
QT_MOC_LITERAL(35, 448, 8), // "NewsList"
QT_MOC_LITERAL(36, 457, 5), // "items"
QT_MOC_LITERAL(37, 463, 18), // "ondevicesListFound"
QT_MOC_LITERAL(38, 482, 10), // "DeviceList"
QT_MOC_LITERAL(39, 493, 18), // "onmeasureListFound"
QT_MOC_LITERAL(40, 512, 11), // "MeasureList"
QT_MOC_LITERAL(41, 524, 17), // "onlimitsListFound"
QT_MOC_LITERAL(42, 542, 10), // "LimitsList"
QT_MOC_LITERAL(43, 553, 21), // "onnotifySettingsFound"
QT_MOC_LITERAL(44, 575, 10), // "NotifyList"
QT_MOC_LITERAL(45, 586, 18), // "onaccountDataFound"
QT_MOC_LITERAL(46, 605, 7), // "Account"
QT_MOC_LITERAL(47, 613, 19), // "onactiveDeviceFound"
QT_MOC_LITERAL(48, 633, 17), // "onfullDeviceFound"
QT_MOC_LITERAL(49, 651, 14), // "onhistoryFound"
QT_MOC_LITERAL(50, 666, 13), // "SituationList"
QT_MOC_LITERAL(51, 680, 17), // "onnewsListChanged"
QT_MOC_LITERAL(52, 698, 13), // "oninfoMessage"
QT_MOC_LITERAL(53, 712, 9), // "onaddNews"
QT_MOC_LITERAL(54, 722, 11), // "onsetLimits"
QT_MOC_LITERAL(55, 734, 11), // "onAddDevice"
QT_MOC_LITERAL(56, 746, 11), // "onauthorize"
QT_MOC_LITERAL(57, 758, 16), // "onactivateDevice"
QT_MOC_LITERAL(58, 775, 4), // "news"
QT_MOC_LITERAL(59, 780, 14), // "NewsListModel*"
QT_MOC_LITERAL(60, 795, 6), // "notify"
QT_MOC_LITERAL(61, 802, 16), // "NotifyListModel*"
QT_MOC_LITERAL(62, 819, 7), // "devices"
QT_MOC_LITERAL(63, 827, 17), // "DevicesListModel*"
QT_MOC_LITERAL(64, 845, 7), // "measure"
QT_MOC_LITERAL(65, 853, 17), // "MeasureListModel*"
QT_MOC_LITERAL(66, 871, 7), // "history"
QT_MOC_LITERAL(67, 879, 17), // "HistoryListModel*"
QT_MOC_LITERAL(68, 897, 14), // "activeDeviceID"
QT_MOC_LITERAL(69, 912, 9), // "fulldevID"
QT_MOC_LITERAL(70, 922, 4), // "busy"
QT_MOC_LITERAL(71, 927, 7), // "account"
QT_MOC_LITERAL(72, 935, 8) // "Account*"

    },
    "ViewModel\0NotifyModelChanged\0\0"
    "NewsModelChanged\0DevicesModelChanged\0"
    "MeasureModelChanged\0ActiveDeviceChanged\0"
    "FulldevIDChanged\0AccountDataChanged\0"
    "HistoryModelChanged\0BusyChanged\0"
    "showMessage\0label\0text\0getNotifySettings\0"
    "getNewsList\0getDevicesList\0getMeasureList\0"
    "getLimitsList\0getAccountData\0"
    "getActiveDevice\0getFullDevice\0getHistory\0"
    "resetNotifySettings\0name\0updateNews\0"
    "activateDevice\0id\0addDevice\0setLimits\0"
    "radius\0authorize\0login\0secret\0"
    "onnewsListFound\0NewsList\0items\0"
    "ondevicesListFound\0DeviceList\0"
    "onmeasureListFound\0MeasureList\0"
    "onlimitsListFound\0LimitsList\0"
    "onnotifySettingsFound\0NotifyList\0"
    "onaccountDataFound\0Account\0"
    "onactiveDeviceFound\0onfullDeviceFound\0"
    "onhistoryFound\0SituationList\0"
    "onnewsListChanged\0oninfoMessage\0"
    "onaddNews\0onsetLimits\0onAddDevice\0"
    "onauthorize\0onactivateDevice\0news\0"
    "NewsListModel*\0notify\0NotifyListModel*\0"
    "devices\0DevicesListModel*\0measure\0"
    "MeasureListModel*\0history\0HistoryListModel*\0"
    "activeDeviceID\0fulldevID\0busy\0account\0"
    "Account*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ViewModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      41,   14, // methods
       9,  314, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      25,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  219,    2, 0x06 /* Public */,
       3,    0,  220,    2, 0x06 /* Public */,
       4,    0,  221,    2, 0x06 /* Public */,
       5,    0,  222,    2, 0x06 /* Public */,
       6,    0,  223,    2, 0x06 /* Public */,
       7,    0,  224,    2, 0x06 /* Public */,
       8,    0,  225,    2, 0x06 /* Public */,
       9,    0,  226,    2, 0x06 /* Public */,
      10,    0,  227,    2, 0x06 /* Public */,
      11,    2,  228,    2, 0x06 /* Public */,
      14,    0,  233,    2, 0x06 /* Public */,
      15,    1,  234,    2, 0x06 /* Public */,
      16,    0,  237,    2, 0x06 /* Public */,
      17,    0,  238,    2, 0x06 /* Public */,
      18,    0,  239,    2, 0x06 /* Public */,
      19,    0,  240,    2, 0x06 /* Public */,
      20,    0,  241,    2, 0x06 /* Public */,
      21,    0,  242,    2, 0x06 /* Public */,
      22,    0,  243,    2, 0x06 /* Public */,
      23,    1,  244,    2, 0x06 /* Public */,
      25,    0,  247,    2, 0x06 /* Public */,
      26,    1,  248,    2, 0x06 /* Public */,
      28,    1,  251,    2, 0x06 /* Public */,
      29,    2,  254,    2, 0x06 /* Public */,
      31,    2,  259,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      34,    1,  264,    2, 0x0a /* Public */,
      37,    1,  267,    2, 0x0a /* Public */,
      39,    1,  270,    2, 0x0a /* Public */,
      41,    1,  273,    2, 0x0a /* Public */,
      43,    1,  276,    2, 0x0a /* Public */,
      45,    1,  279,    2, 0x0a /* Public */,
      47,    1,  282,    2, 0x0a /* Public */,
      48,    1,  285,    2, 0x0a /* Public */,
      49,    1,  288,    2, 0x0a /* Public */,
      51,    0,  291,    2, 0x0a /* Public */,
      52,    2,  292,    2, 0x0a /* Public */,
      53,    0,  297,    2, 0x0a /* Public */,
      54,    2,  298,    2, 0x0a /* Public */,
      55,    1,  303,    2, 0x0a /* Public */,
      56,    2,  306,    2, 0x0a /* Public */,
      57,    1,  311,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   12,   13,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QDate,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   24,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   27,
    QMetaType::Void, QMetaType::QString,   27,
    QMetaType::Void, QMetaType::Float, QMetaType::QString,   30,   27,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   32,   33,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 35,   36,
    QMetaType::Void, 0x80000000 | 38,   36,
    QMetaType::Void, 0x80000000 | 40,   36,
    QMetaType::Void, 0x80000000 | 42,   36,
    QMetaType::Void, 0x80000000 | 44,   36,
    QMetaType::Void, 0x80000000 | 46,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, 0x80000000 | 50,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    2,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    2,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    2,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // properties: name, type, flags
      58, 0x80000000 | 59, 0x00495009,
      60, 0x80000000 | 61, 0x00495009,
      62, 0x80000000 | 63, 0x00495009,
      64, 0x80000000 | 65, 0x00495009,
      66, 0x80000000 | 67, 0x00495009,
      68, QMetaType::QString, 0x00495001,
      69, QMetaType::QString, 0x00495001,
      70, QMetaType::Bool, 0x00495001,
      71, 0x80000000 | 72, 0x00495009,

 // properties: notify_signal_id
       1,
       0,
       2,
       3,
       7,
       4,
       5,
       8,
       6,

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
        case 5: _t->FulldevIDChanged(); break;
        case 6: _t->AccountDataChanged(); break;
        case 7: _t->HistoryModelChanged(); break;
        case 8: _t->BusyChanged(); break;
        case 9: _t->showMessage((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 10: _t->getNotifySettings(); break;
        case 11: _t->getNewsList((*reinterpret_cast< const QDate(*)>(_a[1]))); break;
        case 12: _t->getDevicesList(); break;
        case 13: _t->getMeasureList(); break;
        case 14: _t->getLimitsList(); break;
        case 15: _t->getAccountData(); break;
        case 16: _t->getActiveDevice(); break;
        case 17: _t->getFullDevice(); break;
        case 18: _t->getHistory(); break;
        case 19: _t->resetNotifySettings((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 20: _t->updateNews(); break;
        case 21: _t->activateDevice((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 22: _t->addDevice((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 23: _t->setLimits((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 24: _t->authorize((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 25: _t->onnewsListFound((*reinterpret_cast< const NewsList(*)>(_a[1]))); break;
        case 26: _t->ondevicesListFound((*reinterpret_cast< const DeviceList(*)>(_a[1]))); break;
        case 27: _t->onmeasureListFound((*reinterpret_cast< const MeasureList(*)>(_a[1]))); break;
        case 28: _t->onlimitsListFound((*reinterpret_cast< const LimitsList(*)>(_a[1]))); break;
        case 29: _t->onnotifySettingsFound((*reinterpret_cast< const NotifyList(*)>(_a[1]))); break;
        case 30: _t->onaccountDataFound((*reinterpret_cast< const Account(*)>(_a[1]))); break;
        case 31: _t->onactiveDeviceFound((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 32: _t->onfullDeviceFound((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 33: _t->onhistoryFound((*reinterpret_cast< const SituationList(*)>(_a[1]))); break;
        case 34: _t->onnewsListChanged(); break;
        case 35: _t->oninfoMessage((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 36: _t->onaddNews(); break;
        case 37: _t->onsetLimits((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 38: _t->onAddDevice((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 39: _t->onauthorize((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 40: _t->onactivateDevice((*reinterpret_cast< QString(*)>(_a[1]))); break;
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
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewModel::FulldevIDChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (ViewModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewModel::AccountDataChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (ViewModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewModel::HistoryModelChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (ViewModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewModel::BusyChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (ViewModel::*)(QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewModel::showMessage)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (ViewModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewModel::getNotifySettings)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (ViewModel::*)(const QDate & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewModel::getNewsList)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (ViewModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewModel::getDevicesList)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (ViewModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewModel::getMeasureList)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (ViewModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewModel::getLimitsList)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (ViewModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewModel::getAccountData)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (ViewModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewModel::getActiveDevice)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (ViewModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewModel::getFullDevice)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (ViewModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewModel::getHistory)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (ViewModel::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewModel::resetNotifySettings)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (ViewModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewModel::updateNews)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (ViewModel::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewModel::activateDevice)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (ViewModel::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewModel::addDevice)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (ViewModel::*)(float , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewModel::setLimits)) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (ViewModel::*)(QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewModel::authorize)) {
                *result = 24;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 8:
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
        case 6: *reinterpret_cast< QString*>(_v) = _t->getFulldevID(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->getBusy(); break;
        case 8: *reinterpret_cast< Account**>(_v) = _t->getAccount(); break;
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
        if (_id < 41)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 41;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 41)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 41;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 9;
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
void ViewModel::FulldevIDChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void ViewModel::AccountDataChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void ViewModel::HistoryModelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void ViewModel::BusyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void ViewModel::showMessage(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void ViewModel::getNotifySettings()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void ViewModel::getNewsList(const QDate & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void ViewModel::getDevicesList()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void ViewModel::getMeasureList()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void ViewModel::getLimitsList()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void ViewModel::getAccountData()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}

// SIGNAL 16
void ViewModel::getActiveDevice()
{
    QMetaObject::activate(this, &staticMetaObject, 16, nullptr);
}

// SIGNAL 17
void ViewModel::getFullDevice()
{
    QMetaObject::activate(this, &staticMetaObject, 17, nullptr);
}

// SIGNAL 18
void ViewModel::getHistory()
{
    QMetaObject::activate(this, &staticMetaObject, 18, nullptr);
}

// SIGNAL 19
void ViewModel::resetNotifySettings(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void ViewModel::updateNews()
{
    QMetaObject::activate(this, &staticMetaObject, 20, nullptr);
}

// SIGNAL 21
void ViewModel::activateDevice(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void ViewModel::addDevice(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void ViewModel::setLimits(float _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void ViewModel::authorize(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
