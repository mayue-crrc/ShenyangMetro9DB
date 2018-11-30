/****************************************************************************
** Meta object code from reading C++ file 'ctrlnuminputmodule.h'
**
** Created: Wed Oct 24 13:52:51 2018
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ctrlnuminputmodule.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctrlnuminputmodule.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CtrlNumInputModule[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      24,   20,   19,   19, 0x05,

 // slots: signature, parameters, type, tag, flags
      44,   19,   19,   19, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_CtrlNumInputModule[] = {
    "CtrlNumInputModule\0\0key\0myKeyPress(QString)\0"
    "NumKeyboardEvent()\0"
};

const QMetaObject CtrlNumInputModule::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_CtrlNumInputModule,
      qt_meta_data_CtrlNumInputModule, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CtrlNumInputModule::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CtrlNumInputModule::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CtrlNumInputModule::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CtrlNumInputModule))
        return static_cast<void*>(const_cast< CtrlNumInputModule*>(this));
    return QWidget::qt_metacast(_clname);
}

int CtrlNumInputModule::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: myKeyPress((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: NumKeyboardEvent(); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void CtrlNumInputModule::myKeyPress(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
