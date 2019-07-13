#include "mainwindow.h"
#include "logindlg.h"
#include "table.h"
#include "cook.h"
#include "waiter.h"
#include "remark.h"
#include "order_record.h"
#include "waiter_record.h"
#include "cook_record.h"
#include "data.h"
#include "all_headers_needed.h"
using namespace std;
//创建数据库
QSqlDatabase create_database()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("my_account4.db");
    db.open();
    QSqlQuery query(db);
    query.exec("create table cook_workload (mobile varchar primary key,remark_star double"
                                        ",workload int,remark_num int)");
    query.exec("create table waiter_workload (mobile varchar primary key,remark_star double"
                                        ",workload int,remark_num int)");

    query.exec("create table remark_dishes (id int primary key, mobile varchar, dish_name varchar,point int , text varchar"
                                        ",date varchar)");

    query.exec("create table remark_waiters (id int primary key, mobile varchar, waiter_mobile varchar,point int , text varchar"
                                        ",date varchar)");
    query.exec("create table order_record (id int primary key, mobile varchar, dish_name varchar,num int"
                                        ",date varchar)");
    query.exec("create table waiter_record (id int primary key,waiter_mobile varchar, mobile varchar"
                                        ",date varchar)");
    query.exec("create table cook_record (id int primary key,cook_mobile varchar,dish_name varchar,num int,mobile varchar"
                                        ",date varchar)");
    query.exec("create table dish (id int primary key,dish_name varchar,unit_price double ,remark_star double , remark_num int , sales_volume int"
                                        ",kind varchar)");
    query.exec("create table tables (num int primary key,mobile varchar,price int,settle_account int,have_waiter int,cook_claim int,is_free int,is_ordering int"
                                        ",add_water int,push_dishes int)");
    for(int i = 1;i <= 36 ;i++)
    {
        query.exec(QString("insert into tables values(%1,'',0,0,0,0,1,0,0,0)").arg(i));
    }
    query.exec("create table account (id varchar primary key,identity varchar"
                                        ",password varchar)");
    db.close();
    return db;
}


void read_database(QSqlDatabase db)
{
    //QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    //db.setDatabaseName("my_account4.db");
    db.open();
    QSqlQuery query(db);

    for(int i = 0 ; i < Data::cook_num ; i++)
    {
        query.prepare("insert into cook_workload(mobile,remark_star,workload,remark_num) values (?,?,?,?)");
        query.addBindValue(Data::cook[i].get_id());
        query.addBindValue(Data::cook[i].get_remark_star());
        query.addBindValue(Data::cook[i].get_work_load());
        query.addBindValue(Data::cook[i].get_remark_num());
        query.exec();
    }

    for(int i = 0 ; i < Data::waiter_num ; i++)
    {
        query.prepare("insert into waiter_workload(mobile,remark_star,workload,remark_num) values (?,?,?,?)");
        query.addBindValue(Data::waiter[i].get_id());
        query.addBindValue(Data::waiter[i].get_remark_star());
        query.addBindValue(Data::waiter[i].get_work_load());
        query.addBindValue(Data::waiter[i].get_remark_num());
        query.exec();
    }
    db.close();
}
//初始化
void initialize(QSqlDatabase db)
{
    //QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    //db.setDatabaseName("my_account4.db");
    db.open();
    QSqlQuery query(db);
    //初始化用户
    query.exec("select * from account");
    for(;query.next();)
    {
        if(query.value(1).toString() == "用户")
        {
            Data::user[Data::user_num].set_mobile(query.value(0).toString());
            Data::user[Data::user_num].set_password(query.value(2).toString());
            Data::user_num ++ ;
        }
        if(query.value(1).toString() == "厨师")
        {
            Data::cook[Data::cook_num].set_mobile(query.value(0).toString());
            Data::cook[Data::cook_num].set_password(query.value(2).toString());
            Data::cook_num ++;
        }
        if(query.value(1).toString() == "服务员")
        {
            Data::waiter[Data::waiter_num].set_mobile(query.value(0).toString());
            Data::waiter[Data::waiter_num].set_password(query.value(2).toString());
            Data::waiter_num ++;
        }
        if(query.value(1).toString() == "管理员")
        {
            Data::admin[Data::admin_num].set_mobile(query.value(0).toString());
            Data::admin[Data::admin_num].set_mobile(query.value(2).toString());
            Data::admin_num ++ ;
        }
    }
    //初始化厨师工作记录
    query.exec("select * from cook_workload");
    for(int i = 0 ;query.next()||i < Data::cook_num ; i++)
    {
        Data::cook[i].set_work_load(query.value(2).toInt());
        Data::cook[i].set_remark_star(query.value(1).toDouble());
        Data::cook[i].set_remark_num(query.value(3).toInt());
    }
    //初始化服务员工作记录
    query.exec("select * from waiter_workload");
    for(int i = 0; query.next()||i< Data::waiter_num; i++)
    {
        Data::waiter[i].set_work_load(query.value(2).toInt());
        Data::waiter[i].set_remark_star(query.value(1).toDouble());
        Data::waiter[i].set_remark_num(query.value(3).toInt());
    }
    //初始化菜品记录
    query.exec("select * from dish");
    for(int i = 0;query.next(); i++,Data::dish_num ++)
    {
        Data::dish[i].set_id(query.value(0).toInt());
        Data::dish[i].set_name(query.value(1).toString());
        Data::dish[i].set_unit_price(query.value(2).toInt());
        Data::dish[i].set_assess_point(query.value(3).toInt());
        Data::dish[i].dish_remark_num = query.value(4).toInt();
        Data::dish[i].sales_volume = query.value(5).toInt();
        Data::dish[i].set_kind(query.value(6).toString());
    }
    //初始化餐桌
    query.exec("select * from tables");
    for(int i = 0 ; query.next(); i ++)
    {
        Data::tb[i].set_num(query.value(0).toInt());
        Data::tb[i].set_mobile(query.value(1).toString());
        Data::tb[i].have_waiter = query.value(4).toInt();
        Data::tb[i].is_free = query.value(6).toInt();
        Data::tb[i].add_water = query.value(8).toInt();
        Data::tb[i].push_dishes = query.value(9).toInt();
    }
    //初始化菜品评论
    query.exec("select * from remark_dishes");
    for(int i = 0 ; query.next() ; i++)
    {
        Data::remark_dishes[i].remark_id  = query.value(0).toInt();
        Data::remark_dishes[i].set_mobile(query.value(1).toString());
        Data::remark_dishes[i].set_dish_name(query.value(2).toString());
        Data::remark_dishes[i].set_star(query.value(3).toInt());
        Data::remark_dishes[i].set_remark_text(query.value(4).toString());
        Data::remark_dishes[i].set_date(query.value(5).toString());
        Data::remark_dish_num ++;
    }

    Data::remark_dish_id_record = Data::remark_dish_num ;
    //初始化服务员评论
    query.exec("select * from remark_waiters");
    for(int i = 0 ; query.next() ; i++)
    {
        Data::remark_waiter[i].remark_id = query.value(0).toInt();
        Data::remark_waiter[i].set_mobile(query.value(1).toString());
        Data::remark_waiter[i].set_waiter_mobile(query.value(2).toString());
        Data::remark_waiter[i].set_star(query.value(3).toInt());
        Data::remark_waiter[i].set_remark_text(query.value(4).toString());
        Data::remark_waiter[i].set_date(query.value(5).toString());
        Data::remark_waiter_num ++ ;
    }
    Data::remark_waiter_id_record = Data::remark_waiter_num ;
    //初始化订单记录
    query.exec("select * from order_record");
    for(int i = 0 ; query.next() ; i++)
    {
        Data::order_record[i].id = query.value(0).toInt();
        Data::order_record[i].set_mobile(query.value(1).toString());
        Data::order_record[i].set_dish_name(query.value(2).toString());
        Data::order_record[i].set_dish_num(query.value(3).toInt());
        Data::order_record[i].set_date(query.value(4).toString());
        Data::order_record_num ++ ;
    }
    Data::order_record_temp = Data::order_record_num ;
    //初始化服务员工作记录
    query.exec("select * from waiter_record");
    for(int i = 0 ; query.next() ; i++)
    {
        Data::waiter_record[i].id = query.value(0).toInt();
        Data::waiter_record[i].set_waiter_mobile(query.value(1).toString());
        Data::waiter_record[i].set_mobile(query.value(3).toString());
        Data::waiter_record[i].set_date(query.value(4).toString());
        Data::waiter_record_num ++;
    }
    Data::waiter_record_temp = Data::waiter_record_num ;
    //初始化厨师工作记录
    query.exec("select * from cook_record");
    for(int i = 0 ;query.next(); i ++)
    {
        Data::cook_record[i].id = query.value(0).toInt();
        Data::cook_record[i].set_cook_mobile(query.value(1).toString());
        Data::cook_record[i].set_dish_name(query.value(2).toString());
        Data::cook_record[i].set_dish_num(query.value(3).toInt());
        Data::cook_record[i].set_mobile(query.value(4).toString());
        Data::cook_record[i].set_date(query.value(5).toString());
        Data::cook_record_num ++;
    }
    Data::cook_record_temp = Data::cook_record_num ;

    db.close();
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QApplication::addLibraryPath("./plugins");
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF-8"));
    QSqlDatabase db;
    db = create_database();
    initialize(db);
    read_database(db);
    LoginDlg login;
    login.show();
    return a.exec();

}
