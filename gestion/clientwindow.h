#ifndef CLIENTWINDOW_H
#define CLIENTWINDOW_H
#include "db.h"
#include <QSqlTableModel>
#include <QLabel>
#include <QMainWindow>

namespace Ui {
class ClientWindow;
}

class ClientWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit ClientWindow(QWidget *parent = nullptr,const QString& adminName="");
    ~ClientWindow();
    Db *database;
    QSqlTableModel *mModel;
    QSqlTableModel *AdminModel;
    QSqlTableModel *catmodel;
    QSqlQueryModel* CommandeModel;
    QSqlQueryModel* CommandeModel1;
    QSqlQueryModel* CommandeModel2;
    QSqlQueryModel* CommandeModel3;
    QSqlQueryModel* CommandeModel4;


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

    void on_stackedWidget_currentChanged(int arg1);

    void on_Commande_customContextMenuRequested(const QPoint &pos);

    void on_numcmd_updatePreviewWidget(const QModelIndex &index);



    void on_newcmd_clicked();


    void on_Rechercher_clicked();

    void on_suppcmd_clicked();
    void refreshOrderView();

    void on_facture_clicked();
    void logout();

    void categoryClicked(const QString& );
    void on_CategorieButton_clicked();

    void on_AjoutProd_clicked();

    void on_SuppProd_clicked();

    void on_modifProc_clicked();

private:
    Ui::ClientWindow *ui;
    QLabel *iconLabel;
};

#endif // CLIENTWINDOW_H
