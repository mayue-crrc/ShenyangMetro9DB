/****************************************************************************
** Meta object code from reading C++ file 'vehiclecutoffpage.h'
**
** Created: Mon May 13 10:17:51 2019
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "vehiclecutoffpage.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vehiclecutoffpage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_VehicleCutoffPage[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x08,
      45,   18,   18,   18, 0x08,
      70,   18,   18,   18, 0x08,
      97,   18,   18,   18, 0x08,
     123,   18,   18,   18, 0x08,
     148,   18,   18,   18, 0x08,
     172,   18,   18,   18, 0x08,
     198,   18,   18,   18, 0x08,
     223,   18,   18,   18, 0x08,
     243,   18,   18,   18, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_VehicleCutoffPage[] = {
    "VehicleCutoffPage\0\0on_ResetACMBtn_released()\0"
    "on_ResetACMBtn_pressed()\0"
    "on_CutoffACMBtn_released()\0"
    "on_CutoffACMBtn_pressed()\0"
    "on_ResetEBBtn_released()\0"
    "on_ResetEBBtn_pressed()\0"
    "on_CutoffEBBtn_released()\0"
    "on_CutoffEBBtn_pressed()\0ButtonsPressEvent()\0"
    "on_returnBtn_pressed()\0"
};

const QMetaObject VehicleCutoffPage::staticMetaObject = {
    { &MyBase::staticMetaObject, qt_meta_stringdata_VehicleCutoffPage,
      qt_meta_data_VehicleCutoffPage, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &VehicleCutoffPage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *VehicleCutoffPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *VehicleCutoffPage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VehicleCutoffPage))
        return static_cast<void*>(const_cast< VehicleCutoffPage*>(this));
    return MyBase::qt_metacast(_clname);
}

int VehicleCutoffPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MyBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_ResetACMBtn_released(); break;
        case 1: on_ResetACMBtn_pressed(); break;
        case 2: on_CutoffACMBtn_released(); break;
        case 3: on_CutoffACMBtn_pressed(); break;
        case 4: on_ResetEBBtn_released(); break;
        case 5: on_ResetEBBtn_pressed(); break;
        case 6: on_CutoffEBBtn_released(); break;
        case 7: on_CutoffEBBtn_pressed(); break;
        case 8: ButtonsPressEvent(); break;
        case 9: on_returnBtn_pressed(); break;
        default: ;
        }
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
