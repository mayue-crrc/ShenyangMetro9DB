/****************************************************************************
** Meta object code from reading C++ file 'maintaincefaultquerypage.h'
**
** Created: Fri Dec 14 20:09:19 2018
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "maintaincefaultquerypage.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'maintaincefaultquerypage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MaintainceFaultQueryPage[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      26,   25,   25,   25, 0x08,
      49,   25,   25,   25, 0x08,
      68,   25,   25,   25, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MaintainceFaultQueryPage[] = {
    "MaintainceFaultQueryPage\0\0"
    "on_returnBtn_pressed()\0TrainSelectEvent()\0"
    "SystemSelectEvent()\0"
};

const QMetaObject MaintainceFaultQueryPage::staticMetaObject = {
    { &MyBase::staticMetaObject, qt_meta_stringdata_MaintainceFaultQueryPage,
      qt_meta_data_MaintainceFaultQueryPage, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MaintainceFaultQueryPage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MaintainceFaultQueryPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MaintainceFaultQueryPage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MaintainceFaultQueryPage))
        return static_cast<void*>(const_cast< MaintainceFaultQueryPage*>(this));
    return MyBase::qt_metacast(_clname);
}

int MaintainceFaultQueryPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MyBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_returnBtn_pressed(); break;
        case 1: TrainSelectEvent(); break;
        case 2: SystemSelectEvent(); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
