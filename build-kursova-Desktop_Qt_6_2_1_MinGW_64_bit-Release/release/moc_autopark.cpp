/****************************************************************************
** Meta object code from reading C++ file 'autopark.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../kursova/autopark.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'autopark.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Autopark_t {
    const uint offsetsAndSize[22];
    char stringdata0[185];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_Autopark_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_Autopark_t qt_meta_stringdata_Autopark = {
    {
QT_MOC_LITERAL(0, 8), // "Autopark"
QT_MOC_LITERAL(9, 19), // "on_pbAddCar_clicked"
QT_MOC_LITERAL(29, 0), // ""
QT_MOC_LITERAL(30, 22), // "on_pbDeleteCar_clicked"
QT_MOC_LITERAL(53, 16), // "on_pbSUV_clicked"
QT_MOC_LITERAL(70, 8), // "loadCars"
QT_MOC_LITERAL(79, 11), // "loadClients"
QT_MOC_LITERAL(91, 23), // "on_pbResetTable_clicked"
QT_MOC_LITERAL(115, 30), // "on_pbResetClientsTable_clicked"
QT_MOC_LITERAL(146, 16), // "on_pbAll_clicked"
QT_MOC_LITERAL(163, 21) // "on_pbOrderCar_clicked"

    },
    "Autopark\0on_pbAddCar_clicked\0\0"
    "on_pbDeleteCar_clicked\0on_pbSUV_clicked\0"
    "loadCars\0loadClients\0on_pbResetTable_clicked\0"
    "on_pbResetClientsTable_clicked\0"
    "on_pbAll_clicked\0on_pbOrderCar_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Autopark[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   68,    2, 0x08,    1 /* Private */,
       3,    0,   69,    2, 0x08,    2 /* Private */,
       4,    0,   70,    2, 0x08,    3 /* Private */,
       5,    0,   71,    2, 0x08,    4 /* Private */,
       6,    0,   72,    2, 0x08,    5 /* Private */,
       7,    0,   73,    2, 0x08,    6 /* Private */,
       8,    0,   74,    2, 0x08,    7 /* Private */,
       9,    0,   75,    2, 0x08,    8 /* Private */,
      10,    0,   76,    2, 0x08,    9 /* Private */,

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

       0        // eod
};

void Autopark::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Autopark *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_pbAddCar_clicked(); break;
        case 1: _t->on_pbDeleteCar_clicked(); break;
        case 2: _t->on_pbSUV_clicked(); break;
        case 3: _t->loadCars(); break;
        case 4: _t->loadClients(); break;
        case 5: _t->on_pbResetTable_clicked(); break;
        case 6: _t->on_pbResetClientsTable_clicked(); break;
        case 7: _t->on_pbAll_clicked(); break;
        case 8: _t->on_pbOrderCar_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject Autopark::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_Autopark.offsetsAndSize,
    qt_meta_data_Autopark,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Autopark_t
, QtPrivate::TypeAndForceComplete<Autopark, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *Autopark::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Autopark::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Autopark.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Autopark::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
