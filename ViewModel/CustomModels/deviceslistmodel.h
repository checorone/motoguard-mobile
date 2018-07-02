#ifndef DEVICESLISTMODEL_H
#define DEVICESLISTMODEL_H

#include<QAbstractListModel>

#include "DataNotion/device.h"

class DevicesListModel: public QAbstractListModel
{
    Q_OBJECT

private:
    DeviceList m_data;

    enum Roles
    {
        idRole = Qt::DisplayRole,
        activatedRole = Qt::UserRole + 1,
        statusRole = Qt::UserRole + 2,
        connectedRole = Qt::UserRole + 3,
        typeRole = Qt::UserRole + 4
    };

public:
    explicit DevicesListModel(QObject *parent = 0);
    virtual ~DevicesListModel();

public: /*User-defined methods*/
    void append(const DeviceList & items);
    void clear();

public: /*Reimplemented methods*/
    virtual int rowCount(const QModelIndex &parent) const override final;
    virtual QVariant data(const QModelIndex &index, int role) const override final;
    virtual QHash<int, QByteArray> roleNames() const override final;

};

#endif // DEVICESLISTMODEL_H
