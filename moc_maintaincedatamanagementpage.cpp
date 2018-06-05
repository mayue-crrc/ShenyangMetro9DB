/****************************************************************************
** Meta object code from reading C++ file 'maintaincedatamanagementpage.h'
**
** Created: Tue Jun 5 18:06:08 2018
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "maintaincedatamanagementpage.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'maintaincedatamanagementpage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MaintainceDataManagementPage[] = {

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
      30,   29,   29,   29, 0x08,
      54,   29,   29,   29, 0x08,
      77,   29,   29,   29, 0x08,
      96,   29,   29,   29, 0x08,
     116,   29,   29,   29, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MaintainceDataManagementPage[] = {
    "MaintainceDataManagementPage\0\0"
    "on_ConfirmBtn_pressed()\0on_returnBtn_pressed()\0"
    "NumKeyboardEvent()\0InputButtonsEvent()\0"
    "timer2sout()\0"
};

const QMetaObject MaintainceDataManagementPage::staticMetaObject = {
    { &MyBase::staticMetaObject, qt_meta_stringdata_MaintainceDataManagementPage,
      qt_meta_data_MaintainceDataManagementPage, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MaintainceDataManagementPage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MaintainceDataManagementPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MaintainceDataManagementPage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MaintainceDataManagementPage))
        return static_cast<void*>(const_cast< MaintainceDataManagementPage*>(this));
    return MyBase::qt_metacast(_clname);
}

int MaintainceDataManagementPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MyBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_ConfirmBtn_pressed(); break;
        case 1: on_returnBtn_pressed(); break;
        case 2: NumKeyboardEvent(); break;
        case 3: InputButtonsEvent(); break;
        case 4: timer2sout(); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
