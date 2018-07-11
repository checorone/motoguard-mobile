import QtQuick 2.7
import QtQuick.Controls 2.1
import ViewModel 1.0

ApplicationWindow {
    id: wd
    title: qsTr("MotoGuard")
    width: 320
    height: 500
    visible: true

    //=====================================================//
    //=================Signals section=====================//
    //=====================================================//
    signal setLimits(string radius, string id)
    signal addDevice(string id)
    signal activateDevice(string id)
    signal resetNotify(string index)
    signal authorize(string login, string secret)
    signal addNews()
    signal updateNews()

    Connections {
        target: VM
        onShowMessage: showMsg(label, text)
    }

    function showMsg(label,text) {
        messagePopup.x = stack.x + (stack.width - messagePopup.width) / 2
        messagePopup.y = stack.y + (stack.height - messagePopup.height) / 2
        messagePopup.label = label
        messagePopup.text = text
        messagePopup.open()
    }


    //=====================================================//
    //=============Static elements section=================//
    //=====================================================//
    header: Bar {
        id: bar
        width: parent.width
    }

    Stack {
        id: stack
        anchors.fill: parent
    }


    DrawerPanel {
        id: drawer
    }

    NotifySettingsPopup {
        id: notifySettingsPopup
    }

    DeviceSettingsPopup {
        id: deviceSettingsPopup
    }

    DeviceOptionsPopup {
        id: deviceOptionsPopup
    }

    LimitInputPopup {
        id: limitInputPopup
    }

    AuthPopup {
        id: authPopup
    }

    MessagePopup {
        id: messagePopup
    }

    //=====================================================//
    //===========Dynamic components section================//
    //=====================================================//

    Component {
        id: newsPage
        NewsPage {
        }
    }

    Component {
        id: devicesPage
        DevicesPage {
        }
    }

    Component {
        id: monitoringPage
        MonitoringPage {
        }
    }

    Component {
        id: settingsPage
        SettingsPage {
        }
    }

    Component {
        id: userPage
        UserPage {
        }
    }

    Component {
        id: notifySettingsPage
        NotifySettingsPage {
        }
    }

    Component {
        id: barCodePage
        BarCodePage {
        }
    }

    //========================================================//
}



