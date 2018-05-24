/****************************************************************************
** Meta object code from reading C++ file 'maintaincediomp2page.h'
**
** Created: Fri Sep 29 10:51:11 2017
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "maintaincediomp2page.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'maintaincediomp2page.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MaintainceDIOMP2Page[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      22,   21,   21,   21, 0x08,
      45,   21,   21,   21, 0x08,
      64,   21,   21,   21, 0x08,
      83,   21,   21,   21, 0x08,
     106,   21,   21,   21, 0x08,
     129,   21,   21,   21, 0x08,
     151,   21,   21,   21, 0x08,
     173,   21,   21,   21, 0x08,
     196,   21,   21,   21, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MaintainceDIOMP2Page[] = {
    "MaintainceDIOMP2Page\0\0on_returnBtn_pressed()\0"
    "on_DOBtn_pressed()\0on_DIBtn_pressed()\0"
    "on_TC2DIOBtn_pressed()\0on_MP2DIOBtn_pressed()\0"
    "on_M2DIOBtn_pressed()\0on_M1DIOBtn_pressed()\0"
    "on_MP1DIOBtn_pressed()\0on_TC1DIOBtn_pressed()\0"
};

const QMetaObject MaintainceDIOMP2Page::staticMetaObject = {
    { &MyBase::staticMetaObject, qt_meta_stringdata_MaintainceDIOMP2Page,
      qt_meta_data_MaintainceDIOMP2Page, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MaintainceDIOMP2Page::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MaintainceDIOMP2Page::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MaintainceDIOMP2Page::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MaintainceDIOMP2Page))
        return static_cast<void*>(const_cast< MaintainceDIOMP2Page*>(this));
    return MyBase::qt_metacast(_clname);
}

int MaintainceDIOMP2Page::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MyBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_returnBtn_pressed(); break;
        case 1: on_DOBtn_pressed(); break;
        case 2: on_DIBtn_pressed(); break;
        case 3: on_TC2DIOBtn_pressed(); break;
        case 4: on_MP2DIOBtn_pressed(); break;
        case 5: on_M2DIOBtn_pressed(); break;
        case 6: on_M1DIOBtn_pressed(); break;
        case 7: on_MP1DIOBtn_pressed(); break;
        case 8: on_TC1DIOBtn_pressed(); break;
        default: ;
        }
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
