#include "dishes.h"
#include "all_headers_needed.h"
#include <vector>
using namespace std;

dishes::dishes()
{

}
dishes::dishes(const QString &n, const int &up, const int &ap, const QString &k)
{
    name = n;
    unit_price = up;
    assess_point = ap;
    kind = k;
}
QString dishes::get_mobile()const
{
    return mobile;
}

void dishes::set_mobile(const QString &m)
{
    mobile  = m;
}





int dishes::get_unit_price() const
{
    return unit_price;
}

double dishes::get_assess_point() const
{
    return assess_point;
}

QString dishes::get_kind() const
{
    return kind;
}




int dishes::get_num() const
{
    return number;
}

void dishes::set_num(const int &n)
{
    number = n;
}

void dishes::set_unit_price(const int &up)
{
    unit_price = up;
}

void dishes::set_assess_point(const double &ap)
{
    assess_point = ap;
}

void dishes::set_kind(const QString &k)
{
    kind = k;
}

void dishes::set_remark_star(const double &rs)
{
    remark_star = rs;
}

void dishes::set_remark_text(const QString &rt)
{
    remark_text = rt;
}

double dishes::get_remark_star()
{
    return remark_star;
}

QString dishes::get_remark_text()
{
    return remark_text;
}

bool dishes::load_from_database(const QString &n)
{
    QSqlDatabase db = QSqlDatabase::database();
    db.open();
    QSqlQuery query(db);
    query.exec("select id,name,unit_price,assess_point,kind from dish where name = '"+ n +"'");
    if(query.next())
    {
        //qDebug()<<query.value(0).toString()<<query.value(1).toInt()<<query.value(2).toInt()<<query.value(3).toString();
        name = query.value(0).toString();
        unit_price = query.value(1).toInt();
        assess_point = query.value(2).toInt();
        kind = query.value(3).toString();
        db.close();
        return 1;
    }
    else
    {
        db.close();
        return 0;
    }
}

void dishes::save_to_database_dishes()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("my_account4.db");
    db.open();
    QSqlQuery query(db);
    query.exec("create table dish (id int primary key,name varchar,unit_price int"
                                        ",assess_point int,kind varchar)");


    query.prepare("insert into dish(id,name,unit_price,assess_point,kind) values (?,?,?,?,?)");
    query.addBindValue(id);
    query.addBindValue(name);
    query.addBindValue(unit_price);
    query.addBindValue(assess_point);
    query.addBindValue(kind);
    query.exec();
    query.exec("select * from dish");
    while(query.next())
    {
        qDebug()<<query.value(0).toInt()<<query.value(1).toString()<<query.value(2).toInt()<<query.value(3).toInt()<<query.value(4).toString();
    }
    db.close();
}

