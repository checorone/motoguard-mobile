QT += quick sql androidextras network networkauth
CONFIG += c++11 qzxing_qml qzxing_multimedia

include(thirdparty/qzxing/src/QZXing.pri)

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0
ANDROID_PACKAGE_SOURCE_DIR = $$PWD/android-sources

SOURCES += \
    main.cpp \
    Model/model.cpp \
    Model/LogicUnits/dataunit.cpp \
    Model/LogicUnits/networkunit.cpp \
    ViewModel/viewmodel.cpp \
    ViewModel/CustomModels/newslistmodel.cpp \
    ViewModel/CustomModels/notifylistmodel.cpp \
    DataNotion/news.cpp \
    DataNotion/notifyselector.cpp \
    ViewModel/CustomModels/deviceslistmodel.cpp \
    DataNotion/device.cpp \
    DataNotion/measurements.cpp \
    ViewModel/CustomModels/measurelistmodel.cpp \
    MVVM.cpp \
    DataNotion/account.cpp \
    DataNotion/limits.cpp \
    Model/LogicUnits/notifyunit.cpp \
    DataNotion/dangersituation.cpp \
    ViewModel/CustomModels/historylistmodel.cpp


RESOURCES += \
    qml.qrc \
    images.qrc \
    config.qrc

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =

# Additional import path used to resolve QML modules just for Qt Quick Designer
QML_DESIGNER_IMPORT_PATH =

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

HEADERS += \
    Model/model.h \
    Model/LogicUnits/dataunit.h \
    Model/LogicUnits/networkunit.h \
    ViewModel/viewmodel.h \
    ViewModel/CustomModels/newslistmodel.h \
    ViewModel/CustomModels/notifylistmodel.h \
    DataNotion/news.h \
    DataNotion/notifyselector.h \
    ViewModel/CustomModels/deviceslistmodel.h \
    DataNotion/device.h \
    DataNotion/measurements.h \
    ViewModel/CustomModels/measurelistmodel.h \
    MVVM.h \
    DataNotion/account.h \
    Model/LogicUnits/notifyunit.h \
    DataNotion/limits.h \
    DataNotion/dangersituation.h \
    ViewModel/CustomModels/historylistmodel.h


DISTFILES += \
    qtquickcontrols2.conf \
    android-sources/AndroidManifest.xml \
    View/Bar.qml \
    View/DrawerPanel.qml \
    View/main.qml \
    View/NewsPage.qml \
    View/Stack.qml \
    View/DevicesPage.qml \
    View/MonitoringPage.qml \
    View/HistoryPage.qml \
    View/DataPage.qml \
    View/SettingsPage.qml \
    View/PositionPage.qml \
    View/UserPage.qml \
    View/NotifySettingsPopup.qml \
    View/DeviceSettingsPopup.qml \
    View/DeviceOptionsPopup.qml \
    View/LimitInputPopup.qml \
    View/NotifySettingsPage.qml \
    View/AuthPopup.qml \
    View/BarCodePage.qml \
    View/MessagePopup.qml

contains(ANDROID_TARGET_ARCH,armeabi-v7a) {
    ANDROID_EXTRA_LIBS = \
        $$PWD/thirdparty/openssl/libcrypto.so \
        $$PWD/thirdparty/openssl/libssl.so \
        $$PWD/thirdparty/qzxing/src/build/android-build/libs/armeabi-v7a/libQZXing.so
}
