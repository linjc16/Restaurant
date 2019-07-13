#include "table.h"

Table::Table()
{

}

void Table::set_table_row(const int &str)
{
    table_row = str;
}

int Table::get_table_row()
{
    return table_row;
}

int Table::get_num()
{
    return num;
}

QString Table::get_waiter_mobile()
{
    return waiter_mobile;
}

void Table::set_waiter_mobile(const QString &wm)
{
    waiter_mobile = wm;
}

QString Table::get_mobile()
{
    return mobile;
}

void Table::set_num(const int &n)
{
    num = n;
}

void Table::set_mobile(const QString &m)
{
    mobile = m;
}

void Table::save_to_database()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("my_account4.db");
    db.open();
    QSqlQuery query(db);
    query.exec("drop table tables");
    query.exec("create table tables (num int primary key,mobile varchar,price int,settle_account int,have_waiter int,cook_claim int,is_free int,is_ordering int"
                                        ",add_water int,push_dishes int)");

    for(int i = 1;i <= 36 ;i++)
    {
        query.exec(QString("insert into tables values(%1,'',0,0,0,0,1,0,0,0)").arg(i));
    }

   //query.prepare("insert into account(num,mobile,price,settle_account,have_waiter,cook_claim,is_free,is_ordering,add_water,push_dishes) values (?,?,?,?,?,?,?,?,?,?)");
   //query.addBindValue(num);
   //query.addBindValue(mobile);
   //query.addBindValue(is_settle_account);
   //query.addBindValue(have_waiter);
   //query.addBindValue(cook_claim);
   //query.addBindValue(is_free);
   //query.addBindValue(is_ordering);
   //query.addBindValue(add_water);
   //query.addBindValue(push_dishes);
   //query.exec();
    query.exec("select * from tables");
   //while(query.next())
   //{
   //    qDebug()<<query.value(0).toString()<<query.value(1).toString()<<query.value(2).toString();
   //}
    db.close();

}
