import QtQuick 2.0
import QtQuick.Controls 2.2
import QtQuick.Layouts 1.3
import QtGraphicalEffects 1.0

Popup {
    id: popup
    height: wd.height / 4
    width: wd.width * 0.7
    modal: true
    focus: true
    closePolicy: Popup.CloseOnEscape | Popup.CloseOnPressOutside

    property alias label: label.text
    property alias text: text.text

    padding: 10

    Label {
        id: label
        anchors.top: parent.top
    }

    Label {
        id: text
        anchors.centerIn: parent
        width: parent.width
        verticalAlignment: Text.AlignVCenter
        horizontalAlignment: Text.AlignLeft
        wrapMode: Text.WordWrap
        elide: Text.ElideRight
    }

    Button {
        id: btn
        text: "Ok"
        anchors.right: parent.right
        anchors.bottom: parent.bottom
        onClicked: popup.close()
    }
}
