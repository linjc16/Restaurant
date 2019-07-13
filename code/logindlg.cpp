#include "logindlg.h"
#include "ui_logindlg.h"
#include "QMessageBox.h"
#include "QTextCodec.h"
#include <QDialog>
#include "ui_register.h"
#include "register.h"
#include "ordinary_user.h"
#include "customer.h"
#include "accountadmin.h"
#include "all_headers_needed.h"
#include "cook.h"
#include "waiter.h"
#include "cook_admin.h"
#include "waiter_admin.h"
#include "table_query.h"
#include "manager.h"
#include "data.h"
LoginDlg::LoginDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginDlg)
{

    ui->setupUi(this);
    //使得手机号输入框只能输入数字 正则表达式
    QRegExp regx("[1-9][0-9]+$");
    QValidator *validator = new QRegExpValidator(regx, ui->txtname);
    ui->txtname->setValidator(validator);
    //使得密码输出框只能输入数字和字母 正则表达式
    QRegExp regx_pwd("^[A-Za-z0-9]+$");
    QValidator *validator_pwd = new QRegExpValidator(regx_pwd, ui->txtpwd);
    ui->txtpwd->setValidator(validator_pwd);
    ui->txtname->setFocus();
    //ui->txtname->setText("18801315596");
    //ui->txtpwd->setText("2864042");
    ui->pushButton->setStyleSheet("QPushButton{background-color:rgb(44, 178, 214);\
        color:white; border-radius:10%;font: 13pt '微软雅黑' ;}"
        "QPushButton:hover{background-color:rgb(44, 200, 255); }"
         );
    ui->pushButton_2->setStyleSheet("QPushButton{background-color:rgb(116, 224, 191);\
            color:white; border-radius:10%;font: 13pt '微软雅黑';}"
                "QPushButton:hover{background-color:rgb(116, 240, 220); }"
                                    );
    ui->pushButton_3->setStyleSheet("QPushButton{background-color:rgb(218, 80, 104);;\
                                    color:white; border-radius:10%;font: 9pt '微软雅黑';}"
                                        "QPushButton:hover{background-color:rgb(255, 50, 104); }"
                                                            );
    ui->model_chosen->setStyleSheet
    ("QComboBox::drop-down {\
     subcontrol-origin: padding;\
     subcontrol-position: top right;\
     width: 30px;\
     border-left-width: 1px;\
     border-left-color: white;\
     border-left-style: solid; /* just a single line */\
     border-top-right-radius: 3px; /* same radius as the QComboBox */\
     border-bottom-right-radius: 3px;\
     }"
     "QComboBox::down-arrow { image: url(:/Image/下拉框图标3.png);}"
     "QComboBox{border: 1px solid #32435E;\
     border-radius:10% ;color:rgb(200, 193, 197); font: 10pt '微软雅黑'; padding-left:20%; }"
     );
}

LoginDlg::~LoginDlg()
{
    for(int i = 0 ; i < Data::dish_num ; i++)
    {
        for(int j = 0 ; j < Data::user_num ;j ++)
        {
            for(int k = 0 ; k < Data::user[j].dish_kind_num ; k++)
            {
                if(Data::user[j].uhod[k].get_name() == Data::dish[i].get_name())
                {
                    Data::dish[i].sales_volume += Data::user[j].uhod[k].get_num();
                    break;
                }
            }
        }
    }
    //更新平均评价
    for(int i = 0 ; i < Data::dish_num ; i++)
    {
        double sum = Data::dish[i].dish_remark_num * Data::dish[i].get_assess_point();
        for(int j = Data::remark_dish_id_record ; j < Data::remark_dish_num ; j++)
        {
            if(Data::remark_dishes[j].get_dish_name() == Data::dish[i].get_name() && Data::remark_dishes[j].get_star() != 0)
            {
                sum += Data::remark_dishes[j].get_star();
                Data::dish[i].dish_remark_num ++;
            }
        }
        Data::dish[i].set_assess_point(sum/Data::dish[i].dish_remark_num);
    }
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("my_account4.db");
    db.open();
    QSqlQuery query(db);
    //存入菜品评论
    for(int i = Data::remark_dish_id_record ; i < Data::remark_dish_num ; i++)
    {
        query.prepare("insert into remark_dishes (id,mobile,dish_name,point,text,date) values (?,?,?,?,?,?)");
        query.addBindValue(i);
        query.addBindValue(Data::remark_dishes[i].get_mobile());
        query.addBindValue(Data::remark_dishes[i].get_dish_name());
        query.addBindValue(Data::remark_dishes[i].get_star());
        query.addBindValue(Data::remark_dishes[i].get_remark_text());
        query.addBindValue(Data::remark_dishes[i].get_date());
        query.exec();
    }
    //存入服务员评论
    for(int i = Data::remark_waiter_id_record ; i <Data::remark_waiter_num ; i++)
    {
        query.prepare("insert into remark_waiters (id,mobile,waiter_mobile,point,text,date) values (?,?,?,?,?,?)");
        query.addBindValue(i);
        query.addBindValue(Data::remark_waiter[i].get_mobile());
        query.addBindValue(Data::remark_waiter[i].get_waiter_mobile());
        query.addBindValue(Data::remark_waiter[i].get_star());
        query.addBindValue(Data::remark_waiter[i].get_remark_text());
        query.addBindValue(Data::remark_waiter[i].get_date());
        query.exec();
    }
    //更新厨师工作表
    for(int i = 0 ; i < Data::cook_num ; i ++)
    {
        query.exec(QString("update cook_workload set workload = %1 where mobile = '"+Data::cook[i].get_mobile()+"'").arg(Data::cook[i].get_work_load()));

    }
    //更新服务员工作表
    for(int i = 0 ; i < Data::waiter_num ; i++)
    {
        query.exec(QString("update waiter_workload set workload = %1 where mobile = '"+Data::waiter[i].get_mobile()+"'").arg(Data::waiter[i].get_work_load()));
        query.exec(QString("update waiter_workload set remark_star = %1 where mobile = '"+Data::waiter[i].get_mobile()+"'").arg(Data::waiter[i].get_remark_star()));
        query.exec(QString("update waiter_workload set remark_num = %1 where mobile ='"+Data::waiter[i].get_mobile()+"'").arg(Data::waiter[i].get_remark_num()));
    }
    //更新菜单
    for(int i = 0 ; i < Data::dish_num ; i++)
    {
        query.exec(QString("update dish set sales_volume = %1 where dish_name = '"+Data::dish[i].get_name()+"'").arg(Data::dish[i].sales_volume));
        query.exec(QString("update dish set remark_star = %1 where dish_name =  '"+Data::dish[i].get_name()+"'").arg(Data::dish[i].get_assess_point()));
        query.exec(QString("update dish set remark_num = %1 where dish_name = '"+Data::dish[i].get_name()+"'").arg(Data::dish[i].dish_remark_num));
    }
    //更新订单记录
    for(int i = Data::order_record_temp ; i < Data::order_record_num ; i++)
    {
        query.prepare("insert into order_record (id,mobile,dish_name,num,date) values (?,?,?,?,?)");
        query.addBindValue(i);
        query.addBindValue(Data::order_record[i].get_mobile());
        query.addBindValue(Data::order_record[i].get_dish_name());
        query.addBindValue(Data::order_record[i].get_dish_num());
        query.addBindValue(Data::order_record[i].get_date());
        query.exec();
    }
    //更新服务员工作记录
    for(int i = Data::waiter_record_temp ; i < Data::waiter_record_num ; i++)
    {
        query.prepare("insert into waiter_record (id,waiter_mobile,mobile,date) values (?,?,?,?)");
        query.addBindValue(i);
        query.addBindValue(Data::waiter_record[i].get_waiter_mobile());
        query.addBindValue(Data::waiter_record[i].get_mobile());
        query.addBindValue(Data::waiter_record[i].get_date());
        query.exec();
    }
    //更新厨师工作记录
    for(int i = Data::cook_record_temp; i < Data::cook_record_num ; i++)
    {
        query.prepare("insert into cook_record (id,cook_mobile,dish_name,num,mobile,date) values (?,?,?,?,?,?)");
        query.addBindValue(i);
        query.addBindValue(Data::cook_record[i].get_cook_mobile());
        query.addBindValue(Data::cook_record[i].get_dish_name());
        query.addBindValue(Data::cook_record[i].get_dish_num());
        query.addBindValue(Data::cook_record[i].get_mobile());
        query.addBindValue(Data::cook_record[i].get_date());
        query.exec();
    }
    db.close();
    delete ui;
}


//判断是否成功登陆
bool LoginDlg::login_success()
{
    if(ui->model_chosen->currentText() == "用户")
    {
        Ordinary_user ou;
        QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE"); //重连接，待更改
        db.setDatabaseName("my_account4.db");
        db.open();

        if(ou.load_from_database(ui->txtname->text()))
        {
            QString pwd =ou.get_password();
            QString idt = ou.get_indentity();
            db.close();
            if(idt != "用户") return 0;
            if(pwd == ui->txtpwd->text())
            return 1;
        }

    }
    else if (ui->model_chosen->currentText() == "管理员")
        {
            Ordinary_user ou;
            QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE"); //重连接，待更改
            db.setDatabaseName("my_account4.db");
            db.open();
            if(ou.load_from_database(ui->txtname->text()))
            {
                QString pwd =ou.get_password();
                QString idt = ou.get_indentity();
                db.close();
                if(idt != "管理员") return 0;
                if(pwd == ui->txtpwd->text())
                return 1;
            }

        }
    if(ui->model_chosen->currentText() == "服务员")
    {
        Ordinary_user ou;
        QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE"); //重连接，待更改
        db.setDatabaseName("my_account4.db");
        db.open();
        if(ou.load_from_database(ui->txtname->text()))
        {
            QString pwd =ou.get_password();
            QString idt = ou.get_indentity();
            db.close();
            if(idt != "服务员") return 0;
            if(pwd == ui->txtpwd->text())
            return 1;
        }

    }
    if(ui->model_chosen->currentText() == "厨师")
    {
        Ordinary_user ou;
        QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE"); //重连接，待更改
        db.setDatabaseName("my_account4.db");
        db.open();
        if(ou.load_from_database(ui->txtname->text()))
        {
            QString pwd =ou.get_password();
            QString idt = ou.get_indentity();
            db.close();
            if(idt != "厨师") return 0;
            if(pwd == ui->txtpwd->text())
            return 1;
        }
    }
    if(ui->model_chosen->currentText() == "经理")
        {
        if(ui->txtname->text() == "18801315569" && ui->txtpwd->text() == "manager")
            return 1;

    }
    return 0;
}

//确认键
void LoginDlg::on_pushButton_clicked()
{
    if(LoginDlg::login_success())
    {
        if(ui->model_chosen->currentText() == "用户")
        {
            for(int i = 0; i<Data::user_num ; i++)
            {
                if(Data::user[i].get_mobile() == ui->txtname->text())
                     users = &Data::user[i];
            }
            Table_query tq;


            if(users->have_seated == 0&&tq.exec() == QDialog::Accepted)
            {
                Customer w;
                w.exec();
            }
            else if(users->have_seated == 1)
            {
                Customer w;
                w.exec();
            }



        }
        if(ui->model_chosen->currentText() == "管理员")
        {

            AccountAdmin w;

            w.exec();
        }

        if(ui->model_chosen->currentText() == "厨师")
        {
            for(int i = 0 ;i< Data::cook_num ; i++)
            {
                if(Data::cook[i].get_mobile() == ui->txtname->text())
                    cooks = &Data::cook[i];
            }
            Cook_admin c;

            c.exec();

        }
        if(ui->model_chosen->currentText() == "服务员")
        {
            for(int i = 0 ;i < Data::waiter_num ; i++)
            {
                if(Data::waiter[i].get_mobile() == ui->txtname->text())
                    waiters = &Data::waiter[i];
            }
            Waiter_admin w;

            w.exec();
        }
        if(ui->model_chosen ->currentText() == "经理" || (ui->txtname->text() == "18801315569" && ui->txtname->text() == "manager"))
        {
            Manager m;
            m.exec();
        }



    }
    else
    {
        QMessageBox::warning(this,tr("警告"),tr("用户名或密码错误！"),QMessageBox::Yes);
        this->ui->txtname->clear();
        this->ui->txtpwd->clear();
        this->ui->txtname->setFocus();
    }
}

//退出键
void LoginDlg::on_pushButton_2_clicked()
{
    this->close();
}
//快捷注册
void LoginDlg::on_pushButton_3_clicked()
{
    Register reg;
    if(reg.exec()==QDialog::Accepted)
    {
        QMessageBox::information(this,tr("提示"),tr("注册成功"),QMessageBox::Yes);
    }
}

void LoginDlg::closeEvent(QCloseEvent * event)
{
    int ret =
            QMessageBox::question(this,tr("关闭"),tr("关闭程序之后，未保存的数据将会损失，确认关闭吗？"),QMessageBox::Yes,QMessageBox::No);
    if(ret == QMessageBox::Yes)
    {
        this->close();
    }
    else
    {
        event->ignore();
    }
}

