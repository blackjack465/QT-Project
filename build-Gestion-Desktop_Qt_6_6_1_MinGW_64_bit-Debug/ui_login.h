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
#include <QtWidgets/QHBoxLayout>
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
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *LoginButton;
    QPushButton *pushButton;
    QLineEdit *UserlineEdit;
    QLineEdit *PassWordlineEdit;
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
        groupBox->setGeometry(QRect(230, 230, 521, 371));
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"    font-size: 18px;\n"
"    border: 2px solid #BCA37F; \n"
"    border-radius: 10px; \n"
"    background-color: #31304D; \n"
"}"));
        horizontalLayoutWidget = new QWidget(groupBox);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(150, 230, 241, 51));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        LoginButton = new QPushButton(horizontalLayoutWidget);
        LoginButton->setObjectName("LoginButton");
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LoginButton->sizePolicy().hasHeightForWidth());
        LoginButton->setSizePolicy(sizePolicy);
        LoginButton->setStyleSheet(QString::fromUtf8("/* Estilo para los botones (QPushButton) */\n"
"\n"
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

        horizontalLayout->addWidget(LoginButton);

        pushButton = new QPushButton(horizontalLayoutWidget);
        pushButton->setObjectName("pushButton");
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
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

        horizontalLayout->addWidget(pushButton);

        UserlineEdit = new QLineEdit(groupBox);
        UserlineEdit->setObjectName("UserlineEdit");
        UserlineEdit->setGeometry(QRect(160, 80, 231, 41));
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
        PassWordlineEdit->setGeometry(QRect(160, 130, 231, 41));
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
        PassWordlineEdit->setInputMethodHints(Qt::ImhHiddenText);
        titre = new QLabel(centralwidget);
        titre->setObjectName("titre");
        titre->setGeometry(QRect(390, 170, 221, 31));
        titre->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 700 26pt \"Times New Roman\";\n"
"    font-size: 35px;\n"
"    color: #161A30;\n"
"    border : 0;\n"
"	background-color: transparent;\n"
"}"));
        titre->setAlignment(Qt::AlignCenter);
        login->setCentralWidget(centralwidget);

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QMainWindow *login)
    {
        login->setWindowTitle(QCoreApplication::translate("login", "MainWindow", nullptr));
        LoginButton->setText(QCoreApplication::translate("login", "Login", nullptr));
        pushButton->setText(QCoreApplication::translate("login", "Anuler", nullptr));
        UserlineEdit->setPlaceholderText(QCoreApplication::translate("login", "Username", nullptr));
        PassWordlineEdit->setPlaceholderText(QCoreApplication::translate("login", "Password", nullptr));
        titre->setText(QCoreApplication::translate("login", "LOGIN", nullptr));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
