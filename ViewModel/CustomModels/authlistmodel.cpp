#include "authlistmodel.h"

AuthListModel::AuthListModel(QObject *parent) : QAbstractListModel(parent)
{

}

AuthListModel::~AuthListModel()
{

}


void AuthListModel::append(const AuthList & items)
{
    beginInsertRows(QModelIndex(), m_data.count(), m_data.count()+items.count()-1);
    m_data.append(items);
    endInsertRows();
}

void AuthListModel::clear()
{
    if(m_data.count())
    {
        beginRemoveRows(QModelIndex(), 0, m_data.count());
        m_data.clear();
        endRemoveRows();
    }
}

int AuthListModel::rowCount(const QModelIndex &parent) const
{
    Q_UNUSED(parent);
    return m_data.count();
}

QVariant AuthListModel::data(const QModelIndex &index, int role) const
{
    if(index.isValid() == false)
        return QVariant();

    if(index.row() < 0 || index.row() >= m_data.count())
        return QVariant();

    switch (role)
    {
    case nameRole:
        return m_data.at(index.row()).getName();
    case avatarRole:
        return m_data.at(index.row()).getAvatar();
    case informationRole:
        return  m_data.at(index.row()).getInformation();
    case devicecountRole:
        return m_data.at(index.row()).getDevicecount();
    case regRole:
        return m_data.at(index.row()).getReg();
    case accstatusRole:
        return m_data.at(index.row()).getAccstatus();
    case loginRole:
        return m_data.at(index.row()).getLogin();
    default:
        return QVariant();
    }
}

QHash<int, QByteArray> AuthListModel::roleNames() const
{
    QHash<int, QByteArray> roles;
    roles[nameRole] = "id";
    roles[avatarRole] = "avatar";
    roles[informationRole] = "information";
    roles[devicecountRole] = "devicecount";
    roles[regRole] = "reg";
    roles[accstatusRole] = "accstatus";
    roles[loginRole] = "login";
    return roles;
}
