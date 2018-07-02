import QtQuick 2.0
import QtQuick.Controls 2.2

Popup {
    id: popup
    width: 280
    height: 90
    modal: true
    focus: true
    closePolicy: Popup.CloseOnEscape | Popup.CloseOnPressOutside

    padding: 10

    Label {
        id: name
        text: "Управление устройствами"
        anchors.top: parent.top
        width: parent.width
        height: parent.height * 0.2
    }

    Button {
        anchors.top: name.bottom
        anchors.margins: 15
        width: parent.width * 0.8
        height: parent.height * 0.65
        text: "Добавить устройство"

        onClicked: {
            addDevicePopup.x = stack.x + (stack.width - addDevicePopup.width) / 2
            addDevicePopup.y = stack.y + (stack.height - addDevicePopup.height) / 2
            addDevicePopup.open()

            popup.close()
        }
    }
}
