/****************************************************************************
** Meta object code from reading C++ file 'tarea3.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Tareas_PrimerParcial/Tarea3/tarea3.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tarea3.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Tarea3_t {
    QByteArrayData data[9];
    char stringdata[149];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Tarea3_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Tarea3_t qt_meta_stringdata_Tarea3 = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Tarea3"
QT_MOC_LITERAL(1, 7, 19), // "on_clearBtn_clicked"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 20), // "on_appendBtn_clicked"
QT_MOC_LITERAL(4, 49, 19), // "on_appGoBtn_clicked"
QT_MOC_LITERAL(5, 69, 20), // "on_insertBtn_clicked"
QT_MOC_LITERAL(6, 90, 16), // "on_goBtn_clicked"
QT_MOC_LITERAL(7, 107, 20), // "on_searchBtn_clicked"
QT_MOC_LITERAL(8, 128, 20) // "on_removeBtn_clicked"

    },
    "Tarea3\0on_clearBtn_clicked\0\0"
    "on_appendBtn_clicked\0on_appGoBtn_clicked\0"
    "on_insertBtn_clicked\0on_goBtn_clicked\0"
    "on_searchBtn_clicked\0on_removeBtn_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Tarea3[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    0,   54,    2, 0x08 /* Private */,
       8,    0,   55,    2, 0x08 /* Private */,

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

void Tarea3::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Tarea3 *_t = static_cast<Tarea3 *>(_o);
        switch (_id) {
        case 0: _t->on_clearBtn_clicked(); break;
        case 1: _t->on_appendBtn_clicked(); break;
        case 2: _t->on_appGoBtn_clicked(); break;
        case 3: _t->on_insertBtn_clicked(); break;
        case 4: _t->on_goBtn_clicked(); break;
        case 5: _t->on_searchBtn_clicked(); break;
        case 6: _t->on_removeBtn_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject Tarea3::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Tarea3.data,
      qt_meta_data_Tarea3,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Tarea3::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Tarea3::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Tarea3.stringdata))
        return static_cast<void*>(const_cast< Tarea3*>(this));
    return QDialog::qt_metacast(_clname);
}

int Tarea3::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
