/****************************************************************************
** Meta object code from reading C++ file 'maintaincefaultquerypage.h'
**
** Created: Tue Apr 16 15:49:49 2019
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
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      28,   26,   25,   25, 0x05,

 // slots: signature, parameters, type, tag, flags
      58,   25,   25,   25, 0x08,
      81,   25,   25,   25, 0x08,
     100,   25,   25,   25, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MaintainceFaultQueryPage[] = {
    "MaintainceFaultQueryPage\0\0,\0"
    "QueryFault(QString,QueryType)\0"
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
        case 0: QueryFault((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QueryType(*)>(_a[2]))); break;
        case 1: on_returnBtn_pressed(); break;
        case 2: TrainSelectEvent(); break;
        case 3: SystemSelectEvent(); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void MaintainceFaultQueryPage::QueryFault(QString _t1, QueryType _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
