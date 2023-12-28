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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
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
    QLabel *label_2;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *NewAdminButton;
    QPushButton *UpdateAdminsButton;
    QPushButton *DeleteAdminButton;
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
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *Sport;
    QLabel *Electronique;
    QLabel *Beaute;
    QTableView *dynamictable;
    QPushButton *AjoutProd;
    QPushButton *SuppProd;
    QPushButton *modifProc;
    QLabel *title_2;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout;
    QPushButton *ClientButton;
    QPushButton *CommandeButton;
    QPushButton *CategorieButton;
    QPushButton *AdminButton;
    QLineEdit *admin;
    QLabel *logout;
    QLabel *imageLabel;

    void setupUi(QMainWindow *ClientWindow)
    {
        if (ClientWindow->objectName().isEmpty())
            ClientWindow->setObjectName("ClientWindow");
        ClientWindow->resize(1014, 647);
        centralwidget = new QWidget(ClientWindow);
        centralwidget->setObjectName("centralwidget");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(110, 50, 871, 541));
        ClientPage = new QWidget();
        ClientPage->setObjectName("ClientPage");
        ClienttableView = new QTableView(ClientPage);
        ClienttableView->setObjectName("ClienttableView");
        ClienttableView->setGeometry(QRect(10, 100, 771, 391));
        QFont font;
        font.setFamilies({QString::fromUtf8("Nirmala UI")});
        font.setPointSize(12);
        ClienttableView->setFont(font);
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
        layoutWidget->setGeometry(QRect(260, 40, 571, 55));
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
        label->setGeometry(QRect(10, 10, 131, 41));
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
        AdminsView->setGeometry(QRect(10, 100, 471, 251));
        AdminsView->setFont(font);
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
        label_2 = new QLabel(AdminPage);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 10, 241, 31));
        label_2->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"color: black; \n"
"font-weight: bold; \n"
"font-size: 25px;\n"
"font:700 20pt \"Times New Roman\";\n"
"}"));
        verticalLayoutWidget = new QWidget(AdminPage);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(630, 100, 160, 251));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        NewAdminButton = new QPushButton(verticalLayoutWidget);
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

        verticalLayout->addWidget(NewAdminButton);

        UpdateAdminsButton = new QPushButton(verticalLayoutWidget);
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

        verticalLayout->addWidget(UpdateAdminsButton);

        DeleteAdminButton = new QPushButton(verticalLayoutWidget);
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

        verticalLayout->addWidget(DeleteAdminButton);

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
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Times New Roman")});
        font1.setPointSize(13);
        font1.setBold(true);
        font1.setItalic(false);
        numerocmd->setFont(font1);
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
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(numcmd->sizePolicy().hasHeightForWidth());
        numcmd->setSizePolicy(sizePolicy1);
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Nirmala UI")});
        font2.setPointSize(12);
        font2.setBold(false);
        numcmd->setFont(font2);

        horizontalLayout_3->addWidget(numcmd);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout_3->addItem(verticalSpacer);

        datecmd = new QColumnView(horizontalLayoutWidget_2);
        datecmd->setObjectName("datecmd");
        datecmd->setFont(font);

        horizontalLayout_3->addWidget(datecmd);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout_3->addItem(verticalSpacer_2);

        client_2 = new QColumnView(horizontalLayoutWidget_2);
        client_2->setObjectName("client_2");
        client_2->setFont(font);

        horizontalLayout_3->addWidget(client_2);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout_3->addItem(verticalSpacer_3);

        total_2 = new QColumnView(horizontalLayoutWidget_2);
        total_2->setObjectName("total_2");
        total_2->setFont(font);

        horizontalLayout_3->addWidget(total_2);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout_3->addItem(verticalSpacer_4);

        etat_2 = new QColumnView(horizontalLayoutWidget_2);
        etat_2->setObjectName("etat_2");
        etat_2->setFont(font);

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
        suppcmd->setGeometry(QRect(700, 490, 111, 41));
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
        facture->setGeometry(QRect(550, 490, 111, 41));
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
        horizontalLayoutWidget_3 = new QWidget(page);
        horizontalLayoutWidget_3->setObjectName("horizontalLayoutWidget_3");
        horizontalLayoutWidget_3->setGeometry(QRect(120, 49, 621, 41));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        Sport = new QLabel(horizontalLayoutWidget_3);
        Sport->setObjectName("Sport");
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Times New Roman")});
        font3.setPointSize(14);
        font3.setBold(false);
        font3.setItalic(false);
        Sport->setFont(font3);
        Sport->setStyleSheet(QString::fromUtf8("font: 14pt \"Times New Roman\";\n"
"\n"
"\n"
""));
        Sport->setFrameShape(QFrame::StyledPanel);
        Sport->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(Sport);

        Electronique = new QLabel(horizontalLayoutWidget_3);
        Electronique->setObjectName("Electronique");
        Electronique->setStyleSheet(QString::fromUtf8("font: 14pt \"Times New Roman\";"));
        Electronique->setFrameShape(QFrame::StyledPanel);
        Electronique->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(Electronique);

        Beaute = new QLabel(horizontalLayoutWidget_3);
        Beaute->setObjectName("Beaute");
        Beaute->setStyleSheet(QString::fromUtf8("font: 14pt \"Times New Roman\";"));
        Beaute->setFrameShape(QFrame::StyledPanel);
        Beaute->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(Beaute);

        dynamictable = new QTableView(page);
        dynamictable->setObjectName("dynamictable");
        dynamictable->setGeometry(QRect(10, 90, 851, 391));
        dynamictable->setFont(font);
        AjoutProd = new QPushButton(page);
        AjoutProd->setObjectName("AjoutProd");
        AjoutProd->setGeometry(QRect(720, 500, 131, 41));
        AjoutProd->setStyleSheet(QString::fromUtf8("/* Estilo para los botones (QPushButton) */\n"
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
        SuppProd = new QPushButton(page);
        SuppProd->setObjectName("SuppProd");
        SuppProd->setGeometry(QRect(600, 500, 111, 41));
        SuppProd->setStyleSheet(QString::fromUtf8("/* Estilo para los botones (QPushButton) */\n"
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
        modifProc = new QPushButton(page);
        modifProc->setObjectName("modifProc");
        modifProc->setGeometry(QRect(470, 500, 111, 41));
        modifProc->setStyleSheet(QString::fromUtf8("/* Estilo para los botones (QPushButton) */\n"
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
        title_2 = new QLabel(page);
        title_2->setObjectName("title_2");
        title_2->setGeometry(QRect(10, 10, 191, 20));
        title_2->setStyleSheet(QString::fromUtf8("font:700 20pt \"Times New Roman\";"));
        stackedWidget->addWidget(page);
        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(10, 80, 61, 261));
        gridLayout = new QGridLayout(layoutWidget1);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setSizeConstraint(QLayout::SetNoConstraint);
        gridLayout->setVerticalSpacing(20);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        ClientButton = new QPushButton(layoutWidget1);
        ClientButton->setObjectName("ClientButton");
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(ClientButton->sizePolicy().hasHeightForWidth());
        ClientButton->setSizePolicy(sizePolicy2);
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

        CommandeButton = new QPushButton(layoutWidget1);
        CommandeButton->setObjectName("CommandeButton");
        sizePolicy2.setHeightForWidth(CommandeButton->sizePolicy().hasHeightForWidth());
        CommandeButton->setSizePolicy(sizePolicy2);
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

        CategorieButton = new QPushButton(layoutWidget1);
        CategorieButton->setObjectName("CategorieButton");
        sizePolicy2.setHeightForWidth(CategorieButton->sizePolicy().hasHeightForWidth());
        CategorieButton->setSizePolicy(sizePolicy2);
        CategorieButton->setStyleSheet(QString::fromUtf8("/* Estilo para los botones (QPushButton) */\n"
"\n"
"QPushButton {\n"
"    font-size: 16px;\n"
"	font: \"Times New Roman\";\n"
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

        AdminButton = new QPushButton(layoutWidget1);
        AdminButton->setObjectName("AdminButton");
        sizePolicy2.setHeightForWidth(AdminButton->sizePolicy().hasHeightForWidth());
        AdminButton->setSizePolicy(sizePolicy2);
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

        admin = new QLineEdit(centralwidget);
        admin->setObjectName("admin");
        admin->setGeometry(QRect(882, 7, 121, 31));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Times New Roman")});
        font4.setPointSize(12);
        font4.setBold(true);
        admin->setFont(font4);
        admin->setLayoutDirection(Qt::LeftToRight);
        admin->setStyleSheet(QString::fromUtf8(""));
        admin->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        logout = new QLabel(centralwidget);
        logout->setObjectName("logout");
        logout->setGeometry(QRect(750, 10, 121, 21));
        logout->setStyleSheet(QString::fromUtf8("\n"
"font: 12pt \"Times New Roman\";\n"
"color: rgb(204, 0, 0);\n"
""));
        logout->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        imageLabel = new QLabel(centralwidget);
        imageLabel->setObjectName("imageLabel");
        imageLabel->setGeometry(QRect(20, 10, 41, 41));
        ClientWindow->setCentralWidget(centralwidget);

        retranslateUi(ClientWindow);

        stackedWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(ClientWindow);
    } // setupUi

    void retranslateUi(QMainWindow *ClientWindow)
    {
        ClientWindow->setWindowTitle(QCoreApplication::translate("ClientWindow", "MainWindow", nullptr));
        UpdateButton->setText(QCoreApplication::translate("ClientWindow", "Mise \303\240 jour", nullptr));
        NewButton->setText(QCoreApplication::translate("ClientWindow", "Nouveau", nullptr));
        DeleteButton->setText(QCoreApplication::translate("ClientWindow", "Supprimer", nullptr));
        label->setText(QCoreApplication::translate("ClientWindow", "Clients", nullptr));
        label_2->setText(QCoreApplication::translate("ClientWindow", "Administrateurs", nullptr));
        NewAdminButton->setText(QCoreApplication::translate("ClientWindow", "+ Nouveau", nullptr));
        UpdateAdminsButton->setText(QCoreApplication::translate("ClientWindow", "Mise \303\240 jour", nullptr));
        DeleteAdminButton->setText(QCoreApplication::translate("ClientWindow", "Supprimer", nullptr));
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
        Sport->setText(QCoreApplication::translate("ClientWindow", "<a href=\"#\">Sport</a>", nullptr));
        Electronique->setText(QCoreApplication::translate("ClientWindow", "<a href=\"#\">Electronique</a>", nullptr));
        Beaute->setText(QCoreApplication::translate("ClientWindow", "<a href=\"#\">Beaut\303\251</a>", nullptr));
        AjoutProd->setText(QCoreApplication::translate("ClientWindow", "+ Ajouter", nullptr));
        SuppProd->setText(QCoreApplication::translate("ClientWindow", "Supprimer", nullptr));
        modifProc->setText(QCoreApplication::translate("ClientWindow", "Modifier", nullptr));
        title_2->setText(QCoreApplication::translate("ClientWindow", "Produits", nullptr));
        ClientButton->setText(QString());
        CommandeButton->setText(QString());
        CategorieButton->setText(QString());
        AdminButton->setText(QString());
        logout->setText(QCoreApplication::translate("ClientWindow", "<html><head/><body><p><a href=\"#\"><span style=\" text-decoration: underline; color:#f40000;\">d\303\251connecter</span></a></p></body></html>", nullptr));
        imageLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ClientWindow: public Ui_ClientWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTWINDOW_H
