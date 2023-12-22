// db.cpp
#include "db.h"
#include "ui_db.h"

//#include "commandes.h"
//#include "client.h"
//#include "Admin.h"

#include <QDebug>
#include <QtSql/QSql>
#include <QSqlDatabase>
#include <QMainWindow>
#include <QApplication>
#include <Qdir>
#include <QFileInfo>


Db::Db(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Db)
{
    qDebug() << "start";


    QString databasePath = QDir::currentPath() + "/db.sqlite";

    // Initialisez la base de données
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");


    db.setDatabaseName(databasePath);

    // Vérifiez si le fichier de base de données existe avant de tenter de l'ouvrir
    if (QFile::exists(databasePath)) {
        // Ouvrez la base de données
        if (db.open()) {
            qDebug() << "Base de données ouverte avec succès.";
            /*Commandes c(db);
            c.creerTableCommandes();*/
            //Client c(db);
            //c.creerTableClient();
            // Admin a(db);
            // a.CreeTableAdmin();


        } else {
            qDebug() << "Erreur lors de l'ouverture de la base de données:";
        }
    } else {
        qDebug() << "Le fichier de base de données n'existe pas à l'emplacement attendu.";

    }

    qDebug() << "end";

    ui->setupUi(this);
}

Db::~Db()
{
    qDebug() << "Fermeture de la base de données.";

    // Forcer la base de données à effectuer toutes les modifications en attente
    m_database.commit();

    // Fermer la connexion à la base de données
    m_database.close();

    qDebug() << "Base de données fermée.";
    delete ui;
}


QSqlDatabase Db::getDatabase() const
{
    return m_database;  // Retourne la base de données
}
