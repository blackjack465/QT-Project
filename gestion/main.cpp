#include "db.h"
#include "login.h"
#include <QDebug>
#include <QtSql>
#include <QApplication>
#include <QSqlDatabase>
#include "clientwindow.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Db::instance().getDatabase();

    login login;

    login.show();


    return a.exec();

}
