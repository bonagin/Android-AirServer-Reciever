/****************************************************************************
** Meta object code from reading C++ file 'myclient.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/myclient.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'myclient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MyClient_t {
    QByteArrayData data[11];
    char stringdata0[121];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MyClient_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MyClient_t qt_meta_stringdata_MyClient = {
    {
QT_MOC_LITERAL(0, 0, 8), // "MyClient"
QT_MOC_LITERAL(1, 9, 10), // "playStream"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 11), // "QTcpSocket*"
QT_MOC_LITERAL(4, 33, 6), // "socket"
QT_MOC_LITERAL(5, 40, 12), // "displayFrame"
QT_MOC_LITERAL(6, 53, 16), // "QtAV::VideoFrame"
QT_MOC_LITERAL(7, 70, 5), // "frame"
QT_MOC_LITERAL(8, 76, 12), // "on_connected"
QT_MOC_LITERAL(9, 89, 13), // "on_ready_read"
QT_MOC_LITERAL(10, 103, 17) // "restoreConnection"

    },
    "MyClient\0playStream\0\0QTcpSocket*\0"
    "socket\0displayFrame\0QtAV::VideoFrame\0"
    "frame\0on_connected\0on_ready_read\0"
    "restoreConnection"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MyClient[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       5,    1,   42,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   45,    2, 0x0a /* Public */,
       9,    0,   46,    2, 0x0a /* Public */,
      10,    0,   47,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MyClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MyClient *_t = static_cast<MyClient *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->playStream((*reinterpret_cast< QTcpSocket*(*)>(_a[1]))); break;
        case 1: _t->displayFrame((*reinterpret_cast< const QtAV::VideoFrame(*)>(_a[1]))); break;
        case 2: _t->on_connected(); break;
        case 3: _t->on_ready_read(); break;
        case 4: _t->restoreConnection(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTcpSocket* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QtAV::VideoFrame >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MyClient::*_t)(QTcpSocket * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyClient::playStream)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (MyClient::*_t)(const QtAV::VideoFrame & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyClient::displayFrame)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject MyClient::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_MyClient.data,
      qt_meta_data_MyClient,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MyClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MyClient::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MyClient.stringdata0))
        return static_cast<void*>(const_cast< MyClient*>(this));
    return QObject::qt_metacast(_clname);
}

int MyClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void MyClient::playStream(QTcpSocket * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MyClient::displayFrame(const QtAV::VideoFrame & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
