/****************************************************************************
** Meta object code from reading C++ file 'nano33bleboard.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../nano33_mqtt_client/nano33bleboard.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'nano33bleboard.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSNano33BleBoardENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSNano33BleBoardENDCLASS = QtMocHelpers::stringData(
    "Nano33BleBoard",
    "deviceListUpdate",
    "",
    "QMap<QString,QBluetoothAddress>",
    "devList",
    "deviceDiscovered",
    "QBluetoothDeviceInfo",
    "device",
    "deviceDiscError",
    "QBluetoothDeviceDiscoveryAgent::Error",
    "error",
    "deviceScanFinished"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSNano33BleBoardENDCLASS_t {
    uint offsetsAndSizes[24];
    char stringdata0[15];
    char stringdata1[17];
    char stringdata2[1];
    char stringdata3[32];
    char stringdata4[8];
    char stringdata5[17];
    char stringdata6[21];
    char stringdata7[7];
    char stringdata8[16];
    char stringdata9[38];
    char stringdata10[6];
    char stringdata11[19];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSNano33BleBoardENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSNano33BleBoardENDCLASS_t qt_meta_stringdata_CLASSNano33BleBoardENDCLASS = {
    {
        QT_MOC_LITERAL(0, 14),  // "Nano33BleBoard"
        QT_MOC_LITERAL(15, 16),  // "deviceListUpdate"
        QT_MOC_LITERAL(32, 0),  // ""
        QT_MOC_LITERAL(33, 31),  // "QMap<QString,QBluetoothAddress>"
        QT_MOC_LITERAL(65, 7),  // "devList"
        QT_MOC_LITERAL(73, 16),  // "deviceDiscovered"
        QT_MOC_LITERAL(90, 20),  // "QBluetoothDeviceInfo"
        QT_MOC_LITERAL(111, 6),  // "device"
        QT_MOC_LITERAL(118, 15),  // "deviceDiscError"
        QT_MOC_LITERAL(134, 37),  // "QBluetoothDeviceDiscoveryAgen..."
        QT_MOC_LITERAL(172, 5),  // "error"
        QT_MOC_LITERAL(178, 18)   // "deviceScanFinished"
    },
    "Nano33BleBoard",
    "deviceListUpdate",
    "",
    "QMap<QString,QBluetoothAddress>",
    "devList",
    "deviceDiscovered",
    "QBluetoothDeviceInfo",
    "device",
    "deviceDiscError",
    "QBluetoothDeviceDiscoveryAgent::Error",
    "error",
    "deviceScanFinished"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSNano33BleBoardENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   38,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    1,   41,    2, 0x0a,    3 /* Public */,
       8,    1,   44,    2, 0x0a,    5 /* Public */,
      11,    0,   47,    2, 0x0a,    7 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject Nano33BleBoard::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSNano33BleBoardENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSNano33BleBoardENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSNano33BleBoardENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Nano33BleBoard, std::true_type>,
        // method 'deviceListUpdate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QMap<QString,QBluetoothAddress> &, std::false_type>,
        // method 'deviceDiscovered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QBluetoothDeviceInfo &, std::false_type>,
        // method 'deviceDiscError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QBluetoothDeviceDiscoveryAgent::Error, std::false_type>,
        // method 'deviceScanFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Nano33BleBoard::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Nano33BleBoard *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->deviceListUpdate((*reinterpret_cast< std::add_pointer_t<QMap<QString,QBluetoothAddress>>>(_a[1]))); break;
        case 1: _t->deviceDiscovered((*reinterpret_cast< std::add_pointer_t<QBluetoothDeviceInfo>>(_a[1]))); break;
        case 2: _t->deviceDiscError((*reinterpret_cast< std::add_pointer_t<QBluetoothDeviceDiscoveryAgent::Error>>(_a[1]))); break;
        case 3: _t->deviceScanFinished(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QBluetoothDeviceInfo >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Nano33BleBoard::*)(const QMap<QString,QBluetoothAddress> & );
            if (_t _q_method = &Nano33BleBoard::deviceListUpdate; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *Nano33BleBoard::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Nano33BleBoard::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSNano33BleBoardENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Nano33BleBoard::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void Nano33BleBoard::deviceListUpdate(const QMap<QString,QBluetoothAddress> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
