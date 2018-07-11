#ifndef DEVICE_H
#define DEVICE_H

#include <QString>

class Device
{
private:
    QString id;
    QString artikId;
    bool activated;
    bool connected;
    bool status;
    QString type;
public:
    Device() {}
    Device(QString id, QString artikId, bool activated, bool connected, bool status, QString type);
    ~Device();

    QString getId() const;
    QString getArtikId() const;
    bool getActivated() const;
    bool getConnected() const;
    bool getStatus() const;
    QString getType() const;

    void setId(const QString &value);
    void setActivated(bool value);
    void setConnected(bool value);
    void setStatus(bool value);
    void setType(const QString &value);
    void setArtikId(const QString &value);
};

typedef QList<Device> DeviceList;

#endif // DEVICE_H
