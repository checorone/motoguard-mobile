#ifndef MODEL_H
#define MODEL_H

#include<QObject>

#include"LogicUnits/dataunit.h"
#include"LogicUnits/networkunit.h"
#include"LogicUnits/notifyunit.h"

#include "DataNotion/news.h"
#include "DataNotion/notifyselector.h"
#include "DataNotion/device.h"
#include "DataNotion/measurements.h"
#include "DataNotion/account.h"
#include "DataNotion/limits.h"
#include "DataNotion/dangersituation.h"


class Model : public QObject
{
    Q_OBJECT

private:
    DataUnit * dataUnit;
    NetworkUnit * networkUnit;
    NotifyUnit * notifyUnit;

    NotifyList notifysettings;
    DeviceList devices;
    MeasureList measures;
    LimitsList limits;
    SituationList history;

    QString activeDeviceID;
    Account account;

public:
    explicit Model(QObject * parent = nullptr);
    ~Model();

signals:
    /*For View Model*/
    void notifySettingsChanged();
    void notifySettingsFound(const NotifyList & items);

    void newsListChanged();
    void newsListFound(const NewsList & items);

    void devicesListChanged();
    void devicesListFound(const DeviceList & items);

    void measureListChanged();
    void measureListFound(const MeasureList & items);

    void limitsListChanged();
    void limitsListFound(const LimitsList & items);

    void accountDataChanged();
    void accountDataFound(const Account & acc);

    void activeDeviceChanged();
    void activeDeviceFound(const QString & id);

    void historyChanged();
    void historyFound(const SituationList & items);

    /*For Data unit*/
    void extractNewsList(const QDate & date);
    void insertNewsList(const NewsList & items);

    /*For Network unit*/
    void downloadNewsList(const QDate & date);
    void downloadDevicesList();
    void downloadAccountData();
    void registerDevice(QString id);
    void downloadMeasurements(QString id);
    void authOnCloud(QString login, QString secret);


public slots:
    /*From View Model*/
    void ongetNotifySettings();
    void onresetNotifySettings(QString name);

    void ongetNewsList(const QDate &);
    void onupdateNewsList();

    void ongetDevicesList();
    void onaddDevice(QString id);

    void ongetMeasureList();

    void ongetLimitsList();
    void onsetLimits(float, QString);

    void ongetActiveDevice();
    void onactivateDevice(QString id);

    void ongetAccountData();
    void onauthorize(QString, QString);

    void ongetHistory();

    /*From Data unit*/
    void onnewsListExtracted(const NewsList &, QDate);

    /*From Network unit*/
    void onnewsDownloaded(const NewsList & items);
    void onuserDataDownloaded(QString name, QString avatar, QString information, int devicecount, QDate reg, QString accstatus, QString login);
    void ondevicesDownloaded(const DeviceList & items);
    void onmeasurementsDownloaded(const Measurements & items);
    void onauthGrant(const Account & acc);
    void onEstablished();
    void onLost();
    void onDown(Measurements);

    /*From Notify unit*/
    void ondangerSituation(DangerSituation);
};

#endif // MODEL_H
