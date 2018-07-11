/****************************************************************************
** Meta object code from reading C++ file 'model.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Model/model.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'model.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Model_t {
    QByteArrayData data[81];
    char stringdata0[1215];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Model_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Model_t qt_meta_stringdata_Model = {
    {
QT_MOC_LITERAL(0, 0, 5), // "Model"
QT_MOC_LITERAL(1, 6, 21), // "notifySettingsChanged"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 19), // "notifySettingsFound"
QT_MOC_LITERAL(4, 49, 10), // "NotifyList"
QT_MOC_LITERAL(5, 60, 5), // "items"
QT_MOC_LITERAL(6, 66, 15), // "newsListChanged"
QT_MOC_LITERAL(7, 82, 13), // "newsListFound"
QT_MOC_LITERAL(8, 96, 8), // "NewsList"
QT_MOC_LITERAL(9, 105, 18), // "devicesListChanged"
QT_MOC_LITERAL(10, 124, 16), // "devicesListFound"
QT_MOC_LITERAL(11, 141, 10), // "DeviceList"
QT_MOC_LITERAL(12, 152, 18), // "measureListChanged"
QT_MOC_LITERAL(13, 171, 16), // "measureListFound"
QT_MOC_LITERAL(14, 188, 11), // "MeasureList"
QT_MOC_LITERAL(15, 200, 17), // "limitsListChanged"
QT_MOC_LITERAL(16, 218, 15), // "limitsListFound"
QT_MOC_LITERAL(17, 234, 10), // "LimitsList"
QT_MOC_LITERAL(18, 245, 18), // "accountDataChanged"
QT_MOC_LITERAL(19, 264, 16), // "accountDataFound"
QT_MOC_LITERAL(20, 281, 7), // "Account"
QT_MOC_LITERAL(21, 289, 3), // "acc"
QT_MOC_LITERAL(22, 293, 19), // "activeDeviceChanged"
QT_MOC_LITERAL(23, 313, 17), // "activeDeviceFound"
QT_MOC_LITERAL(24, 331, 2), // "id"
QT_MOC_LITERAL(25, 334, 17), // "fullDeviceChanged"
QT_MOC_LITERAL(26, 352, 15), // "fullDeviceFound"
QT_MOC_LITERAL(27, 368, 14), // "historyChanged"
QT_MOC_LITERAL(28, 383, 12), // "historyFound"
QT_MOC_LITERAL(29, 396, 13), // "SituationList"
QT_MOC_LITERAL(30, 410, 11), // "infoMessage"
QT_MOC_LITERAL(31, 422, 15), // "extractNewsList"
QT_MOC_LITERAL(32, 438, 4), // "date"
QT_MOC_LITERAL(33, 443, 14), // "insertNewsList"
QT_MOC_LITERAL(34, 458, 16), // "downloadNewsList"
QT_MOC_LITERAL(35, 475, 19), // "downloadDevicesList"
QT_MOC_LITERAL(36, 495, 19), // "downloadAccountData"
QT_MOC_LITERAL(37, 515, 14), // "registerDevice"
QT_MOC_LITERAL(38, 530, 20), // "downloadMeasurements"
QT_MOC_LITERAL(39, 551, 11), // "authOnCloud"
QT_MOC_LITERAL(40, 563, 5), // "login"
QT_MOC_LITERAL(41, 569, 6), // "secret"
QT_MOC_LITERAL(42, 576, 19), // "checkDevicePresence"
QT_MOC_LITERAL(43, 596, 11), // "checkLimits"
QT_MOC_LITERAL(44, 608, 19), // "ongetNotifySettings"
QT_MOC_LITERAL(45, 628, 21), // "onresetNotifySettings"
QT_MOC_LITERAL(46, 650, 4), // "name"
QT_MOC_LITERAL(47, 655, 13), // "ongetNewsList"
QT_MOC_LITERAL(48, 669, 16), // "onupdateNewsList"
QT_MOC_LITERAL(49, 686, 16), // "ongetDevicesList"
QT_MOC_LITERAL(50, 703, 11), // "onaddDevice"
QT_MOC_LITERAL(51, 715, 16), // "ongetMeasureList"
QT_MOC_LITERAL(52, 732, 15), // "ongetLimitsList"
QT_MOC_LITERAL(53, 748, 11), // "onsetLimits"
QT_MOC_LITERAL(54, 760, 17), // "ongetActiveDevice"
QT_MOC_LITERAL(55, 778, 16), // "onactivateDevice"
QT_MOC_LITERAL(56, 795, 15), // "ongetFullDevice"
QT_MOC_LITERAL(57, 811, 16), // "ongetAccountData"
QT_MOC_LITERAL(58, 828, 11), // "onauthorize"
QT_MOC_LITERAL(59, 840, 12), // "ongetHistory"
QT_MOC_LITERAL(60, 853, 19), // "onnewsListExtracted"
QT_MOC_LITERAL(61, 873, 16), // "onnewsDownloaded"
QT_MOC_LITERAL(62, 890, 20), // "onuserDataDownloaded"
QT_MOC_LITERAL(63, 911, 6), // "avatar"
QT_MOC_LITERAL(64, 918, 11), // "information"
QT_MOC_LITERAL(65, 930, 11), // "devicecount"
QT_MOC_LITERAL(66, 942, 3), // "reg"
QT_MOC_LITERAL(67, 946, 9), // "accstatus"
QT_MOC_LITERAL(68, 956, 21), // "onuserDataUnavailable"
QT_MOC_LITERAL(69, 978, 22), // "onauthorizationSucceed"
QT_MOC_LITERAL(70, 1001, 21), // "onauthorizationFailed"
QT_MOC_LITERAL(71, 1023, 23), // "onconnectionEstablished"
QT_MOC_LITERAL(72, 1047, 16), // "onconnectionLost"
QT_MOC_LITERAL(73, 1064, 24), // "onmeasurementsDownloaded"
QT_MOC_LITERAL(74, 1089, 12), // "Measurements"
QT_MOC_LITERAL(75, 1102, 24), // "onmeasureDataUnavailable"
QT_MOC_LITERAL(76, 1127, 22), // "ondeviceInfoDownloaded"
QT_MOC_LITERAL(77, 1150, 6), // "Device"
QT_MOC_LITERAL(78, 1157, 23), // "ondeviceInfoUnavailable"
QT_MOC_LITERAL(79, 1181, 17), // "ondangerSituation"
QT_MOC_LITERAL(80, 1199, 15) // "DangerSituation"

    },
    "Model\0notifySettingsChanged\0\0"
    "notifySettingsFound\0NotifyList\0items\0"
    "newsListChanged\0newsListFound\0NewsList\0"
    "devicesListChanged\0devicesListFound\0"
    "DeviceList\0measureListChanged\0"
    "measureListFound\0MeasureList\0"
    "limitsListChanged\0limitsListFound\0"
    "LimitsList\0accountDataChanged\0"
    "accountDataFound\0Account\0acc\0"
    "activeDeviceChanged\0activeDeviceFound\0"
    "id\0fullDeviceChanged\0fullDeviceFound\0"
    "historyChanged\0historyFound\0SituationList\0"
    "infoMessage\0extractNewsList\0date\0"
    "insertNewsList\0downloadNewsList\0"
    "downloadDevicesList\0downloadAccountData\0"
    "registerDevice\0downloadMeasurements\0"
    "authOnCloud\0login\0secret\0checkDevicePresence\0"
    "checkLimits\0ongetNotifySettings\0"
    "onresetNotifySettings\0name\0ongetNewsList\0"
    "onupdateNewsList\0ongetDevicesList\0"
    "onaddDevice\0ongetMeasureList\0"
    "ongetLimitsList\0onsetLimits\0"
    "ongetActiveDevice\0onactivateDevice\0"
    "ongetFullDevice\0ongetAccountData\0"
    "onauthorize\0ongetHistory\0onnewsListExtracted\0"
    "onnewsDownloaded\0onuserDataDownloaded\0"
    "avatar\0information\0devicecount\0reg\0"
    "accstatus\0onuserDataUnavailable\0"
    "onauthorizationSucceed\0onauthorizationFailed\0"
    "onconnectionEstablished\0onconnectionLost\0"
    "onmeasurementsDownloaded\0Measurements\0"
    "onmeasureDataUnavailable\0"
    "ondeviceInfoDownloaded\0Device\0"
    "ondeviceInfoUnavailable\0ondangerSituation\0"
    "DangerSituation"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Model[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      57,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      29,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  299,    2, 0x06 /* Public */,
       3,    1,  300,    2, 0x06 /* Public */,
       6,    0,  303,    2, 0x06 /* Public */,
       7,    1,  304,    2, 0x06 /* Public */,
       9,    0,  307,    2, 0x06 /* Public */,
      10,    1,  308,    2, 0x06 /* Public */,
      12,    0,  311,    2, 0x06 /* Public */,
      13,    1,  312,    2, 0x06 /* Public */,
      15,    0,  315,    2, 0x06 /* Public */,
      16,    1,  316,    2, 0x06 /* Public */,
      18,    0,  319,    2, 0x06 /* Public */,
      19,    1,  320,    2, 0x06 /* Public */,
      22,    0,  323,    2, 0x06 /* Public */,
      23,    1,  324,    2, 0x06 /* Public */,
      25,    0,  327,    2, 0x06 /* Public */,
      26,    1,  328,    2, 0x06 /* Public */,
      27,    0,  331,    2, 0x06 /* Public */,
      28,    1,  332,    2, 0x06 /* Public */,
      30,    2,  335,    2, 0x06 /* Public */,
      31,    1,  340,    2, 0x06 /* Public */,
      33,    1,  343,    2, 0x06 /* Public */,
      34,    1,  346,    2, 0x06 /* Public */,
      35,    0,  349,    2, 0x06 /* Public */,
      36,    0,  350,    2, 0x06 /* Public */,
      37,    1,  351,    2, 0x06 /* Public */,
      38,    1,  354,    2, 0x06 /* Public */,
      39,    2,  357,    2, 0x06 /* Public */,
      42,    1,  362,    2, 0x06 /* Public */,
      43,    0,  365,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      44,    0,  366,    2, 0x0a /* Public */,
      45,    1,  367,    2, 0x0a /* Public */,
      47,    1,  370,    2, 0x0a /* Public */,
      48,    0,  373,    2, 0x0a /* Public */,
      49,    0,  374,    2, 0x0a /* Public */,
      50,    1,  375,    2, 0x0a /* Public */,
      51,    0,  378,    2, 0x0a /* Public */,
      52,    0,  379,    2, 0x0a /* Public */,
      53,    2,  380,    2, 0x0a /* Public */,
      54,    0,  385,    2, 0x0a /* Public */,
      55,    1,  386,    2, 0x0a /* Public */,
      56,    0,  389,    2, 0x0a /* Public */,
      57,    0,  390,    2, 0x0a /* Public */,
      58,    2,  391,    2, 0x0a /* Public */,
      59,    0,  396,    2, 0x0a /* Public */,
      60,    2,  397,    2, 0x0a /* Public */,
      61,    1,  402,    2, 0x0a /* Public */,
      62,    7,  405,    2, 0x0a /* Public */,
      68,    0,  420,    2, 0x0a /* Public */,
      69,    0,  421,    2, 0x0a /* Public */,
      70,    0,  422,    2, 0x0a /* Public */,
      71,    0,  423,    2, 0x0a /* Public */,
      72,    0,  424,    2, 0x0a /* Public */,
      73,    1,  425,    2, 0x0a /* Public */,
      75,    0,  428,    2, 0x0a /* Public */,
      76,    1,  429,    2, 0x0a /* Public */,
      78,    0,  432,    2, 0x0a /* Public */,
      79,    1,  433,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    5,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,    5,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14,    5,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 17,    5,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 20,   21,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   24,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   24,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 29,    5,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    2,    2,
    QMetaType::Void, QMetaType::QDate,   32,
    QMetaType::Void, 0x80000000 | 8,    5,
    QMetaType::Void, QMetaType::QDate,   32,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   24,
    QMetaType::Void, QMetaType::QString,   24,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   40,   41,
    QMetaType::Void, QMetaType::QString,   24,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   46,
    QMetaType::Void, QMetaType::QDate,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   24,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float, QMetaType::QString,    2,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   24,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    2,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8, QMetaType::QDate,    2,    2,
    QMetaType::Void, 0x80000000 | 8,    5,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::Int, QMetaType::QDate, QMetaType::QString, QMetaType::QString,   46,   63,   64,   65,   66,   67,   40,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 74,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 77,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 80,    2,

       0        // eod
};

void Model::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Model *_t = static_cast<Model *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->notifySettingsChanged(); break;
        case 1: _t->notifySettingsFound((*reinterpret_cast< const NotifyList(*)>(_a[1]))); break;
        case 2: _t->newsListChanged(); break;
        case 3: _t->newsListFound((*reinterpret_cast< const NewsList(*)>(_a[1]))); break;
        case 4: _t->devicesListChanged(); break;
        case 5: _t->devicesListFound((*reinterpret_cast< const DeviceList(*)>(_a[1]))); break;
        case 6: _t->measureListChanged(); break;
        case 7: _t->measureListFound((*reinterpret_cast< const MeasureList(*)>(_a[1]))); break;
        case 8: _t->limitsListChanged(); break;
        case 9: _t->limitsListFound((*reinterpret_cast< const LimitsList(*)>(_a[1]))); break;
        case 10: _t->accountDataChanged(); break;
        case 11: _t->accountDataFound((*reinterpret_cast< const Account(*)>(_a[1]))); break;
        case 12: _t->activeDeviceChanged(); break;
        case 13: _t->activeDeviceFound((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 14: _t->fullDeviceChanged(); break;
        case 15: _t->fullDeviceFound((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 16: _t->historyChanged(); break;
        case 17: _t->historyFound((*reinterpret_cast< const SituationList(*)>(_a[1]))); break;
        case 18: _t->infoMessage((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 19: _t->extractNewsList((*reinterpret_cast< const QDate(*)>(_a[1]))); break;
        case 20: _t->insertNewsList((*reinterpret_cast< const NewsList(*)>(_a[1]))); break;
        case 21: _t->downloadNewsList((*reinterpret_cast< const QDate(*)>(_a[1]))); break;
        case 22: _t->downloadDevicesList(); break;
        case 23: _t->downloadAccountData(); break;
        case 24: _t->registerDevice((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 25: _t->downloadMeasurements((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 26: _t->authOnCloud((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 27: _t->checkDevicePresence((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 28: _t->checkLimits(); break;
        case 29: _t->ongetNotifySettings(); break;
        case 30: _t->onresetNotifySettings((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 31: _t->ongetNewsList((*reinterpret_cast< const QDate(*)>(_a[1]))); break;
        case 32: _t->onupdateNewsList(); break;
        case 33: _t->ongetDevicesList(); break;
        case 34: _t->onaddDevice((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 35: _t->ongetMeasureList(); break;
        case 36: _t->ongetLimitsList(); break;
        case 37: _t->onsetLimits((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 38: _t->ongetActiveDevice(); break;
        case 39: _t->onactivateDevice((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 40: _t->ongetFullDevice(); break;
        case 41: _t->ongetAccountData(); break;
        case 42: _t->onauthorize((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 43: _t->ongetHistory(); break;
        case 44: _t->onnewsListExtracted((*reinterpret_cast< const NewsList(*)>(_a[1])),(*reinterpret_cast< QDate(*)>(_a[2]))); break;
        case 45: _t->onnewsDownloaded((*reinterpret_cast< const NewsList(*)>(_a[1]))); break;
        case 46: _t->onuserDataDownloaded((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< QDate(*)>(_a[5])),(*reinterpret_cast< QString(*)>(_a[6])),(*reinterpret_cast< QString(*)>(_a[7]))); break;
        case 47: _t->onuserDataUnavailable(); break;
        case 48: _t->onauthorizationSucceed(); break;
        case 49: _t->onauthorizationFailed(); break;
        case 50: _t->onconnectionEstablished(); break;
        case 51: _t->onconnectionLost(); break;
        case 52: _t->onmeasurementsDownloaded((*reinterpret_cast< Measurements(*)>(_a[1]))); break;
        case 53: _t->onmeasureDataUnavailable(); break;
        case 54: _t->ondeviceInfoDownloaded((*reinterpret_cast< Device(*)>(_a[1]))); break;
        case 55: _t->ondeviceInfoUnavailable(); break;
        case 56: _t->ondangerSituation((*reinterpret_cast< DangerSituation(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Model::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Model::notifySettingsChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Model::*)(const NotifyList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Model::notifySettingsFound)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Model::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Model::newsListChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Model::*)(const NewsList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Model::newsListFound)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Model::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Model::devicesListChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Model::*)(const DeviceList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Model::devicesListFound)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (Model::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Model::measureListChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (Model::*)(const MeasureList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Model::measureListFound)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (Model::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Model::limitsListChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (Model::*)(const LimitsList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Model::limitsListFound)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (Model::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Model::accountDataChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (Model::*)(const Account & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Model::accountDataFound)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (Model::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Model::activeDeviceChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (Model::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Model::activeDeviceFound)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (Model::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Model::fullDeviceChanged)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (Model::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Model::fullDeviceFound)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (Model::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Model::historyChanged)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (Model::*)(const SituationList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Model::historyFound)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (Model::*)(QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Model::infoMessage)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (Model::*)(const QDate & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Model::extractNewsList)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (Model::*)(const NewsList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Model::insertNewsList)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (Model::*)(const QDate & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Model::downloadNewsList)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (Model::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Model::downloadDevicesList)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (Model::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Model::downloadAccountData)) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (Model::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Model::registerDevice)) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (Model::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Model::downloadMeasurements)) {
                *result = 25;
                return;
            }
        }
        {
            using _t = void (Model::*)(QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Model::authOnCloud)) {
                *result = 26;
                return;
            }
        }
        {
            using _t = void (Model::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Model::checkDevicePresence)) {
                *result = 27;
                return;
            }
        }
        {
            using _t = void (Model::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Model::checkLimits)) {
                *result = 28;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Model::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Model.data,
      qt_meta_data_Model,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Model::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Model::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Model.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Model::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 57)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 57;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 57)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 57;
    }
    return _id;
}

// SIGNAL 0
void Model::notifySettingsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Model::notifySettingsFound(const NotifyList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Model::newsListChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Model::newsListFound(const NewsList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Model::devicesListChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void Model::devicesListFound(const DeviceList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Model::measureListChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void Model::measureListFound(const MeasureList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void Model::limitsListChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void Model::limitsListFound(const LimitsList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void Model::accountDataChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void Model::accountDataFound(const Account & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void Model::activeDeviceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void Model::activeDeviceFound(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void Model::fullDeviceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void Model::fullDeviceFound(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void Model::historyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 16, nullptr);
}

// SIGNAL 17
void Model::historyFound(const SituationList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void Model::infoMessage(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void Model::extractNewsList(const QDate & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void Model::insertNewsList(const NewsList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void Model::downloadNewsList(const QDate & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void Model::downloadDevicesList()
{
    QMetaObject::activate(this, &staticMetaObject, 22, nullptr);
}

// SIGNAL 23
void Model::downloadAccountData()
{
    QMetaObject::activate(this, &staticMetaObject, 23, nullptr);
}

// SIGNAL 24
void Model::registerDevice(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void Model::downloadMeasurements(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void Model::authOnCloud(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}

// SIGNAL 27
void Model::checkDevicePresence(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}

// SIGNAL 28
void Model::checkLimits()
{
    QMetaObject::activate(this, &staticMetaObject, 28, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
