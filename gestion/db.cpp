#include "db.h"
#include "ui_db.h"

#include <QDebug>
#include <QtSql/QSql>
#include <QSqlDatabase>
#include <QMainWindow>
#include <QApplication>
#include <QDir>
#include <QFileInfo>

Db::Db(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Db)
{
    qDebug() << "start";

    QString databasePath = QDir::currentPath() + "/db.sqlite";

    // Initialize the database
    m_database = QSqlDatabase::addDatabase("QSQLITE");
    m_database.setDatabaseName(databasePath);

    // Check if the database file exists before trying to open it
    if (QFile::exists(databasePath)) {
        // Open the database
        if (m_database.open()) {
            qDebug() << "Database opened successfully.";
        } else {
            qDebug() << "Error opening the database:";
        }
    } else {
        qDebug() << "The database file does not exist at the expected location.";
    }

    qDebug() << "end";

    ui->setupUi(this);
}

Db& Db::instance()
{
    static Db instance(nullptr);
    return instance;
}

Db::~Db()
{
    qDebug() << "Closing the database.";

    m_database.commit();
    m_database.close();

    qDebug() << "Database closed.";
    delete ui;
}

QSqlDatabase Db::getDatabase() const
{
    return m_database;
}
