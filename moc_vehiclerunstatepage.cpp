/****************************************************************************
** Meta object code from reading C++ file 'vehiclerunstatepage.h'
**
** Created: Sun Jun 24 18:57:29 2018
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "vehiclerunstatepage.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vehiclerunstatepage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_VehicleRunStatePage[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      21,   20,   20,   20, 0x05,

 // slots: signature, parameters, type, tag, flags
      39,   20,   20,   20, 0x08,
      62,   20,   20,   20, 0x08,
      87,   20,   20,   20, 0x08,
     111,   20,   20,   20, 0x08,
     137,   20,   20,   20, 0x08,
     164,   20,   20,   20, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_VehicleRunStatePage[] = {
    "VehicleRunStatePage\0\0changePWPage(int)\0"
    "on_BuzzerBtn_pressed()\0on_FirePageBtn_pressed()\0"
    "on_CutPageBtn_pressed()\0"
    "on_ResetPageBtn_pressed()\0"
    "on_ByPassPageBtn_pressed()\0"
    "on_LMResetPageBtn_pressed()\0"
};

const QMetaObject VehicleRunStatePage::staticMetaObject = {
    { &MyBase::staticMetaObject, qt_meta_stringdata_VehicleRunStatePage,
      qt_meta_data_VehicleRunStatePage, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &VehicleRunStatePage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *VehicleRunStatePage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *VehicleRunStatePage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VehicleRunStatePage))
        return static_cast<void*>(const_cast< VehicleRunStatePage*>(this));
    return MyBase::qt_metacast(_clname);
}

int VehicleRunStatePage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MyBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: changePWPage((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: on_BuzzerBtn_pressed(); break;
        case 2: on_FirePageBtn_pressed(); break;
        case 3: on_CutPageBtn_pressed(); break;
        case 4: on_ResetPageBtn_pressed(); break;
        case 5: on_ByPassPageBtn_pressed(); break;
        case 6: on_LMResetPageBtn_pressed(); break;
        default: ;
        }
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void VehicleRunStatePage::changePWPage(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
