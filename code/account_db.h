#ifndef ACCOUNT_DB_H
#define ACCOUNT_DB_H
#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlQuery>
static bool createConnection()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("my_account4.db");
    if(!db.open())
    {
        QMessageBox::critical(0,"Cannot open database1",
                             "Unable to establish a database connection.",QMessageBox::Cancel);
       return false;
    }


    QSqlQuery query(db);
    query.exec("create table account (id varchar primary key,identity varchar"
              ",password varchar)");


    query.exec("insert into account values('18841479688','管理员','2864042')");
    //query.exec("update account set password = '11'where id = '18801315596'");
    //query.exec("delete from account where id = '18801315596'");
    return true;
}

#endif // ACCOUNT_DB_H
