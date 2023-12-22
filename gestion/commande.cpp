#include "commande.h"
#include "ui_commande.h"

commande::commande(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::commande)
{
    ui->setupUi(this);
}

commande::~commande()
{
    delete ui;
}
