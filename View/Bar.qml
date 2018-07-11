import QtQuick 2.7
import QtQuick.Controls 2.1
import QtQuick.Layouts 1.1
import QtGraphicalEffects 1.0

ToolBar {
    id: bar

    property alias textfield: barText.text

    //=====================================================//
    //===================Bar appearance====================//
    //=====================================================//
    background: Rectangle {
        width: bar.width
        height: bar.height

        Image {
        source: "../Resources/bar.png"
        }
    }

    layer.enabled: true
    layer.effect: DropShadow {
        verticalOffset: 3
        radius: 8.0
        samples: 16
        color: "#80000000"
    }

    //=====================================================//
    //=====================Bar content=====================//
    //=====================================================//
    RowLayout {
        anchors.fill: parent

        /*Back Button, appears when stack
        have greater than one page*/
        ToolButton {
            Image {
                id: backButton
                source: "../Resources/back-icon.png"

                width: parent.width * 0.66
                height: parent.height * 0.66

                anchors.centerIn: parent
            }
            visible: stack.depth > 1
            onClicked: stack.pop()
        }

        /*Menu button, appears when stack
        have only one page*/
        ToolButton {
            Image {
                id: menuButton
                source: "../Resources/hamb-icon.png"

                smooth: true
                width: parent.width * 0.66
                height: parent.height * 0.66

                anchors.centerIn: parent
            }

            visible: stack.depth === 1
            onClicked: drawer.open()
        }

        /*Text which points on a current page*/
        Text {
            id: barText
            text: "Новости проекта"
            font.pointSize: 20
            horizontalAlignment: Text.AlignHCenter
            verticalAlignment: Text.AlignVCenter
            elide: Text.ElideMiddle
            color: "white"
        }

        /*Space between buttons*/
        Item { Layout.fillWidth: true }


        ToolButton {
            BusyIndicator {
                id: busyIndicator
                z: 99
                running: VM.busy

                width: parent.width * 0.66
                height: parent.height * 0.66

                anchors.centerIn: parent
            }
        }

        /*Settings button, appears only on monitoring page*/
        ToolButton {
            id: settingsButton
            Image {
                source: "../Resources/hamb-settings-icon.png"
                smooth: true
                width: parent.width * 0.66
                height: parent.height * 0.66

                anchors.centerIn: parent
            }
            visible: stack.currentItem.objectName == "monitoringPage"
            onClicked: {
                notifySettingsPopup.x = settingsButton.x - notifySettingsPopup.width * 0.85
                notifySettingsPopup.y = settingsButton.y
                notifySettingsPopup.open()
            }
        }

        /*Settings button, appears only on devices page*/
        ToolButton {
            id: devSettingsButton
            Image {
                source: "../Resources/hamb-settings-icon.png"
                smooth: true
                width: parent.width * 0.66
                height: parent.height * 0.66

                anchors.centerIn: parent
            }
            visible: stack.currentItem.objectName == "devicesPage"
            onClicked: {
                deviceSettingsPopup.x = devSettingsButton.x - deviceSettingsPopup.width * 0.85
                deviceSettingsPopup.y = devSettingsButton.y
                deviceSettingsPopup.open()
            }
        }
    }
}




