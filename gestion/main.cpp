#include "db.h"
#include "login.h"
#include "clientwindow.h"
#include <QDebug>
#include <QtSql>
#include <QApplication>
#include <QSqlDatabase>
#include "clientwindow.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QIcon icon(":/new/icons/successful.png");
    a.setWindowIcon(icon);
    Db::instance().getDatabase();
    login login;
    login.setWindowTitle("Log in");

    login.show();


    return a.exec();

}
