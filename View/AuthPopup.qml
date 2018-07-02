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

    Label {
        id: label
        anchors.top: parent.top
        text: "Войти в аккаунт"
    }

    Rectangle {
        anchors.centerIn: parent
        anchors.fill: parent
        anchors.margins: 50
        color: "#00000000"

        Label {
            id: lb
            anchors.top: parent.top
            text: "Логин:"

        }

        TextInput {
            id: login
            anchors.top: lb.bottom
            color: "white"
            width: parent.width

            Rectangle {
                anchors.top: parent.bottom
                width: parent.width
                height: 2

                color: "lightgrey"
            }

        }


        Label {
            id: lb3
            anchors.top: login.bottom
            text: "Пароль:"
        }


        TextInput {
            id: secret
            anchors.top: lb3.bottom
            color: "white"
            width: parent.width
            echoMode: TextInput.Password

            Rectangle {
                anchors.top: parent.bottom
                width: parent.width
                height: 2

                color: "lightgrey"
            }
        }
    }

    Button {
        text: "Ок"
        anchors.right: parent.right
        anchors.bottom: parent.bottom

        onClicked: {
            wd.authorize(login.text,secret.text)
            popup.close()
        }
    }
}
