#include "admin.h"
#include <QSqlDatabase>
#include <QDebug>
#include <QSqlQuery>


using namespace std;

//Constructeur de la table Admin
        Admin::Admin(const QSqlDatabase& database) {

            if(database.isOpen())
            {
                qDebug () << "La base de donnee est ouvert ";
            }else
            {
                qDebug () << "Erreur la base de donne n'a pas eter creer";
            }

        }
//La methode pour creer la table Admin
        void Admin::CreeTableAdmin()
        {
            QSqlQuery query;

            if(query.exec("CREATE TABLE if not exists Admin (Admin_id primary key, Admin_name TEXT not null, Admin_gmail TEXT not null, Admin_password TEXT not null )"))
            {
                qDebug () << "La Creation de la table admin avec succes";
            }else
            {
                qDebug () << "Erreur dans la creation de la table admin";
            }


            if(query.exec("insert into admin  values (1,'Abderrahim','abderahimouriachi@gmail.com','123456789')"))
            {
                qDebug () << "Admin siyad Abderrahim cree avec succes";
            }else
            {
                qDebug () << "Erreur dans l'insertion de l'admin";
            }

        }
