#ifndef MVVM_H
#define MVVM_H

#include <QQmlApplicationEngine>
#include <QQmlContext>
#include <QObject>

#include "ViewModel/viewmodel.h"
#include "Model/model.h"


class MVVM
{
private:
     ViewModel * viewmodel;
     Model * model;
     QQmlApplicationEngine * view;
public:
    MVVM();
    ~MVVM();

    void initLinks();
    void initQML();


};

#endif // MVVM_H
