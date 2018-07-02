import QtQuick 2.0
import QtQuick.Controls 2.2
import QtGraphicalEffects 1.0

Popup {
    id: popup
    width: 340
    height: 180
    modal: true
    focus: true
    closePolicy: Popup.CloseOnEscape | Popup.CloseOnPressOutside

    padding: 10

    Label {
        anchors.top: parent.top
        text: "Добавить устроиство"
    }

    Label {
        id: lb
        anchors.centerIn: parent
        text: "Введите ID устроиства:"
    }

    TextInput {
        id: inp
        anchors.top: lb.bottom
        width: parent.width
        height: parent.height * 0.4
        color: "white"
    }

    Button {
        text: "Ок"
        anchors.right: parent.right
        anchors.bottom: parent.bottom

        onClicked: {
            addDevice(inp.text)
            popup.close()
        }
    }
}

