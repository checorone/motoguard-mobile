#include "MVVM.h"

MVVM::MVVM() : viewmodel(new ViewModel), model(new Model), view(new QQmlApplicationEngine())
{

}


MVVM::~MVVM()
{
    delete  viewmodel;
    delete  model;
    delete  view;
}

void MVVM::initLinks()
{
    QObject::connect(model,SIGNAL(newsListChanged()),               viewmodel, SLOT(onnewsListChanged()));
    QObject::connect(model,SIGNAL(newsListFound(NewsList)),         viewmodel, SLOT(onnewsListFound(NewsList)));
    QObject::connect(model,SIGNAL(notifySettingsChanged()),         viewmodel, SIGNAL(getNotifySettings()));
    QObject::connect(model,SIGNAL(notifySettingsFound(NotifyList)), viewmodel, SLOT(onnotifySettingsFound(NotifyList)));
    QObject::connect(model,SIGNAL(devicesListFound(DeviceList)),    viewmodel, SLOT(ondevicesListFound(DeviceList)));
    QObject::connect(model,SIGNAL(devicesListChanged()),            viewmodel, SIGNAL(getDevicesList()));
    QObject::connect(model,SIGNAL(measureListFound(MeasureList)),   viewmodel, SLOT(onmeasureListFound(MeasureList)));
    QObject::connect(model,SIGNAL(measureListChanged()),            viewmodel, SIGNAL(getMeasureList()));
    QObject::connect(model,SIGNAL(accountDataFound(Account)),       viewmodel, SLOT(onaccountDataFound(Account)));
    QObject::connect(model,SIGNAL(accountDataChanged()),            viewmodel, SIGNAL(getAccountData()));
    QObject::connect(model,SIGNAL(limitsListFound(LimitsList)),     viewmodel, SLOT(onlimitsListFound(LimitsList)));
    QObject::connect(model,SIGNAL(limitsListChanged()),             viewmodel, SIGNAL(getLimitsList()));
    QObject::connect(model,SIGNAL(activeDeviceFound(QString)),      viewmodel, SLOT(onactiveDeviceFound(QString)));
    QObject::connect(model,SIGNAL(activeDeviceChanged()),           viewmodel, SIGNAL(getActiveDevice()));
    QObject::connect(model,SIGNAL(historyFound(SituationList)),     viewmodel, SLOT(onhistoryFound(SituationList)));
    QObject::connect(model,SIGNAL(historyChanged()),                viewmodel, SIGNAL(getHistory()));


    QObject::connect(viewmodel,SIGNAL(getNewsList(QDate)),          model, SLOT(ongetNewsList(QDate)));
    QObject::connect(viewmodel,SIGNAL(updateNews()),                model, SLOT(onupdateNewsList()));
    QObject::connect(viewmodel,SIGNAL(getNotifySettings()),         model, SLOT(ongetNotifySettings()));
    QObject::connect(viewmodel,SIGNAL(resetNotifySettings(QString)),model, SLOT(onresetNotifySettings(QString)));
    QObject::connect(viewmodel,SIGNAL(getDevicesList()),            model, SLOT(ongetDevicesList()));
    QObject::connect(viewmodel,SIGNAL(activateDevice(QString)),     model, SLOT(onactivateDevice(QString)));
    QObject::connect(viewmodel,SIGNAL(addDevice(QString)),          model, SLOT(onaddDevice(QString)));
    QObject::connect(viewmodel,SIGNAL(getMeasureList()),            model, SLOT(ongetMeasureList()));
    QObject::connect(viewmodel,SIGNAL(getLimitsList()),             model, SLOT(ongetLimitsList()));
    QObject::connect(viewmodel,SIGNAL(setLimits(float, QString)),   model, SLOT(onsetLimits(float,QString)));
    QObject::connect(viewmodel,SIGNAL(getAccountData()),            model, SLOT(ongetAccountData()));
    QObject::connect(viewmodel,SIGNAL(authorize(QString, QString)), model, SLOT(onauthorize(QString,QString)));
    QObject::connect(viewmodel,SIGNAL(getActiveDevice()),           model, SLOT(ongetActiveDevice()));
    QObject::connect(viewmodel,SIGNAL(getHistory()),                model, SLOT(ongetHistory()));

    QObject::connect(view->rootObjects()[0],SIGNAL(resetNotify(QString)),       viewmodel, SIGNAL(resetNotifySettings(QString)));
    QObject::connect(view->rootObjects()[0],SIGNAL(addNews()),                  viewmodel, SLOT(onaddNews()));
    QObject::connect(view->rootObjects()[0],SIGNAL(updateNews()),               viewmodel, SIGNAL(updateNews()));
    QObject::connect(view->rootObjects()[0],SIGNAL(activateDevice(QString)),    viewmodel, SIGNAL(activateDevice(QString)));
    QObject::connect(view->rootObjects()[0],SIGNAL(addDevice(QString)),         viewmodel, SIGNAL(addDevice(QString)));
    QObject::connect(view->rootObjects()[0],SIGNAL(setLimits(QString, QString)),viewmodel, SLOT(onsetLimits(QString,QString)));
    QObject::connect(view->rootObjects()[0],SIGNAL(authorize(QString, QString)),viewmodel, SIGNAL(authorize(QString,QString)));

    emit viewmodel->getNewsList(QDate::currentDate());
    emit viewmodel->getDevicesList();
    emit viewmodel->getMeasureList();
    emit viewmodel->getLimitsList();
    emit viewmodel->getNotifySettings();
    emit viewmodel->getActiveDevice();
    emit viewmodel->getHistory();
}

void MVVM::initQML()
{
    view->rootContext()->setContextProperty("VM", viewmodel);
    qmlRegisterType<ViewModel>("ViewModel", 1, 0, "ViewModel");
    view->load(QUrl(QStringLiteral("qrc:/View/main.qml")));
}
