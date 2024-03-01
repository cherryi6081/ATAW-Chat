/****************************************************************************
** Meta object code from reading C++ file 'page_login.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "chat_Client/page_login.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'page_login.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_Page_login_t {
    uint offsetsAndSizes[18];
    char stringdata0[11];
    char stringdata1[17];
    char stringdata2[1];
    char stringdata3[20];
    char stringdata4[19];
    char stringdata5[21];
    char stringdata6[24];
    char stringdata7[22];
    char stringdata8[21];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_Page_login_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_Page_login_t qt_meta_stringdata_Page_login = {
    {
        QT_MOC_LITERAL(0, 10),  // "Page_login"
        QT_MOC_LITERAL(11, 16),  // "sendLoginSuccess"
        QT_MOC_LITERAL(28, 0),  // ""
        QT_MOC_LITERAL(29, 19),  // "sendRegisterSUccess"
        QT_MOC_LITERAL(49, 18),  // "sendRemeberSuccess"
        QT_MOC_LITERAL(68, 20),  // "on_bin_login_clicked"
        QT_MOC_LITERAL(89, 23),  // "on_btn_register_clicked"
        QT_MOC_LITERAL(113, 21),  // "on_btn_forget_clicked"
        QT_MOC_LITERAL(135, 20)   // "on_setNetBut_clicked"
    },
    "Page_login",
    "sendLoginSuccess",
    "",
    "sendRegisterSUccess",
    "sendRemeberSuccess",
    "on_bin_login_clicked",
    "on_btn_register_clicked",
    "on_btn_forget_clicked",
    "on_setNetBut_clicked"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_Page_login[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x06,    1 /* Public */,
       3,    0,   57,    2, 0x06,    2 /* Public */,
       4,    0,   58,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    0,   59,    2, 0x08,    4 /* Private */,
       6,    0,   60,    2, 0x08,    5 /* Private */,
       7,    0,   61,    2, 0x08,    6 /* Private */,
       8,    0,   62,    2, 0x08,    7 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject Page_login::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_Page_login.offsetsAndSizes,
    qt_meta_data_Page_login,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_Page_login_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Page_login, std::true_type>,
        // method 'sendLoginSuccess'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sendRegisterSUccess'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sendRemeberSuccess'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_bin_login_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btn_register_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btn_forget_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_setNetBut_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Page_login::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Page_login *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->sendLoginSuccess(); break;
        case 1: _t->sendRegisterSUccess(); break;
        case 2: _t->sendRemeberSuccess(); break;
        case 3: _t->on_bin_login_clicked(); break;
        case 4: _t->on_btn_register_clicked(); break;
        case 5: _t->on_btn_forget_clicked(); break;
        case 6: _t->on_setNetBut_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Page_login::*)();
            if (_t _q_method = &Page_login::sendLoginSuccess; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Page_login::*)();
            if (_t _q_method = &Page_login::sendRegisterSUccess; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Page_login::*)();
            if (_t _q_method = &Page_login::sendRemeberSuccess; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }
    (void)_a;
}

const QMetaObject *Page_login::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Page_login::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Page_login.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Page_login::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void Page_login::sendLoginSuccess()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Page_login::sendRegisterSUccess()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Page_login::sendRemeberSuccess()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
