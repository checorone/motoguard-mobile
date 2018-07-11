import QtQuick 2.0
import QtQuick.Controls 2.2
import QtGraphicalEffects 1.0
import QtMultimedia 5.9
import QZXing 2.3

Page {
    id: barcodepage
    anchors.fill: parent

    Camera {
        id: camera
        focus {
            focusMode: CameraFocus.FocusContinuous
            focusPointMode: CameraFocus.FocusPointAuto
        }
        captureMode: Camera.CaptureViewfinder
        viewfinder.resolution: (parent.height + "x" + parent.width)
    }

    VideoOutput {
        id: videoOutput
        anchors.centerIn: parent
        source: camera
        filters: [ zxingFilter ]
        rotation: 90
    }

    QZXingFilter {
        id: zxingFilter
        decoder {
            enabledDecoders: QZXing.DecoderFormat_QR_CODE
            onTagFound: {
                addDevice(tag)
                stack.pop()
            }
        }
        captureRect: {
            videoOutput.contentRect;
            videoOutput.sourceRect;
            return videoOutput.mapRectToSource(videoOutput.mapNormalizedRectToItem(Qt.rect(0.25, 0.25, 0.5, 0.5)));
        }
    }

    Rectangle {
        anchors.top: parent.top
        width: parent.width
        height: parent.height * 0.15
        color: "#90000000"

        Label {
            anchors.centerIn: parent
            text: "Отсканируйте QR код на упаковке устройства"
        }
    }

    Rectangle {
        anchors.centerIn: parent
        width: parent.width * 0.75
        height: width
        color: "#40ff0000"
    }
}

