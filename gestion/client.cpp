#include "client.h"

#include <QSqlQuery>
#include <QDebug>
#include <QFile>
#include <QTextStream>
#include <QSqlDatabase>
#include <QIODevice>
#include <QDir>


//Le constructeur de la table Client (Qui verifie si la base de donner est ouvert)
        Client::Client(const QSqlDatabase& database) {
            if (database.isOpen()) {
                qDebug() << "Base de données ouverte.";
            } else {
                qDebug() << "La base de données n'est pas ouverte.";
            }

        }

//La methode pour creer la table Client

        void Client::creerTableClient()
        {

            QSqlQuery query;
            if (query.exec("CREATE TABLE IF NOT EXISTS clients (idClient INT PRIMARY KEY,first_name TEXT, last_name TEXT, email TEXT, passClient TEXT, phone TEXT, address TEXT)")) {
                 qDebug() << "Table 'clients' créée avec succès.";
                    QFile file( QDir::currentPath() + "/client.csv");
                    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
                        qDebug() << "Erreur lors de l'ouverture du fichier CSV";
                    }

                    QTextStream in(&file);
                    while (!in.atEnd()) {
                        QString line = in.readLine();
                        QStringList fields = line.split(',');

                        // Insérer les données dans la table clients
                        query.prepare("INSERT INTO clients (idClient, first_name, last_name, email, passClient, phone, address) VALUES (:id, :first, :last, :email, :pass, :phone, :address)");
                        query.bindValue(":id", fields[0].toInt());
                        query.bindValue(":first", fields[1]);
                        query.bindValue(":last", fields[2]);
                        query.bindValue(":email", fields[3]);
                        query.bindValue(":pass", fields[4]);
                        query.bindValue(":phone", fields[5]);
                        query.bindValue(":address", fields[6]);

                        if (query.exec()) {
                            qDebug() << "Données insérées avec succès.";
                        } else {
                            qDebug() << "Erreur lors de l'insertion des données dans la table 'clients': ";
                        }
                    }

                    file.close();

            } else {
                qDebug() << "Erreur lors de la création de la table 'clients':";
            }
        }


