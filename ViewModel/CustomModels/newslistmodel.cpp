#include "newslistmodel.h"

NewsListModel::NewsListModel(QObject *parent) : QAbstractListModel(parent)
{

}

NewsListModel::~NewsListModel()
{
    
}


void NewsListModel::append(const NewsList & items)
{
    beginInsertRows(QModelIndex(), m_data.count(), m_data.count()+items.count()-1);
    m_data.append(items);
    endInsertRows();
}

void NewsListModel::clear()
{
    if(m_data.count())
    {
        beginRemoveRows(QModelIndex(), 0, m_data.count());
        m_data.clear();
        endRemoveRows();
    }
}

News NewsListModel::last() const
{
  if (!m_data.isEmpty())
      return m_data.last();
  else
      return News("NULL", "NULL", "NULL", "NULL", QDate::currentDate());
}

News NewsListModel::first() const
{
    if (!m_data.isEmpty())
        return m_data.first();
    else
        return News("NULL", "NULL", "NULL", "NULL", QDate::currentDate());
}

int NewsListModel::rowCount(const QModelIndex &parent) const
{
    Q_UNUSED(parent);
    return m_data.count();
}

QVariant NewsListModel::data(const QModelIndex &index, int role) const
{
    if(index.isValid() == false) 
        return QVariant();

    if(index.row() < 0 || index.row() >= m_data.count())
        return QVariant();

    switch (role) 
    {
    case LabelRole:
        return m_data.at(index.row()).getLabel();
    case shortTextRole:
        return m_data.at(index.row()).getShortText();
    case PictureRole:
        return  m_data.at(index.row()).getPictureUrl();
    case DateRole:
        return m_data.at(index.row()).getDate();
    case fullTextRole:
        return m_data.at(index.row()).getFullText();
    default:
        return QVariant();
    }
}

QHash<int, QByteArray> NewsListModel::roleNames() const
{
    QHash<int, QByteArray> roles;
    roles[LabelRole] = "label";
    roles[shortTextRole] = "shortText";
    roles[PictureRole] = "picture";
    roles[fullTextRole] = "fullText";
    roles[DateRole] = "date";
    return roles;
}
