#ifndef NANO33BLEBOARD_H
#define NANO33BLEBOARD_H

#include <QObject>
#include <QBluetoothServiceDiscoveryAgent>
#include <QBluetoothDeviceDiscoveryAgent>
#include <qbluetoothlocaldevice.h>

class Nano33BleBoard : public QObject
{
	Q_OBJECT
public:
	explicit Nano33BleBoard(QObject *parent = nullptr);

	void StartDiscovery();

public slots:
	void deviceDiscovered(const QBluetoothDeviceInfo &device);
	void deviceDiscError(QBluetoothDeviceDiscoveryAgent::Error error);
	void deviceScanFinished();

signals:
	void deviceListUpdate(const QMap<QString, QBluetoothAddress> &devList);

protected:
	QBluetoothDeviceDiscoveryAgent *m_deviceDiscoveryAgent;
	QBluetoothLocalDevice *m_localDevice;

	QMap<QString, QBluetoothAddress> m_devList;

};

#endif // NANO33BLEBOARD_H
