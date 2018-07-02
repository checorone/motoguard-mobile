#include "notifyselector.h"

QString NotifySelector::getName() const
{
    return name;
}

void NotifySelector::setName(const QString &value)
{
    name = value;
}

bool NotifySelector::getEnable() const
{
    return enable;
}

void NotifySelector::setEnable(bool value)
{
    enable = value;
}

NotifySelector::NotifySelector(QString name, bool enable) : name(name), enable(enable)
{

}

NotifySelector::~NotifySelector()
{

}
