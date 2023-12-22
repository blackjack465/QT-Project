#include "clientwindow.h"
#include "ui_clientwindow.h"
#include "db.h"
#include <QSqlTableModel>

ClientWindow::ClientWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ClientWindow)
{
    ui->setupUi(this);
//Client
    this->database = new  Db();
    this->mModel = new QSqlTableModel(database);

    mModel->setTable("clients");
    mModel->select();
    ui->ClienttableView->setModel(mModel);

//Admin
    this->AdminModel = new QSqlTableModel(database);
    AdminModel->setTable("Admin");
    AdminModel->select();
    ui->AdminsView->setModel(AdminModel);

    ui->stackedWidget->setCurrentIndex(0);

 //Commande

    this->CommandeModel = new QSqlTableModel(database);



}

ClientWindow::~ClientWindow()
{
    delete ui;
}

//Page des Clients

void ClientWindow::on_UpdateButton_clicked()
{
    mModel->select();
}


void ClientWindow::on_NewButton_clicked()
{
    mModel->insertRow(mModel->rowCount());
}


void ClientWindow::on_DeleteButton_clicked()
{
    mModel->removeRow(ui->ClienttableView->currentIndex().row());
}


void ClientWindow::on_ClientButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);

}
void ClientWindow::on_AdminButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}




//Page des Admins

void ClientWindow::on_NewAdminButton_clicked()
{
    AdminModel->insertRow(AdminModel->rowCount());
}


void ClientWindow::on_DeleteAdminButton_clicked()
{
    AdminModel->removeRow(ui->AdminsView->currentIndex().row());
}


void ClientWindow::on_UpdateAdminsButton_clicked()
{
    AdminModel->select();
}


void ClientWindow::on_CommandeButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}


void ClientWindow::on_Commande_customContextMenuRequested(const QPoint &pos)
{

}

