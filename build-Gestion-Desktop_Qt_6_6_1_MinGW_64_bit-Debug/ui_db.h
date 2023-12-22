/********************************************************************************
** Form generated from reading UI file 'db.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DB_H
#define UI_DB_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Db
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Db)
    {
        if (Db->objectName().isEmpty())
            Db->setObjectName("Db");
        Db->resize(800, 600);
        centralwidget = new QWidget(Db);
        centralwidget->setObjectName("centralwidget");
        Db->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Db);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        Db->setMenuBar(menubar);
        statusbar = new QStatusBar(Db);
        statusbar->setObjectName("statusbar");
        Db->setStatusBar(statusbar);

        retranslateUi(Db);

        QMetaObject::connectSlotsByName(Db);
    } // setupUi

    void retranslateUi(QMainWindow *Db)
    {
        Db->setWindowTitle(QCoreApplication::translate("Db", "Db", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Db: public Ui_Db {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DB_H
