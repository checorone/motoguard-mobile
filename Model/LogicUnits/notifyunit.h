#ifndef NOTIFYUNIT_H
#define NOTIFYUNIT_H

#include <QObject>
#include "DataNotion/measurements.h"
#include "DataNotion/notifyselector.h"
#include "DataNotion/limits.h"
#include "DataNotion/dangersituation.h"

class NotifyUnit : public QObject
{
    Q_OBJECT
private:
    MeasureList ml;
    NotifyList nf;
    LimitsList ls;
    QString activeDeviceId;

    void sendNotification(QString notify, float latitude, float longitude);
public:
    NotifyUnit(MeasureList, NotifyList, LimitsList, QString);

signals:
    void dangerSituation(DangerSituation);

    void getMeasureList();
    void getNotifyList();
    void getLimitsList();
    void getActiveDevice();


public slots:
    void onconnectionLost();

    void onmeasureListFound(MeasureList);
    void onnotifyListFound(NotifyList);
    void onlimitsListFound(LimitsList);
    void onactiveDeviceFound(QString);
    void oncheckLimits();

};

#endif // NOTIFYUNIT_H
