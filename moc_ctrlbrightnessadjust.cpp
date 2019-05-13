/****************************************************************************
** Meta object code from reading C++ file 'ctrlbrightnessadjust.h'
**
** Created: Mon May 13 10:18:01 2019
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ctrlbrightnessadjust.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctrlbrightnessadjust.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CtrlBrightnessAdjust[] = {

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
      22,   21,   21,   21, 0x08,
      45,   21,   21,   21, 0x08,
      66,   21,   21,   21, 0x08,
      88,   21,   21,   21, 0x08,
     109,   21,   21,   21, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CtrlBrightnessAdjust[] = {
    "CtrlBrightnessAdjust\0\0on_BTNReturn_pressed()\0"
    "on_BTNPlus_pressed()\0on_BTNMinus_pressed()\0"
    "on_BTNAuto_pressed()\0on_BTNMannal_pressed()\0"
};

const QMetaObject CtrlBrightnessAdjust::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_CtrlBrightnessAdjust,
      qt_meta_data_CtrlBrightnessAdjust, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CtrlBrightnessAdjust::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CtrlBrightnessAdjust::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CtrlBrightnessAdjust::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CtrlBrightnessAdjust))
        return static_cast<void*>(const_cast< CtrlBrightnessAdjust*>(this));
    return QWidget::qt_metacast(_clname);
}

int CtrlBrightnessAdjust::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_BTNReturn_pressed(); break;
        case 1: on_BTNPlus_pressed(); break;
        case 2: on_BTNMinus_pressed(); break;
        case 3: on_BTNAuto_pressed(); break;
        case 4: on_BTNMannal_pressed(); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
