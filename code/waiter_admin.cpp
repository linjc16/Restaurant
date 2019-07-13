#include "waiter_admin.h"
#include "table.h"
#include "ui_waiter_admin.h"
#include "logindlg.h"
#include "all_headers_needed.h"
#include "have_ordered_dishes.h"
#include "data.h"
using namespace std;
vector <Have_ordered_dishes> h_o_d(100);
vector <Ordinary_user> orduser(100);
int waiter_tb_num = 0;
int dish_amt = 0;
Waiter_admin::Waiter_admin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Waiter_admin)
{
    ui->setupUi(this);
    ui->ensure_pushButton->setStyleSheet("QPushButton{background-color:rgb(44, 178, 214);\
                                         color:white; border-radius:10%;font: 13pt '微软雅黑' ;}"
                                         "QPushButton:hover{background-color:rgb(44, 200, 255); }"
                                          );
    //显示待服务桌号
    int tempt = 0;
    ui->table_listWidget->clear();
    for(int i = 0 ; i < 36 ; i++)
    {
        if(Data::tb[i].is_free == 1 || Data::tb[i].have_waiter == 1) continue;
        Data::tb[i].set_table_row(tempt);
        tempt ++;
        QWidget *oContainer = new QWidget(ui->table_listWidget);
        QHBoxLayout *oLayout = new QHBoxLayout(oContainer);
        QLabel *numlabel = new QLabel(QString::number(Data::tb[i].get_num()));
        QLabel *statelabel = new QLabel("待服务");
        oLayout->addWidget(numlabel);
        oLayout->addWidget(statelabel);
        oLayout->setContentsMargins(5,0,0,5);//关键代码，如果没有很可能显示不出来
        oContainer->setLayout(oLayout);//如果layout在创建时就已经将父窗口指针当参数，那就不用setlayout
        oContainer->resize(100,30);
        oContainer->show();
        QListWidgetItem *menuItem = new QListWidgetItem(ui->table_listWidget);
        menuItem->setSizeHint(QSize(80,40));
        menuItem->setTextAlignment(Qt::AlignCenter);
        ui->table_listWidget->setItemWidget(menuItem,oContainer);
        ui->table_listWidget->addItem(menuItem);
        waiter_tb_num ++ ;

    }
    //当前服务员服务桌号
    ui->waitering_listWidget->clear();
    for(int i = 0 ; i < 36 ;i ++)
    {
        if(Data::tb[i].is_free == 1 || Data::tb[i].get_waiter_mobile() != waiters->get_mobile() || Data::tb[i].have_waiter == 0)
            continue;
        QWidget *oContainer = new QWidget(ui->waitering_listWidget);
        QHBoxLayout *oLayout = new QHBoxLayout(oContainer);
        QLabel *numlabel = new QLabel(QString::number(Data::tb[i].get_num()));
        QLabel *statelabel = new QLabel("正在服务");
        oLayout->addWidget(numlabel);
        oLayout->addWidget(statelabel);
        oLayout->setContentsMargins(5,0,0,5);//关键代码，如果没有很可能显示不出来
        oContainer->setLayout(oLayout);//如果layout在创建时就已经将父窗口指针当参数，那就不用setlayout
        oContainer->resize(100,30);
        oContainer->show();
        QListWidgetItem *menuItem = new QListWidgetItem(ui->waitering_listWidget);
        menuItem->setSizeHint(QSize(80,40));
        menuItem->setTextAlignment(Qt::AlignCenter);
        ui->waitering_listWidget->setItemWidget(menuItem,oContainer);
        ui->waitering_listWidget->addItem(menuItem);
    }
    //显示每个用户菜品完成情况
    for(int i = 0 ; i < waiters->waiting_user_num ; i++)
    {
        for(int k = 0 ; k < Data::user_num ; k++)
        {
            if(Data::user[k].get_mobile() == waiters->waiting_user[i].get_mobile())
            {
                waiters->waiting_user[i] = Data::user[k];

            }
        }
    }
    ui->dishes_listWidget->clear();
    for(int i = 0 ; i < waiters->waiting_user_num ; i++)
    {

        for(int j = 0 ; j < waiters->waiting_user[i].dish_kind_num ; j++)
        {
            if(waiters->waiting_user[i].uhod[j].have_cooked == 1 && Data::user[i].have_seated == 1)
            {
                QWidget *oContainer = new QWidget(ui->dishes_listWidget);
                QHBoxLayout *oLayout = new QHBoxLayout(oContainer);
                QLabel *namelabel = new QLabel(waiters->waiting_user[i].uhod[j].get_name());
                QLabel *numlabel = new QLabel(QString::number(waiters->waiting_user[i].uhod[j].get_num()));
                QLabel *table_num_label = new QLabel(QString::number(waiters->waiting_user[i].get_table_num()));
              // QLabel *state_yet_label = new QLabel ("未完成");
                QLabel *state_done_label = new QLabel ("已完成");
                oLayout->addWidget(namelabel);
                oLayout->addWidget(numlabel);
                oLayout->addWidget(table_num_label);
               // if(h_o_d[k].have_cooked == 1)
                oLayout->addWidget(state_done_label);
               // if(h_o_d[k].have_cooked == 0)
               //     oLayout->addWidget(state_yet_label);
                oLayout->setContentsMargins(5,0,0,5);//关键代码，如果没有很可能显示不出来
                oContainer->setLayout(oLayout);//如果layout在创建时就已经将父窗口指针当参数，那就不用setlayout
                oContainer->resize(100,30);
                oContainer->show();
                QListWidgetItem *menuItem = new QListWidgetItem(ui->dishes_listWidget);
                menuItem->setSizeHint(QSize(80,40));
                menuItem->setTextAlignment(Qt::AlignCenter);
                ui->dishes_listWidget->setItemWidget(menuItem,oContainer);
                ui->dishes_listWidget->addItem(menuItem);
            }
        }
    }
    //显示顾客发来的消息
    ui->message_listWidget->clear();
    for(int i = 0 ; i < 36 ; i++)
    {
        if(Data::tb[i].is_free == 1 || Data::tb[i].get_waiter_mobile() != waiters->get_mobile()) continue;
        if(Data::tb[i].add_water == 1)
        {
            QWidget *oContainer = new QWidget(ui->message_listWidget);
            QHBoxLayout *oLayout = new QHBoxLayout(oContainer);
            QLabel *table_num_label = new QLabel(QString::number(Data::tb[i].get_num()));
            QLabel *statelabel = new QLabel ("加水");
            //QLabel *statelabel = new QLabel ("已结账");
            oLayout->addWidget(table_num_label);
            oLayout->addWidget(statelabel);
            oLayout->setContentsMargins(5,0,0,5);//关键代码，如果没有很可能显示不出来
            oContainer->setLayout(oLayout);//如果layout在创建时就已经将父窗口指针当参数，那就不用setlayout
            oContainer->resize(100,30);
            oContainer->show();
            QListWidgetItem *menuItem = new QListWidgetItem(ui->message_listWidget);
            menuItem->setSizeHint(QSize(80,40));
            menuItem->setTextAlignment(Qt::AlignCenter);
            ui->message_listWidget->setItemWidget(menuItem,oContainer);
            ui->message_listWidget->addItem(menuItem);

        }
        if(Data::tb[i].push_dishes == 1)
        {
            QWidget *oContainer = new QWidget(ui->message_listWidget);
            QHBoxLayout *oLayout = new QHBoxLayout(oContainer);
            QLabel *table_num_label = new QLabel(QString::number(Data::tb[i].get_num()));
            QLabel *statelabel = new QLabel ("催菜");
            //QLabel *statelabel = new QLabel ("已结账");
            oLayout->addWidget(table_num_label);
            oLayout->addWidget(statelabel);
            oLayout->setContentsMargins(5,0,0,5);//关键代码，如果没有很可能显示不出来
            oContainer->setLayout(oLayout);//如果layout在创建时就已经将父窗口指针当参数，那就不用setlayout
            oContainer->resize(100,30);
            oContainer->show();
            QListWidgetItem *menuItem = new QListWidgetItem(ui->message_listWidget);
            menuItem->setSizeHint(QSize(80,40));
            menuItem->setTextAlignment(Qt::AlignCenter);
            ui->message_listWidget->setItemWidget(menuItem,oContainer);
            ui->message_listWidget->addItem(menuItem);
        }
    }
}

Waiter_admin::~Waiter_admin()
{

    delete ui;
}

void Waiter_admin::on_ensure_pushButton_clicked()
{
    if(ui->table_listWidget->currentRow()>-1)
    {
        for(int i = 0 ;i < 36 ; i++)
        {
            if(Data::tb[i].get_table_row() == ui->table_listWidget->currentRow())
            {
                //每个显示的序列依次前移
                Data::tb[i].set_table_row(-1);
                for(int temp = i+1 ; temp < 36 ; temp++)
                {
                    if(Data::tb[temp].is_free == 1 || Data::tb[temp].have_waiter == 1)
                        continue;
                    Data::tb[temp].set_table_row(Data::tb[temp].get_table_row()-1);

                }
                if(Data::tb[i].have_waiter == 0)
                    waiters->add_work_load();
                Data::tb[i].have_waiter = 1;
                Data::tb[i].set_waiter_mobile(waiters->get_mobile());
                for(int j = 0 ;j < Data::user_num ; j++)
                {
                    if(Data::tb[i].get_mobile() == Data::user[j].get_mobile())
                    {
                        waiters->waiting_user.push_back(Data::user[j]);
                        waiters->waiting_user_num ++;
                        Data::waiter_record[Data::waiter_record_num].set_waiter_mobile(waiters->get_mobile());
                        Data::waiter_record[Data::waiter_record_num].set_mobile(Data::user[j].get_mobile());
                        //waiter_record[waiter_record_num].set_date();
                        Data::  waiter_record_num ++;
                        break;
                    }
                }
                break;

            }
        }
        //显示当前待服务的餐桌
        ui->table_listWidget->clear();
        for(int i = 0 ;i < 36 ; i++)
        {
            if(Data::tb[i].is_free == 1 || Data::tb[i].have_waiter == 1)
                continue;
            QWidget *oContainer = new QWidget(ui->table_listWidget);
            QHBoxLayout *oLayout = new QHBoxLayout(oContainer);
            QLabel *numlabel = new QLabel(QString::number(Data::tb[i].get_num()));
            QLabel *statelabel = new QLabel("待服务");
            oLayout->addWidget(numlabel);
            oLayout->addWidget(statelabel);
            oLayout->setContentsMargins(5,0,0,5);//关键代码，如果没有很可能显示不出来
            oContainer->setLayout(oLayout);//如果layout在创建时就已经将父窗口指针当参数，那就不用setlayout
            oContainer->resize(100,30);
            oContainer->show();
            QListWidgetItem *menuItem = new QListWidgetItem(ui->table_listWidget);
            menuItem->setSizeHint(QSize(80,40));
            menuItem->setTextAlignment(Qt::AlignCenter);
            ui->table_listWidget->setItemWidget(menuItem,oContainer);
            ui->table_listWidget->addItem(menuItem);
        }
        //显示当前服务员正在服务的客户
        ui->waitering_listWidget->clear();
        for(int i = 0 ; i < 36 ;i ++)
        {
            if(Data::tb[i].is_free == 1 || Data::tb[i].get_waiter_mobile() != waiters->get_mobile() || Data::tb[i].have_waiter == 0)
                continue;
            QWidget *oContainer = new QWidget(ui->waitering_listWidget);
            QHBoxLayout *oLayout = new QHBoxLayout(oContainer);
            QLabel *numlabel = new QLabel(QString::number(Data::tb[i].get_num()));
            QLabel *statelabel = new QLabel("正在服务");
            oLayout->addWidget(numlabel);
            oLayout->addWidget(statelabel);
            oLayout->setContentsMargins(5,0,0,5);//关键代码，如果没有很可能显示不出来
            oContainer->setLayout(oLayout);//如果layout在创建时就已经将父窗口指针当参数，那就不用setlayout
            oContainer->resize(100,30);
            oContainer->show();
            QListWidgetItem *menuItem = new QListWidgetItem(ui->waitering_listWidget);
            menuItem->setSizeHint(QSize(80,40));
            menuItem->setTextAlignment(Qt::AlignCenter);
            ui->waitering_listWidget->setItemWidget(menuItem,oContainer);
            ui->waitering_listWidget->addItem(menuItem);
        }
        //显示每个用户菜品完成情况
        ui->dishes_listWidget->clear();
        for(int i = 0 ; i < waiters->waiting_user_num ; i++)
        {
            for(int j = 0 ; j < waiters->waiting_user[i].dish_kind_num ; j++)
            {
                if(waiters->waiting_user[i].uhod[j].have_cooked == 1)
                {
                    QWidget *oContainer = new QWidget(ui->dishes_listWidget);
                    QHBoxLayout *oLayout = new QHBoxLayout(oContainer);
                    QLabel *namelabel = new QLabel(waiters->waiting_user[i].uhod[j].get_name());
                    QLabel *numlabel = new QLabel(QString::number(waiters->waiting_user[i].uhod[j].get_num()));
                    QLabel *table_num_label = new QLabel(QString::number(waiters->waiting_user[i].get_table_num()));
                  // QLabel *state_yet_label = new QLabel ("未完成");
                    QLabel *state_done_label = new QLabel ("已完成");
                    oLayout->addWidget(namelabel);
                    oLayout->addWidget(numlabel);
                    oLayout->addWidget(table_num_label);
                   // if(h_o_d[k].have_cooked == 1)
                    oLayout->addWidget(state_done_label);
                   // if(h_o_d[k].have_cooked == 0)
                   //     oLayout->addWidget(state_yet_label);
                    oLayout->setContentsMargins(5,0,0,5);//关键代码，如果没有很可能显示不出来
                    oContainer->setLayout(oLayout);//如果layout在创建时就已经将父窗口指针当参数，那就不用setlayout
                    oContainer->resize(100,30);
                    oContainer->show();
                    QListWidgetItem *menuItem = new QListWidgetItem(ui->dishes_listWidget);
                    menuItem->setSizeHint(QSize(80,40));
                    menuItem->setTextAlignment(Qt::AlignCenter);
                    ui->dishes_listWidget->setItemWidget(menuItem,oContainer);
                    ui->dishes_listWidget->addItem(menuItem);
                }
            }
        }
        //显示顾客发来的消息
        ui->message_listWidget->clear();
        for(int i = 0 ; i < 36 ; i++)
        {
            if(Data::tb[i].is_free == 1 || Data::tb[i].get_waiter_mobile() != waiters->get_mobile()) continue;
            if(Data::tb[i].add_water == 1)
            {
                QWidget *oContainer = new QWidget(ui->message_listWidget);
                QHBoxLayout *oLayout = new QHBoxLayout(oContainer);
                QLabel *table_num_label = new QLabel(QString::number(Data::tb[i].get_num()));
                QLabel *statelabel = new QLabel ("加水");
                oLayout->addWidget(table_num_label);
                oLayout->addWidget(statelabel);
                oLayout->setContentsMargins(5,0,0,5);//关键代码，如果没有很可能显示不出来
                oContainer->setLayout(oLayout);//如果layout在创建时就已经将父窗口指针当参数，那就不用setlayout
                oContainer->resize(100,30);
                oContainer->show();
                QListWidgetItem *menuItem = new QListWidgetItem(ui->message_listWidget);
                menuItem->setSizeHint(QSize(80,40));
                menuItem->setTextAlignment(Qt::AlignCenter);
                ui->message_listWidget->setItemWidget(menuItem,oContainer);
                ui->message_listWidget->addItem(menuItem);

            }
            if(Data::tb[i].push_dishes == 1)
            {
                QWidget *oContainer = new QWidget(ui->message_listWidget);
                QHBoxLayout *oLayout = new QHBoxLayout(oContainer);
                QLabel *table_num_label = new QLabel(QString::number(Data::tb[i].get_num()));
                QLabel *statelabel = new QLabel ("催菜");
                oLayout->addWidget(table_num_label);
                oLayout->addWidget(statelabel);
                oLayout->setContentsMargins(5,0,0,5);//关键代码，如果没有很可能显示不出来
                oContainer->setLayout(oLayout);//如果layout在创建时就已经将父窗口指针当参数，那就不用setlayout
                oContainer->resize(100,30);
                oContainer->show();
                QListWidgetItem *menuItem = new QListWidgetItem(ui->message_listWidget);
                menuItem->setSizeHint(QSize(80,40));
                menuItem->setTextAlignment(Qt::AlignCenter);
                ui->message_listWidget->setItemWidget(menuItem,oContainer);
                ui->message_listWidget->addItem(menuItem);
            }
        }
    }
}


