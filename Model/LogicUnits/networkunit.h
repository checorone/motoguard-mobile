#ifndef NETWORKUNIT_H
#define NETWORKUNIT_H

#include <QObject>
#include "DataNotion/account.h"
#include "DataNotion/measurements.h"
#include "DataNotion/device.h"

#include <QtNetworkAuth>

class NetworkUnit : public QObject
{
    Q_OBJECT
private:
    QNetworkAccessManager * m_networkManager;

    QString token;
    QString token_type;
    QString refresh_token;
    int expires;

    QString activeDev;

    QString prevmsg_id;
    bool active;
    bool first;
    int counter;

    QTimer dataTimer;

    static QString zuuladdr;
    static QString devtoken;
public:
    explicit NetworkUnit(QString active, QObject * parent = 0);

signals:
    void authorizationSucceed();
    void authorizationFailed();
    void userDataDownloaded(QString name, QString avatar, QString information, int devicecount,
                            QDate reg, QString accstatus, QString login);
    void userDataUnavailable();
    void connectionLost();
    void connectionEstablished();
    void measureDataDownloaded(Measurements);
    void measureDataUnavailable();
    void deviceInfoDownloaded(Device);
    void deviceInfoUnavailable();
    void getactiveDevice();
private slots:
    void onUserDataFinished();
    void onAuthorizationFinished();
    void onMeasureDataFinished();
    void onDeviceInfoFinished();
    void onDownloadData();
public slots:
    void onactiveDeviceFound(QString);

    void onauth(QString, QString);
    void ondownloadAccountData();
    void ongetDeviceInfo(QString);
};

#endif // MAINNETWORKUNIT_H
