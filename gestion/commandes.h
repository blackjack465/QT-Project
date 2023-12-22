
#ifndef COMMANDES_H
#define COMMANDES_H

#include <QSqlDatabase>

class Commandes
{
public:
    Commandes(const QSqlDatabase& database);

    void creerTableCommandes();


};

#endif // COMMANDES_H

