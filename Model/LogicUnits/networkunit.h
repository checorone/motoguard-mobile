#ifndef NETWORKUNIT_H
#define NETWORKUNIT_H

#include <QObject>
#include "DataNotion/account.h"
#include "DataNotion/measurements.h"

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
    QString & activeDev;

    QString prevmsg_id;
    bool active;
    bool first;
    int counter;

    void getAccountData();
public:
    explicit NetworkUnit(QString & act, QObject * parent = 0);

signals:
    void authorizationSucceed();
    void authorizationFailed();
    void userDataDownloaded(QString name, QString avatar, QString information, int devicecount,
                            QDate reg, QString accstatus, QString login);
    void connectionLost();
    void connectionEstablished();
    void measureDataDownloaded(Measurements);
private slots:
    void onUserDataFinished();
    void onAuthorizationFinished();
    void onDownloadData();
    void onMeasureDataFinished();
public slots:
    void onauth(QString, QString);
    void ondownloadAccountData();
};

#endif // MAINNETWORKUNIT_H
