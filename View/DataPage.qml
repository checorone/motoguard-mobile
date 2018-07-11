import QtQuick 2.0
import QtQuick.Controls 2.2
import QtQuick.Layouts 1.3
import QtGraphicalEffects 1.0

Page {

    objectName: "dataPage"
    height: parent.height
    width: parent.width
    anchors.centerIn: parent

    Label {
        text: "Отсутствует активное устроиство"
        anchors.centerIn: parent
        visible: VM.fulldevID === "None"
    }

    ListView {
        id: view
        model: VM.measure
        anchors.fill: parent

        delegate: Item {
            id: deleg
            width: view.width
            height: view.height
            anchors.centerIn: parent

            ColumnLayout {
                anchors.fill: parent
                spacing: 15
                anchors.margins: 20

                layer.enabled: true
                layer.effect: DropShadow {
                    verticalOffset: 3
                    horizontalOffset: 3
                    radius: 8.0
                    samples: 16
                    color: "#80000000"
                }


                Rectangle {
                    Layout.fillWidth: true
                    height: 80
                    color: "#666666"

                    Rectangle {
                        anchors.left: parent.left
                        width: parent.width / 40
                        height: parent.height
                        color: model.speed >= 30 ? model.speed > 60 ? "red" : "yellow"  : "#00ff00"
                    }

                    Label {
                        id: lb1
                        anchors.fill: parent
                        padding: 10
                        text: "Скорость: " + (model.speed >= 30 ? model.speed > 60 ? "Опасно." : "Выше нормы"  : "В норме.") + "  \n\nТекущее значение: " + model.speed
                    }
                }

                Rectangle {
                    Layout.fillWidth: true
                    height: 80
                    color: "#666666"

                    Rectangle {
                        anchors.left: parent.left
                        width: parent.width / 40
                        height: parent.height
                        color: model.vibration >= 1500 ? model.vibration > 2000 ? "red" : "yellow"  : "#00ff00"
                    }

                    Label {
                        id: lb2
                        anchors.fill: parent
                        padding: 10
                        text: "Вибрация: " + (model.vibration >= 1500 ? model.vibration > 2000 ? "Опасно." : "Выше нормы"  : "В норме.") + "  \n\nТекущее значение: " + model.vibration
                    }
                }


                Rectangle {
                    Layout.fillWidth: true
                    height: 80
                    color: "#666666"

                    Rectangle {
                        anchors.left: parent.left
                        width: parent.width / 40
                        height: parent.height
                        color: model.degy >= 10 ? model.degy > 20 ? "red" : "yellow"  : "#00ff00"
                    }

                    Label {
                        id: lb3
                        anchors.fill: parent
                        padding: 10
                        text: "Крен: " + (model.degy >= 10 ? model.degy > 20 ? "Опасно." : "Выше нормы"  : "В норме.") + "  \n\nТекущее значение: " + model.degy
                    }
                }

                Rectangle {
                    Layout.fillWidth: true
                    height: 80
                    color: "#666666"

                    Rectangle {
                        anchors.left: parent.left
                        width: parent.width / 40
                        height: parent.height
                        color: model.gy >= 1 ? model.gy > 3 ? "red" : "yellow"  : "#00ff00"
                    }

                    Label {
                        id: lb4
                        anchors.fill: parent
                        padding: 10
                        text: "Ускорение: " + (model.gy >= 1 ? model.gy > 3 ? "Опасно." : "Выше нормы"  : "В норме.") + "  \n\nТекущее значение: " + model.gy
                    }
                }

                Item {
                    Layout.fillHeight: true
                    Layout.fillWidth: true
                }

            }

            visible: VM.fulldevID === model.id
        }
    }

}
