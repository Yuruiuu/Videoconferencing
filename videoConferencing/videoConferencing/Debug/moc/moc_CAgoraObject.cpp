/****************************************************************************
** Meta object code from reading C++ file 'CAgoraObject.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../CAgoraObject.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CAgoraObject.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CAgoraObject_t {
    QByteArrayData data[10];
    char stringdata0[133];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CAgoraObject_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CAgoraObject_t qt_meta_stringdata_CAgoraObject = {
    {
QT_MOC_LITERAL(0, 0, 12), // "CAgoraObject"
QT_MOC_LITERAL(1, 13, 27), // "sender_joinedChannelSuccess"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 9), // "qsChannel"
QT_MOC_LITERAL(4, 52, 3), // "uid"
QT_MOC_LITERAL(5, 56, 7), // "elapsed"
QT_MOC_LITERAL(6, 64, 17), // "sender_userJoined"
QT_MOC_LITERAL(7, 82, 18), // "sender_userOffline"
QT_MOC_LITERAL(8, 101, 24), // "USER_OFFLINE_REASON_TYPE"
QT_MOC_LITERAL(9, 126, 6) // "reason"

    },
    "CAgoraObject\0sender_joinedChannelSuccess\0"
    "\0qsChannel\0uid\0elapsed\0sender_userJoined\0"
    "sender_userOffline\0USER_OFFLINE_REASON_TYPE\0"
    "reason"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CAgoraObject[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   29,    2, 0x06 /* Public */,
       6,    2,   36,    2, 0x06 /* Public */,
       7,    2,   41,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::UInt, QMetaType::Int,    3,    4,    5,
    QMetaType::Void, QMetaType::UInt, QMetaType::Int,    4,    5,
    QMetaType::Void, QMetaType::UInt, 0x80000000 | 8,    4,    9,

       0        // eod
};

void CAgoraObject::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CAgoraObject *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sender_joinedChannelSuccess((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 1: _t->sender_userJoined((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->sender_userOffline((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< USER_OFFLINE_REASON_TYPE(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CAgoraObject::*)(const QString & , unsigned int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CAgoraObject::sender_joinedChannelSuccess)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CAgoraObject::*)(unsigned int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CAgoraObject::sender_userJoined)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CAgoraObject::*)(unsigned int , USER_OFFLINE_REASON_TYPE );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CAgoraObject::sender_userOffline)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CAgoraObject::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_CAgoraObject.data,
    qt_meta_data_CAgoraObject,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CAgoraObject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CAgoraObject::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CAgoraObject.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int CAgoraObject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void CAgoraObject::sender_joinedChannelSuccess(const QString & _t1, unsigned int _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CAgoraObject::sender_userJoined(unsigned int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CAgoraObject::sender_userOffline(unsigned int _t1, USER_OFFLINE_REASON_TYPE _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
