import QtQuick 2.6
import QtQuick.Window 2.2
import Native 1.0

Window {
    visible: true

    MouseArea {
        anchors.fill: parent
        onClicked: {
            Qt.quit();
        }
    }

    Text {
        text: qsTr("Version: ") + AppInfo.version
        anchors.centerIn: parent
    }
}
