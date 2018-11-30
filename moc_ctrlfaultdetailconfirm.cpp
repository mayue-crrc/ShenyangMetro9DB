/****************************************************************************
** Meta object code from reading C++ file 'ctrlfaultdetailconfirm.h'
**
** Created: Wed Oct 24 13:53:00 2018
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ctrlfaultdetailconfirm.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctrlfaultdetailconfirm.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CtrlFaultDetailConfirm[] = {

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
      24,   23,   23,   23, 0x08,
      56,   23,   23,   23, 0x08,
      85,   23,   23,   23, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CtrlFaultDetailConfirm[] = {
    "CtrlFaultDetailConfirm\0\0"
    "on_FaultAllConfirmBtn_pressed()\0"
    "on_FaultConfirmBtn_pressed()\0"
    "updateWidget()\0"
};

const QMetaObject CtrlFaultDetailConfirm::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_CtrlFaultDetailConfirm,
      qt_meta_data_CtrlFaultDetailConfirm, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CtrlFaultDetailConfirm::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CtrlFaultDetailConfirm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CtrlFaultDetailConfirm::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CtrlFaultDetailConfirm))
        return static_cast<void*>(const_cast< CtrlFaultDetailConfirm*>(this));
    return QWidget::qt_metacast(_clname);
}

int CtrlFaultDetailConfirm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_FaultAllConfirmBtn_pressed(); break;
        case 1: on_FaultConfirmBtn_pressed(); break;
        case 2: updateWidget(); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
