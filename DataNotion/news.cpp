#include "news.h"

QDate News::getDate() const
{
    return date;
}

void News::setDate(const QDate &value)
{
    date = value;
}

News::News(const QString & label, const QString & shortText,
           const QString & fullText, const QString & picture,
           const QDate & date)

    : label(label), shortText(shortText),
      fullText(fullText), pictureUrl(picture),
      date(date)
{

}


QString News::getShortText() const
{
    return shortText;
}

void News::setShortText(const QString &value)
{
    shortText = value;
}

QString News::getFullText() const
{
    return fullText;
}

void News::setFullText(const QString &value)
{
    fullText = value;
}

QString News::getPictureUrl() const
{
    return pictureUrl;
}

void News::setPictureUrl(const QString &value)
{
    pictureUrl = value;
}

QString News::getLabel() const
{
    return label;
}

void News::setLabel(const QString &value)
{
    label = value;
}
