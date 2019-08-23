/****************************************************************************
** Meta object code from reading C++ file 'glmap.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "glmap.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'glmap.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GLMap_t {
    QByteArrayData data[23];
    char stringdata0[223];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GLMap_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GLMap_t qt_meta_stringdata_GLMap = {
    {
QT_MOC_LITERAL(0, 0, 5), // "GLMap"
QT_MOC_LITERAL(1, 6, 6), // "status"
QT_MOC_LITERAL(2, 13, 0), // ""
QT_MOC_LITERAL(3, 14, 4), // "text"
QT_MOC_LITERAL(4, 19, 12), // "texturesUsed"
QT_MOC_LITERAL(5, 32, 3), // "use"
QT_MOC_LITERAL(6, 36, 10), // "hilighting"
QT_MOC_LITERAL(7, 47, 17), // "texturesAvailable"
QT_MOC_LITERAL(8, 65, 5), // "avail"
QT_MOC_LITERAL(9, 71, 6), // "loaded"
QT_MOC_LITERAL(10, 78, 5), // "error"
QT_MOC_LITERAL(11, 84, 8), // "fogOfWar"
QT_MOC_LITERAL(12, 93, 11), // "useTextures"
QT_MOC_LITERAL(13, 105, 10), // "showHouses"
QT_MOC_LITERAL(14, 116, 4), // "show"
QT_MOC_LITERAL(15, 121, 9), // "showWires"
QT_MOC_LITERAL(16, 131, 11), // "resetValues"
QT_MOC_LITERAL(17, 143, 11), // "jumpToSpawn"
QT_MOC_LITERAL(18, 155, 13), // "jumpToDungeon"
QT_MOC_LITERAL(19, 169, 14), // "jumpToLocation"
QT_MOC_LITERAL(20, 184, 15), // "startHilighting"
QT_MOC_LITERAL(21, 200, 14), // "stopHilighting"
QT_MOC_LITERAL(22, 215, 7) // "refresh"

    },
    "GLMap\0status\0\0text\0texturesUsed\0use\0"
    "hilighting\0texturesAvailable\0avail\0"
    "loaded\0error\0fogOfWar\0useTextures\0"
    "showHouses\0show\0showWires\0resetValues\0"
    "jumpToSpawn\0jumpToDungeon\0jumpToLocation\0"
    "startHilighting\0stopHilighting\0refresh"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GLMap[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   99,    2, 0x06 /* Public */,
       4,    1,  102,    2, 0x06 /* Public */,
       6,    1,  105,    2, 0x06 /* Public */,
       7,    1,  108,    2, 0x06 /* Public */,
       9,    1,  111,    2, 0x06 /* Public */,
      10,    1,  114,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    1,  117,    2, 0x0a /* Public */,
      12,    1,  120,    2, 0x0a /* Public */,
      13,    1,  123,    2, 0x0a /* Public */,
      15,    1,  126,    2, 0x0a /* Public */,
      16,    1,  129,    2, 0x0a /* Public */,
      17,    0,  132,    2, 0x0a /* Public */,
      18,    0,  133,    2, 0x0a /* Public */,
      19,    1,  134,    2, 0x0a /* Public */,
      20,    0,  137,    2, 0x0a /* Public */,
      21,    0,  138,    2, 0x0a /* Public */,
      22,    0,  139,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPointF,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void GLMap::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GLMap *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->status((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->texturesUsed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->hilighting((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->texturesAvailable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->loaded((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->error((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->fogOfWar((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->useTextures((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->showHouses((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->showWires((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->resetValues((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->jumpToSpawn(); break;
        case 12: _t->jumpToDungeon(); break;
        case 13: _t->jumpToLocation((*reinterpret_cast< QPointF(*)>(_a[1]))); break;
        case 14: _t->startHilighting(); break;
        case 15: _t->stopHilighting(); break;
        case 16: _t->refresh(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GLMap::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GLMap::status)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (GLMap::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GLMap::texturesUsed)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (GLMap::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GLMap::hilighting)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (GLMap::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GLMap::texturesAvailable)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (GLMap::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GLMap::loaded)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (GLMap::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GLMap::error)) {
                *result = 5;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GLMap::staticMetaObject = { {
    &QOpenGLWidget::staticMetaObject,
    qt_meta_stringdata_GLMap.data,
    qt_meta_data_GLMap,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GLMap::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GLMap::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GLMap.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QOpenGLFunctions"))
        return static_cast< QOpenGLFunctions*>(this);
    return QOpenGLWidget::qt_metacast(_clname);
}

int GLMap::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QOpenGLWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void GLMap::status(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GLMap::texturesUsed(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void GLMap::hilighting(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void GLMap::texturesAvailable(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void GLMap::loaded(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void GLMap::error(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
