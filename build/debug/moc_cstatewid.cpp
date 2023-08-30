/****************************************************************************
** Meta object code from reading C++ file 'cstatewid.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../cstatewid.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cstatewid.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CStateWid_t {
    QByteArrayData data[14];
    char stringdata0[207];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CStateWid_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CStateWid_t qt_meta_stringdata_CStateWid = {
    {
QT_MOC_LITERAL(0, 0, 9), // "CStateWid"
QT_MOC_LITERAL(1, 10, 11), // "sigBtnClick"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 15), // "sigShowErrorMsg"
QT_MOC_LITERAL(4, 39, 16), // "click_on_BtnRfid"
QT_MOC_LITERAL(5, 56, 17), // "click_on_BtnThick"
QT_MOC_LITERAL(6, 74, 17), // "click_on_BtnWaste"
QT_MOC_LITERAL(7, 92, 17), // "click_on_BtnStamp"
QT_MOC_LITERAL(8, 110, 11), // "status_slot"
QT_MOC_LITERAL(9, 122, 12), // "DataRec_slot"
QT_MOC_LITERAL(10, 135, 17), // "DataRec_slot_DevA"
QT_MOC_LITERAL(11, 153, 17), // "DataRec_slot_DevB"
QT_MOC_LITERAL(12, 171, 17), // "DataRec_slot_DevC"
QT_MOC_LITERAL(13, 189, 17) // "DataRec_slot_DevD"

    },
    "CStateWid\0sigBtnClick\0\0sigShowErrorMsg\0"
    "click_on_BtnRfid\0click_on_BtnThick\0"
    "click_on_BtnWaste\0click_on_BtnStamp\0"
    "status_slot\0DataRec_slot\0DataRec_slot_DevA\0"
    "DataRec_slot_DevB\0DataRec_slot_DevC\0"
    "DataRec_slot_DevD"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CStateWid[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   74,    2, 0x06 /* Public */,
       3,    3,   79,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   86,    2, 0x0a /* Public */,
       5,    0,   87,    2, 0x0a /* Public */,
       6,    0,   88,    2, 0x0a /* Public */,
       7,    0,   89,    2, 0x0a /* Public */,
       8,    3,   90,    2, 0x0a /* Public */,
       9,    0,   97,    2, 0x0a /* Public */,
      10,    0,   98,    2, 0x0a /* Public */,
      11,    0,   99,    2, 0x0a /* Public */,
      12,    0,  100,    2, 0x0a /* Public */,
      13,    0,  101,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QString,    2,    2,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool,    2,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CStateWid::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CStateWid *_t = static_cast<CStateWid *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sigBtnClick((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: _t->sigShowErrorMsg((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 2: _t->click_on_BtnRfid(); break;
        case 3: _t->click_on_BtnThick(); break;
        case 4: _t->click_on_BtnWaste(); break;
        case 5: _t->click_on_BtnStamp(); break;
        case 6: _t->status_slot((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 7: _t->DataRec_slot(); break;
        case 8: _t->DataRec_slot_DevA(); break;
        case 9: _t->DataRec_slot_DevB(); break;
        case 10: _t->DataRec_slot_DevC(); break;
        case 11: _t->DataRec_slot_DevD(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (CStateWid::*_t)(int , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CStateWid::sigBtnClick)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (CStateWid::*_t)(int , QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CStateWid::sigShowErrorMsg)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject CStateWid::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_CStateWid.data,
      qt_meta_data_CStateWid,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *CStateWid::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CStateWid::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CStateWid.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int CStateWid::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void CStateWid::sigBtnClick(int _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CStateWid::sigShowErrorMsg(int _t1, QString _t2, QString _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
