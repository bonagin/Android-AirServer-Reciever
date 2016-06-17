/****************************************************************************
** Meta object code from reading C++ file 'ntpthread.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ntpthread.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ntpthread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_NTPThread_t {
    QByteArrayData data[8];
    char stringdata0[69];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NTPThread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NTPThread_t qt_meta_stringdata_NTPThread = {
    {
QT_MOC_LITERAL(0, 0, 9), // "NTPThread"
QT_MOC_LITERAL(1, 10, 16), // "ntpreplyreceived"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 12), // "QHostAddress"
QT_MOC_LITERAL(4, 41, 7), // "address"
QT_MOC_LITERAL(5, 49, 4), // "port"
QT_MOC_LITERAL(6, 54, 8), // "NtpReply"
QT_MOC_LITERAL(7, 63, 5) // "reply"

    },
    "NTPThread\0ntpreplyreceived\0\0QHostAddress\0"
    "address\0port\0NtpReply\0reply"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NTPThread[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    3,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::UShort, 0x80000000 | 6,    4,    5,    7,

       0        // eod
};

void NTPThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        NTPThread *_t = static_cast<NTPThread *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ntpreplyreceived((*reinterpret_cast< const QHostAddress(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2])),(*reinterpret_cast< const NtpReply(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObject NTPThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_NTPThread.data,
      qt_meta_data_NTPThread,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *NTPThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NTPThread::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_NTPThread.stringdata0))
        return static_cast<void*>(const_cast< NTPThread*>(this));
    return QThread::qt_metacast(_clname);
}

int NTPThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
