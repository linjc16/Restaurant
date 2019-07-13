#include "ordinary_user.h"
#include "all_headers_needed.h"
Ordinary_user *users;
Ordinary_user::Ordinary_user() {}
Ordinary_user::Ordinary_user(const QString &i, const QString &pwd, const QString &idt)
{
    mobile = i;
    password = pwd;
    identity = idt;
}


QString Ordinary_user::get_waiter_mobile() const
{
    return waiter_mobile;
}

int Ordinary_user::get_table_num() const
{
    return table_num;
}

void Ordinary_user::set_table_num(const int &n)
{
    table_num = n;
}


void Ordinary_user::set_waiter_mobile(const QString &wm)
{
    waiter_mobile = wm;
}

void Ordinary_user::set_identity()
{
    identity = "用户";
}


void Ordinary_user::save_to_database_register()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("my_account4.db");
    db.open();
    QSqlQuery query(db);
    query.exec("create table account (id varchar primary key,identity varchar"
                                        ",password varchar)");
    query.prepare("insert into account(id,identity,password) values (?,?,?)");
    query.addBindValue(mobile);
    query.addBindValue(identity);
    query.addBindValue(password);
    query.exec();
    query.exec("select * from account");
    while(query.next())
    {
        qDebug()<<query.value(0).toString()<<query.value(1).toString()<<query.value(2).toString();
    }
    db.close();

}

bool Ordinary_user::load_from_database(const QString &i)
{
    QSqlDatabase db = QSqlDatabase::database();
    db.open();
    QSqlQuery query(db);
    query.exec("select id,identity,password from account where id = '"+ i +"'");
    if(query.next())
    {
        qDebug()<<query.value(0).toString()<<query.value(1).toString()<<query.value(2).toString();
        mobile = query.value(0).toString();
        identity = query.value(1).toString();
        password = query.value(2).toString();
        db.close();
        return 1;
    }
    else
    {
        db.close();
        return 0;
    }

}
