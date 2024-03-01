/****************************************************************************
** Meta object code from reading C++ file 'weather.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "weather/class_weather/weather.h"
#include <QtNetwork/QSslError>
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'weather.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace {
struct qt_meta_stringdata_WEATHER_t {
    uint offsetsAndSizes[22];
    char stringdata0[8];
    char stringdata1[25];
    char stringdata2[1];
    char stringdata3[14];
    char stringdata4[13];
    char stringdata5[22];
    char stringdata6[27];
    char stringdata7[15];
    char stringdata8[6];
    char stringdata9[23];
    char stringdata10[24];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_WEATHER_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_WEATHER_t qt_meta_stringdata_WEATHER = {
    {
        QT_MOC_LITERAL(0, 7),  // "WEATHER"
        QT_MOC_LITERAL(8, 24),  // "signal_emit_weather_info"
        QT_MOC_LITERAL(33, 0),  // ""
        QT_MOC_LITERAL(34, 13),  // "WEATHER_INFO*"
        QT_MOC_LITERAL(48, 12),  // "slot_new_obj"
        QT_MOC_LITERAL(61, 21),  // "slot_refresh_manually"
        QT_MOC_LITERAL(83, 26),  // "slot_manager_read_finished"
        QT_MOC_LITERAL(110, 14),  // "QNetworkReply*"
        QT_MOC_LITERAL(125, 5),  // "reply"
        QT_MOC_LITERAL(131, 22),  // "slot_change_local_city"
        QT_MOC_LITERAL(154, 23)   // "slot_tim_update_weather"
    },
    "WEATHER",
    "signal_emit_weather_info",
    "",
    "WEATHER_INFO*",
    "slot_new_obj",
    "slot_refresh_manually",
    "slot_manager_read_finished",
    "QNetworkReply*",
    "reply",
    "slot_change_local_city",
    "slot_tim_update_weather"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_WEATHER[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   50,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    0,   53,    2, 0x08,    3 /* Private */,
       5,    0,   54,    2, 0x08,    4 /* Private */,
       6,    1,   55,    2, 0x08,    5 /* Private */,
       9,    1,   58,    2, 0x08,    7 /* Private */,
      10,    0,   61,    2, 0x08,    9 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject WEATHER::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_WEATHER.offsetsAndSizes,
    qt_meta_data_WEATHER,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_WEATHER_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<WEATHER, std::true_type>,
        // method 'signal_emit_weather_info'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<WEATHER_INFO *, std::false_type>,
        // method 'slot_new_obj'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slot_refresh_manually'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slot_manager_read_finished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QNetworkReply *, std::false_type>,
        // method 'slot_change_local_city'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'slot_tim_update_weather'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void WEATHER::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WEATHER *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->signal_emit_weather_info((*reinterpret_cast< std::add_pointer_t<WEATHER_INFO*>>(_a[1]))); break;
        case 1: _t->slot_new_obj(); break;
        case 2: _t->slot_refresh_manually(); break;
        case 3: _t->slot_manager_read_finished((*reinterpret_cast< std::add_pointer_t<QNetworkReply*>>(_a[1]))); break;
        case 4: _t->slot_change_local_city((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->slot_tim_update_weather(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QNetworkReply* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (WEATHER::*)(WEATHER_INFO * );
            if (_t _q_method = &WEATHER::signal_emit_weather_info; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *WEATHER::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WEATHER::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WEATHER.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int WEATHER::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void WEATHER::signal_emit_weather_info(WEATHER_INFO * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
