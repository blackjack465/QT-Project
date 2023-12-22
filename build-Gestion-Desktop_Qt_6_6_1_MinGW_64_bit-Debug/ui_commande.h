/********************************************************************************
** Form generated from reading UI file 'commande.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMMANDE_H
#define UI_COMMANDE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_commande
{
public:

    void setupUi(QWidget *commande)
    {
        if (commande->objectName().isEmpty())
            commande->setObjectName("commande");
        commande->resize(400, 300);

        retranslateUi(commande);

        QMetaObject::connectSlotsByName(commande);
    } // setupUi

    void retranslateUi(QWidget *commande)
    {
        commande->setWindowTitle(QCoreApplication::translate("commande", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class commande: public Ui_commande {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMMANDE_H
