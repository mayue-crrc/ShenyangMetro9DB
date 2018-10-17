/****************************************************************************
** Meta object code from reading C++ file 'maintainceportsdatapage.h'
**
** Created: Wed Oct 17 10:10:47 2018
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "maintainceportsdatapage.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'maintainceportsdatapage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MaintaincePortsDataPage[] = {

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
      50,   24,   24,   24, 0x08,
      74,   24,   24,   24, 0x08,
      97,   24,   24,   24, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MaintaincePortsDataPage[] = {
    "MaintaincePortsDataPage\0\0"
    "on_ConfirmBtn_released()\0"
    "on_ConfirmBtn_pressed()\0on_returnBtn_pressed()\0"
    "NumKeyboardEvent()\0"
};

const QMetaObject MaintaincePortsDataPage::staticMetaObject = {
    { &MyBase::staticMetaObject, qt_meta_stringdata_MaintaincePortsDataPage,
      qt_meta_data_MaintaincePortsDataPage, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MaintaincePortsDataPage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MaintaincePortsDataPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MaintaincePortsDataPage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MaintaincePortsDataPage))
        return static_cast<void*>(const_cast< MaintaincePortsDataPage*>(this));
    return MyBase::qt_metacast(_clname);
}

int MaintaincePortsDataPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MyBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_ConfirmBtn_released(); break;
        case 1: on_ConfirmBtn_pressed(); break;
        case 2: on_returnBtn_pressed(); break;
        case 3: NumKeyboardEvent(); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
