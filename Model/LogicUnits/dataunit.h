#ifndef DATAUNIT_H
#define DATAUNIT_H

#include<QObject>
#include<QtSql/QSqlDatabase>
#include<QtSql/QSqlRecord>
#include<QtSql/QSqlQuery>

#include "DataNotion/news.h"

class DataUnit : public QObject
{
    Q_OBJECT

private:
    QSqlDatabase * db;

    static const QString insertNews;
    static const QString deleteNews;
    static const QString selectAllNews;
    static const QString createNewsTable;
    static const QString selectNewsAfterDate;
    static const QString selectFirstNews;

public:
    explicit DataUnit(QObject * parent = 0);
    ~DataUnit();

signals:
    /*For Model*/
    void newsListExtracted(const NewsList &, QDate);

public slots:
    /*From Model*/
    void onextractNewsList(const QDate & date);
    void oninsertNewsList(const NewsList &);


};

#endif // MAINDATAUNIT_H
