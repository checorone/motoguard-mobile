#ifndef NOTIFYLISTMODEL_H
#define NOTIFYLISTMODEL_H

#include<QAbstractListModel>

#include "DataNotion/notifyselector.h"

class NotifyListModel : public QAbstractListModel
{
    Q_OBJECT

private:
    NotifyList m_data;

    enum Roles
    {
        NameRole = Qt::DisplayRole,
        ActivatedRole = Qt::UserRole + 1
    };

public:
    explicit NotifyListModel(QObject *parent = 0);
    virtual ~NotifyListModel();

public: /*User-defined methods*/
    void append(const NotifyList & items);
    void clear();

public: /*Reimplemented methods*/
    virtual int rowCount(const QModelIndex &parent) const override final;
    virtual QVariant data(const QModelIndex &index, int role) const override final;
    virtual QHash<int, QByteArray> roleNames() const override final;

};

#endif // NOTIFYLISTMODEL_H
