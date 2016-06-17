/****************************************************************************
** Meta object code from reading C++ file 'myserver.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/myserver.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'myserver.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MyServer_t {
    QByteArrayData data[8];
    char stringdata0[84];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MyServer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MyServer_t qt_meta_stringdata_MyServer = {
    {
QT_MOC_LITERAL(0, 0, 8), // "MyServer"
QT_MOC_LITERAL(1, 9, 17), // "restoreConnection"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 6), // "getMac"
QT_MOC_LITERAL(4, 35, 3), // "mac"
QT_MOC_LITERAL(5, 39, 13), // "newConnection"
QT_MOC_LITERAL(6, 53, 16), // "strnewConnection"
QT_MOC_LITERAL(7, 70, 13) // "Data_received"

    },
    "MyServer\0restoreConnection\0\0getMac\0"
    "mac\0newConnection\0strnewConnection\0"
    "Data_received"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MyServer[] = {

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
       1,    0,   39,    2, 0x06 /* Public */,
       3,    1,   40,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   43,    2, 0x0a /* Public */,
       6,    0,   44,    2, 0x0a /* Public */,
       7,    0,   45,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MyServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MyServer *_t = static_cast<MyServer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->restoreConnection(); break;
        case 1: _t->getMac((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->newConnection(); break;
        case 3: _t->strnewConnection(); break;
        case 4: _t->Data_received(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MyServer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyServer::restoreConnection)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (MyServer::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyServer::getMac)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject MyServer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_MyServer.data,
      qt_meta_data_MyServer,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MyServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MyServer::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MyServer.stringdata0))
        return static_cast<void*>(const_cast< MyServer*>(this));
    return QObject::qt_metacast(_clname);
}

int MyServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void MyServer::restoreConnection()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void MyServer::getMac(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
