/****************************************************************************
** Meta object code from reading C++ file 'vehiclehistoryfaultpage.h'
**
** Created: Fri Nov 30 11:13:19 2018
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "vehiclehistoryfaultpage.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vehiclehistoryfaultpage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_VehicleHistoryFaultPage[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      25,   24,   24,   24, 0x08,
      47,   24,   24,   24, 0x08,
      72,   24,   24,   24, 0x08,
      96,   24,   24,   24, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_VehicleHistoryFaultPage[] = {
    "VehicleHistoryFaultPage\0\0on_BTNClose_pressed()\0"
    "on_NextPageBtn_pressed()\0"
    "on_PrePageBtn_pressed()\0ButtonsPressEvent()\0"
};

const QMetaObject VehicleHistoryFaultPage::staticMetaObject = {
    { &MyBase::staticMetaObject, qt_meta_stringdata_VehicleHistoryFaultPage,
      qt_meta_data_VehicleHistoryFaultPage, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &VehicleHistoryFaultPage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *VehicleHistoryFaultPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *VehicleHistoryFaultPage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VehicleHistoryFaultPage))
        return static_cast<void*>(const_cast< VehicleHistoryFaultPage*>(this));
    return MyBase::qt_metacast(_clname);
}

int VehicleHistoryFaultPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MyBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_BTNClose_pressed(); break;
        case 1: on_NextPageBtn_pressed(); break;
        case 2: on_PrePageBtn_pressed(); break;
        case 3: ButtonsPressEvent(); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
