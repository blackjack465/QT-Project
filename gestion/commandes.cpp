
#include "commandes.h"
#include <QSqlQuery>
#include <QDebug>

Commandes::Commandes(const QSqlDatabase& database)
{
    if (database.isOpen()) {
        qDebug() << "Base de données ouverte.";
    } else {
        qDebug() << "La base de données n'est pas ouverte.";
    }
}

void Commandes::creerTableCommandes()
{

    QSqlQuery query;
    if (query.exec("CREATE TABLE IF NOT EXISTS commandes (numCmd INT PRIMARY KEY,dateCmd TEXT, montant REAL)")) {
        { qDebug() << "Table 'commandes' créée avec succès.";
            query.exec("INSERT INTO commandes VALUES(1,'12/05/2009',200.33)");
            qDebug()<<"valeurs insérés!";}

    } else {
        qDebug() << "Erreur lors de la création de la table 'commandes':";
    }
}
