#include "deviceslistmodel.h"

DevicesListModel::DevicesListModel(QObject *parent) : QAbstractListModel(parent)
{

}

DevicesListModel::~DevicesListModel()
{

}


void DevicesListModel::append(const DeviceList & items)
{
    beginInsertRows(QModelIndex(), m_data.count(), m_data.count()+items.count()-1);
    m_data.append(items);
    endInsertRows();
}

void DevicesListModel::clear()
{
    if(m_data.count())
    {
        beginRemoveRows(QModelIndex(), 0, m_data.count());
        m_data.clear();
        endRemoveRows();
    }
}

int DevicesListModel::rowCount(const QModelIndex &parent) const
{
    Q_UNUSED(parent);
    return m_data.count();
}

QVariant DevicesListModel::data(const QModelIndex &index, int role) const
{
    if(index.isValid() == false)
        return QVariant();

    if(index.row() < 0 || index.row() >= m_data.count())
        return QVariant();

    switch (role)
    {
    case idRole:
        return m_data.at(index.row()).getId();
    case activatedRole:
        return m_data.at(index.row()).getActivated();
    case statusRole:
        return  m_data.at(index.row()).getStatus();
    case connectedRole:
        return m_data.at(index.row()).getConnected();
    case typeRole:
        return m_data.at(index.row()).getType();
    default:
        return QVariant();
    }
}

QHash<int, QByteArray> DevicesListModel::roleNames() const
{
    QHash<int, QByteArray> roles;
    roles[idRole] = "id";
    roles[activatedRole] = "activated";
    roles[statusRole] = "status";
    roles[connectedRole] = "connected";
    roles[typeRole] = "type";
    return roles;
}
