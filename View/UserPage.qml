import QtQuick 2.9
import QtQuick.Controls 2.2
import QtQuick.Controls.Material 2.1
import QtQuick.Layouts 1.3
import QtGraphicalEffects 1.0
Page {

    objectName: "userPage"

    GridLayout {
        anchors.fill: parent

        columns: 2
        rows: 2


        //=====================================================//
        //===================Avatar section====================//
        //=====================================================//
        Rectangle {
            Layout.column: 0
            Layout.row: 0

            Layout.fillHeight: true

            width: wd.width * 0.4

            Image {
                anchors.fill: parent
                source: "../Resources/bar.png"
            }



            Image {
                id: avatar
                anchors.top: parent.top
                anchors.topMargin: 20
                anchors.horizontalCenter: parent.horizontalCenter
                height: parent.width / 2
                width: parent.width / 2
                source: VM.account.avatar === "None" ? "../Resources/default-user.png" : VM.account.avatar
                opacity: 0.5
            }

            Label {
                id: name
                anchors.top:  avatar.bottom
                anchors.topMargin: 20
                padding: 10
                text: "Имя: " + VM.account.name
                width: parent.width
            }

            Label {
                id: login
                anchors.top: name.bottom
                padding: 10
                text:  VM.account.login
                width: parent.width
            }

            Label {
                id: type
                anchors.top: login.bottom
                padding: 10
                text:  "Статус аккаунта:\n  "+ VM.account.accstatus
                width: parent.width
            }

            Label {
                id: devcount
                anchors.top: type.bottom
                padding: 10
                text:  "Макс. количество\nустроиств:   " + VM.account.devicecount
                width: parent.width
            }
        }

        //=====================================================//
        //===================General section===================//
        //=====================================================//
        Rectangle {
            Layout.column: 1
            Layout.row: 0

            Layout.fillHeight: true
            Layout.fillWidth: true

            layer.enabled: true
            layer.effect: DropShadow {
                horizontalOffset: -3
                radius: 8.0
                samples: 16
                color: "#80000000"
            }

            Image {
                anchors.fill: parent
                source: "../Resources/bar.png"
            }

            Label {
                id: lb
                anchors.top: parent.top
                padding: 15
                text: "Общая информация:"
                width: parent.width

            }


        }



        //=====================================================//
        //=================Additional section==================//
        //=====================================================//
        Rectangle {
            Layout.column: 0
            Layout.row: 1
            Layout.columnSpan: 2

            Layout.fillHeight: true
            Layout.fillWidth: true


            Image {
                anchors.fill: parent
                source: "../Resources/bar.png"
            }


            Label {
                id: info
                anchors.top: parent.top
                padding: 20
                text:  "Дополнительная информация:\n\t" + (VM.account.authorized ? VM.account.information  : "")
                width: parent.width
            }

            Label {
                id: date
                anchors.top: info.bottom
                padding: 20
                text:  "Дата регистрации:\n\t" + (VM.account.authorized  ?  VM.account.reg : "")
                width: parent.width
            }

            layer.enabled: true
            layer.effect: DropShadow {
                verticalOffset: -3
                radius: 8.0
                samples: 16
                color: "#80000000"
            }
        }
    }
}
