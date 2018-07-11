import QtQuick 2.0
import QtQuick.Controls 2.2
import QtLocation 5.9
import QtPositioning 5.8


Page {

    objectName: "positionPage"
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
        interactive: false

        delegate: Item {
            id: deleg
            width: view.width
            height: view.height
            anchors.centerIn: parent

            Plugin {
                id: mapPlugin
                name: "esri" // "mapboxgl", "esri", ...
            }

            Map {
                anchors.fill: parent
                plugin: mapPlugin
                zoomLevel: 12
                center: QtPositioning.coordinate(model.latitude, model.longitude)

                MapCircle {
                        center {
                            latitude: model.latitude
                            longitude: model.longitude
                        }
                        radius: 500.0
                        color: 'green'
                    }

                MapCircle {
                        center {
                            latitude: model.latitude
                            longitude: model.longitude
                        }
                        radius: model.dop * 500.0
                        color: "#30000099"
                    }

                MapCircle {
                        center {
                            latitude: model.latitudeLimit
                            longitude: model.longitudeLimit
                        }
                        radius: model.radiusLimit
                        color: "#30009900"
                    }
            }
            visible: VM.fulldevID === model.id
        }
    }

}
