#ifndef AUTHLISTMODEL_H
#define AUTHLISTMODEL_H

#include<QAbstractListModel>

#include "DataNotion/account.h"

class AuthListModel: public QAbstractListModel
{
    Q_OBJECT

private:
    AuthList m_data;

    enum Roles
    {
        nameRole = Qt::DisplayRole,
        avatarRole = Qt::UserRole + 1,
        informationRole = Qt::UserRole + 2,
        devicecountRole = Qt::UserRole + 3,
        regRole = Qt::UserRole + 4,
        accstatusRole = Qt::UserRole + 5,
        loginRole = Qt::UserRole + 6
    };

public:
    explicit AuthListModel(QObject *parent = 0);
    virtual ~AuthListModel();

public: /*User-defined methods*/
    void append(const AuthList & items);
    void clear();

public: /*Reimplemented methods*/
    virtual int rowCount(const QModelIndex &parent) const override final;
    virtual QVariant data(const QModelIndex &index, int role) const override final;
    virtual QHash<int, QByteArray> roleNames() const override final;

};

#endif // AUTHLISTMODEL_H
