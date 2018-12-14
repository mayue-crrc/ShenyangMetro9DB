/****************************************************************************
** Meta object code from reading C++ file 'maintainceconsumptionpage.h'
**
** Created: Fri Dec 14 20:08:44 2018
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "maintainceconsumptionpage.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'maintainceconsumptionpage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MaintainceConsumptionPage[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      27,   26,   26,   26, 0x08,
      51,   26,   26,   26, 0x08,
      76,   26,   26,   26, 0x08,
     102,   26,   26,   26, 0x08,
     125,   26,   26,   26, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MaintainceConsumptionPage[] = {
    "MaintainceConsumptionPage\0\0"
    "on_ConfirmBtn_pressed()\0"
    "on_SIVClearBtn_pressed()\0"
    "on_VVVFClearBtn_pressed()\0"
    "on_returnBtn_pressed()\0timer2sEvent()\0"
};

const QMetaObject MaintainceConsumptionPage::staticMetaObject = {
    { &MyBase::staticMetaObject, qt_meta_stringdata_MaintainceConsumptionPage,
      qt_meta_data_MaintainceConsumptionPage, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MaintainceConsumptionPage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MaintainceConsumptionPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MaintainceConsumptionPage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MaintainceConsumptionPage))
        return static_cast<void*>(const_cast< MaintainceConsumptionPage*>(this));
    return MyBase::qt_metacast(_clname);
}

int MaintainceConsumptionPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MyBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_ConfirmBtn_pressed(); break;
        case 1: on_SIVClearBtn_pressed(); break;
        case 2: on_VVVFClearBtn_pressed(); break;
        case 3: on_returnBtn_pressed(); break;
        case 4: timer2sEvent(); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
