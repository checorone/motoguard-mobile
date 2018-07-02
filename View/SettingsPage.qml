import QtQuick 2.0
import QtQuick.Controls 2.2
import QtQuick.Layouts 1.3

Page {
    objectName: "settingsPage"

    ColumnLayout {
        anchors.fill: parent

        Button {
            id: accButton
            text: "Настройки аккаунта"

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
                bar.textfield = accButton.text
                stack.replace(userPage)
            }
        }

        Button {
            id: notifyButton
            text: "Настройки уведомлений"
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
                bar.textfield = notifyButton.text
                stack.replace(notifySettingsPage)
            }
        }

        Item {
            height: parent.height * 0.7
        }
    }


}
