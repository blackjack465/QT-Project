#ifndef CLIENTWINDOW_H
#define CLIENTWINDOW_H
#include "db.h"
#include <QSqlTableModel>

#include <QMainWindow>

namespace Ui {
class ClientWindow;
}

class ClientWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit ClientWindow(QWidget *parent = nullptr);
    ~ClientWindow();
    Db *database;
    QSqlTableModel *mModel;
    QSqlTableModel *AdminModel;
    QSqlTableModel *CommandeModel;

private slots:
    void on_UpdateButton_clicked();

    void on_NewButton_clicked();

    void on_DeleteButton_clicked();



    void on_ClientButton_clicked();

    void on_AdminButton_clicked();

    void on_NewAdminButton_clicked();

    void on_DeleteAdminButton_clicked();

    void on_UpdateAdminsButton_clicked();

    void on_CommandeButton_clicked();

private:
    Ui::ClientWindow *ui;
};

#endif // CLIENTWINDOW_H
