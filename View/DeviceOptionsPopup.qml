import QtQuick 2.0
import QtQuick.Controls 2.2
import QtQuick.Layouts 1.3
import QtGraphicalEffects 1.0

Popup {
    id: popup
    width: 280
    height: 180
    modal: true
    focus: true
    closePolicy: Popup.CloseOnEscape | Popup.CloseOnPressOutside

    property string id

    padding: 10

    Label {
        id: label
        anchors.top: parent.top
        text: "Опции устроиства"
    }

    ColumnLayout {
        anchors.top: label.bottom
        width : parent.width
        height : parent.height - label.height

        Button {
            text: "Активировать устройство"
            Layout.fillWidth: true
            Layout.fillHeight: true

            onClicked: {
                wd.activateDevice(popup.id)
                popup.close()
            }
        }

        Button {
            text: "Установить дистанцию"
            Layout.fillWidth: true
            Layout.fillHeight: true

            onClicked: {
                limitInputPopup.x = stack.x + (stack.width - limitInputPopup.width) / 2
                limitInputPopup.y = stack.y + (stack.height - limitInputPopup.height) / 2
                limitInputPopup.id = popup.id
                limitInputPopup.open()
                popup.close()
            }
        }

        Button {
            text: "Убрать дистанцию"
            Layout.fillWidth: true
            Layout.fillHeight: true

            onClicked: {
                setLimits(0,popup.id)
                popup.close()
            }
        }
    }
}
