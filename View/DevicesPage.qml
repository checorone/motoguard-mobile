import QtQuick 2.9
import QtQuick.Controls 2.2
import QtQuick.Layouts 1.3
import QtGraphicalEffects 1.0

Page {

    objectName: "devicesPage"

    ListView {
        id: view
        spacing: 25
        anchors.margins: 15
        anchors.fill: parent

        model: VM.devices

        delegate: Item {
            id: listDelegate

            width: view.width
            height: 120

            MouseArea {
                anchors.fill: parent
                onClicked: {
                    deviceOptionsPopup.x = stack.x + (stack.width - deviceOptionsPopup.width) / 2
                    deviceOptionsPopup.y = stack.y + (stack.height - deviceOptionsPopup.height) / 2
                    deviceOptionsPopup.id = model.id
                    deviceOptionsPopup.open()
                }
            }

            GridLayout {
                anchors.fill: parent

                columns: 6
                rows: 4


                layer.enabled: true
                layer.effect: DropShadow {
                    verticalOffset: 3
                    horizontalOffset: 3
                    radius: 8.0
                    samples: 16
                    color: "#80000000"
                }

                Rectangle {
                    Layout.column: 0
                    Layout.row: 0
                    Layout.rowSpan: 3
                    Layout.columnSpan: 2

                    Layout.fillHeight: true
                    Layout.fillWidth: true

                    color: "grey"

                    Image {
                        anchors.fill: parent
                        anchors.margins: 10
                        smooth: true
                        source: model.status ? "../Resources/good.png" : "../Resources/bad.png"

                        layer.enabled: true
                        layer.effect: DropShadow {
                            radius: 16.0
                            samples: 32
                            color: "#80000000"
                        }
                    }

                }

                Rectangle {
                    Layout.column: 2
                    Layout.row: 0
                    Layout.columnSpan: 4

                    Layout.fillHeight: true
                    Layout.fillWidth: true

                    color: "grey"

                    Text {
                        anchors.fill: parent
                        text: "ID: " + model.id
                        color: "white"
                        padding: 3
                    }
                }

                Rectangle {
                    Layout.column: 0
                    Layout.row: 3
                    Layout.columnSpan: 6

                    Layout.fillHeight: true
                    Layout.fillWidth: true

                    color: "grey"

                    Text {
                        anchors.fill: parent
                        text: "Тип: " + model.type
                        color: "white"
                        padding: 3
                    }
                }

                Rectangle {
                    Layout.column: 2
                    Layout.row: 2
                    Layout.columnSpan: 2

                    Layout.fillHeight: true
                    width: actText.width * 1.4

                    color: "grey"

                    Text {
                        id: actText
                        anchors.left: parent.left
                        height: parent.height
                        text: "Активация: "
                        color: "white"
                        padding: 3
                    }

                    Image {
                        anchors.left: actText.right
                        height: parent.height
                        width: parent.height
                        smooth: true
                        source: model.activated ? "../Resources/good.png" : "../Resources/bad.png"

                        layer.enabled: true
                        layer.effect: DropShadow {
                            radius: 16.0
                            samples: 32
                            color: "#80000000"
                        }
                    }
                }

                Rectangle {
                    Layout.column: 2
                    Layout.row: 1
                    Layout.columnSpan: 2

                    Layout.fillHeight: true
                    width: conText.width * 1.4

                    color: "grey"

                    Text {
                        id: conText
                        anchors.left: parent.left
                        height: parent.height
                        text: "Соединение: "
                        color: "white"
                        padding: 3
                    }

                    Image {
                        anchors.left: conText.right

                        height: parent.height
                        width: parent.height
                        smooth: true
                        source: model.connected ? "../Resources/good.png" : "../Resources/bad.png"

                        layer.enabled: true
                        layer.effect: DropShadow {
                            radius: 16.0
                            samples: 32
                            color: "#80000000"
                        }
                    }
                }
            }
        }
    }
}
