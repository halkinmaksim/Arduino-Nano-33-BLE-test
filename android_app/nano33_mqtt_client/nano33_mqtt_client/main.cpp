#include <QGuiApplication>
#include <QQmlApplicationEngine>

#include "nano33bleboard.h"

/*
 * git clone -b 6.6 git://code.qt.io/qt/qtmqtt.git
 * cd qtmqtt
 * c:\Qt\6.6.0\msvc2019_64\bin\qmake -query QT_INSTALL_LIB
 * git clone https://github.com/emqx/qmqtt
 *
 * c:\Qt\Tools\CMake_64\bin\
 *
 * c:\Qt\6.6.0\msvc2019_64\bin\qt-configure-module.bat ..
 *
*/

int main(int argc, char *argv[])
{
	QGuiApplication app(argc, argv);

	Nano33BleBoard *Dev = new Nano33BleBoard();
	Dev->StartDiscovery();

	QQmlApplicationEngine engine;
	const QUrl url(u"qrc:/nano33_mqtt_client/main.qml"_qs);
	QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
					 &app, [url](QObject *obj, const QUrl &objUrl) {
		if (!obj && url == objUrl)
			QCoreApplication::exit(-1);
	}, Qt::QueuedConnection);
	engine.load(url);

	return app.exec();
}
