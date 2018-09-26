/****************************************************************************
** Meta object code from reading C++ file 'maintaincewheelsetpage.h'
**
** Created: Tue Sep 25 15:17:07 2018
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "maintaincewheelsetpage.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'maintaincewheelsetpage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MaintainceWheelsetPage[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      28,   24,   23,   23, 0x0a,
      53,   23,   23,   23, 0x08,
      78,   23,   23,   23, 0x08,
     102,   23,   23,   23, 0x08,
     128,   23,   23,   23, 0x08,
     154,   23,   23,   23, 0x08,
     180,   23,   23,   23, 0x08,
     205,   23,   23,   23, 0x08,
     230,   23,   23,   23, 0x08,
     256,   23,   23,   23, 0x08,
     282,   23,   23,   23, 0x08,
     305,   23,   23,   23, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MaintainceWheelsetPage[] = {
    "MaintainceWheelsetPage\0\0key\0"
    "myKeyPressEvent(QString)\0"
    "on_ReSeleclBtn_pressed()\0"
    "on_confirmBtn_pressed()\0"
    "on_ALLSelectBtn_pressed()\0"
    "on_TC2SelectBtn_pressed()\0"
    "on_MP2SelectBtn_pressed()\0"
    "on_M2SelectBtn_pressed()\0"
    "on_M1SelectBtn_pressed()\0"
    "on_MP1SelectBtn_pressed()\0"
    "on_TC1SelectBtn_pressed()\0"
    "on_returnBtn_pressed()\0timer3sEvent()\0"
};

const QMetaObject MaintainceWheelsetPage::staticMetaObject = {
    { &MyBase::staticMetaObject, qt_meta_stringdata_MaintainceWheelsetPage,
      qt_meta_data_MaintainceWheelsetPage, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MaintainceWheelsetPage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MaintainceWheelsetPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MaintainceWheelsetPage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MaintainceWheelsetPage))
        return static_cast<void*>(const_cast< MaintainceWheelsetPage*>(this));
    return MyBase::qt_metacast(_clname);
}

int MaintainceWheelsetPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MyBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: myKeyPressEvent((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: on_ReSeleclBtn_pressed(); break;
        case 2: on_confirmBtn_pressed(); break;
        case 3: on_ALLSelectBtn_pressed(); break;
        case 4: on_TC2SelectBtn_pressed(); break;
        case 5: on_MP2SelectBtn_pressed(); break;
        case 6: on_M2SelectBtn_pressed(); break;
        case 7: on_M1SelectBtn_pressed(); break;
        case 8: on_MP1SelectBtn_pressed(); break;
        case 9: on_TC1SelectBtn_pressed(); break;
        case 10: on_returnBtn_pressed(); break;
        case 11: timer3sEvent(); break;
        default: ;
        }
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
