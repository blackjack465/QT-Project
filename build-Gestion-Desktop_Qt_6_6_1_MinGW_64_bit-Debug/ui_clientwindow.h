/********************************************************************************
** Form generated from reading UI file 'clientwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTWINDOW_H
#define UI_CLIENTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QColumnView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ClientWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *ClientPage;
    QTableView *ClienttableView;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *UpdateButton;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *NewButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *DeleteButton;
    QLabel *label;
    QWidget *AdminPage;
    QTableView *AdminsView;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_2;
    QPushButton *NewAdminButton;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *DeleteAdminButton;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *UpdateAdminsButton;
    QLabel *label_2;
    QWidget *Commande;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *numerocmd;
    QLabel *date;
    QLabel *client;
    QLabel *total;
    QLabel *etat;
    QLabel *title;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_3;
    QColumnView *numcmd;
    QSpacerItem *verticalSpacer;
    QColumnView *datecmd;
    QSpacerItem *verticalSpacer_2;
    QColumnView *client_2;
    QSpacerItem *verticalSpacer_3;
    QColumnView *total_2;
    QSpacerItem *verticalSpacer_4;
    QColumnView *etat_2;
    QPushButton *newcmd;
    QPushButton *suppcmd;
    QPushButton *facture;
    QPushButton *Rechercher;
    QWidget *page;
    QWidget *layoutWidget2;
    QGridLayout *gridLayout;
    QPushButton *ClientButton;
    QPushButton *CommandeButton;
    QPushButton *CategorieButton;
    QPushButton *AdminButton;

    void setupUi(QMainWindow *ClientWindow)
    {
        if (ClientWindow->objectName().isEmpty())
            ClientWindow->setObjectName("ClientWindow");
        ClientWindow->resize(1014, 600);
        centralwidget = new QWidget(ClientWindow);
        centralwidget->setObjectName("centralwidget");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(120, 60, 871, 541));
        ClientPage = new QWidget();
        ClientPage->setObjectName("ClientPage");
        ClienttableView = new QTableView(ClientPage);
        ClienttableView->setObjectName("ClienttableView");
        ClienttableView->setGeometry(QRect(80, 70, 751, 371));
        ClienttableView->setStyleSheet(QString::fromUtf8("QTableView {\n"
"    border: 1px solid #ccc;\n"
"    gridline-color: #ccc;\n"
"    background-color: #f5f5f5;\n"
"}\n"
"\n"
"QTableView::item {\n"
"    padding: 5px;\n"
"    border: 1px solid #F0ECE5;\n"
"}\n"
"\n"
"QHeaderView::section {\n"
"    background-color: #F0ECE5;\n"
"    color: #161A30;\n"
"    padding: 5px;\n"
"    border: 1px solid #ddd;\n"
"}\n"
"\n"
"QTableView::item:selected {\n"
"    background-color: #F0ECE5;\n"
"}"));
        layoutWidget = new QWidget(ClientPage);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(170, 460, 571, 55));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setSizeConstraint(QLayout::SetNoConstraint);
        horizontalLayout->setContentsMargins(3, 3, 3, 3);
        UpdateButton = new QPushButton(layoutWidget);
        UpdateButton->setObjectName("UpdateButton");
        UpdateButton->setStyleSheet(QString::fromUtf8("/* Estilo para los botones (QPushButton) */\n"
"QPushButton {\n"
"    font-size: 16px;\n"
"    background-color: #F0ECE5; /* Fondo marr\303\263n */\n"
"    color: black; /* Texto color negro */\n"
"    border: none;\n"
"    border-radius: 0;\n"
"padding : 10px;\n"
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

        horizontalLayout->addWidget(UpdateButton);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        NewButton = new QPushButton(layoutWidget);
        NewButton->setObjectName("NewButton");
        NewButton->setStyleSheet(QString::fromUtf8("/* Estilo para los botones (QPushButton) */\n"
"QPushButton {\n"
"    font-size: 16px;\n"
"    background-color: #F0ECE5; /* Fondo marr\303\263n */\n"
"    color: black; /* Texto color negro */\n"
"    border: none;\n"
"    border-radius: 0;\n"
"padding : 10px;\n"
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

        horizontalLayout->addWidget(NewButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        DeleteButton = new QPushButton(layoutWidget);
        DeleteButton->setObjectName("DeleteButton");
        DeleteButton->setStyleSheet(QString::fromUtf8("/* Estilo para los botones (QPushButton) */\n"
"QPushButton {\n"
"    font-size: 16px;\n"
"    background-color: #F0ECE5; /* Fondo marr\303\263n */\n"
"    color: black; /* Texto color negro */\n"
"    border: none;\n"
"    border-radius: 0;\n"
"padding : 10px;\n"
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

        horizontalLayout->addWidget(DeleteButton);

        label = new QLabel(ClientPage);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 0, 131, 41));
        label->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"color: black; \n"
"font-weight: bold; \n"
"font-size: 25px;\n"
"font:700 20pt \"Times New Roman\";\n"
"}"));
        stackedWidget->addWidget(ClientPage);
        AdminPage = new QWidget();
        AdminPage->setObjectName("AdminPage");
        AdminsView = new QTableView(AdminPage);
        AdminsView->setObjectName("AdminsView");
        AdminsView->setGeometry(QRect(190, 80, 661, 371));
        AdminsView->setStyleSheet(QString::fromUtf8("QTableView {\n"
"    border: 1px solid #ccc;\n"
"    gridline-color: #ccc;\n"
"    background-color: #f5f5f5;\n"
"}\n"
"\n"
"QTableView::item {\n"
"    padding: 5px;\n"
"    border: 1px solid #F0ECE5;\n"
"}\n"
"\n"
"QHeaderView::section {\n"
"    background-color: #F0ECE5;\n"
"    color: #161A30;\n"
"    padding: 5px;\n"
"    border: 1px solid #ddd;\n"
"}\n"
"\n"
"QTableView::item:selected {\n"
"    background-color: #F0ECE5;\n"
"}"));
        layoutWidget1 = new QWidget(AdminPage);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(210, 470, 631, 51));
        gridLayout_2 = new QGridLayout(layoutWidget1);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        NewAdminButton = new QPushButton(layoutWidget1);
        NewAdminButton->setObjectName("NewAdminButton");
        NewAdminButton->setStyleSheet(QString::fromUtf8("/* Estilo para los botones (QPushButton) */\n"
"QPushButton {\n"
"    font-size: 16px;\n"
"    background-color: #F0ECE5; /* Fondo marr\303\263n */\n"
"    color: black; /* Texto color negro */\n"
"    border: none;\n"
"    border-radius: 0;\n"
"padding : 10px;\n"
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

        gridLayout_2->addWidget(NewAdminButton, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 1, 1, 1);

        DeleteAdminButton = new QPushButton(layoutWidget1);
        DeleteAdminButton->setObjectName("DeleteAdminButton");
        DeleteAdminButton->setStyleSheet(QString::fromUtf8("/* Estilo para los botones (QPushButton) */\n"
"QPushButton {\n"
"    font-size: 16px;\n"
"    background-color: #F0ECE5; /* Fondo marr\303\263n */\n"
"    color: black; /* Texto color negro */\n"
"    border: none;\n"
"    border-radius: 0;\n"
"padding : 10px;\n"
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

        gridLayout_2->addWidget(DeleteAdminButton, 0, 2, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 0, 3, 1, 1);

        UpdateAdminsButton = new QPushButton(layoutWidget1);
        UpdateAdminsButton->setObjectName("UpdateAdminsButton");
        UpdateAdminsButton->setStyleSheet(QString::fromUtf8("/* Estilo para los botones (QPushButton) */\n"
"QPushButton {\n"
"    font-size: 16px;\n"
"    background-color: #F0ECE5; /* Fondo marr\303\263n */\n"
"    color: black; /* Texto color negro */\n"
"    border: none;\n"
"    border-radius: 0;\n"
"padding : 10px;\n"
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

        gridLayout_2->addWidget(UpdateAdminsButton, 0, 4, 1, 1);

        label_2 = new QLabel(AdminPage);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(60, 20, 131, 31));
        label_2->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"color: black; \n"
"font-weight: bold; \n"
"font-size: 25px;\n"
"font:700 20pt \"Times New Roman\";\n"
"}"));
        stackedWidget->addWidget(AdminPage);
        Commande = new QWidget();
        Commande->setObjectName("Commande");
        horizontalLayoutWidget = new QWidget(Commande);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(10, 60, 781, 41));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        numerocmd = new QLabel(horizontalLayoutWidget);
        numerocmd->setObjectName("numerocmd");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(numerocmd->sizePolicy().hasHeightForWidth());
        numerocmd->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        font.setPointSize(13);
        font.setBold(true);
        font.setItalic(false);
        numerocmd->setFont(font);
        numerocmd->setStyleSheet(QString::fromUtf8("font:700 13pt \"Times New Roman\";"));
        numerocmd->setFrameShape(QFrame::NoFrame);
        numerocmd->setFrameShadow(QFrame::Plain);
        numerocmd->setLineWidth(0);
        numerocmd->setTextFormat(Qt::MarkdownText);
        numerocmd->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(numerocmd);

        date = new QLabel(horizontalLayoutWidget);
        date->setObjectName("date");
        date->setStyleSheet(QString::fromUtf8("font:700 13pt \"Times New Roman\";"));
        date->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(date);

        client = new QLabel(horizontalLayoutWidget);
        client->setObjectName("client");
        client->setStyleSheet(QString::fromUtf8("font:700 13pt \"Times New Roman\";"));
        client->setTextFormat(Qt::MarkdownText);
        client->setAlignment(Qt::AlignCenter);
        client->setMargin(0);

        horizontalLayout_2->addWidget(client);

        total = new QLabel(horizontalLayoutWidget);
        total->setObjectName("total");
        total->setStyleSheet(QString::fromUtf8("font:700 13pt \"Times New Roman\";"));
        total->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(total);

        etat = new QLabel(horizontalLayoutWidget);
        etat->setObjectName("etat");
        etat->setStyleSheet(QString::fromUtf8("font:700 13pt \"Times New Roman\";"));
        etat->setTextFormat(Qt::MarkdownText);
        etat->setAlignment(Qt::AlignCenter);
        etat->setIndent(0);

        horizontalLayout_2->addWidget(etat);

        title = new QLabel(Commande);
        title->setObjectName("title");
        title->setGeometry(QRect(10, 10, 191, 20));
        title->setStyleSheet(QString::fromUtf8("font:700 20pt \"Times New Roman\";"));
        horizontalLayoutWidget_2 = new QWidget(Commande);
        horizontalLayoutWidget_2->setObjectName("horizontalLayoutWidget_2");
        horizontalLayoutWidget_2->setGeometry(QRect(10, 110, 781, 371));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        numcmd = new QColumnView(horizontalLayoutWidget_2);
        numcmd->setObjectName("numcmd");

        horizontalLayout_3->addWidget(numcmd);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout_3->addItem(verticalSpacer);

        datecmd = new QColumnView(horizontalLayoutWidget_2);
        datecmd->setObjectName("datecmd");

        horizontalLayout_3->addWidget(datecmd);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout_3->addItem(verticalSpacer_2);

        client_2 = new QColumnView(horizontalLayoutWidget_2);
        client_2->setObjectName("client_2");

        horizontalLayout_3->addWidget(client_2);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout_3->addItem(verticalSpacer_3);

        total_2 = new QColumnView(horizontalLayoutWidget_2);
        total_2->setObjectName("total_2");

        horizontalLayout_3->addWidget(total_2);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout_3->addItem(verticalSpacer_4);

        etat_2 = new QColumnView(horizontalLayoutWidget_2);
        etat_2->setObjectName("etat_2");

        horizontalLayout_3->addWidget(etat_2);

        newcmd = new QPushButton(Commande);
        newcmd->setObjectName("newcmd");
        newcmd->setGeometry(QRect(692, -2, 111, 51));
        newcmd->setStyleSheet(QString::fromUtf8("/* Estilo para los botones (QPushButton) */\n"
"QPushButton {\n"
"    font-size: 16px;\n"
"    background-color: #F0ECE5; /* Fondo marr\303\263n */\n"
"    color: black; /* Texto color negro */\n"
"    border: none;\n"
"    border-radius: 0;\n"
"padding : 10px;\n"
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
        suppcmd = new QPushButton(Commande);
        suppcmd->setObjectName("suppcmd");
        suppcmd->setGeometry(QRect(702, 480, 101, 51));
        suppcmd->setStyleSheet(QString::fromUtf8("/* Estilo para los botones (QPushButton) */\n"
"QPushButton {\n"
"    font-size: 16px;\n"
"    background-color: #F0ECE5; /* Fondo marr\303\263n */\n"
"    color: black; /* Texto color negro */\n"
"    border: none;\n"
"    border-radius: 0;\n"
"padding : 10px;\n"
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
        facture = new QPushButton(Commande);
        facture->setObjectName("facture");
        facture->setGeometry(QRect(572, 480, 101, 51));
        facture->setStyleSheet(QString::fromUtf8("/* Estilo para los botones (QPushButton) */\n"
"QPushButton {\n"
"    font-size: 16px;\n"
"    background-color: #F0ECE5; /* Fondo marr\303\263n */\n"
"    color: black; /* Texto color negro */\n"
"    border: none;\n"
"    border-radius: 0;\n"
"padding : 10px;\n"
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
        Rechercher = new QPushButton(Commande);
        Rechercher->setObjectName("Rechercher");
        Rechercher->setGeometry(QRect(492, -2, 181, 51));
        Rechercher->setStyleSheet(QString::fromUtf8("/* Estilo para los botones (QPushButton) */\n"
"QPushButton {\n"
"    font-size: 16px;\n"
"    background-color: #F0ECE5; /* Fondo marr\303\263n */\n"
"    color: black; /* Texto color negro */\n"
"    border: none;\n"
"    border-radius: 0;\n"
"padding : 8px;\n"
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
        stackedWidget->addWidget(Commande);
        page = new QWidget();
        page->setObjectName("page");
        stackedWidget->addWidget(page);
        layoutWidget2 = new QWidget(centralwidget);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(10, 100, 101, 261));
        gridLayout = new QGridLayout(layoutWidget2);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setSizeConstraint(QLayout::SetNoConstraint);
        gridLayout->setVerticalSpacing(20);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        ClientButton = new QPushButton(layoutWidget2);
        ClientButton->setObjectName("ClientButton");
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(ClientButton->sizePolicy().hasHeightForWidth());
        ClientButton->setSizePolicy(sizePolicy1);
        ClientButton->setStyleSheet(QString::fromUtf8("/* Estilo para los botones (QPushButton) */\n"
"QPushButton {\n"
"    font-size: 16px;\n"
"    background-color: #F0ECE5; /* Fondo marr\303\263n */\n"
"    color: black; /* Texto color negro */\n"
"    border: none;\n"
"    border-radius: 0;\n"
"	padding : 3px;\n"
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

        gridLayout->addWidget(ClientButton, 2, 2, 1, 1);

        CommandeButton = new QPushButton(layoutWidget2);
        CommandeButton->setObjectName("CommandeButton");
        sizePolicy1.setHeightForWidth(CommandeButton->sizePolicy().hasHeightForWidth());
        CommandeButton->setSizePolicy(sizePolicy1);
        CommandeButton->setStyleSheet(QString::fromUtf8("/* Estilo para los botones (QPushButton) */\n"
"QPushButton {\n"
"    font-size: 16px;\n"
"    background-color: #F0ECE5; /* Fondo marr\303\263n */\n"
"    color: black; /* Texto color negro */\n"
"    border: none;\n"
"    border-radius: 0;\n"
"	padding : 3px;\n"
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

        gridLayout->addWidget(CommandeButton, 0, 2, 1, 1);

        CategorieButton = new QPushButton(layoutWidget2);
        CategorieButton->setObjectName("CategorieButton");
        sizePolicy1.setHeightForWidth(CategorieButton->sizePolicy().hasHeightForWidth());
        CategorieButton->setSizePolicy(sizePolicy1);
        CategorieButton->setStyleSheet(QString::fromUtf8("/* Estilo para los botones (QPushButton) */\n"
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

        gridLayout->addWidget(CategorieButton, 1, 2, 1, 1);

        AdminButton = new QPushButton(layoutWidget2);
        AdminButton->setObjectName("AdminButton");
        sizePolicy1.setHeightForWidth(AdminButton->sizePolicy().hasHeightForWidth());
        AdminButton->setSizePolicy(sizePolicy1);
        AdminButton->setStyleSheet(QString::fromUtf8("/* Estilo para los botones (QPushButton) */\n"
"QPushButton {\n"
"    font-size: 16px;\n"
"    background-color: #F0ECE5; /* Fondo marr\303\263n */\n"
"    color: black; /* Texto color negro */\n"
"    border: none;\n"
"    border-radius: 0;\n"
"	padding : 3px;\n"
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

        gridLayout->addWidget(AdminButton, 3, 2, 1, 1);

        ClientWindow->setCentralWidget(centralwidget);

        retranslateUi(ClientWindow);

        stackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(ClientWindow);
    } // setupUi

    void retranslateUi(QMainWindow *ClientWindow)
    {
        ClientWindow->setWindowTitle(QCoreApplication::translate("ClientWindow", "MainWindow", nullptr));
        UpdateButton->setText(QCoreApplication::translate("ClientWindow", "Update", nullptr));
        NewButton->setText(QCoreApplication::translate("ClientWindow", "New", nullptr));
        DeleteButton->setText(QCoreApplication::translate("ClientWindow", "Delete", nullptr));
        label->setText(QCoreApplication::translate("ClientWindow", "Clients", nullptr));
        NewAdminButton->setText(QCoreApplication::translate("ClientWindow", "New Admin", nullptr));
        DeleteAdminButton->setText(QCoreApplication::translate("ClientWindow", "Delete Admin", nullptr));
        UpdateAdminsButton->setText(QCoreApplication::translate("ClientWindow", "Update", nullptr));
        label_2->setText(QCoreApplication::translate("ClientWindow", "Admins", nullptr));
        numerocmd->setText(QCoreApplication::translate("ClientWindow", "Numero", nullptr));
        date->setText(QCoreApplication::translate("ClientWindow", "Date", nullptr));
        client->setText(QCoreApplication::translate("ClientWindow", "Client", nullptr));
        total->setText(QCoreApplication::translate("ClientWindow", "Total", nullptr));
        etat->setText(QCoreApplication::translate("ClientWindow", "Etat", nullptr));
        title->setText(QCoreApplication::translate("ClientWindow", "Commandes", nullptr));
        newcmd->setText(QCoreApplication::translate("ClientWindow", "+ Nouvelle", nullptr));
        suppcmd->setText(QCoreApplication::translate("ClientWindow", "Supprimer", nullptr));
        facture->setText(QCoreApplication::translate("ClientWindow", "Facture", nullptr));
        Rechercher->setText(QCoreApplication::translate("ClientWindow", "Rechercher", nullptr));
        ClientButton->setText(QCoreApplication::translate("ClientWindow", "Client", nullptr));
        CommandeButton->setText(QCoreApplication::translate("ClientWindow", "Commande", nullptr));
        CategorieButton->setText(QCoreApplication::translate("ClientWindow", "Categorie", nullptr));
        AdminButton->setText(QCoreApplication::translate("ClientWindow", "Admins", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ClientWindow: public Ui_ClientWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTWINDOW_H
