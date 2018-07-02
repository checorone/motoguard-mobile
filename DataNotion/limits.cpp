#include "limits.h"


QString Limits::getId() const
{
    return id;
}

void Limits::setId(const QString &value)
{
    id = value;
}

float Limits::getRadius() const
{
    return radius;
}

void Limits::setRadius(float value)
{
    radius = value;
}

float Limits::getLatitude() const
{
    return latitude;
}

void Limits::setLatitude(float value)
{
    latitude = value;
}

float Limits::getLongitude() const
{
    return longitude;
}

void Limits::setLongitude(float value)
{
    longitude = value;
}

Limits::Limits(QString id, float radius, float latitude, float longitude) : id(id), radius(radius), latitude(latitude), longitude(longitude)
{

}
