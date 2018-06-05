/****************************************************************************
** Meta object code from reading C++ file 'vehiclepowerresetpage.h'
**
** Created: Tue Jun 5 18:05:56 2018
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "vehiclepowerresetpage.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vehiclepowerresetpage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_VehiclePowerResetPage[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      23,   22,   22,   22, 0x08,
      51,   22,   22,   22, 0x08,
      80,   22,   22,   22, 0x08,
     107,   22,   22,   22, 0x08,
     135,   22,   22,   22, 0x08,
     158,   22,   22,   22, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_VehiclePowerResetPage[] = {
    "VehiclePowerResetPage\0\0"
    "on_PowerOndoorBtn_pressed()\0"
    "on_PowerOffdoorBtn_pressed()\0"
    "on_PowerOnPISBtn_pressed()\0"
    "on_PowerOffPISBtn_pressed()\0"
    "on_returnBtn_pressed()\0ButtonsPressEvent()\0"
};

const QMetaObject VehiclePowerResetPage::staticMetaObject = {
    { &MyBase::staticMetaObject, qt_meta_stringdata_VehiclePowerResetPage,
      qt_meta_data_VehiclePowerResetPage, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &VehiclePowerResetPage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *VehiclePowerResetPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *VehiclePowerResetPage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VehiclePowerResetPage))
        return static_cast<void*>(const_cast< VehiclePowerResetPage*>(this));
    return MyBase::qt_metacast(_clname);
}

int VehiclePowerResetPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MyBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_PowerOndoorBtn_pressed(); break;
        case 1: on_PowerOffdoorBtn_pressed(); break;
        case 2: on_PowerOnPISBtn_pressed(); break;
        case 3: on_PowerOffPISBtn_pressed(); break;
        case 4: on_returnBtn_pressed(); break;
        case 5: ButtonsPressEvent(); break;
        default: ;
        }
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
