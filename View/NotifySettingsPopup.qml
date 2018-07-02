import QtQuick 2.0
import QtQuick.Controls 2.2

Popup {
    id: popup
    width: 280
    height: 180
    modal: true
    focus: true
    closePolicy: Popup.CloseOnEscape | Popup.CloseOnPressOutside

    padding: 10

    Label {
        id: name
        text: "Основные уведомления"
        anchors.top: parent.top
        width: parent.width
        height: parent.height * 0.2
    }

    ListView {
        id: view
        model: VM.notify

        anchors.top: name.bottom
        width: parent.width
        height: parent.height * 0.8

        delegate: SwitchDelegate {
            width: parent.width
            height: 40
            id: sw
            text: model.name
            checked: model.activated
            visible: index >= 0 && index < 3

            onClicked: wd.resetNotify(model.name)
        }

    }
}
