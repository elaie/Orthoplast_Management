/****************************************************************************
** Meta object code from reading C++ file 'patient_info_dialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "patient_info_dialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'patient_info_dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Patient_Info_Dialog_t {
    QByteArrayData data[13];
    char stringdata0[219];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Patient_Info_Dialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Patient_Info_Dialog_t qt_meta_stringdata_Patient_Info_Dialog = {
    {
QT_MOC_LITERAL(0, 0, 19), // "Patient_Info_Dialog"
QT_MOC_LITERAL(1, 20, 14), // "on_Med_clicked"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 16), // "on_Med_2_clicked"
QT_MOC_LITERAL(4, 53, 14), // "on_CoM_clicked"
QT_MOC_LITERAL(5, 68, 16), // "on_CoM_2_clicked"
QT_MOC_LITERAL(6, 85, 16), // "on_Finds_clicked"
QT_MOC_LITERAL(7, 102, 18), // "on_Finds_2_clicked"
QT_MOC_LITERAL(8, 121, 19), // "on_Invest_2_clicked"
QT_MOC_LITERAL(9, 141, 17), // "on_Physio_clicked"
QT_MOC_LITERAL(10, 159, 19), // "on_Physio_2_clicked"
QT_MOC_LITERAL(11, 179, 17), // "on_Invest_clicked"
QT_MOC_LITERAL(12, 197, 21) // "on_pushButton_clicked"

    },
    "Patient_Info_Dialog\0on_Med_clicked\0\0"
    "on_Med_2_clicked\0on_CoM_clicked\0"
    "on_CoM_2_clicked\0on_Finds_clicked\0"
    "on_Finds_2_clicked\0on_Invest_2_clicked\0"
    "on_Physio_clicked\0on_Physio_2_clicked\0"
    "on_Invest_clicked\0on_pushButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Patient_Info_Dialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x08 /* Private */,
       3,    0,   70,    2, 0x08 /* Private */,
       4,    0,   71,    2, 0x08 /* Private */,
       5,    0,   72,    2, 0x08 /* Private */,
       6,    0,   73,    2, 0x08 /* Private */,
       7,    0,   74,    2, 0x08 /* Private */,
       8,    0,   75,    2, 0x08 /* Private */,
       9,    0,   76,    2, 0x08 /* Private */,
      10,    0,   77,    2, 0x08 /* Private */,
      11,    0,   78,    2, 0x08 /* Private */,
      12,    0,   79,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Patient_Info_Dialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Patient_Info_Dialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_Med_clicked(); break;
        case 1: _t->on_Med_2_clicked(); break;
        case 2: _t->on_CoM_clicked(); break;
        case 3: _t->on_CoM_2_clicked(); break;
        case 4: _t->on_Finds_clicked(); break;
        case 5: _t->on_Finds_2_clicked(); break;
        case 6: _t->on_Invest_2_clicked(); break;
        case 7: _t->on_Physio_clicked(); break;
        case 8: _t->on_Physio_2_clicked(); break;
        case 9: _t->on_Invest_clicked(); break;
        case 10: _t->on_pushButton_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Patient_Info_Dialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_Patient_Info_Dialog.data,
    qt_meta_data_Patient_Info_Dialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Patient_Info_Dialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Patient_Info_Dialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Patient_Info_Dialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Patient_Info_Dialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
