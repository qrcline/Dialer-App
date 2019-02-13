/****************************************************************************
** Meta object code from reading C++ file 'dialer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../dialer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Dialer_t {
    QByteArrayData data[20];
    char stringdata0[355];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Dialer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Dialer_t qt_meta_stringdata_Dialer = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Dialer"
QT_MOC_LITERAL(1, 7, 35), // "on_actionOpen_Adress_Book_tri..."
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 23), // "on_actionExit_triggered"
QT_MOC_LITERAL(4, 68, 20), // "on_tableView_clicked"
QT_MOC_LITERAL(5, 89, 11), // "QModelIndex"
QT_MOC_LITERAL(6, 101, 5), // "index"
QT_MOC_LITERAL(7, 107, 21), // "on_backButton_clicked"
QT_MOC_LITERAL(8, 129, 18), // "on_keypad1_clicked"
QT_MOC_LITERAL(9, 148, 18), // "on_keypad2_clicked"
QT_MOC_LITERAL(10, 167, 18), // "on_keypad3_clicked"
QT_MOC_LITERAL(11, 186, 19), // "on_keaypad4_clicked"
QT_MOC_LITERAL(12, 206, 18), // "on_keypad5_clicked"
QT_MOC_LITERAL(13, 225, 18), // "on_keypad6_clicked"
QT_MOC_LITERAL(14, 244, 18), // "on_keypad7_clicked"
QT_MOC_LITERAL(15, 263, 18), // "on_keypad8_clicked"
QT_MOC_LITERAL(16, 282, 18), // "on_keypad9_clicked"
QT_MOC_LITERAL(17, 301, 18), // "on_keypad0_clicked"
QT_MOC_LITERAL(18, 320, 21), // "on_callButton_clicked"
QT_MOC_LITERAL(19, 342, 12) // "updateScreen"

    },
    "Dialer\0on_actionOpen_Adress_Book_triggered\0"
    "\0on_actionExit_triggered\0on_tableView_clicked\0"
    "QModelIndex\0index\0on_backButton_clicked\0"
    "on_keypad1_clicked\0on_keypad2_clicked\0"
    "on_keypad3_clicked\0on_keaypad4_clicked\0"
    "on_keypad5_clicked\0on_keypad6_clicked\0"
    "on_keypad7_clicked\0on_keypad8_clicked\0"
    "on_keypad9_clicked\0on_keypad0_clicked\0"
    "on_callButton_clicked\0updateScreen"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Dialer[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   94,    2, 0x08 /* Private */,
       3,    0,   95,    2, 0x08 /* Private */,
       4,    1,   96,    2, 0x08 /* Private */,
       7,    0,   99,    2, 0x08 /* Private */,
       8,    0,  100,    2, 0x08 /* Private */,
       9,    0,  101,    2, 0x08 /* Private */,
      10,    0,  102,    2, 0x08 /* Private */,
      11,    0,  103,    2, 0x08 /* Private */,
      12,    0,  104,    2, 0x08 /* Private */,
      13,    0,  105,    2, 0x08 /* Private */,
      14,    0,  106,    2, 0x08 /* Private */,
      15,    0,  107,    2, 0x08 /* Private */,
      16,    0,  108,    2, 0x08 /* Private */,
      17,    0,  109,    2, 0x08 /* Private */,
      18,    0,  110,    2, 0x08 /* Private */,
      19,    1,  111,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
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
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void Dialer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Dialer *_t = static_cast<Dialer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_actionOpen_Adress_Book_triggered(); break;
        case 1: _t->on_actionExit_triggered(); break;
        case 2: _t->on_tableView_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 3: _t->on_backButton_clicked(); break;
        case 4: _t->on_keypad1_clicked(); break;
        case 5: _t->on_keypad2_clicked(); break;
        case 6: _t->on_keypad3_clicked(); break;
        case 7: _t->on_keaypad4_clicked(); break;
        case 8: _t->on_keypad5_clicked(); break;
        case 9: _t->on_keypad6_clicked(); break;
        case 10: _t->on_keypad7_clicked(); break;
        case 11: _t->on_keypad8_clicked(); break;
        case 12: _t->on_keypad9_clicked(); break;
        case 13: _t->on_keypad0_clicked(); break;
        case 14: _t->on_callButton_clicked(); break;
        case 15: _t->updateScreen((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Dialer::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_Dialer.data,
    qt_meta_data_Dialer,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Dialer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Dialer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Dialer.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Dialer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
