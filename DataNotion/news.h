#ifndef NEWS_H
#define NEWS_H

#include<QString>
#include<QDate>

class News
{
private:
    QString label;
    QString shortText;
    QString fullText;
    QString pictureUrl;
    QDate date;
public:
    News(const QString & label, const QString & shortText,
         const QString & fullText, const QString & pictureUrl,
         const QDate & date);
    ~News() {}

    QString getLabel() const;
    QString getShortText() const;
    QString getFullText() const;
    QString getPictureUrl() const;
    QDate getDate() const;


    void setLabel(const QString &value);
    void setShortText(const QString &value);
    void setFullText(const QString &value);
    void setPictureUrl(const QString &value);
    void setDate(const QDate &value);
};

typedef QList<News> NewsList;

#endif // NEWS_H
