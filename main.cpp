#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QIcon>
#include "MVVM.h"

#include "DataNotion/news.h"
#include "DataNotion/notifyselector.h"
#include "DataNotion/device.h"
#include "DataNotion/measurements.h"
#include "DataNotion/account.h"
#include "DataNotion/limits.h"
#include "DataNotion/dangersituation.h"
Q_DECLARE_METATYPE(DangerSituation)
Q_DECLARE_METATYPE(NotifyList)
Q_DECLARE_METATYPE(MeasureList)
Q_DECLARE_METATYPE(LimitsList)

int main(int argc, char *argv[])
{
    qRegisterMetaType <DangerSituation> ("DangerSituation");
    qRegisterMetaType <NotifyList>      ("NotifyList");
    qRegisterMetaType <MeasureList>     ("MeasureList");
    qRegisterMetaType <LimitsList>      ("LimitsList");

    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);

    MVVM mvvm;
    mvvm.initQML();
    mvvm.initLinks();

    return app.exec();
}
