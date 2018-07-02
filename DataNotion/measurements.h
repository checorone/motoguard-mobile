#ifndef MEASUREMENTS_H
#define MEASUREMENTS_H

#include <QList>

class Measurements
{
private:
    QString id;
    double latitude;
    double longitude;
    double dop;
    double speed;
    double vibration;
    double gx;
    double gy;
    double gz;
    double degx;
    double degy;
    double degz;

public:
    Measurements() {}
    Measurements(QString id, double latitude, double longitude, double dop, double speed, double vibration,
                 double gx, double gy, double gz, double degx, double degy, double degz);
    ~Measurements();
    double getLatitude() const;
    void setLatitude(double value);
    double getLongitude() const;
    void setLongitude(double value);
    double getDop() const;
    void setDop(double value);
    double getSpeed() const;
    void setSpeed(double value);
    double getVibration() const;
    void setVibration(double value);
    double getGx() const;
    void setGx(double value);
    double getGy() const;
    void setGy(double value);
    double getGz() const;
    void setGz(double value);
    double getDegx() const;
    void setDegx(double value);
    double getDegy() const;
    void setDegy(double value);
    double getDegz() const;
    void setDegz(double value);
    QString getId() const;
    void setId(const QString &value);
};

typedef QList<Measurements> MeasureList;

#endif // MEASUREMENTS_H
