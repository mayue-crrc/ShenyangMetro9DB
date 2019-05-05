/****************************************************************************
** Meta object code from reading C++ file 'vehiclepasswordpage.h'
**
** Created: Sun May 5 14:15:55 2019
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "vehiclepasswordpage.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vehiclepasswordpage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_VehiclePasswordPage[] = {

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
      21,   20,   20,   20, 0x08,
      44,   20,   20,   20, 0x08,
      68,   20,   20,   20, 0x08,
      87,   20,   20,   20, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_VehiclePasswordPage[] = {
    "VehiclePasswordPage\0\0on_returnBtn_pressed()\0"
    "on_confirmBtn_pressed()\0NumKeyboardEvent()\0"
    "getPage(int)\0"
};

const QMetaObject VehiclePasswordPage::staticMetaObject = {
    { &MyBase::staticMetaObject, qt_meta_stringdata_VehiclePasswordPage,
      qt_meta_data_VehiclePasswordPage, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &VehiclePasswordPage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *VehiclePasswordPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *VehiclePasswordPage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VehiclePasswordPage))
        return static_cast<void*>(const_cast< VehiclePasswordPage*>(this));
    return MyBase::qt_metacast(_clname);
}

int VehiclePasswordPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MyBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_returnBtn_pressed(); break;
        case 1: on_confirmBtn_pressed(); break;
        case 2: NumKeyboardEvent(); break;
        case 3: getPage((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
