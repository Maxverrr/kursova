/****************************************************************************
** Meta object code from reading C++ file 'autopark.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../autopark.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'autopark.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSAutoparkENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSAutoparkENDCLASS = QtMocHelpers::stringData(
    "Autopark",
    "on_pbAddCar_clicked",
    "",
    "on_pbDeleteCar_clicked",
    "on_pbSUV_clicked",
    "loadCars",
    "loadClients",
    "on_pbResetTable_clicked",
    "on_pbResetClientsTable_clicked",
    "on_pbAll_clicked",
    "on_pbOrderCar_clicked",
    "on_pbShowClients_clicked",
    "on_pbSedan_clicked",
    "on_pbBiznes_clicked",
    "on_pbEco_clicked"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSAutoparkENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   92,    2, 0x08,    1 /* Private */,
       3,    0,   93,    2, 0x08,    2 /* Private */,
       4,    0,   94,    2, 0x08,    3 /* Private */,
       5,    0,   95,    2, 0x08,    4 /* Private */,
       6,    0,   96,    2, 0x08,    5 /* Private */,
       7,    0,   97,    2, 0x08,    6 /* Private */,
       8,    0,   98,    2, 0x08,    7 /* Private */,
       9,    0,   99,    2, 0x08,    8 /* Private */,
      10,    0,  100,    2, 0x08,    9 /* Private */,
      11,    0,  101,    2, 0x08,   10 /* Private */,
      12,    0,  102,    2, 0x08,   11 /* Private */,
      13,    0,  103,    2, 0x08,   12 /* Private */,
      14,    0,  104,    2, 0x08,   13 /* Private */,

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
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject Autopark::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSAutoparkENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSAutoparkENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSAutoparkENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Autopark, std::true_type>,
        // method 'on_pbAddCar_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pbDeleteCar_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pbSUV_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'loadCars'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'loadClients'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pbResetTable_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pbResetClientsTable_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pbAll_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pbOrderCar_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pbShowClients_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pbSedan_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pbBiznes_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pbEco_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

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
        case 9: _t->on_pbShowClients_clicked(); break;
        case 10: _t->on_pbSedan_clicked(); break;
        case 11: _t->on_pbBiznes_clicked(); break;
        case 12: _t->on_pbEco_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *Autopark::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Autopark::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSAutoparkENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Autopark::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP