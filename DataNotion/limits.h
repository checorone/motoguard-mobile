#ifndef LIMITS_H
#define LIMITS_H
#include <QString>

class Limits
{
private:
    QString id;
    float radius;
    float latitude;
    float longitude;
public:
    Limits() {}
    Limits(QString id, float radius, float latitude, float longitude);
    QString getId() const;
    void setId(const QString &value);
    float getRadius() const;
    void setRadius(float value);
    float getLatitude() const;
    void setLatitude(float value);
    float getLongitude() const;
    void setLongitude(float value);
};

typedef QList<Limits> LimitsList;
#endif // LIMITS_H
