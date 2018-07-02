#ifndef MEASURELISTMODEL_H
#define MEASURELISTMODEL_H

#include<QAbstractListModel>

#include "DataNotion/measurements.h"
#include "DataNotion/limits.h"

class MeasureListModel: public QAbstractListModel
{
    Q_OBJECT

private:
    MeasureList m_data;
    LimitsList m_limits;

    enum Roles
    {
        dopRole = Qt::DisplayRole,
        latitudeRole = Qt::UserRole + 1,
        longitudeRole = Qt::UserRole + 2,
        speedRole = Qt::UserRole + 3,
        vibrationRole = Qt::UserRole + 4,
        gxRole = Qt::UserRole + 5,
        gyRole = Qt::UserRole + 6,
        gzRole = Qt::UserRole + 7,
        degxRole = Qt::UserRole + 8,
        degyRole = Qt::UserRole + 9,
        degzRole = Qt::UserRole + 10,
        limlatRole = Qt::UserRole + 11,
        limlongRole = Qt::UserRole + 12,
        limradRole = Qt::UserRole + 13,
        idRole = Qt::UserRole + 14
    };

public:
    explicit MeasureListModel(QObject *parent = 0);
    virtual ~MeasureListModel();

public: /*User-defined methods*/
    void replace(const MeasureList & items);
    void replace(const LimitsList & items);

public: /*Reimplemented methods*/
    virtual int rowCount(const QModelIndex &parent) const override final;
    virtual QVariant data(const QModelIndex &index, int role) const override final;
    virtual QHash<int, QByteArray> roleNames() const override final;

};

#endif // MEASURELISTMODEL_H
