/****************************************************************************
** Meta object code from reading C++ file 'udp_file_recv.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../udp_file_recv.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'udp_file_recv.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_UDP_FILE_RECV_THREAD_t {
    QByteArrayData data[14];
    char stringdata0[128];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UDP_FILE_RECV_THREAD_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UDP_FILE_RECV_THREAD_t qt_meta_stringdata_UDP_FILE_RECV_THREAD = {
    {
QT_MOC_LITERAL(0, 0, 20), // "UDP_FILE_RECV_THREAD"
QT_MOC_LITERAL(1, 21, 7), // "LogSend"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 4), // "text"
QT_MOC_LITERAL(4, 35, 16), // "ss_FileRecvState"
QT_MOC_LITERAL(5, 52, 5), // "speed"
QT_MOC_LITERAL(6, 58, 15), // "ss_RecvComplete"
QT_MOC_LITERAL(7, 74, 11), // "FailureRate"
QT_MOC_LITERAL(8, 86, 3), // "run"
QT_MOC_LITERAL(9, 90, 2), // "ip"
QT_MOC_LITERAL(10, 93, 4), // "port"
QT_MOC_LITERAL(11, 98, 9), // "save_path"
QT_MOC_LITERAL(12, 108, 10), // "close_file"
QT_MOC_LITERAL(13, 119, 8) // "WriteLog"

    },
    "UDP_FILE_RECV_THREAD\0LogSend\0\0text\0"
    "ss_FileRecvState\0speed\0ss_RecvComplete\0"
    "FailureRate\0run\0ip\0port\0save_path\0"
    "close_file\0WriteLog"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UDP_FILE_RECV_THREAD[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    4,   47,    2, 0x06 /* Public */,
       6,    1,   56,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    3,   59,    2, 0x0a /* Public */,
      12,    0,   66,    2, 0x0a /* Public */,
      13,    1,   67,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::LongLong, QMetaType::LongLong, QMetaType::Double,    2,    2,    2,    5,
    QMetaType::Void, QMetaType::Double,    7,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::QString,    9,   10,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    3,

       0        // eod
};

void UDP_FILE_RECV_THREAD::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<UDP_FILE_RECV_THREAD *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->LogSend((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->ss_FileRecvState((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2])),(*reinterpret_cast< qint64(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4]))); break;
        case 2: _t->ss_RecvComplete((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->run((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 4: _t->close_file(); break;
        case 5: _t->WriteLog((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (UDP_FILE_RECV_THREAD::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UDP_FILE_RECV_THREAD::LogSend)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (UDP_FILE_RECV_THREAD::*)(QString , qint64 , qint64 , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UDP_FILE_RECV_THREAD::ss_FileRecvState)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (UDP_FILE_RECV_THREAD::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UDP_FILE_RECV_THREAD::ss_RecvComplete)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject UDP_FILE_RECV_THREAD::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_UDP_FILE_RECV_THREAD.data,
    qt_meta_data_UDP_FILE_RECV_THREAD,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *UDP_FILE_RECV_THREAD::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UDP_FILE_RECV_THREAD::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UDP_FILE_RECV_THREAD.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int UDP_FILE_RECV_THREAD::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void UDP_FILE_RECV_THREAD::LogSend(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void UDP_FILE_RECV_THREAD::ss_FileRecvState(QString _t1, qint64 _t2, qint64 _t3, double _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void UDP_FILE_RECV_THREAD::ss_RecvComplete(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
