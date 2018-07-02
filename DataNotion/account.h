#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <QObject>
#include <QString>
#include <QDate>

class Account : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString name READ getName WRITE setName NOTIFY nameChanged)
    Q_PROPERTY(QString avatar READ getAvatar WRITE setAvatar NOTIFY avatarChanged)
    Q_PROPERTY(QString information READ getInformation WRITE setInformation NOTIFY informationChanged)
    Q_PROPERTY(int devicecount READ getDevicecount WRITE setDevicecount NOTIFY deviceCountChanged)
    Q_PROPERTY(QDate reg READ getReg WRITE setReg NOTIFY regChanged)
    Q_PROPERTY(QString accstatus READ getAccstatus WRITE setAccstatus NOTIFY accstatusChanged)
    Q_PROPERTY(QString login READ getLogin WRITE setLogin NOTIFY loginChanged)
    Q_PROPERTY(bool authorized READ getAuthorized WRITE setAuthorized NOTIFY authorizedChanged)

private:
    QString name;
    QString avatar;
    QString information;
    int devicecount;
    QDate reg;
    QString accstatus;
    QString login;
    bool authorized;

public:
    Account();
    Account(QString name, QString avatar, QString information, int devicecount,
         QDate reg, QString accstatus, QString login, bool authorized);

    QString getName() const;
    void setName(const QString &value);
    QString getAvatar() const;
    void setAvatar(const QString &value);
    QString getInformation() const;
    void setInformation(const QString &value);
    int getDevicecount() const;
    void setDevicecount(int value);
    QDate getReg() const;
    void setReg(const QDate &value);
    QString getAccstatus() const;
    void setAccstatus(const QString &value);
    QString getLogin() const;
    void setLogin(const QString &value);
    bool getAuthorized() const;
    void setAuthorized(bool value);

signals:
    void nameChanged();
    void avatarChanged();
    void informationChanged();
    void deviceCountChanged();
    void regChanged();
    void accstatusChanged();
    void authorizedChanged();
    void loginChanged();
};

#endif // ACCOUNT_H
