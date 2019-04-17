/****************************************************************************
** Meta object code from reading C++ file 'maintaincedatetimesetpage.h'
**
** Created: Tue Apr 16 15:49:24 2019
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "maintaincedatetimesetpage.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'maintaincedatetimesetpage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MaintainceDatetimesetPage[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      31,   27,   26,   26, 0x0a,
      56,   26,   26,   26, 0x0a,
      71,   26,   26,   26, 0x08,
      95,   26,   26,   26, 0x08,
     118,   26,   26,   26, 0x08,
     141,   26,   26,   26, 0x08,
     162,   26,   26,   26, 0x08,
     182,   26,   26,   26, 0x08,
     204,   26,   26,   26, 0x08,
     225,   26,   26,   26, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MaintainceDatetimesetPage[] = {
    "MaintainceDatetimesetPage\0\0key\0"
    "myKeyPressEvent(QString)\0timer3sEvent()\0"
    "on_ConfirmBtn_pressed()\0on_SecondBtn_pressed()\0"
    "on_MinuteBtn_pressed()\0on_HourBtn_pressed()\0"
    "on_DayBtn_pressed()\0on_MonthBtn_pressed()\0"
    "on_YearBtn_pressed()\0on_returnBtn_pressed()\0"
};

const QMetaObject MaintainceDatetimesetPage::staticMetaObject = {
    { &MyBase::staticMetaObject, qt_meta_stringdata_MaintainceDatetimesetPage,
      qt_meta_data_MaintainceDatetimesetPage, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MaintainceDatetimesetPage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MaintainceDatetimesetPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MaintainceDatetimesetPage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MaintainceDatetimesetPage))
        return static_cast<void*>(const_cast< MaintainceDatetimesetPage*>(this));
    return MyBase::qt_metacast(_clname);
}

int MaintainceDatetimesetPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MyBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: myKeyPressEvent((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: timer3sEvent(); break;
        case 2: on_ConfirmBtn_pressed(); break;
        case 3: on_SecondBtn_pressed(); break;
        case 4: on_MinuteBtn_pressed(); break;
        case 5: on_HourBtn_pressed(); break;
        case 6: on_DayBtn_pressed(); break;
        case 7: on_MonthBtn_pressed(); break;
        case 8: on_YearBtn_pressed(); break;
        case 9: on_returnBtn_pressed(); break;
        default: ;
        }
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
