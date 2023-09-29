#include "nano33bleboard.h"

Nano33BleBoard::Nano33BleBoard(QObject *parent)
	: QObject{parent}
{
	qDebug("%s(): Entered",  __FUNCTION__);
	m_deviceDiscoveryAgent = new QBluetoothDeviceDiscoveryAgent(this);
	m_localDevice = new QBluetoothLocalDevice();

	m_deviceDiscoveryAgent ->setLowEnergyDiscoveryTimeout(50000);

	// Search device
	connect(m_deviceDiscoveryAgent, SIGNAL(deviceDiscovered(QBluetoothDeviceInfo)),
				this, SLOT(deviceDiscovered(QBluetoothDeviceInfo)));
	// Error search
	connect(m_deviceDiscoveryAgent, SIGNAL(errorOccurred(QBluetoothDeviceDiscoveryAgent::Error)),
				this, SLOT(deviceDiscError(QBluetoothDeviceDiscoveryAgent::Error)));

	// Update device
	connect(m_deviceDiscoveryAgent, SIGNAL(deviceUpdated(QBluetoothDeviceInfo, QBluetoothDeviceInfo::Fields)),
				this, SLOT(deviceUpdated(QBluetoothDeviceInfo, QBluetoothDeviceInfo::Fields)));

	// Host state change
	//connect(localDevice, SIGNAL(hostModeStateChanged(QBluetoothLocalDevice::HostMode)),
//			this, SLOT(hostModeStateChanged(QBluetoothLocalDevice::HostMode)));
	// Finish search
	connect(m_deviceDiscoveryAgent, SIGNAL(finished()),
				this, SLOT(deviceScanFinished()));


}

void Nano33BleBoard::StartDiscovery()
{
	qDebug("%s(): Entered",  __FUNCTION__);
	m_devList.clear();

	emit deviceListUpdate(m_devList);

	m_deviceDiscoveryAgent->start(QBluetoothDeviceDiscoveryAgent::LowEnergyMethod);
}

void Nano33BleBoard::deviceDiscovered(const QBluetoothDeviceInfo &device)
{
	qDebug("%s(): Entered",  __FUNCTION__);
	qDebug() << "Found new device:" << device.name() << '(' << device.address().toString() << ')';
	qDebug() << "coreConfigurations:" << device.coreConfigurations();
	qDebug() << "deviceUuid:" << device.deviceUuid();

	m_devList[device.name()] = device.address();

	QBluetoothLocalDevice::Pairing pairingStatus = m_localDevice->pairingStatus(device.address());
	qDebug()  << pairingStatus;
}

void Nano33BleBoard::deviceDiscError(QBluetoothDeviceDiscoveryAgent::Error error)
{
	qDebug("%s(): Entered",  __FUNCTION__);
	qDebug() << error;
	emit deviceListUpdate(m_devList);
}

void Nano33BleBoard::deviceScanFinished()
{
	qDebug("%s(): Entered",  __FUNCTION__);
	emit deviceListUpdate(m_devList);
	qDebug() << m_devList;
}
