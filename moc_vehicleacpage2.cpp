/****************************************************************************
** Meta object code from reading C++ file 'vehicleacpage2.h'
**
** Created: Wed May 8 08:14:53 2019
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "vehicleacpage2.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vehicleacpage2.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_VehicleACPage2[] = {

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
      16,   15,   15,   15, 0x08,
      40,   15,   15,   15, 0x08,
      66,   15,   15,   15, 0x08,
      93,   15,   15,   15, 0x08,
     118,   15,   15,   15, 0x08,
     137,   15,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_VehicleACPage2[] = {
    "VehicleACPage2\0\0on_ConfirmBtn_pressed()\0"
    "on_Tempplus1Btn_pressed()\0"
    "on_Tempminus1Btn_pressed()\0"
    "on_NextPageBtn_pressed()\0onSelectClkEvent()\0"
    "onModeClkEvent()\0"
};

const QMetaObject VehicleACPage2::staticMetaObject = {
    { &MyBase::staticMetaObject, qt_meta_stringdata_VehicleACPage2,
      qt_meta_data_VehicleACPage2, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &VehicleACPage2::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *VehicleACPage2::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *VehicleACPage2::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VehicleACPage2))
        return static_cast<void*>(const_cast< VehicleACPage2*>(this));
    return MyBase::qt_metacast(_clname);
}

int VehicleACPage2::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MyBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_ConfirmBtn_pressed(); break;
        case 1: on_Tempplus1Btn_pressed(); break;
        case 2: on_Tempminus1Btn_pressed(); break;
        case 3: on_NextPageBtn_pressed(); break;
        case 4: onSelectClkEvent(); break;
        case 5: onModeClkEvent(); break;
        default: ;
        }
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
