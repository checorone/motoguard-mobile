#ifndef DANGERSITUATION_H
#define DANGERSITUATION_H

#include <QString>
#include <QDateTime>

class DangerSituation
{
private:
    QString id;
    float latitude;
    float longitude;
    QString text;
    QDateTime datetime;

public:
    DangerSituation();
    DangerSituation(QString id, float latitude, float longitude, QString text, QDateTime datetime);
    float getLatitude() const;
    void setLatitude(float value);
    float getLongitude() const;
    void setLongitude(float value);
    QString getText() const;
    void setText(const QString &value);
    QDateTime getDatetime() const;
    void setDatetime(const QDateTime &value);
    QString getId() const;
    void setId(QString value);
};

typedef QList<DangerSituation> SituationList;

#endif // DANGERSITUATION_H
