/****************************************************************************
** Meta object code from reading C++ file 'clientwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Gestion/clientwindow.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'clientwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSClientWindowENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSClientWindowENDCLASS = QtMocHelpers::stringData(
    "ClientWindow",
    "on_UpdateButton_clicked",
    "",
    "on_NewButton_clicked",
    "on_DeleteButton_clicked",
    "on_ClientButton_clicked",
    "on_AdminButton_clicked",
    "on_NewAdminButton_clicked",
    "on_DeleteAdminButton_clicked",
    "on_UpdateAdminsButton_clicked",
    "on_CommandeButton_clicked",
    "on_stackedWidget_currentChanged",
    "arg1",
    "on_Commande_customContextMenuRequested",
    "pos",
    "on_numcmd_updatePreviewWidget",
    "QModelIndex",
    "index",
    "on_newcmd_clicked",
    "on_Rechercher_clicked",
    "on_suppcmd_clicked",
    "refreshOrderView",
    "on_facture_clicked",
    "logout",
    "categoryClicked",
    "on_CategorieButton_clicked",
    "on_AjoutProd_clicked",
    "on_SuppProd_clicked",
    "on_modifProc_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSClientWindowENDCLASS_t {
    uint offsetsAndSizes[58];
    char stringdata0[13];
    char stringdata1[24];
    char stringdata2[1];
    char stringdata3[21];
    char stringdata4[24];
    char stringdata5[24];
    char stringdata6[23];
    char stringdata7[26];
    char stringdata8[29];
    char stringdata9[30];
    char stringdata10[26];
    char stringdata11[32];
    char stringdata12[5];
    char stringdata13[39];
    char stringdata14[4];
    char stringdata15[30];
    char stringdata16[12];
    char stringdata17[6];
    char stringdata18[18];
    char stringdata19[22];
    char stringdata20[19];
    char stringdata21[17];
    char stringdata22[19];
    char stringdata23[7];
    char stringdata24[16];
    char stringdata25[27];
    char stringdata26[21];
    char stringdata27[20];
    char stringdata28[21];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSClientWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSClientWindowENDCLASS_t qt_meta_stringdata_CLASSClientWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 12),  // "ClientWindow"
        QT_MOC_LITERAL(13, 23),  // "on_UpdateButton_clicked"
        QT_MOC_LITERAL(37, 0),  // ""
        QT_MOC_LITERAL(38, 20),  // "on_NewButton_clicked"
        QT_MOC_LITERAL(59, 23),  // "on_DeleteButton_clicked"
        QT_MOC_LITERAL(83, 23),  // "on_ClientButton_clicked"
        QT_MOC_LITERAL(107, 22),  // "on_AdminButton_clicked"
        QT_MOC_LITERAL(130, 25),  // "on_NewAdminButton_clicked"
        QT_MOC_LITERAL(156, 28),  // "on_DeleteAdminButton_clicked"
        QT_MOC_LITERAL(185, 29),  // "on_UpdateAdminsButton_clicked"
        QT_MOC_LITERAL(215, 25),  // "on_CommandeButton_clicked"
        QT_MOC_LITERAL(241, 31),  // "on_stackedWidget_currentChanged"
        QT_MOC_LITERAL(273, 4),  // "arg1"
        QT_MOC_LITERAL(278, 38),  // "on_Commande_customContextMenu..."
        QT_MOC_LITERAL(317, 3),  // "pos"
        QT_MOC_LITERAL(321, 29),  // "on_numcmd_updatePreviewWidget"
        QT_MOC_LITERAL(351, 11),  // "QModelIndex"
        QT_MOC_LITERAL(363, 5),  // "index"
        QT_MOC_LITERAL(369, 17),  // "on_newcmd_clicked"
        QT_MOC_LITERAL(387, 21),  // "on_Rechercher_clicked"
        QT_MOC_LITERAL(409, 18),  // "on_suppcmd_clicked"
        QT_MOC_LITERAL(428, 16),  // "refreshOrderView"
        QT_MOC_LITERAL(445, 18),  // "on_facture_clicked"
        QT_MOC_LITERAL(464, 6),  // "logout"
        QT_MOC_LITERAL(471, 15),  // "categoryClicked"
        QT_MOC_LITERAL(487, 26),  // "on_CategorieButton_clicked"
        QT_MOC_LITERAL(514, 20),  // "on_AjoutProd_clicked"
        QT_MOC_LITERAL(535, 19),  // "on_SuppProd_clicked"
        QT_MOC_LITERAL(555, 20)   // "on_modifProc_clicked"
    },
    "ClientWindow",
    "on_UpdateButton_clicked",
    "",
    "on_NewButton_clicked",
    "on_DeleteButton_clicked",
    "on_ClientButton_clicked",
    "on_AdminButton_clicked",
    "on_NewAdminButton_clicked",
    "on_DeleteAdminButton_clicked",
    "on_UpdateAdminsButton_clicked",
    "on_CommandeButton_clicked",
    "on_stackedWidget_currentChanged",
    "arg1",
    "on_Commande_customContextMenuRequested",
    "pos",
    "on_numcmd_updatePreviewWidget",
    "QModelIndex",
    "index",
    "on_newcmd_clicked",
    "on_Rechercher_clicked",
    "on_suppcmd_clicked",
    "refreshOrderView",
    "on_facture_clicked",
    "logout",
    "categoryClicked",
    "on_CategorieButton_clicked",
    "on_AjoutProd_clicked",
    "on_SuppProd_clicked",
    "on_modifProc_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSClientWindowENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      23,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  152,    2, 0x08,    1 /* Private */,
       3,    0,  153,    2, 0x08,    2 /* Private */,
       4,    0,  154,    2, 0x08,    3 /* Private */,
       5,    0,  155,    2, 0x08,    4 /* Private */,
       6,    0,  156,    2, 0x08,    5 /* Private */,
       7,    0,  157,    2, 0x08,    6 /* Private */,
       8,    0,  158,    2, 0x08,    7 /* Private */,
       9,    0,  159,    2, 0x08,    8 /* Private */,
      10,    0,  160,    2, 0x08,    9 /* Private */,
      11,    1,  161,    2, 0x08,   10 /* Private */,
      13,    1,  164,    2, 0x08,   12 /* Private */,
      15,    1,  167,    2, 0x08,   14 /* Private */,
      18,    0,  170,    2, 0x08,   16 /* Private */,
      19,    0,  171,    2, 0x08,   17 /* Private */,
      20,    0,  172,    2, 0x08,   18 /* Private */,
      21,    0,  173,    2, 0x08,   19 /* Private */,
      22,    0,  174,    2, 0x08,   20 /* Private */,
      23,    0,  175,    2, 0x08,   21 /* Private */,
      24,    1,  176,    2, 0x08,   22 /* Private */,
      25,    0,  179,    2, 0x08,   24 /* Private */,
      26,    0,  180,    2, 0x08,   25 /* Private */,
      27,    0,  181,    2, 0x08,   26 /* Private */,
      28,    0,  182,    2, 0x08,   27 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::QPoint,   14,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject ClientWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSClientWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSClientWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSClientWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ClientWindow, std::true_type>,
        // method 'on_UpdateButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_NewButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_DeleteButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_ClientButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_AdminButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_NewAdminButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_DeleteAdminButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_UpdateAdminsButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_CommandeButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_stackedWidget_currentChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_Commande_customContextMenuRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>,
        // method 'on_numcmd_updatePreviewWidget'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'on_newcmd_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_Rechercher_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_suppcmd_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'refreshOrderView'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_facture_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'logout'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'categoryClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_CategorieButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_AjoutProd_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_SuppProd_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_modifProc_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void ClientWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ClientWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_UpdateButton_clicked(); break;
        case 1: _t->on_NewButton_clicked(); break;
        case 2: _t->on_DeleteButton_clicked(); break;
        case 3: _t->on_ClientButton_clicked(); break;
        case 4: _t->on_AdminButton_clicked(); break;
        case 5: _t->on_NewAdminButton_clicked(); break;
        case 6: _t->on_DeleteAdminButton_clicked(); break;
        case 7: _t->on_UpdateAdminsButton_clicked(); break;
        case 8: _t->on_CommandeButton_clicked(); break;
        //case 9: _t->on_stackedWidget_currentChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 10: _t->on_Commande_customContextMenuRequested((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        //case 11: _t->on_numcmd_updatePreviewWidget((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 12: _t->on_newcmd_clicked(); break;
        case 13: _t->on_Rechercher_clicked(); break;
        case 14: _t->on_suppcmd_clicked(); break;
        case 15: _t->refreshOrderView(); break;
        case 16: _t->on_facture_clicked(); break;
        case 17: _t->logout(); break;
        case 18: _t->categoryClicked((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 19: _t->on_CategorieButton_clicked(); break;
        case 20: _t->on_AjoutProd_clicked(); break;
        case 21: _t->on_SuppProd_clicked(); break;
        case 22: _t->on_modifProc_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject *ClientWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ClientWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSClientWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int ClientWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 23)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 23;
    }
    return _id;
}
QT_WARNING_POP
