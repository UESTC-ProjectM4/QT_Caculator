/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created: Wed Jul 15 09:39:34 2020
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x08,
      40,   11,   11,   11, 0x08,
      67,   11,   11,   11, 0x08,
      94,   11,   11,   11, 0x08,
     130,   11,   11,   11, 0x08,
     157,   11,   11,   11, 0x08,
     184,   11,   11,   11, 0x08,
     211,   11,   11,   11, 0x08,
     238,   11,   11,   11, 0x08,
     265,   11,   11,   11, 0x08,
     292,   11,   11,   11, 0x08,
     319,   11,   11,   11, 0x08,
     345,   11,   11,   11, 0x08,
     380,   11,   11,   11, 0x08,
     412,   11,   11,   11, 0x08,
     440,   11,   11,   11, 0x08,
     468,   11,   11,   11, 0x08,
     497,   11,   11,   11, 0x08,
     525,   11,   11,   11, 0x08,
     553,   11,   11,   11, 0x08,
     579,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0on_mod_pushButton_clicked()\0"
    "on__7_pushButton_clicked()\0"
    "on__1_pushButton_clicked()\0"
    "on_input_lineEdit_editingFinished()\0"
    "on__8_pushButton_clicked()\0"
    "on__9_pushButton_clicked()\0"
    "on__4_pushButton_clicked()\0"
    "on__5_pushButton_clicked()\0"
    "on__6_pushButton_clicked()\0"
    "on__2_pushButton_clicked()\0"
    "on__3_pushButton_clicked()\0"
    "on_pushButton_0_clicked()\0"
    "on_cleanInput_pushButton_clicked()\0"
    "on_decimal_pushButton_clicked()\0"
    "on_add_pushButton_clicked()\0"
    "on_sub_pushButton_clicked()\0"
    "on_time_pushButton_clicked()\0"
    "on_div_pushButton_clicked()\0"
    "on_del_pushButton_clicked()\0"
    "on_pushButton_1_clicked()\0"
    "on_equal_pushButton_clicked()\0"
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_mod_pushButton_clicked(); break;
        case 1: on__7_pushButton_clicked(); break;
        case 2: on__1_pushButton_clicked(); break;
        case 3: on_input_lineEdit_editingFinished(); break;
        case 4: on__8_pushButton_clicked(); break;
        case 5: on__9_pushButton_clicked(); break;
        case 6: on__4_pushButton_clicked(); break;
        case 7: on__5_pushButton_clicked(); break;
        case 8: on__6_pushButton_clicked(); break;
        case 9: on__2_pushButton_clicked(); break;
        case 10: on__3_pushButton_clicked(); break;
        case 11: on_pushButton_0_clicked(); break;
        case 12: on_cleanInput_pushButton_clicked(); break;
        case 13: on_decimal_pushButton_clicked(); break;
        case 14: on_add_pushButton_clicked(); break;
        case 15: on_sub_pushButton_clicked(); break;
        case 16: on_time_pushButton_clicked(); break;
        case 17: on_div_pushButton_clicked(); break;
        case 18: on_del_pushButton_clicked(); break;
        case 19: on_pushButton_1_clicked(); break;
        case 20: on_equal_pushButton_clicked(); break;
        default: ;
        }
        _id -= 21;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
