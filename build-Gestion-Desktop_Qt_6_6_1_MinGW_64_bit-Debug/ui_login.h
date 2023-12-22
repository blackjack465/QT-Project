/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QLabel *Userlabel;
    QLabel *PassWordlabel;
    QLineEdit *UserlineEdit;
    QLineEdit *PassWordlineEdit;
    QPushButton *LoginButton;
    QPushButton *pushButton;
    QLabel *titre;

    void setupUi(QMainWindow *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName("login");
        login->resize(996, 713);
        centralwidget = new QWidget(login);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    background-color: #F0ECE5; \n"
"    border: 2px solid #161A30; \n"
"    border-radius: 10px; \n"
"}"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(220, 230, 551, 331));
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"    font-size: 18px;\n"
"    border: 2px solid #BCA37F; \n"
"    border-radius: 10px; \n"
"    background-color: #31304D; \n"
"}"));
        Userlabel = new QLabel(groupBox);
        Userlabel->setObjectName("Userlabel");
        Userlabel->setGeometry(QRect(110, 80, 91, 20));
        Userlabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font-size: 20px;\n"
"    color: #B6BBC4;\n"
"    border : 0;\n"
"	background-color: transparent;\n"
"}"));
        PassWordlabel = new QLabel(groupBox);
        PassWordlabel->setObjectName("PassWordlabel");
        PassWordlabel->setGeometry(QRect(110, 170, 91, 20));
        PassWordlabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font-size: 20px;\n"
"    color: #B6BBC4;\n"
"    border : 0;\n"
"	background-color: transparent;\n"
"}"));
        UserlineEdit = new QLineEdit(groupBox);
        UserlineEdit->setObjectName("UserlineEdit");
        UserlineEdit->setGeometry(QRect(260, 80, 113, 28));
        UserlineEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    font-size: 16px;\n"
"    background-color: #F0ECE5; \n"
"    border: solid #BCA37F; \n"
"	border-radius: 0;\n"
"}\n"
"\n"
"QLineEdit:hover{\n"
" \n"
"    background-color: #F8F0E5; \n"
"    color: #161A30 ; \n"
"	border : 2px solid #B6BBC4;\n"
"    \n"
"}"));
        PassWordlineEdit = new QLineEdit(groupBox);
        PassWordlineEdit->setObjectName("PassWordlineEdit");
        PassWordlineEdit->setGeometry(QRect(260, 160, 113, 28));
        PassWordlineEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    font-size: 16px;\n"
"    background-color: #F0ECE5; \n"
"    border: solid #BCA37F; \n"
"	border-radius: 0;\n"
"}\n"
"\n"
"QLineEdit:hover{\n"
" \n"
"    background-color: #F8F0E5; \n"
"    color: #161A30 ; \n"
"	border : 2px solid #B6BBC4;\n"
"    \n"
"}"));
        LoginButton = new QPushButton(groupBox);
        LoginButton->setObjectName("LoginButton");
        LoginButton->setGeometry(QRect(90, 260, 83, 41));
        LoginButton->setStyleSheet(QString::fromUtf8("/* Estilo para los botones (QPushButton) */\n"
"QPushButton {\n"
"    font-size: 16px;\n"
"    background-color: #F0ECE5; /* Fondo marr\303\263n */\n"
"    color: black; /* Texto color negro */\n"
"    border: none;\n"
"    border-radius: 0;\n"
"    text-align: center;\n"
"    text-decoration: none;\n"
"    display: inline-block;\n"
"    margin: 4px 2px;\n"
"    cursor: pointer;\n"
"    transition: background-color 0.3s, color 0.3s; /* Transici\303\263n suave */\n"
"}\n"
"\n"
"/* Cambio de color al pasar el rat\303\263n sobre el bot\303\263n */\n"
"QPushButton:hover {\n"
"    background-color: #31304D; \n"
"    color: white; \n"
"	border : 1px solid #F0ECE5;\n"
"    border-radius: 5px;\n"
"}"));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(190, 260, 83, 41));
        pushButton->setStyleSheet(QString::fromUtf8("/* Estilo para los botones (QPushButton) */\n"
"QPushButton {\n"
"    font-size: 16px;\n"
"    background-color: #F0ECE5; /* Fondo marr\303\263n */\n"
"    color: black; /* Texto color negro */\n"
"    border: none;\n"
"    border-radius: 0;\n"
"    text-align: center;\n"
"    text-decoration: none;\n"
"    display: inline-block;\n"
"    margin: 4px 2px;\n"
"    cursor: pointer;\n"
"    transition: background-color 0.3s, color 0.3s; /* Transici\303\263n suave */\n"
"}\n"
"\n"
"/* Cambio de color al pasar el rat\303\263n sobre el bot\303\263n */\n"
"QPushButton:hover {\n"
"    background-color: #31304D; \n"
"    color: white; \n"
"	border : 1px solid #F0ECE5;\n"
"    border-radius: 5px;\n"
"}"));
        titre = new QLabel(centralwidget);
        titre->setObjectName("titre");
        titre->setGeometry(QRect(450, 20, 81, 31));
        titre->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font-size: 25px;\n"
"    color: #161A30;\n"
"    border : 0;\n"
"	background-color: transparent;\n"
"}"));
        login->setCentralWidget(centralwidget);

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QMainWindow *login)
    {
        login->setWindowTitle(QCoreApplication::translate("login", "MainWindow", nullptr));
        Userlabel->setText(QCoreApplication::translate("login", "User", nullptr));
        PassWordlabel->setText(QCoreApplication::translate("login", "PassWord", nullptr));
        LoginButton->setText(QCoreApplication::translate("login", "Login", nullptr));
        pushButton->setText(QCoreApplication::translate("login", "Anuler", nullptr));
        titre->setText(QCoreApplication::translate("login", "LOGIN", nullptr));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
