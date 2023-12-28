#include "clientwindow.h"
#include "ui_clientwindow.h"
#include "db.h"
#include "login.h"
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
#include <QDir>
#include <QIcon>
#include <QDebug>


ClientWindow::ClientWindow(QWidget *parent,const QString& adminName)
    : QMainWindow(parent)
    , ui(new Ui::ClientWindow),
    iconLabel(new QLabel(this))
{
    ui->setupUi(this);
    ui->admin->setReadOnly(true);
    ui->admin->setText(adminName);
    ui->admin->setStyleSheet(
        "QLineEdit {"
        "   background-color: #f0f0f0;"
        "   color: #333333;"
        "   border: 1px solid #cccccc;"
        "   padding: 5px;"
        "   border-radius: 3px;"
        "   padding-left: 30px;"
        "}"
        "QLabel {"
        "   position: absolute;"
        "   top: 6px;"
        "   left: 6px;"
        "}"
        );

    QIcon icon(":/new/icons/person.png");
    iconLabel->setPixmap(icon.pixmap(20, 20));

    QHBoxLayout *layout = new QHBoxLayout(ui->admin);
    layout->addWidget(iconLabel);
    layout->addSpacing(5);
    connect(ui->logout, &QLabel::linkActivated, this, &ClientWindow::logout);


 //Client table
    this->database = &Db::instance();

    this->mModel = new QSqlTableModel(database);

    mModel->setTable("clients");
    mModel->select();
    ui->ClienttableView->setModel(mModel);

//Admin table
    this->AdminModel = new QSqlTableModel(database);
    AdminModel->setTable("Admin");
    AdminModel->select();
    ui->AdminsView->setModel(AdminModel);



//Commande table

    //Premier Colone
    this->CommandeModel = new QSqlQueryModel();
    CommandeModel->setQuery("SELECT numCmd FROM commandes");
    ui->numcmd->setModel(CommandeModel);

    //Deuxiem Colone
    this->CommandeModel1=new QSqlQueryModel();
    CommandeModel1->setQuery("SELECT datCmd FROM commandes");
    ui->datecmd->setModel(CommandeModel1);

    //Troisiem Colone
    this->CommandeModel2=new QSqlQueryModel();
    CommandeModel2->setQuery("SELECT Idclient FROM commandes");
    ui->client_2->setModel(CommandeModel2);

    //Quatriem Colone
    this->CommandeModel3=new QSqlQueryModel();
    CommandeModel3->setQuery("SELECT montant FROM commandes");
    ui->total_2->setModel(CommandeModel3);

    //Cinquiem Colone
    this->CommandeModel4=new QSqlQueryModel();
    CommandeModel4->setQuery("SELECT etat FROM commandes");
    ui->etat_2->setModel(CommandeModel4);

//La page qui se doit afficher en premier

    ui->stackedWidget->setCurrentIndex(2);
    // categorie
    connect(ui->Sport, &QLabel::linkActivated, this, [=]() {
        categoryClicked("Sport");
    });

    connect(ui->Electronique, &QLabel::linkActivated, this, [=]() {
        categoryClicked("Electronique");
    });

    connect(ui->Beaute, &QLabel::linkActivated, this, [=]() {
        categoryClicked("Beauté");
    });

    this->catmodel= new QSqlTableModel(database);
    catmodel->setTable("produits");
    catmodel->select();
    ui->dynamictable->setModel(catmodel);

    //icon des boutons
    QIcon icon2(":/new/icons/checkout.png");
    ui->CommandeButton->setIcon(icon2);
    ui->CommandeButton->setIconSize(QSize(32, 32));

    QIcon icon3(":/new/icons/category.png");
    ui->CategorieButton->setIcon(icon3);
    ui->CategorieButton->setIconSize(QSize(32, 32));

    QIcon icon5(":/new/icons/group.png");
    ui->ClientButton->setIcon(icon5);
    ui->ClientButton->setIconSize(QSize(32, 32));

    QIcon icon4(":/new/icons/avatar.png");
    ui->AdminButton->setIcon(icon4);
    ui->AdminButton->setIconSize(QSize(32, 32));

    //logo
    QPixmap imagePixmap(":/new/icons/successful.png");
    ui->imageLabel->setPixmap(imagePixmap);
    ui->imageLabel->setScaledContents(true);


}

//Le Destructeur

    ClientWindow::~ClientWindow()
    {
        delete ui;
    }

//Page des Clients

    //Update table Client
        void ClientWindow::on_UpdateButton_clicked()
        {
            mModel->select();
        }

    //Nouveaux Client
        void ClientWindow::on_NewButton_clicked()
        {
            mModel->insertRow(mModel->rowCount());
        }

    //Suprimmer un Client
        void ClientWindow::on_DeleteButton_clicked()
        {
            mModel->removeRow(ui->ClienttableView->currentIndex().row());
        }


//Les button de la page principale

    //Le button Client
        void ClientWindow::on_ClientButton_clicked()
        {
            ui->stackedWidget->setCurrentIndex(0);

        }

    //Le button Admin
        void ClientWindow::on_AdminButton_clicked()
        {
            ui->stackedWidget->setCurrentIndex(1);
        }

    //Le button Commande
        void ClientWindow::on_CommandeButton_clicked()
        {
            ui->stackedWidget->setCurrentIndex(2);
        }
    //le bouton categorie
        //Le button Commande
        void ClientWindow::on_CategorieButton_clicked()
        {
            ui->stackedWidget->setCurrentIndex(3);
        }



        void ClientWindow::logout()
        {

            close();

            // Open the login window
            login *loginWindow = new login();
            loginWindow->show();

        }


//Page des Admins

    //Ajouter un Admin
        void ClientWindow::on_NewAdminButton_clicked()
        {
            AdminModel->insertRow(AdminModel->rowCount());
        }

    //Suprimmer un Admin
        void ClientWindow::on_DeleteAdminButton_clicked()
        {
            AdminModel->removeRow(ui->AdminsView->currentIndex().row());
        }

    //Update la table Admin
        void ClientWindow::on_UpdateAdminsButton_clicked()
        {
            AdminModel->select();
        }


//Les button de la page Commande

    //Le button Commande custome
        void ClientWindow::on_Commande_customContextMenuRequested(const QPoint &pos)
        {

        }

    //Le button nouveaux Commande
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

    //Le button pour chercher une commande
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

    //Le button Suprimer Commande
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

    // update table Commande
        void ClientWindow::refreshOrderView()
        {
            // Refresh the models to update the displayed data
            CommandeModel->setQuery("SELECT numCmd FROM commandes");
            CommandeModel1->setQuery("SELECT datCmd FROM commandes");
            CommandeModel2->setQuery("SELECT Idclient FROM commandes");
            CommandeModel3->setQuery("SELECT montant FROM commandes");
            CommandeModel4->setQuery("SELECT etat FROM commandes");
        }

    //Le button pour la facture

        void ClientWindow::on_facture_clicked()
        {
            // Get the selection model from the QColumnView
            QItemSelectionModel *selectionModel = ui->numcmd->selectionModel();
            QItemSelectionModel *selectionModel1 = ui->datecmd->selectionModel();
            QItemSelectionModel *selectionModel2 = ui->total_2->selectionModel();
            QItemSelectionModel *selectionModel3 = ui->client_2->selectionModel();
            QItemSelectionModel *selectionModel4 = ui->etat_2->selectionModel();

            // Check if any item is selected
            if (!selectionModel->hasSelection() && !selectionModel1->hasSelection() && !selectionModel2->hasSelection() && !selectionModel3->hasSelection() && !selectionModel4->hasSelection()) {
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
            QString billContent = QString("Commande numero: %1\n"
                                          "Date: %2\n"
                                          "Client ID: %3\n"
                                          "Nom du client: %4\n"
                                          "Adresse: %5\n"
                                          "téléphone: %6\n"
                                          "Montant: %7\n")
                                      .arg(queryOrder.value("numCmd").toString())
                                      .arg(queryOrder.value("datCmd").toString())
                                      .arg(queryOrder.value("Idclient").toString())
                                      .arg(queryClient.value("last_name").toString())
                                      .arg(queryClient.value("address").toString())
                                      .arg(queryClient.value("phone").toString())
                                      .arg(queryOrder.value("montant").toString());

            // Create a dialog to display the bill
            QDialog billDialog(this);
            billDialog.setWindowTitle("Facture commande");

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

        void ClientWindow::categoryClicked(const QString& category)
        {
            int categoryId = -1;
            QSqlQuery queryy;
            queryy.prepare("SELECT categorie_id FROM categorie WHERE nom_categorie = :categoryName");
            queryy.bindValue(":categoryName", category);

            // Execute the query to get the category ID
            if (queryy.exec()) {
                if (queryy.next()) {
                    categoryId = queryy.value("categorie_id").toInt();
                } else {
                    qDebug() << "Category ID not found for category:" << category;
                }
            } else {
                qDebug() << "Error executing query to get category ID:" << queryy.lastError().text();
            }

            // Check if a valid category ID was obtained
            if (categoryId != -1) {
                QSqlQueryModel *model = new QSqlQueryModel;

                // Execute the query to get products based on the category ID
                model->setQuery("SELECT * FROM produits WHERE categorie_id = " + QString::number(categoryId));

                // Check if the query was successful
                if (model->lastError().isValid()) {
                    qDebug() << "Error executing query to get products:" << model->lastError().text();
                } else {
                    // Set the model for the table view
                    ui->dynamictable->setModel(model);
                }
            } else {
                qDebug() << "Category ID is not valid.";
            }
        }







void ClientWindow::on_AjoutProd_clicked()
{
    catmodel->insertRow(catmodel->rowCount());
}


void ClientWindow::on_SuppProd_clicked()
{
    catmodel->removeRow(ui->dynamictable->currentIndex().row());
    catmodel->select();
}


void ClientWindow::on_modifProc_clicked()
{
    catmodel->select();
}

