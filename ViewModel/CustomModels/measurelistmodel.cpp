#include "measurelistmodel.h"

MeasureListModel::MeasureListModel(QObject *parent) : QAbstractListModel(parent)
{

}

MeasureListModel::~MeasureListModel()
{

}

void MeasureListModel::replace(const LimitsList &items)
{
    if(m_limits.count())
    {
        beginRemoveRows(QModelIndex(), 0, m_limits.count());
        m_limits.clear();
        endRemoveRows();
    }
    beginInsertRows(QModelIndex(), m_limits.count(), m_limits.count()+items.count()-1);
    m_limits.append(items);
    endInsertRows();
}


void MeasureListModel::replace(const MeasureList & items)
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


int MeasureListModel::rowCount(const QModelIndex &parent) const
{
    Q_UNUSED(parent);
    return m_data.count();
}

QVariant MeasureListModel::data(const QModelIndex &index, int role) const
{
    if(index.isValid() == false)
        return QVariant();

    if(index.row() < 0 || index.row() >= m_data.count())
        return QVariant();

    switch (role)
    {
    case idRole:
        return m_data.at(index.row()).getId();
    case dopRole:
        return m_data.at(index.row()).getDop();
    case latitudeRole:
        return m_data.at(index.row()).getLatitude();
    case longitudeRole:
        return  m_data.at(index.row()).getLongitude();
    case speedRole:
        return m_data.at(index.row()).getSpeed();
    case vibrationRole:
        return m_data.at(index.row()).getVibration();
    case gxRole:
        return m_data.at(index.row()).getGx();
    case gyRole:
        return m_data.at(index.row()).getGy();
    case gzRole:
        return m_data.at(index.row()).getGz();
    case degxRole:
        return m_data.at(index.row()).getDegx();
    case degyRole:
        return m_data.at(index.row()).getDegy();
    case degzRole:
        return m_data.at(index.row()).getDegz();
    case limlatRole:
        return m_limits.at(index.row()).getLatitude();
    case limlongRole:
        return m_limits.at(index.row()).getLongitude();
    case limradRole:
        return m_limits.at(index.row()).getRadius();
    default:
        return QVariant();
    }
}

QHash<int, QByteArray> MeasureListModel::roleNames() const
{
    QHash<int, QByteArray> roles;
    roles[idRole] = "id";
    roles[dopRole] = "dop";
    roles[latitudeRole] = "latitude";
    roles[longitudeRole] = "longitude";
    roles[speedRole] = "speed";
    roles[vibrationRole] = "vibration";
    roles[gxRole] = "gx";
    roles[gyRole] = "gy";
    roles[gzRole] = "gz";
    roles[degxRole] = "degx";
    roles[degyRole] = "degy";
    roles[degzRole] = "degz";
    roles[limlatRole] = "latitudeLimit";
    roles[limlongRole] = "longitudeLimit";
    roles[limradRole] = "radiusLimit";
    return roles;
}
