/****************************************************************************
** Meta object code from reading C++ file 'GuiSidePanel.h'
**
** Created: Thu Feb 11 11:36:18 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/GuiSidePanel.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GuiSidePanel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GuiSidePanel[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      20,   14,   13,   13, 0x08,
      48,   14,   13,   13, 0x08,
      84,   76,   13,   13, 0x08,
     116,   76,   13,   13, 0x08,
     148,   76,   13,   13, 0x08,
     190,  179,   13,   13, 0x08,
     238,  232,   13,   13, 0x08,
     271,  232,   13,   13, 0x08,
     304,   76,   13,   13, 0x08,
     333,   76,   13,   13, 0x08,
     365,   76,   13,   13, 0x08,
     397,   76,   13,   13, 0x08,
     432,   13,   13,   13, 0x08,
     456,   13,   13,   13, 0x08,
     479,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_GuiSidePanel[] = {
    "GuiSidePanel\0\0index\0on_songCombo_activated(int)\0"
    "on_bookCombo_activated(int)\0checked\0"
    "on_rightHandRadio_toggled(bool)\0"
    "on_bothHandsRadio_toggled(bool)\0"
    "on_leftHandRadio_toggled(bool)\0"
    "currentRow\0on_trackListWidget_currentRowChanged(int)\0"
    "value\0on_boostSlider_valueChanged(int)\0"
    "on_pianoSlider_valueChanged(int)\0"
    "on_listenRadio_toggled(bool)\0"
    "on_followYouRadio_toggled(bool)\0"
    "on_playAlongRadio_toggled(bool)\0"
    "on_muteYourPartCheck_toggled(bool)\0"
    "setTrackRightHandPart()\0setTrackLeftHandPart()\0"
    "clearTrackPart()\0"
};

const QMetaObject GuiSidePanel::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_GuiSidePanel,
      qt_meta_data_GuiSidePanel, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GuiSidePanel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GuiSidePanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GuiSidePanel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GuiSidePanel))
        return static_cast<void*>(const_cast< GuiSidePanel*>(this));
    return QWidget::qt_metacast(_clname);
}

int GuiSidePanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_songCombo_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: on_bookCombo_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: on_rightHandRadio_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: on_bothHandsRadio_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: on_leftHandRadio_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: on_trackListWidget_currentRowChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: on_boostSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: on_pianoSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: on_listenRadio_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: on_followYouRadio_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: on_playAlongRadio_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: on_muteYourPartCheck_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: setTrackRightHandPart(); break;
        case 13: setTrackLeftHandPart(); break;
        case 14: clearTrackPart(); break;
        default: ;
        }
        _id -= 15;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
