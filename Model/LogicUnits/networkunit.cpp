#include "networkunit.h"
#include <QDebug>
#include <QDesktopServices>
#include <QJsonArray>
#include <QJsonObject>

QString NetworkUnit::zuuladdr = "79.137.175.144:5555";
QString NetworkUnit::devtoken = "c8f17e3149174eb18959dce27b6381ff";

NetworkUnit::NetworkUnit(QString actd, QObject * parent) : activeDev(actd), QObject (parent)
{
    m_networkManager = new QNetworkAccessManager(this);

    dataTimer.setInterval(20000);
    connect(&dataTimer, SIGNAL(timeout()), this, SLOT(onDownloadData()));

    first = true;
    active = false;
    counter = 0;
}

void NetworkUnit::onDownloadData()
{
    QUrl url("http://" + zuuladdr + "/api/data/" + activeDev);

    QNetworkRequest request;
    request.setUrl(url);
    request.setRawHeader("Authorization", (QString("Bearer ") + devtoken).toStdString().c_str());

    qDebug() << "Attempt to get measure data";
    auto reply = m_networkManager->get(request);
    connect(reply, SIGNAL(finished()), this, SLOT(onMeasureDataFinished()));
}

void NetworkUnit::onMeasureDataFinished()
{
    QNetworkReply* reply = qobject_cast<QNetworkReply*>(sender());
    const QByteArray buffer = reply->readAll();
    QString response = QString::fromUtf8(buffer);
    QString status = reply->attribute(QNetworkRequest::HttpStatusCodeAttribute).toString();
    if (reply)
    {
        if (status == "200")
        {
            QJsonObject json = QJsonDocument::fromJson(buffer).object();

            if(prevmsg_id == json["data"].toArray()[0].toObject().value("mid").toString()) {
                if (counter > 0) {
                    if(active == true) {
                        emit connectionLost();
                        active = false;
                        first = true;
                    }
                }
                else counter++;

            }
            else {
                prevmsg_id = json["data"].toArray()[0].toObject().value("mid").toString();
                counter = 0;
                if (active == false && first == false) {
                    active = true;
                    emit connectionEstablished();
                }
            }

            first = false;
            QJsonObject data = json["data"].toArray()[0].toObject();
            data = data.value("data").toObject();
            Measurements measure(activeDev, data.value("latitude").toDouble(), data.value("longitude").toDouble(), data.value("speed").toDouble(), data.value("dop").toDouble(),
                                 data.value("vibration").toDouble(), data.value("gx").toDouble(), data.value("gy").toDouble(), data.value("gz").toDouble(), data.value("degx").toDouble(), data.value("degy").toDouble(),
                                 data.value("degz").toDouble());
            qDebug() << "Data" << measure.getLatitude() << "  " << measure.getLongitude() << json["data"].toArray()[0].toObject().value("mid").toString();

            emit measureDataDownloaded(measure);

        }
        else
        {
            //refresh token
            emit measureDataUnavailable();
        }

        qDebug()<<"code: "<<status<<" response: "<<response;
        reply->deleteLater();

    }
}

void NetworkUnit::onDeviceInfoFinished()
{
    QNetworkReply* reply = qobject_cast<QNetworkReply*>(sender());
    const QByteArray buffer = reply->readAll();
    QString response = QString::fromUtf8(buffer);
    QString status = reply->attribute(QNetworkRequest::HttpStatusCodeAttribute).toString();
    if (reply)
    {
        qDebug()<<"code: "<<status<<" response: "<<response;
        if (status == "200")
        {
            QJsonObject json = QJsonDocument::fromJson(buffer).object();
            Device device(json.value("id").toString(), json.value("artikId").toString(),0,0,0, json.value("deviceType").toString());
            emit deviceInfoDownloaded(device);
        }
        else
        {
            //refresh token
            emit deviceInfoUnavailable();
        }
        reply->deleteLater();
    }

}


void NetworkUnit::onUserDataFinished()
{
    QNetworkReply* reply = qobject_cast<QNetworkReply*>(sender());
    const QByteArray buffer = reply->readAll();
    qDebug() << "first";
    QString response = QString::fromUtf8(buffer);
    QString status = reply->attribute(QNetworkRequest::HttpStatusCodeAttribute).toString();
    if (reply)
    {
        if (status == "200")
        {
            QJsonObject json = QJsonDocument::fromJson(buffer).object();
//            login = json.value("user");
//            refresh_token = json.value("refresh_token").toString();
//            token_type = json.value("token_type").toString();
//            expires = json.value("expires_in").toInt();
            qDebug() << "Auth:  " << token_type << "  " << token << "  " << refresh_token << "  " << expires;
            emit userDataDownloaded("Admin Admin", "https://publicdomainvectors.org/photos/red_avatar.png", "Веселый, общительный", 2, QDate::currentDate().addDays(-13),"ADMIN","admin@gmail.com");
        }
        else
        {
            //refresh token
            emit userDataUnavailable();
        }

        qDebug()<<"code: "<<status<<" response: "<<response;
        reply->deleteLater();

    }
}

void NetworkUnit::onAuthorizationFinished()
{
    QNetworkReply* reply = qobject_cast<QNetworkReply*>(sender());
    const QByteArray buffer = reply->readAll();
    QString response = QString::fromUtf8(buffer);
    QString status = reply->attribute(QNetworkRequest::HttpStatusCodeAttribute).toString();
    if (reply)
    {
        if (status == "200")
        {
                QJsonObject json = QJsonDocument::fromJson(buffer).object();
                token = json.value("access_token").toString();
                refresh_token = json.value("refresh_token").toString();
                token_type = json.value("token_type").toString();
                expires = json.value("expires_in").toInt();
                qDebug() << "Auth:  " << token_type << "  " << token << "  " << refresh_token << "  " << expires;
                emit authorizationSucceed();
        }
        else
        {
            emit authorizationFailed();
        }

        qDebug()<<"code: "<<status<<" response: "<<response;
        reply->deleteLater();
    }
}

void NetworkUnit::onauth(QString log, QString pas)
{
    QUrl url("http://" + zuuladdr + "/api/auth/oauth/token");

    QNetworkRequest request;
    request.setUrl(url);
    QString authorizationKey =  QString("motoguard") + ":" + "secretpass";
    QByteArray encryptedAuth = authorizationKey.toUtf8().toBase64();
    request.setRawHeader("Authorization", "Basic "+ encryptedAuth);
    request.setRawHeader("Content-Type", "application/x-www-form-urlencoded");

    QUrlQuery payload;
    payload.addQueryItem("grant_type","password");
    payload.addQueryItem("scope","mobileclient");
    payload.addQueryItem("username",log);
    payload.addQueryItem("password",pas);
    QByteArray postData = payload.query(QUrl::FullyEncoded).toUtf8();

    qDebug() << "Attempt to grant";
    auto reply = m_networkManager->post(request, postData);
    connect(reply, SIGNAL(finished()), this, SLOT(onAuthorizationFinished()));
}

void NetworkUnit::ondownloadAccountData()
{
    QUrl url("http://" + zuuladdr + "/api/auth/user");

    QNetworkRequest request;
    request.setUrl(url);
    request.setRawHeader("Authorization", (token_type + " " + token).toUtf8() );

    qDebug() << "Attempt to get user data";
    auto reply = m_networkManager->get(request);
    connect(reply, SIGNAL(finished()), this, SLOT(onUserDataFinished()));
}

void NetworkUnit::ongetDeviceInfo(QString id)
{
    QUrl url("http://" + zuuladdr + "/api/devices/v1/" + id);

    QNetworkRequest request;
    request.setUrl(url);
    request.setRawHeader("Authorization", (token_type + " " + token).toUtf8() );

    qDebug() << "Attempt to get device info";
    auto reply = m_networkManager->get(request);
    connect(reply, SIGNAL(finished()), this, SLOT(onDeviceInfoFinished()));
}

void NetworkUnit::onactiveDeviceFound(QString id)
{
    activeDev = id;
    if(id != "None")
        dataTimer.start();
    else
        dataTimer.stop();
}

