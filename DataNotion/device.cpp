#include "device.h"

QString Device::getId() const
{
    return id;
}

void Device::setId(const QString &value)
{
    id = value;
}

bool Device::getActivated() const
{
    return activated;
}

void Device::setActivated(bool value)
{
    activated = value;
}

bool Device::getConnected() const
{
    return connected;
}

void Device::setConnected(bool value)
{
    connected = value;
}

bool Device::getStatus() const
{
    return status;
}

void Device::setStatus(bool value)
{
    status = value;
}

QString Device::getType() const
{
    return type;
}

void Device::setType(const QString &value)
{
    type = value;
}

Device::Device(QString id, bool activated, bool connected, bool status, QString type) : id(id),
    activated(activated), connected(connected),
    status(status), type(type)
{

}

Device::~Device() {

}

