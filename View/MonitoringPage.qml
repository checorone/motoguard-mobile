import QtQuick 2.8
import QtQuick.Controls 2.1

Page {
    objectName: "monitoringPage"

    SwipeView {
        id: swipeView
        anchors.fill: parent
        currentIndex: tabBar.currentIndex
        clip: true
        Page {
            PositionPage {
            }
        }

        Page {
            DataPage {
            }
        }

        Page {
            HistoryPage {
            }
        }
    }

    header: TabBar {
        id: tabBar

        currentIndex: swipeView.currentIndex
        TabButton {
            text: qsTr("Местоположение")
            width: Math.max(200, tabBar.width/2)
        }
        TabButton {
            text: qsTr("Текущее состояние")
            width: Math.max(200, tabBar.width/2)
        }
        TabButton {
            text: qsTr("История")
            width: Math.max(200, tabBar.width/2)
        }
    }
}
