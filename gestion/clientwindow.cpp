#include "clientwindow.h"
#include "ui_clientwindow.h"
#include "db.h"
#include <QSqlTableModel>
#include <QDialog>
#include <QString>
#include <QLabel>
#include <QVBoxLayout>
#include <QLineEdit>
#include <QDialog>
#include <QSqlQuery>
#include <QDialogButtonBox>
#include <QComboBox>
#include <QMessageBox>
#include <QSqlError>
#include <QTextBrowser>
#include <QPrinter>
#include <QPrintDialog>


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
    QDialog dialog(this);
    dialog.setWindowTitle("Insérer la commande");

    // Create and set up the widgets for the dialog
    // You should replace the QLineEdit and other widgets with the appropriate ones for your data input
    QLineEdit *lineEditNumCmd = new QLineEdit(&dialog);
    QLineEdit *lineEditDateCmd = new QLineEdit(&dialog);
    QComboBox *comboBoxClient = new QComboBox(&dialog);
    QLineEdit *lineEditTotal = new QLineEdit(&dialog);
    QComboBox *stateComboBox = new QComboBox(&dialog);
    stateComboBox->addItems({"en cours", "livré", "reçu"});

    QSqlQuery clientQuery("SELECT idClient FROM clients");
    while (clientQuery.next()) {
        QString idClient = clientQuery.value(0).toString();
        comboBoxClient->addItem(idClient);
    }

    // Create a layout for the dialog
    QVBoxLayout *layout = new QVBoxLayout(&dialog);

    // Add widgets to the layout
    layout->addWidget(new QLabel("Numero:", &dialog));
    layout->addWidget(lineEditNumCmd);

    layout->addWidget(new QLabel("Date:", &dialog));
    layout->addWidget(lineEditDateCmd);

    layout->addWidget(new QLabel("Client:", &dialog));
    layout->addWidget(comboBoxClient);

    layout->addWidget(new QLabel("Total:", &dialog));
    layout->addWidget(lineEditTotal);

    layout->addWidget(new QLabel("State:", &dialog));
    layout->addWidget(stateComboBox);

    // Create OK and Cancel buttons
    QDialogButtonBox *buttonBox = new QDialogButtonBox(QDialogButtonBox::Ok | QDialogButtonBox::Cancel, Qt::Horizontal, &dialog);
    layout->addWidget(buttonBox);

    // Connect signals and slots for the buttons
    connect(buttonBox, &QDialogButtonBox::accepted, &dialog, &QDialog::accept);
    connect(buttonBox, &QDialogButtonBox::rejected, &dialog, &QDialog::reject);

    // Execute the dialog and check if OK was pressed
    if (dialog.exec() == QDialog::Accepted) {
        // Get values from line edits
        QString numCmd = lineEditNumCmd->text();
        QString dateCmd = lineEditDateCmd->text();
        QString selectedClient = comboBoxClient->currentText();
        QString total = lineEditTotal->text();
        QString etat = stateComboBox->currentText();

        // Insertion
        QSqlQuery query;
        query.prepare("INSERT INTO commandes (numCmd, datCmd, Idclient, montant, etat) "
                      "VALUES (:numCmd, :dateCmd, :idClient, :montant, :etat)");
        query.bindValue(":numCmd", numCmd);
        query.bindValue(":dateCmd", dateCmd);
        query.bindValue(":idClient", selectedClient);
        query.bindValue(":montant", total);
        query.bindValue(":etat", etat);


        if (query.exec()) {
            // rafraichir
            CommandeModel->setQuery("SELECT numCmd FROM commandes");
            CommandeModel1->setQuery("SELECT datCmd FROM commandes");
            CommandeModel2->setQuery("SELECT Idclient FROM commandes");
            CommandeModel3->setQuery("SELECT montant FROM commandes");
            CommandeModel4->setQuery("SELECT etat FROM commandes");
        } else {
            qDebug() << "Error executing query:";

        }
    }
}

void ClientWindow::on_Rechercher_clicked()
{
    // Create a dialog for order search
    QDialog searchDialog(this);
    searchDialog.setWindowTitle("Recherche");

    // Create widgets for the dialog
    QLabel *labelOrderNumber = new QLabel("Order Number:", &searchDialog);
    QLineEdit *lineEditOrderNumber = new QLineEdit(&searchDialog);

    // Create a layout for the dialog
    QVBoxLayout *layout = new QVBoxLayout(&searchDialog);

    // Add widgets to the layout
    layout->addWidget(labelOrderNumber);
    layout->addWidget(lineEditOrderNumber);

    // Create OK and Cancel buttons
    QDialogButtonBox *buttonBox = new QDialogButtonBox(QDialogButtonBox::Ok | QDialogButtonBox::Cancel, Qt::Horizontal, &searchDialog);
    layout->addWidget(buttonBox);

    // Connect signals and slots for the buttons
    connect(buttonBox, &QDialogButtonBox::accepted, &searchDialog, &QDialog::accept);
    connect(buttonBox, &QDialogButtonBox::rejected, &searchDialog, &QDialog::reject);

    // Execute the dialog and check if OK was pressed
    if (searchDialog.exec() == QDialog::Accepted) {
        // Get the order number to search
        QString searchNumCmd = lineEditOrderNumber->text();

        // Check if the search input is not empty
        if (searchNumCmd.isEmpty()) {
            QMessageBox::warning(this, "Avertissement", "Entrer le numero de commande a rechercher s'il vous plaît!");
            return;
        }

        // Prepare the query to search for the order
        QSqlQuery query;
        query.prepare("SELECT * FROM commandes WHERE numCmd = :searchNumCmd");
        query.bindValue(":searchNumCmd", searchNumCmd);

        // Execute the query
        if (query.exec()) {
            // Check if the order is found
            if (query.next()) {
                // Display the found order in a separate widget window
                QWidget *resultWidget = new QWidget(this);
                resultWidget->setWindowTitle("Résultats");

                // Create widgets to display search results
                QLabel *labelNumCmd = new QLabel("Order Number: " + query.value("numCmd").toString(), resultWidget);
                QLabel *labelDateCmd = new QLabel("Date: " + query.value("datCmd").toString(), resultWidget);
                QLabel *labelClientId = new QLabel("Client ID: " + query.value("Idclient").toString(), resultWidget);
                QLabel *labelMontant = new QLabel("Amount: " + query.value("montant").toString(), resultWidget);
                QLabel *labelEtat = new QLabel("Status: " + query.value("etat").toString(), resultWidget);

                // Create layout for the result widget
                QVBoxLayout *resultLayout = new QVBoxLayout(resultWidget);
                resultLayout->addWidget(labelNumCmd);
                resultLayout->addWidget(labelDateCmd);
                resultLayout->addWidget(labelClientId);
                resultLayout->addWidget(labelMontant);
                resultLayout->addWidget(labelEtat);

                // Set window flags and show the result widget
                resultWidget->setWindowFlags(Qt::Window);
                resultWidget->show();
            } else {
                // Order not found, display a message
                QMessageBox::information(this, "Information", "Commande non trouvée.");
            }
        } else {
            // Error executing the query
            qDebug() << "Error executing query:" << query.lastError().text();
            // Handle the error as needed
        }
    }
}

void ClientWindow::on_suppcmd_clicked()
{
    // Get the selection model from the QColumnView
    QItemSelectionModel *selectionModel = ui->numcmd->selectionModel();

    // Check if any item is selected
    if (!selectionModel->hasSelection()) {
        QMessageBox::warning(this, "Avertissement", "Selectionner une commande s'il vous plaît!");
        return;
    }

    // Get the selected index
    QModelIndex selectedIndex = selectionModel->currentIndex();

    // Get the model associated with the QColumnView
    QAbstractItemModel *model = ui->numcmd->model();

    // Retrieve the order number from the model using the selected index
    QString deleteNumCmd = model->data(selectedIndex, Qt::DisplayRole).toString();

    // Confirm deletion with a message box
    QMessageBox::StandardButton reply = QMessageBox::question(this, "Confirmer", "Etes vous sûr de bien vouloir supprimer?",
                                                              QMessageBox::Yes | QMessageBox::No);

    if (reply == QMessageBox::No) {
        return;
    }

    // Prepare the query to delete the order
    QSqlQuery query;
    query.prepare("DELETE FROM commandes WHERE numCmd = :deleteNumCmd");
    query.bindValue(":deleteNumCmd", deleteNumCmd);

    // Execute the query
    if (query.exec()) {
        // Show a message indicating successful deletion
        QMessageBox::information(this, "Information", "Commande supprimée");

        // Re-show the columns view by refreshing the models
        refreshOrderView();
    } else {
        // Error executing the query
        qDebug() << "Error executing query:" << query.lastError().text();
        // Handle the error as needed
    }
}

void ClientWindow::refreshOrderView()
{
    // Refresh the models to update the displayed data
    CommandeModel->setQuery("SELECT numCmd FROM commandes");
    CommandeModel1->setQuery("SELECT datCmd FROM commandes");
    CommandeModel2->setQuery("SELECT Idclient FROM commandes");
    CommandeModel3->setQuery("SELECT montant FROM commandes");
    CommandeModel4->setQuery("SELECT etat FROM commandes");
}



void ClientWindow::on_facture_clicked()
{
    // Get the selection model from the QColumnView
    QItemSelectionModel *selectionModel = ui->numcmd->selectionModel();

    // Check if any item is selected
    if (!selectionModel->hasSelection()) {
        QMessageBox::warning(this, "Avertissement", "Selectionner une commande s'il vous plaît!");
        return;
    }

    // Get the selected index
    QModelIndex selectedIndex = selectionModel->currentIndex();

    // Get the model associated with the QColumnView
    QAbstractItemModel *model = ui->numcmd->model();

    // Retrieve order number from the model using the selected index
    QString orderNumber = model->data(selectedIndex, Qt::DisplayRole).toString();

    // Retrieve order details from the database
    QSqlQuery queryOrder;
    queryOrder.prepare("SELECT * FROM commandes WHERE numCmd = :orderNumber");
    queryOrder.bindValue(":orderNumber", orderNumber);

    if (!queryOrder.exec() || !queryOrder.next()) {
        // Error handling: Unable to fetch order details
        qDebug() << "Error fetching order details:" << queryOrder.lastError().text();
        return;
    }

    // Get client ID from the order details
    QString clientId = queryOrder.value("Idclient").toString();

    // Retrieve client details from the database
    QSqlQuery queryClient;
    queryClient.prepare("SELECT * FROM clients WHERE Idclient = :clientId");
    queryClient.bindValue(":clientId", clientId);

    if (!queryClient.exec() || !queryClient.next()) {
        // Error handling: Unable to fetch client details
        qDebug() << "Error fetching client details:" << queryClient.lastError().text();
        return;
    }

    // Format order and client details into a bill
    QString billContent = QString("Order Number: %1\n"
                                  "Date: %2\n"
                                  "Client ID: %3\n"
                                  "Client Name: %4\n"
                                  "Address: %5\n"
                                  "Phone: %6\n"
                                  "Amount: %7\n"
                                  "Status: %8")
                              .arg(queryOrder.value("numCmd").toString())
                              .arg(queryOrder.value("datCmd").toString())
                              .arg(queryOrder.value("Idclient").toString())
                              .arg(queryClient.value("last_name").toString())  // Adjust column name as per your table structure
                              .arg(queryClient.value("address").toString())  // Adjust column name as per your table structure
                              .arg(queryClient.value("phone").toString())  // Adjust column name as per your table structure
                              .arg(queryOrder.value("montant").toString())
                              .arg(queryOrder.value("etat").toString());

    // Create a dialog to display the bill
    QDialog billDialog(this);
    billDialog.setWindowTitle("Order Bill");

    // Create a QTextBrowser to display the bill
    QTextBrowser *textBrowser = new QTextBrowser(&billDialog);
    textBrowser->setPlainText(billContent);

    // Create a button to print the bill
    QPushButton *printButton = new QPushButton("Print", &billDialog);
    connect(printButton, &QPushButton::clicked, [&]() {
        QPrinter printer;
        QPrintDialog printDialog(&printer, &billDialog);

        if (printDialog.exec() == QDialog::Accepted) {
            textBrowser->print(&printer);
        }
    });

    // Create a layout for the bill dialog
    QVBoxLayout *layout = new QVBoxLayout(&billDialog);
    layout->addWidget(textBrowser);
    layout->addWidget(printButton);

    // Show the bill dialog
    billDialog.exec();
}




