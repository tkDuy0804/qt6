/****************************************************************************
** Meta object code from reading C++ file 'dialog.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../QT6_3_14_Push_Button/dialog.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.0. It"
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
struct qt_meta_stringdata_CLASSDialogENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSDialogENDCLASS = QtMocHelpers::stringData(
    "Dialog",
    "on_checkable_button_clicked",
    "",
    "on_is_checked_button_clicked",
    "on_auto_repeat_button_clicked",
    "on_toggle_button_1_clicked",
    "on_pushButton_5_clicked",
    "on_toggle_button_2_clicked",
    "on_quit_button_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSDialogENDCLASS_t {
    uint offsetsAndSizes[18];
    char stringdata0[7];
    char stringdata1[28];
    char stringdata2[1];
    char stringdata3[29];
    char stringdata4[30];
    char stringdata5[27];
    char stringdata6[24];
    char stringdata7[27];
    char stringdata8[23];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSDialogENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSDialogENDCLASS_t qt_meta_stringdata_CLASSDialogENDCLASS = {
    {
        QT_MOC_LITERAL(0, 6),  // "Dialog"
        QT_MOC_LITERAL(7, 27),  // "on_checkable_button_clicked"
        QT_MOC_LITERAL(35, 0),  // ""
        QT_MOC_LITERAL(36, 28),  // "on_is_checked_button_clicked"
        QT_MOC_LITERAL(65, 29),  // "on_auto_repeat_button_clicked"
        QT_MOC_LITERAL(95, 26),  // "on_toggle_button_1_clicked"
        QT_MOC_LITERAL(122, 23),  // "on_pushButton_5_clicked"
        QT_MOC_LITERAL(146, 26),  // "on_toggle_button_2_clicked"
        QT_MOC_LITERAL(173, 22)   // "on_quit_button_clicked"
    },
    "Dialog",
    "on_checkable_button_clicked",
    "",
    "on_is_checked_button_clicked",
    "on_auto_repeat_button_clicked",
    "on_toggle_button_1_clicked",
    "on_pushButton_5_clicked",
    "on_toggle_button_2_clicked",
    "on_quit_button_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSDialogENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x08,    1 /* Private */,
       3,    0,   57,    2, 0x08,    2 /* Private */,
       4,    0,   58,    2, 0x08,    3 /* Private */,
       5,    0,   59,    2, 0x08,    4 /* Private */,
       6,    0,   60,    2, 0x08,    5 /* Private */,
       7,    0,   61,    2, 0x08,    6 /* Private */,
       8,    0,   62,    2, 0x08,    7 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject Dialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSDialogENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSDialogENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSDialogENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Dialog, std::true_type>,
        // method 'on_checkable_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_is_checked_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_auto_repeat_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_toggle_button_1_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_5_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_toggle_button_2_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_quit_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Dialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Dialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_checkable_button_clicked(); break;
        case 1: _t->on_is_checked_button_clicked(); break;
        case 2: _t->on_auto_repeat_button_clicked(); break;
        case 3: _t->on_toggle_button_1_clicked(); break;
        case 4: _t->on_pushButton_5_clicked(); break;
        case 5: _t->on_toggle_button_2_clicked(); break;
        case 6: _t->on_quit_button_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *Dialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Dialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSDialogENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Dialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
