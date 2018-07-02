#include <QDebug>
#include <QSqlError>

#include "dataunit.h"

const QString DataUnit::insertNews = "INSERT INTO news_table(label, shorttext, fulltext, picture, pubdate) "
                                         "VALUES (:label, :shorttext, :fulltext, :picture, Date(:pubdate));";

const QString DataUnit::deleteNews = "DELETE * FROM news_table;";


const QString DataUnit::selectAllNews = "SELECT * FROM news_table;";

const QString DataUnit::selectNewsAfterDate = "SELECT * FROM news_table WHERE pubdate <= Date(:pubdate) and  pubdate >= Date(:pubdateend);";

const QString DataUnit::createNewsTable = "CREATE TABLE IF NOT EXISTS news_table ("
                                              "id INTEGER PRIMARY KEY AUTOINCREMENT NOT NULL ,"
                                              "label TEXT NOT NULL, "
                                              "shorttext TEXT NOT NULL, "
                                              "fulltext TEXT NOT NULL, "
                                              "picture TEXT, "
                                              "pubdate DATE NOT NULL"
                                              ");";

const QString DataUnit::selectFirstNews = "SELECT * FROM news_table WHERE id=1;";


DataUnit::DataUnit(QObject *parent) : QObject(parent)
{
    db = new QSqlDatabase;
    *db = QSqlDatabase::addDatabase("QSQLITE");
    db->setDatabaseName("MTGcache.sqlite");

    if(!db->open()) {
        qDebug() << "[M] [DATA] : Could not access the database: " << db->lastError().text();
    }

    /*Check existing tables and create tables that do not exist but needed*/
    QSqlQuery query = QSqlQuery(*db);
    if (!query.exec(createNewsTable)) {
        qDebug() << "[M] [DATA] : Could not create table: " << query.lastError().text();
    }

    qDebug() << "=====================\n"
             << "State of database:\n"
             << "Opened: "  << db->open() << endl
             << "Options: " << db->connectOptions() << endl
             << "Name: " << db->connectionName() << endl
             << "=====================\n";

//    query = QSqlQuery(*db);
//    for(int i = 0; i < 25; i++)
//    {
//        query.prepare(insertNews);
//        query.bindValue(":label", QString("MotoGuard запускает проект по всей России!"));
//        query.bindValue(":shorttext", QString("Сегодня стало известно, что компания OneOrg, запускает свой проект детской защиты под названием MotoGuard. Данная система позволит родителям непрерывно наблюдять за ребенком находящимся у руля мототранспортного средства. Получать информацию о состоянии ребенка, а также об опасных ситуациях, возникших при движении."));
//        query.bindValue(":fulltext", QString("Используя MotoGuard, вы можете подключиться к Онлайн-Системе Родительского Контроля. На текущий момент эта система работает в тестовом режиме и всем зарегистрированным пользователям MotoGuard доступна бесплатно.\n\nАктивировав подключение программы к Онлайн-Системе Родительского Контроля и приняв условия пользования сервисом, программа будет отсылать некоторую статистическую информацию по использованию мопеда вашими детьми на сервера системы. А вы сможете в любое время через интернет контролировать как долго и что именно делает ваш ребенок за рулем мопеда.\n\nЧерез свой личный кабинет в Онлайн-Системе Родительского Контроля вы сможете:\n\nКонтролировать продолжительность использования мопеда ребёнком;\nПолучать уведомления в случае возникновения опасных ситуаций;\n\nИ многое другое.\n\nДля использования Онлайн Системы Родительского Контроля, у вас должна быть установлена версия программы не ниже 1.0 и у вас должен быть свой персональный код активации устроиства для программы MotoGuard."));
//        query.bindValue(":picture", QString("http://www.bulgarianagriculture.com/re_images/1351544924_motogardlogo.gif"));
//        query.bindValue(":pubdate", QDate::currentDate().addDays(-i).toString("yyyy-MM-dd"));
//        if (!query.exec()) {
//            qDebug() << "[M] [DATA] [ERROR]: Could not insert values: " << query.lastError().text();
//        }
//    }

}

DataUnit::~DataUnit()
{
    db->close();
    delete db;
}

void DataUnit::onextractNewsList(const QDate &date)
{
    QSqlQuery query = QSqlQuery(*db);
    NewsList list;

    query.prepare(selectNewsAfterDate);
    query.bindValue(":pubdate", date.toString("yyyy-MM-dd"));
    query.bindValue(":pubdateend", date.addDays(-7).toString("yyyy-MM-dd"));
    if (!query.exec()) {
        qDebug() << "[M] [DATA] [ERROR]: Could not get news: " << query.lastError().text();
    }
    if(!query.isActive())
    {
        qDebug() << "[M] [DATA] [ERROR] : News after date: " << date.toString("yyyy-MM-dd") << " does not exist.";
    }

    QSqlRecord rec = query.record();
    while (query.next())
    {
        list.append(News(query.value(rec.indexOf("label")).toString(),
                         query.value(rec.indexOf("shorttext")).toString(),
                         query.value(rec.indexOf("fulltext")).toString(),
                         query.value(rec.indexOf("picture")).toString(),
                         query.value(rec.indexOf("pubdate")).toDate()));
    }

    qDebug() << "[M] [DATA] : Data extracted.";
    emit newsListExtracted(list, date);
}

void DataUnit::oninsertNewsList(const NewsList & items)
{
    QSqlQuery query = QSqlQuery(*db);

    query.exec(selectFirstNews);

    if(!query.isActive())
    {
        qDebug() << "[M] [DATA] : News list is empty. Clearing not required.";
    }

    QSqlRecord rec = query.record();
    QDate date = query.value(rec.indexOf("pubdate")).toDate();
    if(items.first().getDate() >= date) {
        qDebug() << "[M] [DATA] : Captured newer news list. Clearing is required.";
        query.exec(deleteNews);
    }

    for(auto news : items) {
        query.prepare(insertNews);
        query.bindValue(":label", news.getLabel());
        query.bindValue(":shorttext", news.getShortText());
        query.bindValue(":fulltext", news.getFullText());
        query.bindValue(":picture", news.getPictureUrl());
        query.bindValue(":pubdate", news.getDate());
        query.exec();
    }

    qDebug() << "[M] [DATA] : Data successfully inserted.";
}

