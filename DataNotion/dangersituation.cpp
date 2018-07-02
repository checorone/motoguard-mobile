#include "dangersituation.h"

float DangerSituation::getLongitude() const
{
    return longitude;
}

void DangerSituation::setLongitude(float value)
{
    longitude = value;
}

QString DangerSituation::getText() const
{
    return text;
}

void DangerSituation::setText(const QString &value)
{
    text = value;
}

QDateTime DangerSituation::getDatetime() const
{
    return datetime;
}

void DangerSituation::setDatetime(const QDateTime &value)
{
    datetime = value;
}

QString DangerSituation::getId() const
{
    return id;
}

void DangerSituation::setId(QString value)
{
    id = value;
}

DangerSituation::DangerSituation()
{

}

DangerSituation::DangerSituation(QString id, float latitude, float longitude, QString text, QDateTime datetime) : id(id), latitude(latitude), longitude(longitude), text(text),
    datetime(datetime)
{

}

float DangerSituation::getLatitude() const
{
    return latitude;
}

void DangerSituation::setLatitude(float value)
{
    latitude = value;
}
