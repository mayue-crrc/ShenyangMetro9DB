/****************************************************************************
** Meta object code from reading C++ file 'maintaincehmiinitsetpage.h'
**
** Created: Fri Feb 15 15:21:51 2019
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "maintaincehmiinitsetpage.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'maintaincehmiinitsetpage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MaintainceHMIInitsetPage[] = {

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
      26,   25,   25,   25, 0x08,
      49,   25,   25,   25, 0x08,
      72,   25,   25,   25, 0x08,
      92,   25,   25,   25, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MaintainceHMIInitsetPage[] = {
    "MaintainceHMIInitsetPage\0\0"
    "on_HMIReboot_pressed()\0on_returnBtn_pressed()\0"
    "on_TC2Btn_pressed()\0on_TC1Btn_pressed()\0"
};

const QMetaObject MaintainceHMIInitsetPage::staticMetaObject = {
    { &MyBase::staticMetaObject, qt_meta_stringdata_MaintainceHMIInitsetPage,
      qt_meta_data_MaintainceHMIInitsetPage, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MaintainceHMIInitsetPage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MaintainceHMIInitsetPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MaintainceHMIInitsetPage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MaintainceHMIInitsetPage))
        return static_cast<void*>(const_cast< MaintainceHMIInitsetPage*>(this));
    return MyBase::qt_metacast(_clname);
}

int MaintainceHMIInitsetPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MyBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_HMIReboot_pressed(); break;
        case 1: on_returnBtn_pressed(); break;
        case 2: on_TC2Btn_pressed(); break;
        case 3: on_TC1Btn_pressed(); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
