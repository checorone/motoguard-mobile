import QtQuick 2.8
import QtQuick.Controls 2.1
import QtQuick.Layouts 1.3
import QtGraphicalEffects 1.0

Drawer {
    id: drawerLocal

    width: wd.width * 0.7
    height: wd.height

    //=====================================================//
    //=================Logo box section====================//
    //=====================================================//

    Rectangle {
        id: logoBox
        width: parent.width
        height: parent.height * 0.2
        anchors.top: parent.top
        gradient: Gradient {
                GradientStop { position: 0.0; color: "#33ff0000" }
                GradientStop { position: 1.0; color: "#00000000" }
            }

        MouseArea {
            anchors.fill: parent
            onClicked: {
//                bar.textfield = "Авторизация"
//                stack.replace(userPage)
                authPopup.x = stack.x + (stack.width - authPopup.width) / 2
                authPopup.y = stack.y + (stack.height - authPopup.height) / 2
                authPopup.open()
                drawerLocal.close()
            }
        }

        Image {
            id: authIcon
            source: VM.account.avatar === "None" ? "../Resources/default-user.png" : VM.account.avatar
            anchors.fill: parent
            anchors.leftMargin: 10
            anchors.rightMargin: parent.width * 0.7
            anchors.topMargin: parent.height / 2 - 20
            anchors.bottomMargin: 25
            smooth: true
            opacity: 0.5

            layer.enabled: true
            layer.effect: DropShadow {
                horizontalOffset: 3
                verticalOffset: 3
                radius: 4.0
                samples: 8
                color: "#000000"
            }

        }

        Image {
            source: "../Resources/esports.png"
            anchors.fill: parent
            anchors.leftMargin: parent.width / 2
            anchors.rightMargin: 10
            anchors.bottomMargin: 20
            smooth: true

            layer.enabled: true
            layer.effect: DropShadow {
                horizontalOffset: 3
                verticalOffset: 3
                radius: 4.0
                samples: 8
                color: "#000000"
            }
        }

        Text {
            id: userName
            anchors.top: authIcon.bottom
            padding: 5
            text: VM.account.authorized ? VM.account.name : "Не авторизовано"
            font.pointSize: 14
            horizontalAlignment: Text.AlignLeft
            verticalAlignment: Text.AlignVCenter
            elide: Text.ElideRight
            renderType: Text.NativeRendering
            color: "white"
        }

        Text {
            id: userMail
            anchors.top: authIcon.bottom
            padding:25
            text: VM.account.authorized ? VM.account.login : "unknown@mail.com"
            font.pointSize: 14
            horizontalAlignment: Text.AlignLeft
            verticalAlignment: Text.AlignVCenter
            elide: Text.ElideRight
            renderType: Text.NativeRendering
            color: "grey"
        }

    }


    //=====================================================//
    //================Content box section==================//
    //=====================================================//
    ColumnLayout {
        width: parent.width
        height: parent.height * 0.8
        anchors.top: logoBox.bottom

        Rectangle {
            id: managementBox
            Layout.fillWidth: true
            height: parent.height * 0.1 * 0.7
            color: "#33ff1c1c"

            Text {
                anchors.fill: parent
                padding: 10
                text: "Управление"
                font: newsButton.font
                horizontalAlignment: Text.AlignHCenter
                verticalAlignment: Text.AlignVCenter
                elide: Text.ElideMiddle
                renderType: Text.NativeRendering
                color: "white"
            }

            layer.enabled: true
            layer.effect: DropShadow {
                radius: 8.0
                samples: 16
                color: "#000000"
            }

        }

        Button {
            id: newsButton
            text: "Новости проекта"

            padding: 10

            contentItem: Text {
                      text: parent.text
                      font: parent.font
                      horizontalAlignment: Text.AlignLeft
                      verticalAlignment: Text.AlignVCenter
                      elide: Text.ElideRight
                      renderType: Text.NativeRendering
                      color: "white"
                  }

            background: Rectangle {
                color: "#00000000"
            }

            Layout.fillWidth: true

            onClicked: {
                bar.textfield = newsButton.text
                stack.replace(newsPage)
                drawerLocal.close()
            }
        }

        Button {
            id: monitoringButton
            text: "Мониторинг"
            padding: 10
            contentItem: Text {
                      text: parent.text
                      font: parent.font
                      horizontalAlignment: Text.AlignLeft
                      verticalAlignment: Text.AlignVCenter
                      elide: Text.ElideRight
                      color: "white"
                  }

            background: Rectangle {
                color: "#00000000"
            }

            Layout.fillWidth: true

            onClicked: {
                bar.textfield = monitoringButton.text
                stack.replace(monitoringPage)
                drawerLocal.close()
            }
        }

        Button {
            id: devicesButton
            text: "Устройства"
            padding: 10
            contentItem: Text {
                      text: parent.text
                      font: parent.font
                      horizontalAlignment: Text.AlignLeft
                      verticalAlignment: Text.AlignVCenter
                      elide: Text.ElideRight
                      color: "white"
                  }

            background: Rectangle {
                color: "#00000000"
            }

            Layout.fillWidth: true

            onClicked: {
                bar.textfield = devicesButton.text
                stack.replace(devicesPage)
                drawerLocal.close()
            }

        }

        Item { Layout.fillHeight: true }

        Rectangle {
            id: optionsBox
            Layout.fillWidth: true
            height: parent.height * 0.1 * 0.7
            color: "#33ff1c1c"

            Text {
                anchors.fill: parent
                padding: 10
                text: "Опции"
                font: settingsButton.font
                horizontalAlignment: Text.AlignHCenter
                verticalAlignment: Text.AlignVCenter
                elide: Text.ElideMiddle
                renderType: Text.NativeRendering
                color: "white"
            }

            layer.enabled: true
            layer.effect: DropShadow {
                radius: 8.0
                samples: 16
                color: "#000000"
            }

        }

        Button {
            id: settingsButton
            text: "Настройки"

            padding: 10

            background: Rectangle {
                color: "#00000000"
            }

            contentItem: Text {
                      text: parent.text
                      font: parent.font
                      horizontalAlignment: Text.AlignLeft
                      verticalAlignment: Text.AlignVCenter
                      elide: Text.ElideRight
                      color: "white"
                  }


            Layout.fillWidth: true

            onClicked: {
                bar.textfield = settingsButton.text
                stack.replace(settingsPage)
                drawerLocal.close()
            }

        }

        Item { height: 2 }
    }
}
