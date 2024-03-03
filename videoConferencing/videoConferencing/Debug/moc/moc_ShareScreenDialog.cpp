/****************************************************************************
** Meta object code from reading C++ file 'ShareScreenDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../ShareScreenDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ShareScreenDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ShareScreenDialog_t {
    QByteArrayData data[11];
    char stringdata0[120];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ShareScreenDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ShareScreenDialog_t qt_meta_stringdata_ShareScreenDialog = {
    {
QT_MOC_LITERAL(0, 0, 17), // "ShareScreenDialog"
QT_MOC_LITERAL(1, 18, 14), // "sig_StartShare"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 4), // "type"
QT_MOC_LITERAL(4, 39, 4), // "hwnd"
QT_MOC_LITERAL(5, 44, 5), // "onMin"
QT_MOC_LITERAL(6, 50, 7), // "onClose"
QT_MOC_LITERAL(7, 58, 8), // "onCancel"
QT_MOC_LITERAL(8, 67, 12), // "onStartShare"
QT_MOC_LITERAL(9, 80, 21), // "onDesktopItemSelected"
QT_MOC_LITERAL(10, 102, 17) // "onAppItemSelected"

    },
    "ShareScreenDialog\0sig_StartShare\0\0"
    "type\0hwnd\0onMin\0onClose\0onCancel\0"
    "onStartShare\0onDesktopItemSelected\0"
    "onAppItemSelected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ShareScreenDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   54,    2, 0x08 /* Private */,
       6,    0,   55,    2, 0x08 /* Private */,
       7,    0,   56,    2, 0x08 /* Private */,
       8,    0,   57,    2, 0x08 /* Private */,
       9,    0,   58,    2, 0x08 /* Private */,
      10,    0,   59,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::VoidStar,    3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ShareScreenDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ShareScreenDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sig_StartShare((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< void*(*)>(_a[2]))); break;
        case 1: _t->onMin(); break;
        case 2: _t->onClose(); break;
        case 3: _t->onCancel(); break;
        case 4: _t->onStartShare(); break;
        case 5: _t->onDesktopItemSelected(); break;
        case 6: _t->onAppItemSelected(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ShareScreenDialog::*)(int , void * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ShareScreenDialog::sig_StartShare)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ShareScreenDialog::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_ShareScreenDialog.data,
    qt_meta_data_ShareScreenDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ShareScreenDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ShareScreenDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ShareScreenDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int ShareScreenDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void ShareScreenDialog::sig_StartShare(int _t1, void * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
