#include "login.h"
#include "ui_login.h"
#include "ClientWindow.h"

#include <QString>
#include <QLabel>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QPointer>


login::login(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::login)
{
    ui->setupUi(this);
    ui->PassWordlineEdit->setEchoMode(QLineEdit::Password);
}

login::~login()
{
    QSqlDatabase::database().close();
    delete ui;
}

void login::on_pushButton_clicked()
{
    ui->UserlineEdit->clear();
    ui->PassWordlineEdit->clear();
}

void login::on_LoginButton_clicked()
{
    QString user = ui->UserlineEdit->text();
    QString password = ui->PassWordlineEdit->text();

    QSqlQuery query;
    query.prepare("SELECT Admin_name, Admin_password FROM Admin WHERE Admin_name = :username AND Admin_password = :password");
    query.bindValue(":username", user);
    query.bindValue(":password", password);

    if (query.exec() && query.next()) {
        // Credentials are valid
        qDebug() << "Inicio de sesión exitoso";
        QString adminName = query.value("Admin_name").toString();
        qDebug()<<"adminname affecté";
        // Create ClientWindow on the heap
        // Create ClientWindow on the heap
        ClientWindow* clientWindow = new ClientWindow(nullptr, adminName);
        qDebug() << "ClientWindow constructor called";
        clientWindow->setAttribute(Qt::WA_DeleteOnClose);  // Auto-delete when closed


        // Connect a slot to handle cleanup when ClientWindow is destroyed
        connect(clientWindow, &ClientWindow::destroyed, [=]() {
            // clientWindow is automatically set to nullptr when destroyed
            qDebug() << "ClientWindow destroyed.";
        });

        // Show the ClientWindow
        clientWindow->show();

        // Close the login window
        this->close();
    } else {
        // Credentials are not valid
        qDebug() << "Inicio de sesión fallido";
        qDebug() << "Error de base de datos: ";
    }
}
