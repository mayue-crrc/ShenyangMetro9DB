/****************************************************************************
** Meta object code from reading C++ file 'vehicleresetpage.h'
**
** Created: Mon Apr 2 09:14:35 2018
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../vehicleresetpage.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vehicleresetpage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_VehicleResetPage[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x08,
      42,   17,   17,   17, 0x08,
      65,   17,   17,   17, 0x08,
      88,   17,   17,   17, 0x08,
     112,   17,   17,   17, 0x08,
     140,   17,   17,   17, 0x08,
     167,   17,   17,   17, 0x08,
     194,   17,   17,   17, 0x08,
     222,   17,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_VehicleResetPage[] = {
    "VehicleResetPage\0\0on_VVVFMP2Btn_pressed()\0"
    "on_VVVFM2Btn_pressed()\0on_VVVFM1Btn_pressed()\0"
    "on_VVVFMP1Btn_pressed()\0"
    "on_ACMRESETTC2Btn_pressed()\0"
    "on_ACMRESETM2Btn_pressed()\0"
    "on_ACMRESETM1Btn_pressed()\0"
    "on_ACMRESETTC1Btn_pressed()\0"
    "on_returnBtn_pressed()\0"
};

const QMetaObject VehicleResetPage::staticMetaObject = {
    { &MyBase::staticMetaObject, qt_meta_stringdata_VehicleResetPage,
      qt_meta_data_VehicleResetPage, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &VehicleResetPage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *VehicleResetPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *VehicleResetPage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VehicleResetPage))
        return static_cast<void*>(const_cast< VehicleResetPage*>(this));
    return MyBase::qt_metacast(_clname);
}

int VehicleResetPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MyBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_VVVFMP2Btn_pressed(); break;
        case 1: on_VVVFM2Btn_pressed(); break;
        case 2: on_VVVFM1Btn_pressed(); break;
        case 3: on_VVVFMP1Btn_pressed(); break;
        case 4: on_ACMRESETTC2Btn_pressed(); break;
        case 5: on_ACMRESETM2Btn_pressed(); break;
        case 6: on_ACMRESETM1Btn_pressed(); break;
        case 7: on_ACMRESETTC1Btn_pressed(); break;
        case 8: on_returnBtn_pressed(); break;
        default: ;
        }
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
