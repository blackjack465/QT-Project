#ifndef DB_H
#define DB_H

#include <QSqlDatabase>
#include <QMainWindow>

namespace Ui {
class Db;
}

class Db : public QMainWindow
{
    Q_OBJECT

public:
    explicit Db(QWidget *parent);
    ~Db();

    static Db& instance();
    QSqlDatabase getDatabase() const;

private:
    Ui::Db *ui;
    QSqlDatabase m_database;
};

#endif // DB_H
