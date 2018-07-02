import QtQuick 2.0
import QtQuick.Controls 2.2
import QtQuick.Layouts 1.3
import QtGraphicalEffects 1.0

Page {

    objectName: "historyPage"
    height: parent.height
    width: parent.width
    anchors.centerIn: parent

    Label {
        text: "Отсутствует активное устроиство"
        anchors.centerIn: parent
        visible: VM.activeDeviceID === "None"
    }

    ListView {
        id: fff
        model: VM.history

        spacing: 15
        anchors.margins: 20

        anchors.fill: parent
        delegate: Item {
            width: parent.width
            height: what.height + where.height + when.height

            Rectangle {
                anchors.fill: parent
                color: "#666666"

                Rectangle {
                    id: lft
                    anchors.left: parent.left
                    width: parent.width / 40
                    height: parent.height
                    color: "red"
                }


                layer.enabled: true
                layer.effect: DropShadow {
                    verticalOffset: 3
                    horizontalOffset: 3
                    radius: 8.0
                    samples: 16
                    color: "#80000000"
                }


                Item {
                    anchors.left: lft.right
                    width: parent.width - lft.width
                    height: parent.height

                    Label {
                        id: what
                        anchors.top: parent.top
                        padding: 5
                        text: model.text
                    }

                    Label {
                        id: where
                        anchors.top: what.bottom
                        padding: 5
                        text: "Широта: " + model.latitude + " долгота: " + model.longitude
                    }

                    Label {
                        id: when
                        anchors.top: where.bottom
                        padding: 5
                        text: "Время: " + model.date
                    }
                }
            }

            visible: VM.activeDeviceID === model.id
        }
    }

}
