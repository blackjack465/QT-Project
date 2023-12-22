#ifndef ADMIN_H
#define ADMIN_H

#include <QSqlDatabase>

class Admin
{
    public:
        Admin(const QSqlDatabase&);
        void CreeTableAdmin();
};

#endif // ADMIN_H
