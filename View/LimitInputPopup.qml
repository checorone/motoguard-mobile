import QtQuick 2.0
import QtQuick.Controls 2.2
import QtGraphicalEffects 1.0

Popup {
    id: popup
    width: 280
    height: 280
    modal: true
    focus: true
    closePolicy: Popup.CloseOnEscape | Popup.CloseOnPressOutside
    property string id

    padding: 10

    Label {
        anchors.top: parent.top
        text: "Добавить дистанцию"
    }

    Label {
        id: lb
        anchors.centerIn: parent
        text: "Радиус допустимой зоны:"
    }

    TextInput {
        id: inp
        anchors.top: lb.bottom
        width: parent.width * 0.9
        height: parent.height * 0.4
        color: "white"
    }

    Label {
        id: lb2
        anchors.left: parent.left
        anchors.bottom: parent.bottom
        text: "Внимание:\nЗона формируется\nотносительно текущего\nместоположения."
    }

    Button {
        text: "Ок"
        anchors.right: parent.right
        anchors.bottom: parent.bottom

        onClicked: {
            setLimits(inp.text,id)
            popup.close()
        }
    }
}
