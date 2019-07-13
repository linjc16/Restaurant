#include "manager.h"
#include "ui_manager.h"
#include "logindlg.h"
#include "accountadmin.h"
#include "remark_dishes.h"
#include "remark_waiter.h"
#include "data.h"
Manager::Manager(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Manager)
{
    ui->setupUi(this);
    ui->admin_pbt->setStyleSheet("QPushButton{background-color:rgb(44, 178, 214);\
        color:white; border-radius:10%;font: 9pt '微软雅黑' ;}"
        "QPushButton:hover{background-color:rgb(44, 200, 255); }"
         );
    ui->remark_dish_pbt->setStyleSheet("QPushButton{background-color:rgb(44, 178, 214);\
          color:white; border-radius:10%;font: 9pt '微软雅黑' ;}"
          "QPushButton:hover{background-color:rgb(44, 200, 255); }"
           );
    ui->remark_waiter_pbt->setStyleSheet("QPushButton{background-color:rgb(44, 178, 214);\
         color:white; border-radius:10%;font: 9pt '微软雅黑' ;}"
         "QPushButton:hover{background-color:rgb(44, 200, 255); }"
          );
    for(int i = 0; i < Data::cook_num ; i++)
    {
        QWidget *oContainer = new QWidget(ui->cook_listWidget);
        QHBoxLayout *oLayout = new QHBoxLayout(oContainer);
        QLabel *mobile_label = new QLabel(Data::cook[i].get_mobile());
        QLabel *workload_label = new QLabel(QString::number(Data::cook[i].get_work_load()));
        //QLabel *remark_label = new QLabel(QString::number(cook[i].get_remark_star()));
        oLayout->addWidget(mobile_label);
        oLayout->addWidget(workload_label);
       // oLayout->addWidget(remark_label);
        oLayout->setContentsMargins(5,0,0,5);//关键代码，如果没有很可能显示不出来
        oContainer->setLayout(oLayout);//如果layout在创建时就已经将父窗口指针当参数，那就不用setlayout
        oContainer->resize(100,30);
        oContainer->show();
        QListWidgetItem *menuItem = new QListWidgetItem(ui->cook_listWidget);
        menuItem->setSizeHint(QSize(80,40));
        menuItem->setTextAlignment(Qt::AlignCenter);
        ui->cook_listWidget->setItemWidget(menuItem,oContainer);
        ui->cook_listWidget->addItem(menuItem);
    }
    for(int i = 0 ; i< Data::waiter_num ;i++)
    {
        QWidget *oContainer = new QWidget(ui->waiter_listWidget);
        QHBoxLayout *oLayout = new QHBoxLayout(oContainer);
        QLabel *mobile_label = new QLabel(Data::waiter[i].get_mobile());
        QLabel *workload_label = new QLabel(QString::number(Data::waiter[i].get_work_load()));
        QLabel *remark_label = new QLabel(QString::number(Data::waiter[i].get_remark_star()));
        oLayout->addWidget(mobile_label);
        oLayout->addWidget(workload_label);
        oLayout->addWidget(remark_label);
        oLayout->setContentsMargins(5,0,0,5);//关键代码，如果没有很可能显示不出来
        oContainer->setLayout(oLayout);//如果layout在创建时就已经将父窗口指针当参数，那就不用setlayout
        oContainer->resize(100,30);
        oContainer->show();
        QListWidgetItem *menuItem = new QListWidgetItem(ui->waiter_listWidget);
        menuItem->setSizeHint(QSize(80,40));
        menuItem->setTextAlignment(Qt::AlignCenter);
        ui->waiter_listWidget->setItemWidget(menuItem,oContainer);
        ui->waiter_listWidget->addItem(menuItem);
    }

    for(int i = 0 ; i < Data::order_record_num ; i++)
    {
    QWidget *oContainer = new QWidget(ui->order_listWidget);
    QHBoxLayout *oLayout = new QHBoxLayout(oContainer);
    QLabel *mobile_label = new QLabel(Data::order_record[i].get_mobile());
    QLabel *dish_num_label = new QLabel(QString::number(Data::order_record[i].get_dish_num()));
    QLabel *dish_name_label = new QLabel(Data::order_record[i].get_dish_name());
    oLayout->addWidget(mobile_label);
    oLayout->addWidget(dish_name_label);
    oLayout->addWidget(dish_num_label);
    oLayout->setContentsMargins(5,0,0,5);//关键代码，如果没有很可能显示不出来
    oContainer->setLayout(oLayout);//如果layout在创建时就已经将父窗口指针当参数，那就不用setlayout
    oContainer->resize(100,30);
    oContainer->show();
    QListWidgetItem *menuItem = new QListWidgetItem(ui->order_listWidget);
    menuItem->setSizeHint(QSize(80,40));
    menuItem->setTextAlignment(Qt::AlignCenter);
    ui->order_listWidget->setItemWidget(menuItem,oContainer);
    ui->order_listWidget->addItem(menuItem);
    }
    for(int i = 0 ; i < Data::cook_record_num ; i++)
    {
    QWidget *oContainer = new QWidget(ui->cook_record_listWidget);
    QHBoxLayout *oLayout = new QHBoxLayout(oContainer);
    QLabel *cook_mobile_label = new QLabel(Data::cook_record[i].get_cook_mobile());
    QLabel *mobile_label = new QLabel(Data::cook_record[i].get_mobile());
    QLabel *dish_num_label = new QLabel(QString::number(Data::cook_record[i].get_dish_num()));
    QLabel *dish_name_label = new QLabel(Data::cook_record[i].get_dish_name());
    oLayout->addWidget(cook_mobile_label);

    oLayout->addWidget(dish_name_label);
    oLayout->addWidget(dish_num_label);
    oLayout->addWidget(mobile_label);
    oLayout->setContentsMargins(5,0,0,5);//关键代码，如果没有很可能显示不出来
    oContainer->setLayout(oLayout);//如果layout在创建时就已经将父窗口指针当参数，那就不用setlayout
    oContainer->resize(100,30);
    oContainer->show();
    QListWidgetItem *menuItem = new QListWidgetItem(ui->cook_record_listWidget);
    menuItem->setSizeHint(QSize(80,40));
    menuItem->setTextAlignment(Qt::AlignCenter);
    ui->cook_record_listWidget->setItemWidget(menuItem,oContainer);
    ui->cook_record_listWidget->addItem(menuItem);
    }
}

Manager::~Manager()
{
    delete ui;
}

void Manager::on_admin_pbt_clicked()
{
    AccountAdmin ad;
    ad.exec();
}

void Manager::on_remark_waiter_pbt_clicked()
{
    Remark_waiter rw;
    rw.exec();
}

void Manager::on_remark_dish_pbt_clicked()
{
    Remark_dishes rd;
    rd.exec();
}
