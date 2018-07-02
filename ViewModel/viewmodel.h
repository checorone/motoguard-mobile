#ifndef VIEWMODEL_H
#define VIEWMODEL_H

#include<QObject>
#include "CustomModels/newslistmodel.h"
#include "CustomModels/notifylistmodel.h"
#include "CustomModels/deviceslistmodel.h"
#include "CustomModels/measurelistmodel.h"
#include "CustomModels/historylistmodel.h"

#include "DataNotion/account.h"

class ViewModel : public QObject
{
    Q_OBJECT
    Q_PROPERTY(NewsListModel * news READ getNewsModel NOTIFY NewsModelChanged)
    Q_PROPERTY(NotifyListModel * notify READ getNotifyModel NOTIFY NotifyModelChanged)
    Q_PROPERTY(DevicesListModel * devices READ getDevicesModel NOTIFY DevicesModelChanged)
    Q_PROPERTY(MeasureListModel * measure READ getMeasureModel NOTIFY MeasureModelChanged)
    Q_PROPERTY(HistoryListModel * history READ getHistoryModel NOTIFY HistoryModelChanged)

    Q_PROPERTY(QString activeDeviceID READ getActiveDeviceID NOTIFY ActiveDeviceChanged)
    Q_PROPERTY(Account * account READ getAccount NOTIFY AccountDataChanged)

private:
    NewsListModel * news;
    NotifyListModel * notify;
    DevicesListModel * devices;
    MeasureListModel * measure;
    HistoryListModel * history;

    QString activeDeviceID;
    Account * account;

public:
    ViewModel();
    ~ViewModel();

public:
    NewsListModel * getNewsModel();
    NotifyListModel * getNotifyModel();
    DevicesListModel * getDevicesModel();
    MeasureListModel * getMeasureModel();
    HistoryListModel * getHistoryModel();

    QString getActiveDeviceID() const;
    Account * getAccount();

signals:
    /*For View*/
    void NotifyModelChanged();
    void NewsModelChanged();
    void DevicesModelChanged();
    void MeasureModelChanged();
    void ActiveDeviceChanged();
    void AccountDataChanged();
    void HistoryModelChanged();

    /*For Model*/
    void getNotifySettings();
    void getNewsList(const QDate &);
    void getDevicesList();
    void getMeasureList();
    void getLimitsList();
    void getAccountData();
    void getActiveDevice();
    void getHistory();

    void resetNotifySettings(QString name);
    void updateNews();
    void activateDevice(QString id);
    void addDevice(QString id);
    void setLimits(float radius, QString id);
    void authorize(QString login, QString secret);


public slots:
    /*From model*/
    void onnewsListFound(const NewsList & items);
    void ondevicesListFound(const DeviceList & items);
    void onmeasureListFound(const MeasureList & items);
    void onlimitsListFound(const LimitsList & items);
    void onnotifySettingsFound(const NotifyList & items);
    void onaccountDataFound(const Account &);
    void onactiveDeviceFound(const QString &);
    void onhistoryFound(const SituationList &);

    void onnewsListChanged();

    /*From view*/
    void onaddNews();
    void onsetLimits(QString, QString);

};

#endif // VIEWMODEL_H
