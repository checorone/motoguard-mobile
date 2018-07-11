#include <QDebug>

#include "model.h"

Model::Model(QObject * parent) : QObject(parent)
{

    dataUnit = new DataUnit();
    networkUnit = new NetworkUnit(activeDeviceID);

    notifysettings.append(NotifySelector("Резкое торможение", true));
    notifysettings.append(NotifySelector("Удар", true));
    notifysettings.append(NotifySelector("Падение", true));
    notifysettings.append(NotifySelector("Высокая скорость", true));
    notifysettings.append(NotifySelector("Выход за пределы области", true));
    notifysettings.append(NotifySelector("Потеря связи", true));
    notifysettings.append(NotifySelector("Отсутствие движения", true));

//    devices.append(Device("abc123-asdfafasdfadf", 0,1,0, "Стандартное устроиство."));
//    devices.append(Device("gfd543-adfsvcvfaf605", 0,1,0, "Стандартное устроиство."));

//    measures.append(Measurements(devices.at(0).getId(), 55,37,10,50,0.8,0,0,1,0,60,0));
//    measures.append(Measurements(devices.at(1).getId(),25,47,20,20,2.4,8,0,1,0,0,50));

//    limits.append(Limits(devices.at(0).getId(),0,0,0));
//    limits.append(Limits(devices.at(1).getId(),0,0,0));

    activeDeviceID = "None";
    fulldevID = "None";

    notifyUnit = new NotifyUnit(measures, notifysettings, limits, fulldevID);

    QObject::connect(this,SIGNAL(extractNewsList(QDate)),dataUnit, SLOT(onextractNewsList(QDate)));
    QObject::connect(this,SIGNAL(insertNewsList(const NewsList &)),dataUnit, SLOT(oninsertNewsList(const NewsList &)));

    QObject::connect(this,SIGNAL(downloadAccountData()),networkUnit, SLOT(ondownloadAccountData()));
    QObject::connect(this,SIGNAL(authOnCloud(QString,QString)),networkUnit, SLOT(onauth(QString,QString)));
    QObject::connect(this,SIGNAL(checkDevicePresence(QString)),networkUnit, SLOT(ongetDeviceInfo(QString)));
    QObject::connect(this,SIGNAL(activeDeviceChanged()), networkUnit, SIGNAL(getactiveDevice()));
    QObject::connect(this,SIGNAL(activeDeviceFound(QString)),networkUnit, SLOT(onactiveDeviceFound(QString)));

    QObject::connect(this,SIGNAL(measureListFound(MeasureList)),notifyUnit, SLOT(onmeasureListFound(MeasureList)));
    QObject::connect(this,SIGNAL(notifySettingsFound(NotifyList)),notifyUnit, SLOT(onnotifyListFound(NotifyList)));
    QObject::connect(this,SIGNAL(limitsListFound(LimitsList)),notifyUnit, SLOT(onlimitsListFound(LimitsList)));
    QObject::connect(this,SIGNAL(fullDeviceFound(QString)),notifyUnit, SLOT(onactiveDeviceFound(QString)));
    QObject::connect(this,SIGNAL(checkLimits()),notifyUnit, SLOT(oncheckLimits()));


    QObject::connect(networkUnit,SIGNAL(connectionLost()), notifyUnit, SLOT(onconnectionLost()));
    QObject::connect(networkUnit,SIGNAL(authorizationSucceed()), this, SLOT(onauthorizationSucceed()));
    QObject::connect(networkUnit,SIGNAL(authorizationFailed()), this, SLOT(onauthorizationFailed()));
    QObject::connect(networkUnit,SIGNAL(userDataDownloaded(QString,QString,QString,int,QDate,QString,QString)),this, SLOT(onuserDataDownloaded(QString,QString,QString,int,QDate,QString,QString)));
    QObject::connect(networkUnit,SIGNAL(userDataUnavailable()), this, SLOT(onuserDataUnavailable()));
    QObject::connect(networkUnit,SIGNAL(connectionEstablished()), this, SLOT(onconnectionEstablished()));
    QObject::connect(networkUnit,SIGNAL(connectionLost()), this, SLOT(onconnectionLost()));
    QObject::connect(networkUnit,SIGNAL(measureDataDownloaded(Measurements)), this, SLOT(onmeasurementsDownloaded(Measurements)));
    QObject::connect(networkUnit,SIGNAL(measureDataUnavailable()), this, SLOT(onmeasureDataUnavailable()));
    QObject::connect(networkUnit,SIGNAL(deviceInfoDownloaded(Device)), this, SLOT(ondeviceInfoDownloaded(Device)));
    QObject::connect(networkUnit,SIGNAL(deviceInfoUnavailable()), this, SLOT(ondeviceInfoUnavailable()));
    QObject::connect(networkUnit,SIGNAL(getactiveDevice()), this, SLOT(ongetActiveDevice()));


    //QObject::connect(networkUnit,SIGNAL(measureDataDownloaded(Measurements)),networkUnit, SLOT(oncheckData(Measurements)));
    QObject::connect(this,SIGNAL(authOnCloud(QString,QString)),networkUnit, SLOT(onauth(QString,QString)));

    QObject::connect(notifyUnit,SIGNAL(dangerSituation(DangerSituation)),this, SLOT(ondangerSituation(DangerSituation)));

    QObject::connect(dataUnit,SIGNAL(newsListExtracted(const NewsList &, QDate)),this, SLOT(onnewsListExtracted(const NewsList &, QDate)));


}

Model::~Model()
{
    delete dataUnit;
    delete networkUnit;
}


void Model::ongetNotifySettings()
{
    emit notifySettingsFound(notifysettings);
}

void Model::onresetNotifySettings(QString name)
{
    for(auto & option : notifysettings) {
        if(option.getName() == name) {
            option.setEnable(option.getEnable() ? false : true);
            qDebug() << "[M] [Notify] : Successfuly changed state of option \"" << name << "\".";
            emit notifySettingsChanged();
            return;
        }
    }
    qDebug() << "[M] [Notify] [Error]: Cannot find option with name \"" << name << "\".";
}

void Model::ongetNewsList(const QDate & date)
{
    qDebug() << "[M] [News] : Requesting news from cache.";
    emit extractNewsList(date);
}

void Model::onupdateNewsList()
{
    qDebug() << "[M] [News] : Trying download some news.";
    emit downloadNewsList(QDate::currentDate());
}

void Model::onnewsListExtracted(const NewsList & items, QDate date)
{
    if(items.length()) {
        qDebug() << "[M] [News] : Found news in cache.";
        emit newsListFound(items);
    }
    else {
        qDebug() << "[M] [News] : Cache is empty, trying download some news.";
        emit downloadNewsList(date);
    }
}

void Model::ongetDevicesList()
{
    if(devices.isEmpty()) {
        qDebug() << "[M] [DEVICE] : Trying to fetch device data from server.";
        emit downloadDevicesList();
    }
    else {
        qDebug() << "[M] [DEVICE] : Devices successfully found.";
        emit devicesListFound(devices);
    }
}

void Model::onactivateDevice(QString id)
{
    activeDeviceID = "None";
    for(auto & dev : devices) {
        if(dev.getId() == id) {
            dev.setActivated(true);
            activeDeviceID = dev.getId();
        }
        else
            dev.setActivated(false);
    }
    qDebug() << "[M] [DEVICE] : Device successfully activated.";
    emit devicesListChanged();
    emit activeDeviceChanged();
}

void Model::ongetFullDevice()
{
    qDebug() << "[M] [FULL DEV] : Full device successfully found.";
    emit fullDeviceFound(fulldevID);
}

void Model::ongetAccountData()
{
    qDebug() << "[M] [ACCOUNT] : Sending account data.";
    emit accountDataFound(account);
}

void Model::onaddDevice(QString id)
{
    if(devices.length() < 1)
        emit checkDevicePresence(id);
}

void Model::ongetMeasureList()
{
    if(measures.isEmpty()) {
        qDebug() << "[M] [MEASURE] : Trying to fetch measure data from server.";
        if(devices.isEmpty()) {
            qDebug() << "[M] [MEASURE] : No device to fetch.";
        }
        else {
            for(auto dev : devices)
                if(dev.getActivated())
                    emit downloadMeasurements(dev.getId());
        }

    }
    else {
        qDebug() << "[M] [MEASURE] : Measurements successfully found.";
        emit measureListFound(measures);
    }
}

void Model::ongetLimitsList()
{
    qDebug() << "[M] [LIMITS] : Limits successfully found.";
    emit limitsListFound(limits);
}

void Model::onsetLimits(float radius, QString id)
{
    qDebug() << "[M] [LIMITS] : Limits successfully changed.";
    for(int i = 0; i < limits.length(); i++)
        if(limits[i].getId() == id) {
            limits[i].setLatitude(measures[i].getLatitude());
            limits[i].setLongitude(measures[i].getLongitude());
            limits[i].setRadius(radius);
        }
    emit limitsListChanged();
}

void Model::ongetActiveDevice()
{
    qDebug() << "[M] [ACTIVE DEV] : Active device successfully found.";
    emit activeDeviceFound(activeDeviceID);
}

void Model::ongetHistory()
{
    qDebug() << "[M] [HISTORY] : History successfully found.";
    emit historyFound(history);
}

void Model::onauthorize(QString log, QString pas)
{
    emit authOnCloud(log, pas);
}

void Model::ondangerSituation(DangerSituation ds)
{
    qDebug() << "[M] [HISTORY] : Situation successfully added.";
    history.append(ds);
    emit historyChanged();
}

void Model::onnewsDownloaded(const NewsList & items)
{
    qDebug() << "[M] [News] : News successfully downloaded.";
    emit insertNewsList(items);
    emit newsListFound(items);
}


void Model::onuserDataDownloaded(QString name, QString avatar, QString information, int devicecount, QDate reg, QString accstatus, QString login)
{
    account.setName(name);
    account.setAvatar(avatar);
    account.setInformation(information);
    account.setDevicecount(devicecount);
    account.setReg(reg);
    account.setAccstatus(accstatus);
    account.setLogin(login);
    account.setAuthorized(1);
    emit accountDataChanged();
}

void Model::onuserDataUnavailable()
{
    emit infoMessage("Аккаунт", "Невозможно получить данные аккаунта.");
}

void Model::onauthorizationSucceed()
{
    emit infoMessage("Информация", "Авторизация прошла успешно");
    emit downloadAccountData();
}

void Model::onauthorizationFailed()
{
    emit infoMessage("Ошибка", "Неправильный логин или пароль");
}

void Model::onconnectionEstablished()
{
    for(auto & x : devices) {
        if (x.getActivated()) {
            x.setConnected(true);
            x.setStatus(true);
            fulldevID = x.getId();
        }
    }
    emit measureListChanged();
    emit infoMessage("Информация", "Соединение с устроиством установлено");
    emit fullDeviceChanged();
    emit devicesListChanged();
}

void Model::onconnectionLost()
{
    for(auto & x : devices) {
        if (x.getActivated() && x.getConnected()) {
            x.setStatus(false);
            x.setConnected(false);
            fulldevID = "None";
        }
    }
    emit measureListChanged();
    emit historyChanged();
    emit infoMessage("Ошибка", "Соединение с устроиством потеряно");
    emit fullDeviceChanged();
    emit devicesListChanged();
}

void Model::onmeasurementsDownloaded(Measurements m)
{
   if(measures.isEmpty())
        return;
    else {
        for (int i = 0; i < measures.length(); i++)
            if (measures[i].getId() == m.getId()) {
                measures[i] = m;

                emit measureListChanged();
                emit checkLimits();
            }
   }
}

void Model::onmeasureDataUnavailable()
{
    //SOME HANDLER
}

void Model::ondeviceInfoDownloaded(Device dev)
{
    qDebug() << "[M] [DEVICE] : Trying to register device.";
    devices.append(dev);
    measures.append(Measurements(dev.getId(),0,0,0,0,0,0,0,0,0,0,0));
    limits.append(Limits(dev.getId(),0,0,0));
    history.clear();
    emit devicesListChanged();
    emit measureListChanged();
    emit limitsListChanged();
    emit infoMessage("Информация", "Устройство успешно добавлено");
}

void Model::ondeviceInfoUnavailable()
{
    emit infoMessage("Ошибка", "Данного устроиства нет в базе.");
}



