#ifndef HYSTORYLISTMODEL_H
#define HYSTORYLISTMODEL_H

#include<QAbstractListModel>

#include "DataNotion/dangersituation.h"

class HistoryListModel: public QAbstractListModel
{
    Q_OBJECT

private:
    SituationList m_data;

    enum Roles
    {
        textRole = Qt::DisplayRole,
        latitudeRole = Qt::UserRole + 1,
        longitudeRole = Qt::UserRole + 2,
        dateRole = Qt::UserRole + 3,
        idRole = Qt::UserRole + 4
    };

public:
    explicit HistoryListModel(QObject *parent = 0);
    virtual ~HistoryListModel();

public: /*User-defined methods*/
    void replace(const SituationList & items);

public: /*Reimplemented methods*/
    virtual int rowCount(const QModelIndex &parent) const override final;
    virtual QVariant data(const QModelIndex &index, int role) const override final;
    virtual QHash<int, QByteArray> roleNames() const override final;

};
#endif // HYSTORYLISTMODEL_H
