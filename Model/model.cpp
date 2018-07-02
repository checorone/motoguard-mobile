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

    notifyUnit = new NotifyUnit(measures, notifysettings, limits, activeDeviceID);

    QObject::connect(this,SIGNAL(extractNewsList(QDate)),dataUnit, SLOT(onextractNewsList(QDate)));
    QObject::connect(this,SIGNAL(insertNewsList(const NewsList &)),dataUnit, SLOT(oninsertNewsList(const NewsList &)));
    QObject::connect(dataUnit,SIGNAL(newsListExtracted(const NewsList &, QDate)),this, SLOT(onnewsListExtracted(const NewsList &, QDate)));

    QObject::connect(this,SIGNAL(downloadAccountData()),networkUnit, SLOT(ondownloadAccountData()));
    QObject::connect(this,SIGNAL(authOnCloud(QString,QString)),networkUnit, SLOT(onauth(QString,QString)));
    QObject::connect(networkUnit,SIGNAL(authorizationSucceed()), this, SIGNAL(downloadAccountData()));
    QObject::connect(networkUnit,SIGNAL(userDataDownloaded(QString,QString,QString,int,QDate,QString,QString)),
                     this, SLOT(onuserDataDownloaded(QString,QString,QString,int,QDate,QString,QString)));

    QObject::connect(networkUnit,SIGNAL(connectionEstablished()), this, SLOT(onEstablished()));
    QObject::connect(networkUnit,SIGNAL(connectionLost()), this, SLOT(onLost()));
    QObject::connect(networkUnit,SIGNAL(measureDataDownloaded(Measurements)), this, SLOT(onDown(Measurements)));

    QObject::connect(this,SIGNAL(measureListFound(MeasureList)),notifyUnit, SLOT(onmeasureListFound(MeasureList)));
    QObject::connect(this,SIGNAL(notifySettingsFound(NotifyList)),notifyUnit, SLOT(onnotifyListFound(NotifyList)));
    QObject::connect(this,SIGNAL(limitsListFound(LimitsList)),notifyUnit, SLOT(onlimitsListFound(LimitsList)));
    QObject::connect(this,SIGNAL(activeDeviceFound(QString)),notifyUnit, SLOT(onactiveDeviceFound(QString)));
    QObject::connect(networkUnit,SIGNAL(connectionLost()), notifyUnit, SLOT(onconnectionLost()));
    QObject::connect(notifyUnit,SIGNAL(dangerSituation(DangerSituation)),this, SLOT(ondangerSituation(DangerSituation)));


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

void Model::ondevicesDownloaded(const DeviceList &items)
{
    qDebug() << "[M] [DEVICE] : Devices successfully downloaded.";
    devices.clear();
    devices.append(items);
    emit devicesListFound(devices);
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
        if(dev.getId() == id)
            dev.setActivated(true);
        else
            dev.setActivated(false);
        if(dev.getActivated() && dev.getConnected()) {
            dev.setStatus(true);
            activeDeviceID = dev.getId();
            history.clear();
        }
        else
            dev.setStatus(false);
    }
    qDebug() << "[M] [DEVICE] : Device successfully activated.";
    emit devicesListChanged();
    emit activeDeviceChanged();
}

void Model::ongetAccountData()
{
    qDebug() << "[M] [ACCOUNT] : Sending account data.";
    emit accountDataFound(account);
}

void Model::onaddDevice(QString id)
{
    qDebug() << "[M] [DEVICE] : Trying to register device.";
    devices.append(Device(id, 0,0,0, "Стандартное устроиство."));
    measures.append(Measurements(id,0,0,0,0,0,0,0,0,0,0,0));
    limits.append(Limits(id,0,0,0));
    history.clear();
    //emit registerDevice(id);
    emit devicesListChanged();
    emit measureListChanged();
    emit limitsListChanged();
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

void Model::onauthorize(QString log, QString pas)
{
    emit authOnCloud(log, pas);
}

void Model::ongetHistory()
{
    qDebug() << "[M] [HISTORY] : History successfully found.";
    emit historyFound(history);
}

void Model::onmeasurementsDownloaded(const Measurements &measure)
{

}

void Model::onauthGrant(const Account &)
{

}

void Model::onEstablished()
{
    for(auto & x : devices)
        x.setConnected(1);
    emit devicesListChanged();
}

void Model::onLost()
{
    for(auto & x : devices)
        x.setConnected(0);
    emit devicesListChanged();
}

void Model::onDown(Measurements m)
{
   if(measures.isEmpty())
        return;
    else {
        for (int i = 0; i < measures.length(); i++)
            if (measures[i].getId() == m.getId()) {
                measures[i] = m;

                emit measureListChanged();
            }
    }
     qDebug() << "Here!";
}

void Model::ondangerSituation(DangerSituation ds)
{
    qDebug() << "[M] [HISTORY] : Situation successfully added.";
    history.append(ds);
    emit historyChanged();
}
