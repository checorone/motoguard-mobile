#include "historylistmodel.h"

HistoryListModel::HistoryListModel(QObject *parent) : QAbstractListModel(parent)
{

}

HistoryListModel::~HistoryListModel()
{

}


void HistoryListModel::replace(const SituationList & items)
{
    if(m_data.count())
    {
        beginRemoveRows(QModelIndex(), 0, m_data.count());
        m_data.clear();
        endRemoveRows();
    }
    beginInsertRows(QModelIndex(), m_data.count(), m_data.count()+items.count()-1);
    m_data.append(items);
    endInsertRows();
}


int HistoryListModel::rowCount(const QModelIndex &parent) const
{
    Q_UNUSED(parent);
    return m_data.count();
}

QVariant HistoryListModel::data(const QModelIndex &index, int role) const
{
    if(index.isValid() == false)
        return QVariant();

    if(index.row() < 0 || index.row() >= m_data.count())
        return QVariant();

    switch (role)
    {
    case textRole:
        return m_data.at(index.row()).getText();
    case latitudeRole:
        return m_data.at(index.row()).getLatitude();
    case longitudeRole:
        return  m_data.at(index.row()).getLongitude();
    case dateRole:
        return m_data.at(index.row()).getDatetime();
    case idRole:
        return m_data.at(index.row()).getId();
    default:
        return QVariant();
    }
}

QHash<int, QByteArray> HistoryListModel::roleNames() const
{
    QHash<int, QByteArray> roles;
    roles[textRole] = "text";
    roles[latitudeRole] = "latitude";
    roles[longitudeRole] = "longitude";
    roles[dateRole] = "date";
    roles[idRole] = "id";
    return roles;
}
