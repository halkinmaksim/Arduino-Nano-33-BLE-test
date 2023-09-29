import QtQuick
import QtQuick.Controls 2.15
Rectangle {
	id: rectGyroCntrl
	width: 400
	height: 250

	Rectangle{
		id: rectGyroX
		height: 70
		border.width: 2
		anchors.left: parent.left
		anchors.right: parent.right
		anchors.top: parent.top
		anchors.rightMargin: 5
		anchors.leftMargin: 5
		anchors.topMargin: 10
		Label{
			id: labNameX
			text: "X"
			anchors.left: parent.left
			anchors.top: parent.top
			font.pointSize: 20
			anchors.topMargin: 5
			anchors.leftMargin: 5
		}

		ProgressBar{
			id: pbGyroX
			height: 36
			anchors.left: labNameX.right
			anchors.right: parent.right
			anchors.top: parent.top
			anchors.rightMargin: 5
			anchors.leftMargin: 10
			to: 40
			from: -40
			anchors.topMargin: 5
		}

		Label{
			id: labValX
			text: "-0.25 m/s^2"
			anchors.left: parent.left
			anchors.bottom: parent.bottom
			font.pointSize: 10
			anchors.bottomMargin: 5
			anchors.leftMargin: 5
		}

	}

	Rectangle{
		id: rectGyroY
		height: 70
		border.width: 2
		anchors.left: parent.left
		anchors.right: parent.right
		anchors.top: rectGyroX.bottom
		anchors.rightMargin: 5
		anchors.leftMargin: 5
		anchors.topMargin: 5
		Label{
			id: labNameY
			text: "Y"
			anchors.left: parent.left
			anchors.top: parent.top
			font.pointSize: 20
			anchors.topMargin: 5
			anchors.leftMargin: 5
		}

		ProgressBar{
			id: pbGyroY
			height: 36
			anchors.left: labNameY.right
			anchors.right: parent.right
			anchors.top: parent.top
			anchors.rightMargin: 5
			anchors.leftMargin: 10
			to: 40
			from: -40
			anchors.topMargin: 5
		}

		Label{
			id: labValY
			text: "-0.25 m/s^2"
			anchors.left: parent.left
			anchors.bottom: parent.bottom
			font.pointSize: 10
			anchors.bottomMargin: 5
			anchors.leftMargin: 5
		}

	}

	Rectangle{
		id: rectGyroZ
		height: 70
		border.width: 2
		anchors.left: parent.left
		anchors.right: parent.right
		anchors.top: rectGyroY.bottom
		anchors.rightMargin: 5
		anchors.leftMargin: 5
		anchors.topMargin: 5
		Label{
			id: labNameZ
			text: "Z"
			anchors.left: parent.left
			anchors.top: parent.top
			font.pointSize: 20
			anchors.topMargin: 5
			anchors.leftMargin: 5
		}

		ProgressBar{
			id: pbGyroZ
			height: 36
			anchors.left: labNameZ.right
			anchors.right: parent.right
			anchors.top: parent.top
			anchors.rightMargin: 5
			anchors.leftMargin: 10
			to: 40
			from: -40
			anchors.topMargin: 5
		}

		Label{
			id: labValZ
			text: "-0.25 m/s^2"
			anchors.left: parent.left
			anchors.bottom: parent.bottom
			font.pointSize: 10
			anchors.bottomMargin: 5
			anchors.leftMargin: 5
		}

	}


}
