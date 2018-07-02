#include "measurements.h"

double Measurements::getLatitude() const
{
    return latitude;
}

void Measurements::setLatitude(double value)
{
    latitude = value;
}

double Measurements::getLongitude() const
{
    return longitude;
}

void Measurements::setLongitude(double value)
{
    longitude = value;
}

double Measurements::getDop() const
{
    return dop;
}

void Measurements::setDop(double value)
{
    dop = value;
}

double Measurements::getSpeed() const
{
    return speed;
}

void Measurements::setSpeed(double value)
{
    speed = value;
}

double Measurements::getVibration() const
{
    return vibration;
}

void Measurements::setVibration(double value)
{
    vibration = value;
}

double Measurements::getGx() const
{
    return gx;
}

void Measurements::setGx(double value)
{
    gx = value;
}

double Measurements::getGy() const
{
    return gy;
}

void Measurements::setGy(double value)
{
    gy = value;
}

double Measurements::getGz() const
{
    return gz;
}

void Measurements::setGz(double value)
{
    gz = value;
}

double Measurements::getDegx() const
{
    return degx;
}

void Measurements::setDegx(double value)
{
    degx = value;
}

double Measurements::getDegy() const
{
    return degy;
}

void Measurements::setDegy(double value)
{
    degy = value;
}

double Measurements::getDegz() const
{
    return degz;
}

void Measurements::setDegz(double value)
{
    degz = value;
}

Measurements::Measurements(QString id, double latitude, double longitude, double dop, double speed, double vibration,
                           double gx, double gy, double gz, double degx, double degy, double degz) :
    id(id), latitude(latitude), longitude(longitude), dop(dop), speed(speed), vibration(vibration),
    gx(gx), gy(gy), gz(gz), degx(degx), degy(degy), degz(degz)
{

}

QString Measurements::getId() const
{
    return id;
}

void Measurements::setId(const QString &value)
{
    id = value;
}

Measurements::~Measurements()
{
    
}
