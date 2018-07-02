#ifndef NOTIFYSELECTOR_H
#define NOTIFYSELECTOR_H

#include <QString>

class NotifySelector
{
private:
    QString name;
    bool enable;
public:
    NotifySelector() {}
    NotifySelector(QString name, bool enable);
    ~NotifySelector();


    QString getName() const;
    bool getEnable() const;

    void setName(const QString &value);
    void setEnable(bool value);
};

typedef QList<NotifySelector> NotifyList;

#endif // NOTIFYSELECTOR_H
