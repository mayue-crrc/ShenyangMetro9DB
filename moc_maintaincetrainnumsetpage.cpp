/****************************************************************************
** Meta object code from reading C++ file 'maintaincetrainnumsetpage.h'
**
** Created: Wed Jun 27 08:48:35 2018
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "maintaincetrainnumsetpage.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'maintaincetrainnumsetpage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MaintainceTrainNumSetPage[] = {

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
      27,   26,   26,   26, 0x08,
      51,   26,   26,   26, 0x08,
      78,   74,   26,   26, 0x0a,
     103,   26,   26,   26, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_MaintainceTrainNumSetPage[] = {
    "MaintainceTrainNumSetPage\0\0"
    "on_ConfirmBtn_pressed()\0on_returnBtn_pressed()\0"
    "key\0myKeyPressEvent(QString)\0"
    "timer3sEvent()\0"
};

const QMetaObject MaintainceTrainNumSetPage::staticMetaObject = {
    { &MyBase::staticMetaObject, qt_meta_stringdata_MaintainceTrainNumSetPage,
      qt_meta_data_MaintainceTrainNumSetPage, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MaintainceTrainNumSetPage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MaintainceTrainNumSetPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MaintainceTrainNumSetPage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MaintainceTrainNumSetPage))
        return static_cast<void*>(const_cast< MaintainceTrainNumSetPage*>(this));
    return MyBase::qt_metacast(_clname);
}

int MaintainceTrainNumSetPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MyBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_ConfirmBtn_pressed(); break;
        case 1: on_returnBtn_pressed(); break;
        case 2: myKeyPressEvent((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: timer3sEvent(); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
