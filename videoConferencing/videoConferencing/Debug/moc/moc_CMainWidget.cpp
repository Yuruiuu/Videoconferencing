/****************************************************************************
** Meta object code from reading C++ file 'CMainWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../CMainWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CMainWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CMainWidget_t {
    QByteArrayData data[8];
    char stringdata0[77];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CMainWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CMainWidget_t qt_meta_stringdata_CMainWidget = {
    {
QT_MOC_LITERAL(0, 0, 11), // "CMainWidget"
QT_MOC_LITERAL(1, 12, 20), // "onLocalJoinedSuccess"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 9), // "qsChannel"
QT_MOC_LITERAL(4, 44, 3), // "uid"
QT_MOC_LITERAL(5, 48, 7), // "elapsed"
QT_MOC_LITERAL(6, 56, 14), // "onRemoteJoined"
QT_MOC_LITERAL(7, 71, 5) // "uid_t"

    },
    "CMainWidget\0onLocalJoinedSuccess\0\0"
    "qsChannel\0uid\0elapsed\0onRemoteJoined\0"
    "uid_t"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CMainWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    3,   24,    2, 0x08 /* Private */,
       6,    2,   31,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::UInt, QMetaType::Int,    3,    4,    5,
    QMetaType::Void, 0x80000000 | 7, QMetaType::Int,    4,    5,

       0        // eod
};

void CMainWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CMainWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onLocalJoinedSuccess((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 1: _t->onRemoteJoined((*reinterpret_cast< uid_t(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CMainWidget::staticMetaObject = { {
    &CFrameLessWidgetBase::staticMetaObject,
    qt_meta_stringdata_CMainWidget.data,
    qt_meta_data_CMainWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CMainWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CMainWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CMainWidget.stringdata0))
        return static_cast<void*>(this);
    return CFrameLessWidgetBase::qt_metacast(_clname);
}

int CMainWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CFrameLessWidgetBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
