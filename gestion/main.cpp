#include "db.h"
#include "login.h"
#include <QDebug>
#include <QtSql>
#include <QApplication>
#include <QSqlDatabase>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Db w; w.getDatabase();

    login login;

    login.show();

    return a.exec();

}
