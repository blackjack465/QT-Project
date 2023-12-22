/********************************************************************************
** Form generated from reading UI file 'commandes.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMMANDES_H
#define UI_COMMANDES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Commandes
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Commandes)
    {
        if (Commandes->objectName().isEmpty())
            Commandes->setObjectName("Commandes");
        Commandes->resize(800, 600);
        centralwidget = new QWidget(Commandes);
        centralwidget->setObjectName("centralwidget");
        Commandes->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Commandes);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        Commandes->setMenuBar(menubar);
        statusbar = new QStatusBar(Commandes);
        statusbar->setObjectName("statusbar");
        Commandes->setStatusBar(statusbar);

        retranslateUi(Commandes);

        QMetaObject::connectSlotsByName(Commandes);
    } // setupUi

    void retranslateUi(QMainWindow *Commandes)
    {
        Commandes->setWindowTitle(QCoreApplication::translate("Commandes", "Commandes", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Commandes: public Ui_Commandes {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMMANDES_H
