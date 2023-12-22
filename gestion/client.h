#ifndef CLIENT_H
#define CLIENT_H
#include <QSqlDatabase>

class Client
{

    public:
        Client(const QSqlDatabase &database); //Constructeur
        void creerTableClient(); //Fonction pour cree la table Client
};

#endif // CLIENT_H
