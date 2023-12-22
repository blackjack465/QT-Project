#include "login.h"
#include "qsqlerror.h"
#include "ui_login.h"
#include "ClientWindow.h"

#include <QString>
#include <QLabel>
#include <QSqlDatabase>
#include <QSqlQuery>

login::login(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::login)
{
    ui->setupUi(this);
}

login::~login()
{
    delete ui;
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
        // Las credenciales son válidas
        qDebug() << "Inicio de sesión exitoso";

        ClientWindow *ClientWindows = new ClientWindow();
        ClientWindows->show();

        this->close();
    } else {

        // Las credenciales no son válidas
        qDebug() << "Inicio de sesión fallido";
        qDebug() << "Error de base de datos: " << query.lastError().text();
    }


}


void login::on_pushButton_clicked()
{
    ui->UserlineEdit->clear();
    ui->PassWordlineEdit->clear();
}

