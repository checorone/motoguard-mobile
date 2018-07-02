#include "notifylistmodel.h"

NotifyListModel::NotifyListModel(QObject *parent) : QAbstractListModel(parent)
{
}

NotifyListModel::~NotifyListModel()
{

}

void NotifyListModel::append(const NotifyList &items)
{
    beginInsertRows(QModelIndex(), m_data.count(), m_data.count()+items.count()-1);
    m_data.append(items);
    endInsertRows();
}

void NotifyListModel::clear()
{
    if(m_data.count())
    {
        beginRemoveRows(QModelIndex(), 0, m_data.count());
        m_data.clear();
        endRemoveRows();
    }
}

int NotifyListModel::rowCount(const QModelIndex &parent) const
{
    Q_UNUSED(parent);
    return m_data.count();
}

QVariant NotifyListModel::data(const QModelIndex &index, int role) const
{
    if(index.isValid() == false)
        return QVariant();

    if(index.row() < 0 || index.row() >= m_data.count())
        return QVariant();

    switch (role)
    {
    case NameRole:
        return m_data.at(index.row()).getName();
    case ActivatedRole:
        return  m_data.at(index.row()).getEnable();
    default:
        return QVariant();
    }
}

QHash<int, QByteArray> NotifyListModel::roleNames() const
{
    QHash<int, QByteArray> roles;
    roles[NameRole] = "name";
    roles[ActivatedRole] = "activated";
    return roles;
}
