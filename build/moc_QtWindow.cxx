/****************************************************************************
** Meta object code from reading C++ file 'QtWindow.h'
**
** Created: Thu Feb 11 11:36:17 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/QtWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QtWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QtWindow[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x08,
      17,    9,    9,    9, 0x08,
      24,    9,    9,    9, 0x08,
      34,    9,    9,    9, 0x08,
      42,    9,    9,    9, 0x08,
      62,    9,    9,    9, 0x08,
      78,    9,    9,    9, 0x08,
     102,    9,    9,    9, 0x08,
     126,    9,    9,    9, 0x08,
     146,    9,    9,    9, 0x08,
     164,    9,    9,    9, 0x08,
     184,    9,    9,    9, 0x08,
     205,    9,    9,    9, 0x08,
     220,    9,    9,    9, 0x08,
     235,    9,    9,    9, 0x08,
     249,    9,    9,    9, 0x08,
     268,    9,    9,    9, 0x08,
     283,    9,    9,    9, 0x08,
     295,    9,    9,    9, 0x08,
     307,    9,    9,    9, 0x08,
     321,    9,    9,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QtWindow[] = {
    "QtWindow\0\0open()\0help()\0website()\0"
    "about()\0keyboardShortcuts()\0showMidiSetup()\0"
    "showPreferencesDialog()\0showSongDetailsDialog()\0"
    "showKeyboardSetup()\0toggleSidePanel()\0"
    "enableFollowTempo()\0disableFollowTempo()\0"
    "on_rightHand()\0on_bothHands()\0"
    "on_leftHand()\0on_playFromStart()\0"
    "on_playPause()\0on_faster()\0on_slower()\0"
    "on_nextSong()\0on_previousSong()\0"
};

const QMetaObject QtWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_QtWindow,
      qt_meta_data_QtWindow, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QtWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QtWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QtWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QtWindow))
        return static_cast<void*>(const_cast< QtWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int QtWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: open(); break;
        case 1: help(); break;
        case 2: website(); break;
        case 3: about(); break;
        case 4: keyboardShortcuts(); break;
        case 5: showMidiSetup(); break;
        case 6: showPreferencesDialog(); break;
        case 7: showSongDetailsDialog(); break;
        case 8: showKeyboardSetup(); break;
        case 9: toggleSidePanel(); break;
        case 10: enableFollowTempo(); break;
        case 11: disableFollowTempo(); break;
        case 12: on_rightHand(); break;
        case 13: on_bothHands(); break;
        case 14: on_leftHand(); break;
        case 15: on_playFromStart(); break;
        case 16: on_playPause(); break;
        case 17: on_faster(); break;
        case 18: on_slower(); break;
        case 19: on_nextSong(); break;
        case 20: on_previousSong(); break;
        default: ;
        }
        _id -= 21;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
