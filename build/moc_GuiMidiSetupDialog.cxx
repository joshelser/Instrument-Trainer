/****************************************************************************
** Meta object code from reading C++ file 'GuiMidiSetupDialog.h'
**
** Created: Thu Feb 11 11:36:18 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/GuiMidiSetupDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GuiMidiSetupDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GuiMidiSetupDialog[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      20,   19,   19,   19, 0x08,
      35,   29,   19,   19, 0x08,
      68,   29,   19,   19, 0x08,
     110,  102,   19,   19, 0x08,
     144,  102,   19,   19, 0x08,
     176,  102,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_GuiMidiSetupDialog[] = {
    "GuiMidiSetupDialog\0\0accept()\0index\0"
    "on_midiInputCombo_activated(int)\0"
    "on_midiOutputCombo_activated(int)\0"
    "checked\0on_latencyFixButton_clicked(bool)\0"
    "on_fluidAddButton_clicked(bool)\0"
    "on_fluidRemoveButton_clicked(bool)\0"
};

const QMetaObject GuiMidiSetupDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_GuiMidiSetupDialog,
      qt_meta_data_GuiMidiSetupDialog, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GuiMidiSetupDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GuiMidiSetupDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GuiMidiSetupDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GuiMidiSetupDialog))
        return static_cast<void*>(const_cast< GuiMidiSetupDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int GuiMidiSetupDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: accept(); break;
        case 1: on_midiInputCombo_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: on_midiOutputCombo_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: on_latencyFixButton_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: on_fluidAddButton_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: on_fluidRemoveButton_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
