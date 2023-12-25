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

    this->CommandeModel = new QSqlQueryModel();
    CommandeModel->setQuery("SELECT numCmd FROM commandes");
    ui->numcmd->setModel(CommandeModel);
    this->CommandeModel1=new QSqlQueryModel();
    CommandeModel1->setQuery("SELECT datCmd FROM commandes");
    ui->datecmd->setModel(CommandeModel1);
    this->CommandeModel2=new QSqlQueryModel();
    CommandeModel2->setQuery("SELECT Idclient FROM commandes");
    ui->client_2->setModel(CommandeModel2);
    this->CommandeModel3=new QSqlQueryModel();
    CommandeModel3->setQuery("SELECT montant FROM commandes");
    ui->total_2->setModel(CommandeModel3);
    this->CommandeModel4=new QSqlQueryModel();
    CommandeModel4->setQuery("SELECT etat FROM commandes");
    ui->etat_2->setModel(CommandeModel4);


    //ui->stackedWidget->setCurrentIndex(0);



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


void ClientWindow::on_newcmd_clicked()
{

}

