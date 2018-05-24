/****************************************************************************
** Meta object code from reading C++ file 'vehiclemaintaincepage.h'
**
** Created: Tue Apr 24 15:47:19 2018
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "vehiclemaintaincepage.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vehiclemaintaincepage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_VehicleMaintaincePage[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
      36,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      23,   22,   22,   22, 0x05,

 // slots: signature, parameters, type, tag, flags
      41,   22,   22,   22, 0x08,
      67,   22,   22,   22, 0x08,
      92,   22,   22,   22, 0x08,
     117,   22,   22,   22, 0x08,
     141,   22,   22,   22, 0x08,
     173,   22,   22,   22, 0x08,
     204,   22,   22,   22, 0x08,
     229,   22,   22,   22, 0x08,
     255,   22,   22,   22, 0x08,
     279,   22,   22,   22, 0x08,
     305,   22,   22,   22, 0x08,
     326,   22,   22,   22, 0x08,
     353,   22,   22,   22, 0x08,
     378,   22,   22,   22, 0x08,
     403,   22,   22,   22, 0x08,
     426,   22,   22,   22, 0x08,
     452,   22,   22,   22, 0x08,
     479,   22,   22,   22, 0x08,
     505,   22,   22,   22, 0x08,
     530,   22,   22,   22, 0x08,
     560,   22,   22,   22, 0x08,
     588,   22,   22,   22, 0x08,
     615,   22,   22,   22, 0x08,
     640,   22,   22,   22, 0x08,
     667,   22,   22,   22, 0x08,
     689,   22,   22,   22, 0x08,
     717,   22,   22,   22, 0x08,
     743,   22,   22,   22, 0x08,
     769,   22,   22,   22, 0x08,
     793,   22,   22,   22, 0x08,
     820,   22,   22,   22, 0x08,
     848,   22,   22,   22, 0x08,
     875,   22,   22,   22, 0x08,
     901,   22,   22,   22, 0x08,
     932,   22,   22,   22, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_VehicleMaintaincePage[] = {
    "VehicleMaintaincePage\0\0changePWPage(int)\0"
    "on_TestPageBtn_released()\0"
    "on_TestPageBtn_pressed()\0"
    "on_TrainNumBtn_clicked()\0"
    "on_AllDataBtn_pressed()\0"
    "on_DataManagementBtn_released()\0"
    "on_DataManagementBtn_pressed()\0"
    "on_HMIInitBtn_released()\0"
    "on_TCMSStateBtn_pressed()\0"
    "on_RuntestBtn_pressed()\0"
    "on_BrakeTestBtn_pressed()\0"
    "on_LoadBtn_pressed()\0on_SystimeSetBtn_pressed()\0"
    "on_WheelSetBtn_pressed()\0"
    "on_HMICheckBtn_pressed()\0"
    "on_RIOMIOBtn_pressed()\0on_PortsDataBtn_pressed()\0"
    "on_TCMSVisionBtn_pressed()\0"
    "on_DistainceBtn_pressed()\0"
    "on_Consumption_pressed()\0"
    "on_APRunningTimeBtn_pressed()\0"
    "on_FaultRecordBtn_pressed()\0"
    "on_TCMSStateBtn_released()\0"
    "on_RuntestBtn_released()\0"
    "on_BrakeTestBtn_released()\0"
    "on_LoadBtn_released()\0on_SystimeSetBtn_released()\0"
    "on_WheelSetBtn_released()\0"
    "on_HMICheckBtn_released()\0"
    "on_RIOMIOBtn_released()\0"
    "on_PortsDataBtn_released()\0"
    "on_TCMSVisionBtn_released()\0"
    "on_DistainceBtn_released()\0"
    "on_Consumption_released()\0"
    "on_APRunningTimeBtn_released()\0"
    "on_FaultRecordBtn_released()\0"
};

const QMetaObject VehicleMaintaincePage::staticMetaObject = {
    { &MyBase::staticMetaObject, qt_meta_stringdata_VehicleMaintaincePage,
      qt_meta_data_VehicleMaintaincePage, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &VehicleMaintaincePage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *VehicleMaintaincePage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *VehicleMaintaincePage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VehicleMaintaincePage))
        return static_cast<void*>(const_cast< VehicleMaintaincePage*>(this));
    return MyBase::qt_metacast(_clname);
}

int VehicleMaintaincePage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MyBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: changePWPage((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: on_TestPageBtn_released(); break;
        case 2: on_TestPageBtn_pressed(); break;
        case 3: on_TrainNumBtn_clicked(); break;
        case 4: on_AllDataBtn_pressed(); break;
        case 5: on_DataManagementBtn_released(); break;
        case 6: on_DataManagementBtn_pressed(); break;
        case 7: on_HMIInitBtn_released(); break;
        case 8: on_TCMSStateBtn_pressed(); break;
        case 9: on_RuntestBtn_pressed(); break;
        case 10: on_BrakeTestBtn_pressed(); break;
        case 11: on_LoadBtn_pressed(); break;
        case 12: on_SystimeSetBtn_pressed(); break;
        case 13: on_WheelSetBtn_pressed(); break;
        case 14: on_HMICheckBtn_pressed(); break;
        case 15: on_RIOMIOBtn_pressed(); break;
        case 16: on_PortsDataBtn_pressed(); break;
        case 17: on_TCMSVisionBtn_pressed(); break;
        case 18: on_DistainceBtn_pressed(); break;
        case 19: on_Consumption_pressed(); break;
        case 20: on_APRunningTimeBtn_pressed(); break;
        case 21: on_FaultRecordBtn_pressed(); break;
        case 22: on_TCMSStateBtn_released(); break;
        case 23: on_RuntestBtn_released(); break;
        case 24: on_BrakeTestBtn_released(); break;
        case 25: on_LoadBtn_released(); break;
        case 26: on_SystimeSetBtn_released(); break;
        case 27: on_WheelSetBtn_released(); break;
        case 28: on_HMICheckBtn_released(); break;
        case 29: on_RIOMIOBtn_released(); break;
        case 30: on_PortsDataBtn_released(); break;
        case 31: on_TCMSVisionBtn_released(); break;
        case 32: on_DistainceBtn_released(); break;
        case 33: on_Consumption_released(); break;
        case 34: on_APRunningTimeBtn_released(); break;
        case 35: on_FaultRecordBtn_released(); break;
        default: ;
        }
        _id -= 36;
    }
    return _id;
}

// SIGNAL 0
void VehicleMaintaincePage::changePWPage(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
