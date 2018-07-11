#include "notifyunit.h"
#include <QtAndroidExtras/QAndroidJniObject>
#include <QTimer>
#include <QThread>

NotifyUnit::NotifyUnit(MeasureList ml, NotifyList nf, LimitsList ls, QString activeDeviceId) :QObject(0),  ml(ml), nf(nf), ls(ls), activeDeviceId(activeDeviceId)
{
//    QTimer* timer = new QTimer(this);
//    timer->setInterval(10000);
//    timer->start(10000);
//    connect(timer, SIGNAL(timeout()), this, SLOT(checkLimits()));

//    QThread* thread = new QThread();
//    this->moveToThread(thread);
//    thread->start();
}

void NotifyUnit::sendNotification(QString notify, float latitude, float longitude)
{
    QAndroidJniObject javaNotification = QAndroidJniObject::fromString(notify.toStdString().c_str());
    QAndroidJniObject::callStaticMethod<void>("org/qtproject/example/notification/NotificationClient",
                                       "notify",
                                       "(Ljava/lang/String;)V",
                                       javaNotification.object<jstring>());
    emit dangerSituation(DangerSituation(activeDeviceId,latitude, longitude, notify, QDateTime::currentDateTime()));
}

void NotifyUnit::oncheckLimits()
{
    QMap<QString, bool> map;
    for(auto notify : nf)
        map[notify.getName()] = notify.getEnable();

    for(int i = 0; i < ml.length(); i++) {
        if(ml[i].getId() == activeDeviceId) {
            if(map["Высокая скорость"] && ml[i].getSpeed() > 60)
                sendNotification("Скорость больше 60 км/ч!", ml[i].getLatitude(), ml[i].getLongitude());

            if(map["Удар"] && ml[i].getVibration() > 2000)
                sendNotification("Был зафиксирован удар!", ml[i].getLatitude(), ml[i].getLongitude());

            if(map["Падение"] && ml[i].getDegy() > 20)
                sendNotification("Зафиксировано падение!", ml[i].getLatitude(), ml[i].getLongitude());

            if(map["Резкое торможение"] && ml[i].getGy() > 2)
                sendNotification("Аварийное торможение!", ml[i].getLatitude(), ml[i].getLongitude());

            if(map["Выход за пределы области"] && ls[i].getRadius() != 0)
                if(sqrt(pow(ml[i].getLatitude() - ls[i].getLatitude(), 2) + pow(ml[i].getLongitude() - ls[i].getLongitude(), 2)) > ls[i].getRadius())
                    sendNotification("Выход из допустимой зоны!", ml[i].getLatitude(), ml[i].getLongitude());

        }
    }
}

void NotifyUnit::onconnectionLost()
{
    for(int i = 0; i < ml.length(); i++)
        if(ml[i].getId() == activeDeviceId)
            sendNotification("Потеряно соединение с устройством!", ml[i].getLatitude(), ml[i].getLongitude());
}

void NotifyUnit::onmeasureListFound(MeasureList items)
{
    ml = items;
}

void NotifyUnit::onnotifyListFound(NotifyList items)
{
    nf = items;
}

void NotifyUnit::onlimitsListFound(LimitsList items)
{
    ls = items;
}

void NotifyUnit::onactiveDeviceFound(QString id)
{
    activeDeviceId = id;
}
