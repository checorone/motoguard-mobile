import QtQuick 2.8
import QtQuick.Controls 2.1
import QtQuick.Layouts 1.3
import QtGraphicalEffects 1.0

Page {  
        id: newsBox

        objectName: "news"

        width: wd.width
        height: wd.height - bar.height
        z:0

        background: Rectangle {
            anchors.fill: parent

            Image {
                anchors.fill: parent
                source: "../Resources/back.png"
            }
        }

        ListView {
            id: view
            spacing: 25
            anchors.margins: 15
            anchors.fill: parent

            model: VM.news

            delegate: Item {
                id: listDelegate

                width: view.width
                height: label.height + shortText.height + pic.height

                MouseArea {
                   anchors.fill: parent
                   onClicked: stack.push(fulltxt)
                }

                Component {
                    id: fulltxt

                    Flickable {
                        contentHeight: content.height + label.height + fullPic.height + date.height
                        contentWidth: content.width

                        Rectangle {
                            height: contentHeight
                            width:  contentWidth
                            anchors.top: labelBox.bottom
                        }

                        Rectangle {
                            id: labelBox
                            height: label.height
                            width: label.width
                            color: "#77ff1c1c"

                            Text {
                                id: label
                                anchors.centerIn: parent
                                font: bar.font
                                padding: 20
                                verticalAlignment: Text.AlignVCenter
                                horizontalAlignment: Text.AlignHCenter
                                width: wd.width
                                text: model.label
                                wrapMode: Text.WordWrap
                                color: "white"
                            }
                        }

                        Image {
                            id: fullPic
                            anchors.top: labelBox.bottom
                            width: parent.width
                            height: parent.width / 2
                            source: model.picture
                        }

                        Text {
                            id: content
                            anchors.top: fullPic.bottom
                            padding: 20
                            font: bar.font
                            verticalAlignment: Text.AlignVCenter
                            horizontalAlignment: Text.AlignLeft
                            width: wd.width
                            text: model.fullText
                            wrapMode: Text.WordWrap
                            color: "black"
                        }

                        Text {
                            id: date
                            anchors.top: content.bottom
                            padding: 10
                            font: bar.font
                            verticalAlignment: Text.AlignVCenter
                            horizontalAlignment: Text.AlignLeft
                            width: wd.width
                            text: model.date
                            wrapMode: Text.WordWrap
                            color: "grey"
                        }

                    }

                }


                ColumnLayout {
                    spacing: 0

                    anchors.fill: parent

                    layer.enabled: true
                    layer.effect: DropShadow {
                        radius: 16.0
                        samples: 32
                        color: "#80000000"
                    }

                    Rectangle {
                        Layout.fillWidth: true
                        width: parent.width
                        height: label.height

                        color: "#333333"
                        Text {
                            id: label
                            padding: 10
                            verticalAlignment: Text.AlignVCenter
                            horizontalAlignment: Text.AlignLeft
                            width: parent.width
                            text: model.label
                            smooth: true
                            color: "white"
                            wrapMode: Text.WordWrap
                            elide: Text.ElideRight
                        }


                    }

                    Rectangle {
                        Layout.fillWidth: true
                        width: parent.width
                        height: shortText.height + pic.height

                        color: "#ffffff"

                        Image {
                            id: pic
                            width: parent.width
                            height: parent.width / 2
                            source: model.picture

                        }

                        Text {
                            id: shortText
                            padding: 10
                            width: parent.width
                            anchors.top: pic.bottom
                            verticalAlignment: Text.AlignVCenter
                            horizontalAlignment: Text.AlignLeft
                            text: model.shortText
                            color: "black"
                            wrapMode: Text.WordWrap
                            elide: Text.ElideRight
                        }

                    }
                }

            }

            footer: Button {

                text: "Загрузить еще"
                width: parent.width

                onPressed: wd.addNews()
            }

        }
}
