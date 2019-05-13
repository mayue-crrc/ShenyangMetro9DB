/****************************************************************************
** Meta object code from reading C++ file 'maintainceacprunpage.h'
**
** Created: Mon May 13 10:17:50 2019
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "maintainceacprunpage.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'maintainceacprunpage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MaintainceACPRunPage[] = {

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
      22,   21,   21,   21, 0x08,
      47,   21,   21,   21, 0x08,
      72,   21,   21,   21, 0x08,
      95,   21,   21,   21, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MaintainceACPRunPage[] = {
    "MaintainceACPRunPage\0\0on_MP2ClearBtn_pressed()\0"
    "on_MP1ClearBtn_pressed()\0"
    "on_returnBtn_pressed()\0timer2sEvent()\0"
};

const QMetaObject MaintainceACPRunPage::staticMetaObject = {
    { &MyBase::staticMetaObject, qt_meta_stringdata_MaintainceACPRunPage,
      qt_meta_data_MaintainceACPRunPage, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MaintainceACPRunPage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MaintainceACPRunPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MaintainceACPRunPage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MaintainceACPRunPage))
        return static_cast<void*>(const_cast< MaintainceACPRunPage*>(this));
    return MyBase::qt_metacast(_clname);
}

int MaintainceACPRunPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MyBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_MP2ClearBtn_pressed(); break;
        case 1: on_MP1ClearBtn_pressed(); break;
        case 2: on_returnBtn_pressed(); break;
        case 3: timer2sEvent(); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
