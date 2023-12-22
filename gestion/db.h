// db.h
#ifndef DB_H
#define DB_H

#include <QMainWindow>
#include <QSqlDatabase>

namespace Ui {
class Db;
}

class Db : public QMainWindow
{
    Q_OBJECT

public:
    explicit Db(QWidget *parent = nullptr);
    ~Db();

    QSqlDatabase getDatabase() const;

private:
    Ui::Db *ui;
    QSqlDatabase m_database;  // Exposez la base de données comme membre privé
};

#endif // DB_H
