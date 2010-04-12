/****************************************************************************
** Meta object code from reading C++ file 'GuiTopBar.h'
**
** Created: Thu Feb 11 11:36:17 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/GuiTopBar.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GuiTopBar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GuiTopBar[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      19,   11,   10,   10, 0x0a,
      56,   11,   10,   10, 0x0a,
      90,   84,   10,   10, 0x08,
     125,  121,   10,   10, 0x08,
     168,  162,   10,   10, 0x08,
     209,  203,   10,   10, 0x08,
     236,  203,   10,   10, 0x08,
     265,   11,   10,   10, 0x08,
     296,   11,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_GuiTopBar[] = {
    "GuiTopBar\0\0clicked\0"
    "on_playFromStartButton_clicked(bool)\0"
    "on_playButton_clicked(bool)\0speed\0"
    "on_speedSpin_valueChanged(int)\0bar\0"
    "on_startBarSpin_valueChanged(double)\0"
    "value\0on_transposeSpin_valueChanged(int)\0"
    "index\0on_keyCombo_activated(int)\0"
    "on_majorCombo_activated(int)\0"
    "on_saveBarButton_clicked(bool)\0"
    "on_loopingBarsPopupButton_clicked(bool)\0"
};

const QMetaObject GuiTopBar::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_GuiTopBar,
      qt_meta_data_GuiTopBar, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GuiTopBar::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GuiTopBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GuiTopBar::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GuiTopBar))
        return static_cast<void*>(const_cast< GuiTopBar*>(this));
    return QWidget::qt_metacast(_clname);
}

int GuiTopBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_playFromStartButton_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: on_playButton_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: on_speedSpin_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: on_startBarSpin_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: on_transposeSpin_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: on_keyCombo_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: on_majorCombo_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: on_saveBarButton_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: on_loopingBarsPopupButton_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
