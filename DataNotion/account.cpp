#include "account.h"


QString Account::getAvatar() const
{
    return avatar;
}

void Account::setAvatar(const QString &value)
{
    avatar = value;
}

QString Account::getInformation() const
{
    return information;
}

void Account::setInformation(const QString &value)
{
    information = value;
}

int Account::getDevicecount() const
{
    return devicecount;
}

void Account::setDevicecount(int value)
{
    devicecount = value;
}

QDate Account::getReg() const
{
    return reg;
}

void Account::setReg(const QDate &value)
{
    reg = value;
}

QString Account::getAccstatus() const
{
    return accstatus;
}

void Account::setAccstatus(const QString &value)
{
    accstatus = value;
}

QString Account::getLogin() const
{
    return login;
}

void Account::setLogin(const QString &value)
{
    login = value;
}

bool Account::getAuthorized() const
{
    return authorized;
}

void Account::setAuthorized(bool value)
{
    authorized = value;
}

Account::Account() : name("Unknown"), avatar("None"), information("None"), devicecount(0), reg(QDate::currentDate()),
    accstatus("Unknown"), login("Unknown@mail.com"), authorized(0)
{

}

Account::Account(QString name, QString avatar, QString information, int devicecount,
                 QDate reg, QString accstatus, QString login, bool authorized) : name(name), avatar(avatar), information(information),
    devicecount(devicecount), reg(reg), accstatus(accstatus), login(login), authorized(authorized)
{

}

QString Account::getName() const
{
    return name;
}

void Account::setName(const QString &value)
{
    name = value;
}
