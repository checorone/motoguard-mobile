 #include "viewmodel.h"
#include <QDebug>

ViewModel::ViewModel()
{
    busy = false;

    news = new NewsListModel(this);
    notify = new NotifyListModel(this);
    devices = new DevicesListModel(this);
    measure = new MeasureListModel(this);
    history = new HistoryListModel(this);

    account = new Account;
}

ViewModel::~ViewModel()
{
    delete news;
    delete notify;
    delete devices;
    delete measure;
    delete account;
    delete history;
}

NewsListModel * ViewModel::getNewsModel()
{
    return news;
}

NotifyListModel * ViewModel::getNotifyModel()
{
    return notify;
}

DevicesListModel * ViewModel::getDevicesModel()
{
    return devices;
}

MeasureListModel * ViewModel::getMeasureModel()
{
    return measure;
}

HistoryListModel *ViewModel::getHistoryModel()
{
    return history;
}

bool ViewModel::getBusy() const
{
    return busy;
}

QString ViewModel::getActiveDeviceID() const
{
    return activeDeviceID;
}

QString ViewModel::getFulldevID() const
{
    return fulldevID;
}

Account * ViewModel::getAccount()
{
    return account;
}


//============================================================//
//=====================Notify Section=========================//
//============================================================//

void ViewModel::onnotifySettingsFound(const NotifyList & items)
{
    if(items.count() == 0) {
        qDebug() << "[VM] [NOTIFY] [ERROR]: Get empty response from model.";
        return;
    }

    notify->clear();
    qDebug() << "[VM] [NOTIFY] : Reset notify settings.";

    notify->append(items);
    qDebug() << "[VM] [NOTIFY] : Added " << items.length() << " notify settings to list.";
    emit NotifyModelChanged();
}

//============================================================//
//======================News Section==========================//
//============================================================//


void ViewModel::onnewsListChanged()
{
    qDebug() << "[VM] [NEWS] : Making Request to model for updated news.";
    emit getNewsList(QDate::currentDate());
}


void ViewModel::onnewsListFound(const NewsList & items)
{
    if(items.count() == 0) {
        qDebug() << "[VM] [NEWS] [ERROR]: Get empty response from model.";
        return;
    }

    if(items.first().getDate() >= news->first().getDate()) {
        qDebug() << "[VM] [NEWS] : Erased news list for updated news.";
        news->clear();
    }

    news->append(items);
    qDebug() << "[VM] [NEWS] : Added " << items.length() << " news to news list.";
    emit NewsModelChanged();
}

void ViewModel::onaddNews()
{
    qDebug() << "[VM] [NEWS] : Query model for news from " << news->last().getDate().toString() << ".";
    emit getNewsList(news->last().getDate());
}

//============================================================//
//=====================Devices Section========================//
//============================================================//

void ViewModel::ondevicesListFound(const DeviceList &items)
{
    if(items.count() == 0) {
        qDebug() << "[VM] [DEVICE] [ERROR]: Get empty response from model.";
        return;
    }

    devices->clear();

    devices->append(items);
    qDebug() << "[VM] [DEVICE] : Added " << items.length() << " devices to devices list.";
    emit DevicesModelChanged();
}

//============================================================//
//==================Measurements Section======================//
//============================================================//

void ViewModel::onmeasureListFound(const MeasureList & items)
{
    if(items.count() == 0) {
        qDebug() << "[VM] [MEASURE] [ERROR]: Get empty response from model.";
        return;
    }
    measure->replace(items);
    qDebug() << "[VM] [MEASURE] : Added " << items.length() << " measurements to measure list.";
    emit MeasureModelChanged();
}

void ViewModel::onlimitsListFound(const LimitsList &items)
{
    if(items.count() == 0) {
        qDebug() << "[VM] [LIMITS] [ERROR]: Get empty response from model.";
        return;
    }
    measure->replace(items);
    qDebug() << "[VM] [LIMITS] : Added " << items.length() << " limits to limits list.";
    emit MeasureModelChanged();
}

void ViewModel::onsetLimits(QString radius, QString id)
{
    qDebug() << "[VM] [MESAURE] : Making Request to model for updating limits.";
    emit setLimits(radius.toFloat(), id);
}

void ViewModel::onAddDevice(QString id)
{
    busy = true;
    emit BusyChanged();
    emit addDevice(id);
}

void ViewModel::onauthorize(QString log, QString pas)
{
    busy = true;
    emit BusyChanged();
    emit authorize(log,pas);
}

void ViewModel::onactivateDevice(QString id)
{
    busy = true;
    emit BusyChanged();
    emit activateDevice(id);
}

//============================================================//
//========================Auth Section========================//
//============================================================//


void ViewModel::onaccountDataFound(const Account & acc)
{
    qDebug() << "[VM] [ACCOUNT] : Added account data.";
    delete account;
    account = new Account(acc.getName(),acc.getAvatar(), acc.getInformation(), acc.getDevicecount(),acc.getReg(),acc.getAccstatus(), acc.getLogin(), acc.getAuthorized());
    emit AccountDataChanged();
    busy = false;
    emit BusyChanged();
}

void ViewModel::onactiveDeviceFound(const QString & id)
{
    qDebug() << "[VM] [ACTIVE DEV] : Added active device with id " << id << ".";
    activeDeviceID = id;
    emit ActiveDeviceChanged();
    emit MeasureModelChanged();
}

void ViewModel::onfullDeviceFound(const QString & id)
{
    qDebug() << "[VM] [FULL DEV] : Added full device with id " << id << ".";
    fulldevID = id;
    emit FulldevIDChanged();
    emit MeasureModelChanged();
}

void ViewModel::onhistoryFound(const SituationList & items)
{
    history->replace(items);
    qDebug() << "[VM] [History] : Added " << items.length() << " situations to history list.";
    emit HistoryModelChanged();
}


void ViewModel::oninfoMessage(QString label, QString text)
{
    busy = false;
    emit BusyChanged();
    emit showMessage(label, text);
}
