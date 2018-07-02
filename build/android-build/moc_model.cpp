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
    QByteArrayData data[71];
    char stringdata0[994];
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
QT_MOC_LITERAL(25, 334, 14), // "historyChanged"
QT_MOC_LITERAL(26, 349, 12), // "historyFound"
QT_MOC_LITERAL(27, 362, 13), // "SituationList"
QT_MOC_LITERAL(28, 376, 15), // "extractNewsList"
QT_MOC_LITERAL(29, 392, 4), // "date"
QT_MOC_LITERAL(30, 397, 14), // "insertNewsList"
QT_MOC_LITERAL(31, 412, 16), // "downloadNewsList"
QT_MOC_LITERAL(32, 429, 19), // "downloadDevicesList"
QT_MOC_LITERAL(33, 449, 19), // "downloadAccountData"
QT_MOC_LITERAL(34, 469, 14), // "registerDevice"
QT_MOC_LITERAL(35, 484, 20), // "downloadMeasurements"
QT_MOC_LITERAL(36, 505, 11), // "authOnCloud"
QT_MOC_LITERAL(37, 517, 5), // "login"
QT_MOC_LITERAL(38, 523, 6), // "secret"
QT_MOC_LITERAL(39, 530, 19), // "ongetNotifySettings"
QT_MOC_LITERAL(40, 550, 21), // "onresetNotifySettings"
QT_MOC_LITERAL(41, 572, 4), // "name"
QT_MOC_LITERAL(42, 577, 13), // "ongetNewsList"
QT_MOC_LITERAL(43, 591, 16), // "onupdateNewsList"
QT_MOC_LITERAL(44, 608, 16), // "ongetDevicesList"
QT_MOC_LITERAL(45, 625, 11), // "onaddDevice"
QT_MOC_LITERAL(46, 637, 16), // "ongetMeasureList"
QT_MOC_LITERAL(47, 654, 15), // "ongetLimitsList"
QT_MOC_LITERAL(48, 670, 11), // "onsetLimits"
QT_MOC_LITERAL(49, 682, 17), // "ongetActiveDevice"
QT_MOC_LITERAL(50, 700, 16), // "onactivateDevice"
QT_MOC_LITERAL(51, 717, 16), // "ongetAccountData"
QT_MOC_LITERAL(52, 734, 11), // "onauthorize"
QT_MOC_LITERAL(53, 746, 12), // "ongetHistory"
QT_MOC_LITERAL(54, 759, 19), // "onnewsListExtracted"
QT_MOC_LITERAL(55, 779, 16), // "onnewsDownloaded"
QT_MOC_LITERAL(56, 796, 20), // "onuserDataDownloaded"
QT_MOC_LITERAL(57, 817, 6), // "avatar"
QT_MOC_LITERAL(58, 824, 11), // "information"
QT_MOC_LITERAL(59, 836, 11), // "devicecount"
QT_MOC_LITERAL(60, 848, 3), // "reg"
QT_MOC_LITERAL(61, 852, 9), // "accstatus"
QT_MOC_LITERAL(62, 862, 19), // "ondevicesDownloaded"
QT_MOC_LITERAL(63, 882, 24), // "onmeasurementsDownloaded"
QT_MOC_LITERAL(64, 907, 12), // "Measurements"
QT_MOC_LITERAL(65, 920, 11), // "onauthGrant"
QT_MOC_LITERAL(66, 932, 13), // "onEstablished"
QT_MOC_LITERAL(67, 946, 6), // "onLost"
QT_MOC_LITERAL(68, 953, 6), // "onDown"
QT_MOC_LITERAL(69, 960, 17), // "ondangerSituation"
QT_MOC_LITERAL(70, 978, 15) // "DangerSituation"

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
    "id\0historyChanged\0historyFound\0"
    "SituationList\0extractNewsList\0date\0"
    "insertNewsList\0downloadNewsList\0"
    "downloadDevicesList\0downloadAccountData\0"
    "registerDevice\0downloadMeasurements\0"
    "authOnCloud\0login\0secret\0ongetNotifySettings\0"
    "onresetNotifySettings\0name\0ongetNewsList\0"
    "onupdateNewsList\0ongetDevicesList\0"
    "onaddDevice\0ongetMeasureList\0"
    "ongetLimitsList\0onsetLimits\0"
    "ongetActiveDevice\0onactivateDevice\0"
    "ongetAccountData\0onauthorize\0ongetHistory\0"
    "onnewsListExtracted\0onnewsDownloaded\0"
    "onuserDataDownloaded\0avatar\0information\0"
    "devicecount\0reg\0accstatus\0ondevicesDownloaded\0"
    "onmeasurementsDownloaded\0Measurements\0"
    "onauthGrant\0onEstablished\0onLost\0"
    "onDown\0ondangerSituation\0DangerSituation"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Model[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      48,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      24,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  254,    2, 0x06 /* Public */,
       3,    1,  255,    2, 0x06 /* Public */,
       6,    0,  258,    2, 0x06 /* Public */,
       7,    1,  259,    2, 0x06 /* Public */,
       9,    0,  262,    2, 0x06 /* Public */,
      10,    1,  263,    2, 0x06 /* Public */,
      12,    0,  266,    2, 0x06 /* Public */,
      13,    1,  267,    2, 0x06 /* Public */,
      15,    0,  270,    2, 0x06 /* Public */,
      16,    1,  271,    2, 0x06 /* Public */,
      18,    0,  274,    2, 0x06 /* Public */,
      19,    1,  275,    2, 0x06 /* Public */,
      22,    0,  278,    2, 0x06 /* Public */,
      23,    1,  279,    2, 0x06 /* Public */,
      25,    0,  282,    2, 0x06 /* Public */,
      26,    1,  283,    2, 0x06 /* Public */,
      28,    1,  286,    2, 0x06 /* Public */,
      30,    1,  289,    2, 0x06 /* Public */,
      31,    1,  292,    2, 0x06 /* Public */,
      32,    0,  295,    2, 0x06 /* Public */,
      33,    0,  296,    2, 0x06 /* Public */,
      34,    1,  297,    2, 0x06 /* Public */,
      35,    1,  300,    2, 0x06 /* Public */,
      36,    2,  303,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      39,    0,  308,    2, 0x0a /* Public */,
      40,    1,  309,    2, 0x0a /* Public */,
      42,    1,  312,    2, 0x0a /* Public */,
      43,    0,  315,    2, 0x0a /* Public */,
      44,    0,  316,    2, 0x0a /* Public */,
      45,    1,  317,    2, 0x0a /* Public */,
      46,    0,  320,    2, 0x0a /* Public */,
      47,    0,  321,    2, 0x0a /* Public */,
      48,    2,  322,    2, 0x0a /* Public */,
      49,    0,  327,    2, 0x0a /* Public */,
      50,    1,  328,    2, 0x0a /* Public */,
      51,    0,  331,    2, 0x0a /* Public */,
      52,    2,  332,    2, 0x0a /* Public */,
      53,    0,  337,    2, 0x0a /* Public */,
      54,    2,  338,    2, 0x0a /* Public */,
      55,    1,  343,    2, 0x0a /* Public */,
      56,    7,  346,    2, 0x0a /* Public */,
      62,    1,  361,    2, 0x0a /* Public */,
      63,    1,  364,    2, 0x0a /* Public */,
      65,    1,  367,    2, 0x0a /* Public */,
      66,    0,  370,    2, 0x0a /* Public */,
      67,    0,  371,    2, 0x0a /* Public */,
      68,    1,  372,    2, 0x0a /* Public */,
      69,    1,  375,    2, 0x0a /* Public */,

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
    QMetaType::Void, 0x80000000 | 27,    5,
    QMetaType::Void, QMetaType::QDate,   29,
    QMetaType::Void, 0x80000000 | 8,    5,
    QMetaType::Void, QMetaType::QDate,   29,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   24,
    QMetaType::Void, QMetaType::QString,   24,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   37,   38,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   41,
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
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    2,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8, QMetaType::QDate,    2,    2,
    QMetaType::Void, 0x80000000 | 8,    5,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::Int, QMetaType::QDate, QMetaType::QString, QMetaType::QString,   41,   57,   58,   59,   60,   61,   37,
    QMetaType::Void, 0x80000000 | 11,    5,
    QMetaType::Void, 0x80000000 | 64,    5,
    QMetaType::Void, 0x80000000 | 20,   21,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 64,    2,
    QMetaType::Void, 0x80000000 | 70,    2,

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
        case 14: _t->historyChanged(); break;
        case 15: _t->historyFound((*reinterpret_cast< const SituationList(*)>(_a[1]))); break;
        case 16: _t->extractNewsList((*reinterpret_cast< const QDate(*)>(_a[1]))); break;
        case 17: _t->insertNewsList((*reinterpret_cast< const NewsList(*)>(_a[1]))); break;
        case 18: _t->downloadNewsList((*reinterpret_cast< const QDate(*)>(_a[1]))); break;
        case 19: _t->downloadDevicesList(); break;
        case 20: _t->downloadAccountData(); break;
        case 21: _t->registerDevice((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 22: _t->downloadMeasurements((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 23: _t->authOnCloud((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 24: _t->ongetNotifySettings(); break;
        case 25: _t->onresetNotifySettings((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 26: _t->ongetNewsList((*reinterpret_cast< const QDate(*)>(_a[1]))); break;
        case 27: _t->onupdateNewsList(); break;
        case 28: _t->ongetDevicesList(); break;
        case 29: _t->onaddDevice((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 30: _t->ongetMeasureList(); break;
        case 31: _t->ongetLimitsList(); break;
        case 32: _t->onsetLimits((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 33: _t->ongetActiveDevice(); break;
        case 34: _t->onactivateDevice((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 35: _t->ongetAccountData(); break;
        case 36: _t->onauthorize((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 37: _t->ongetHistory(); break;
        case 38: _t->onnewsListExtracted((*reinterpret_cast< const NewsList(*)>(_a[1])),(*reinterpret_cast< QDate(*)>(_a[2]))); break;
        case 39: _t->onnewsDownloaded((*reinterpret_cast< const NewsList(*)>(_a[1]))); break;
        case 40: _t->onuserDataDownloaded((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< QDate(*)>(_a[5])),(*reinterpret_cast< QString(*)>(_a[6])),(*reinterpret_cast< QString(*)>(_a[7]))); break;
        case 41: _t->ondevicesDownloaded((*reinterpret_cast< const DeviceList(*)>(_a[1]))); break;
        case 42: _t->onmeasurementsDownloaded((*reinterpret_cast< const Measurements(*)>(_a[1]))); break;
        case 43: _t->onauthGrant((*reinterpret_cast< const Account(*)>(_a[1]))); break;
        case 44: _t->onEstablished(); break;
        case 45: _t->onLost(); break;
        case 46: _t->onDown((*reinterpret_cast< Measurements(*)>(_a[1]))); break;
        case 47: _t->ondangerSituation((*reinterpret_cast< DangerSituation(*)>(_a[1]))); break;
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
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Model::historyChanged)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (Model::*)(const SituationList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Model::historyFound)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (Model::*)(const QDate & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Model::extractNewsList)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (Model::*)(const NewsList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Model::insertNewsList)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (Model::*)(const QDate & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Model::downloadNewsList)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (Model::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Model::downloadDevicesList)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (Model::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Model::downloadAccountData)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (Model::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Model::registerDevice)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (Model::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Model::downloadMeasurements)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (Model::*)(QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Model::authOnCloud)) {
                *result = 23;
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
        if (_id < 48)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 48;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 48)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 48;
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
void Model::historyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void Model::historyFound(const SituationList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void Model::extractNewsList(const QDate & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void Model::insertNewsList(const NewsList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void Model::downloadNewsList(const QDate & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void Model::downloadDevicesList()
{
    QMetaObject::activate(this, &staticMetaObject, 19, nullptr);
}

// SIGNAL 20
void Model::downloadAccountData()
{
    QMetaObject::activate(this, &staticMetaObject, 20, nullptr);
}

// SIGNAL 21
void Model::registerDevice(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void Model::downloadMeasurements(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void Model::authOnCloud(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
