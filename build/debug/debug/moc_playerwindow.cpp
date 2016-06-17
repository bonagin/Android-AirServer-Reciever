/****************************************************************************
** Meta object code from reading C++ file 'playerwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/playerwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'playerwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PlayerWindow_t {
    QByteArrayData data[10];
    char stringdata0[91];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PlayerWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PlayerWindow_t qt_meta_stringdata_PlayerWindow = {
    {
QT_MOC_LITERAL(0, 0, 12), // "PlayerWindow"
QT_MOC_LITERAL(1, 13, 12), // "displayFrame"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 16), // "QtAV::VideoFrame"
QT_MOC_LITERAL(4, 44, 5), // "frame"
QT_MOC_LITERAL(5, 50, 10), // "playStream"
QT_MOC_LITERAL(6, 61, 11), // "QTcpSocket*"
QT_MOC_LITERAL(7, 73, 6), // "socket"
QT_MOC_LITERAL(8, 80, 6), // "putMac"
QT_MOC_LITERAL(9, 87, 3) // "mac"

    },
    "PlayerWindow\0displayFrame\0\0QtAV::VideoFrame\0"
    "frame\0playStream\0QTcpSocket*\0socket\0"
    "putMac\0mac"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PlayerWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   32,    2, 0x0a /* Public */,
       8,    1,   35,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::QString,    9,

       0        // eod
};

void PlayerWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PlayerWindow *_t = static_cast<PlayerWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->displayFrame((*reinterpret_cast< const QtAV::VideoFrame(*)>(_a[1]))); break;
        case 1: _t->playStream((*reinterpret_cast< QTcpSocket*(*)>(_a[1]))); break;
        case 2: _t->putMac((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QtAV::VideoFrame >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTcpSocket* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (PlayerWindow::*_t)(const QtAV::VideoFrame & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PlayerWindow::displayFrame)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject PlayerWindow::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_PlayerWindow.data,
      qt_meta_data_PlayerWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PlayerWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PlayerWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PlayerWindow.stringdata0))
        return static_cast<void*>(const_cast< PlayerWindow*>(this));
    return QWidget::qt_metacast(_clname);
}

int PlayerWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void PlayerWindow::displayFrame(const QtAV::VideoFrame & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
