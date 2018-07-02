import QtQuick 2.0
import QtQuick.Controls 2.2

Page {
    objectName: "notifySettingsPage"

    ListView {
        id: view
        model: VM.notify

        width: parent.width
        height: parent.height * 0.8

        delegate: SwitchDelegate {
            width: parent.width
            height: 40
            id: sw
            text: model.name
            checked: model.activated

            onClicked: wd.resetNotify(model.name)
        }

    }
}
