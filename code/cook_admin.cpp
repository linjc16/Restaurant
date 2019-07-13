#include "cook_admin.h"
#include "ui_cook_admin.h"
#include "have_ordered_dishes.h"
#include "ordinary_user.h"
#include "cook.h"
#include "logindlg.h"
#include "data.h"
#include <vector>
using namespace std;
Cook_admin::Cook_admin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Cook_admin)
{
    ui->setupUi(this);
    ui->claim_pbt->setStyleSheet("QPushButton{background-color:rgb(44, 178, 214);\
                                                        color:white; border-radius:10%;font: 13pt '微软雅黑' ;}"
                                                        "QPushButton:hover{background-color:rgb(44, 200, 255); }"
                                                         );
    ui->finishpbt->setStyleSheet("QPushButton{background-color:rgb(44, 178, 214);\
    color:white; border-radius:10%;font: 13pt '微软雅黑' ;}"
    "QPushButton:hover{background-color:rgb(44, 200, 255); }"
     );
    ui->cook_listWidget->clear();
    //厨师认领界面
    int temp = 0;
    for(int i = 0; i < Data::user_num; i++)
    {
       for(int j = 0 ; j < Data::user[i].dish_kind_num ; j++)
       {
           if(Data::user[i].uhod[j].get_num() == 0) continue;
           Data::user[i].uhod[j].set_order_row(temp);
           temp ++ ;
       QLabel *orderlabel = new QLabel (QString::number(Data::user[i].uhod[j].get_order_row()+1));
       QLabel *nameLabel = new QLabel((Data::user[i].uhod[j].get_name()));
       QLabel *numLabel = new QLabel (QString::number(Data::user[i].uhod[j].get_num()));
      // QLabel *mobileLabel = new QLabel(user[i].uhod[j].get_mobile());
       QLabel *state_yet_label = new QLabel("未认领");
       QLabel *state_claimed_label = new QLabel("已认领");
       QWidget *wContainer = new QWidget(ui->cook_listWidget);
       QHBoxLayout *hLayout = new QHBoxLayout(wContainer);
       hLayout -> addWidget(orderlabel);
       hLayout -> addWidget(nameLabel);
       hLayout -> addWidget(numLabel);
       //hLayout -> addWidget(mobileLabel);
       if(Data::user[i].uhod[j].have_claimed == 1)
           hLayout->addWidget(state_claimed_label);
       else if(Data::user[i].uhod[j].have_claimed == 0)
           hLayout->addWidget(state_yet_label);
       hLayout->setContentsMargins(5,0,0,5);//关键代码，如果没有很可能显示不出来
       wContainer->setLayout(hLayout);//如果layout在创建时就已经将父窗口指针当参数，那就不用setlayout
       wContainer->resize(100,30);
       QListWidgetItem *menuItem = new QListWidgetItem(ui->cook_listWidget);
       menuItem->setSizeHint(QSize(80,40));
       menuItem->setTextAlignment(Qt::AlignCenter);
       ui->cook_listWidget->setItemWidget(menuItem,wContainer);
       ui->cook_listWidget->addItem(menuItem);
       }


    }
    //厨师完成界面

    for(int i = 0 ;i < Data::user_num ; i++)
    {
        for(int j = 0; j < Data::user[i].dish_kind_num ; j++)
        {
            if(Data::user[i].uhod[j].have_claimed == 0)
                continue;
            QWidget *oContainer = new QWidget(ui->claim_listWidget);
            QHBoxLayout *oLayout = new QHBoxLayout(oContainer);
            QLabel *onamelabel = new QLabel (Data::user[i].uhod[j].get_name());
            QLabel *onumlabel = new QLabel (QString::number(Data::user[i].uhod[j].get_num()));
            //QLabel *omobileLabel = new QLabel(user[i].uhod[j].get_mobile());
            QLabel *state_yet_label = new QLabel("未完成");
            QLabel *state_claimed_label = new QLabel("已完成");
            oLayout->addWidget(onamelabel);
            oLayout->addWidget(onumlabel);
            //oLayout->addWidget(omobileLabel);
            if(Data::user[i].uhod[j].have_cooked == 1)
                oLayout->addWidget(state_claimed_label);
            if(Data::user[i].uhod[j].have_cooked == 0)
                oLayout->addWidget(state_yet_label);
            oLayout->setContentsMargins(5,0,0,5);//关键代码，如果没有很可能显示不出来
            oContainer->setLayout(oLayout);//如果layout在创建时就已经将父窗口指针当参数，那就不用setlayout
            oContainer->resize(100,30);
            oContainer->show();
            QListWidgetItem *menuItem = new QListWidgetItem(ui->claim_listWidget);
            menuItem->setSizeHint(QSize(80,40));
            menuItem->setTextAlignment(Qt::AlignCenter);
            ui->claim_listWidget->setItemWidget(menuItem,oContainer);
            ui->claim_listWidget->addItem(menuItem);
        }
    }
    //db.close();

}

Cook_admin::~Cook_admin()
{
    delete ui;
}

void Cook_admin::on_claim_pbt_clicked()
{

    if(ui->cook_listWidget->currentRow()>-1)
    {
        for(int i = 0; i < Data::user_num; i ++)
        {
            for(int j = 0 ;j < Data::user[i].dish_kind_num; j ++)
            {
                if(Data::user[i].uhod[j].get_order_row() == ui->cook_listWidget->currentRow())
                {
                    Data::user[i].uhod[j].have_claimed = 1;
                }
            }
        }
        ui->cook_listWidget->clear();
        for(int i = 0; i < Data::user_num ; i++)
        {
            for (int j = 0;j <Data::user[i].dish_kind_num ; j++)
            {
                if(Data::user[i].uhod[j].get_num() == 0) continue;
                QLabel *orderlabel = new QLabel (QString::number(Data::user[i].uhod[j].get_order_row()+1));
                QLabel *nameLabel = new QLabel((Data::user[i].uhod[j].get_name()));
                QLabel *numLabel = new QLabel (QString::number(Data::user[i].uhod[j].get_num()));
               // QLabel *mobileLabel = new QLabel(user[i].uhod[j].get_mobile());
                QLabel *state_yet_label = new QLabel("未认领");
                QLabel *state_claimed_label = new QLabel("已认领");
                QWidget *wContainer = new QWidget(ui->cook_listWidget);
                QHBoxLayout *hLayout = new QHBoxLayout(wContainer);
                hLayout ->addWidget(orderlabel);
                hLayout ->addWidget(nameLabel);
                hLayout ->addWidget(numLabel);
               // hLayout ->addWidget(mobileLabel);
                if(Data::user[i].uhod[j].have_claimed == 1)
                    hLayout->addWidget(state_claimed_label);
                if(Data::user[i].uhod[j].have_claimed == 0)
                    hLayout->addWidget(state_yet_label);
                hLayout->setContentsMargins(5,0,0,5);//关键代码，如果没有很可能显示不出来
                wContainer->setLayout(hLayout);//如果layout在创建时就已经将父窗口指针当参数，那就不用setlayout
                wContainer->resize(100,30);
                QListWidgetItem *menuItem = new QListWidgetItem(ui->cook_listWidget);
                menuItem->setSizeHint(QSize(80,40));
                menuItem->setTextAlignment(Qt::AlignCenter);
                ui->cook_listWidget->setItemWidget(menuItem,wContainer);
                ui->cook_listWidget->addItem(menuItem);

            }
        }
        int ctmp = 0;
        ui->claim_listWidget->clear();
        for(int i = 0 ;i < Data::user_num ; i++)
        {
            for(int j = 0; j < Data::user[i].dish_kind_num ; j++)
            {
                if(Data::user[i].uhod[j].have_claimed == 0)
                    continue;
                Data::user[i].uhod[j].set_claimed_order_row(ctmp);
                ctmp ++ ;
                QWidget *oContainer = new QWidget(ui->claim_listWidget);
                QHBoxLayout *oLayout = new QHBoxLayout(oContainer);
                QLabel *onamelabel = new QLabel (Data::user[i].uhod[j].get_name());
                QLabel *onumlabel = new QLabel (QString::number(Data::user[i].uhod[j].get_num()));
               // QLabel *omobileLabel = new QLabel(user[i].uhod[j].get_mobile());
                QLabel *state_yet_label = new QLabel("未完成");
                QLabel *state_claimed_label = new QLabel("已完成");
                oLayout->addWidget(onamelabel);
                oLayout->addWidget(onumlabel);
               // oLayout->addWidget(omobileLabel);
                if(Data::user[i].uhod[j].have_cooked == 1)
                    oLayout->addWidget(state_claimed_label);
                if(Data::user[i].uhod[j].have_cooked == 0)
                    oLayout->addWidget(state_yet_label);
                oLayout->setContentsMargins(5,0,0,5);//关键代码，如果没有很可能显示不出来
                oContainer->setLayout(oLayout);//如果layout在创建时就已经将父窗口指针当参数，那就不用setlayout
                oContainer->resize(100,30);
                oContainer->show();
                QListWidgetItem *menuItem = new QListWidgetItem(ui->claim_listWidget);
                menuItem->setSizeHint(QSize(80,40));
                menuItem->setTextAlignment(Qt::AlignCenter);
                ui->claim_listWidget->setItemWidget(menuItem,oContainer);
                ui->claim_listWidget->addItem(menuItem);
            }
        }

    }
}

void Cook_admin::on_finishpbt_clicked()
{

    if(ui->claim_listWidget->currentRow()>-1)
    {
        for(int i = 0 ;i < Data::user_num ; i++)
        {
            for(int j = 0 ; j < Data::user[i].dish_kind_num ; j++)
            {
                if(Data::user[i].uhod[j].get_claimed_order_row() == ui->claim_listWidget->currentRow())
                {
                    if(Data::user[i].uhod[j].have_cooked == 0)
                        cooks->add_work_load(Data::user[i].uhod[j].get_num());
                    Data::user[i].uhod[j].have_cooked = 1;
                    Data::cook_record[Data::cook_record_num].set_cook_mobile(cooks->get_mobile());
                    Data::cook_record[Data::cook_record_num].set_dish_name(Data::user[i].uhod[j].get_name());
                    Data::cook_record[Data::cook_record_num].set_mobile(Data::user[i].get_mobile());
                    Data::cook_record[Data::cook_record_num].set_dish_num(Data::user[i].uhod[j].get_num());
                    Data::cook_record_num ++ ;
                }
            }
        }



        ui->claim_listWidget->clear();
        for(int i = 0 ;i< Data::user_num ; i++)
        {
            for(int j = 0 ;j < Data::user[i].dish_kind_num; j ++)
            {
                if(Data::user[i].uhod[j].have_claimed == 0)
                    continue;
                QWidget *oContainer = new QWidget(ui->claim_listWidget);
                QHBoxLayout *oLayout = new QHBoxLayout(oContainer);
                QLabel *onamelabel = new QLabel (Data::user[i].uhod[j].get_name());
                QLabel *onumlabel = new QLabel (QString::number(Data::user[i].uhod[j].get_num()));
              //  QLabel *omobileLabel = new QLabel(user[i].uhod[j].get_mobile());
                QLabel *state_yet_label = new QLabel("未完成");
                QLabel *state_claimed_label = new QLabel("已完成");
                oLayout->addWidget(onamelabel);
                oLayout->addWidget(onumlabel);
              //  oLayout->addWidget(omobileLabel);
                if(Data::user[i].uhod[j].have_cooked == 1)
                    oLayout->addWidget(state_claimed_label);
                if(Data::user[i].uhod[j].have_cooked == 0)
                    oLayout->addWidget(state_yet_label);
                oLayout->setContentsMargins(5,0,0,5);//关键代码，如果没有很可能显示不出来
                oContainer->setLayout(oLayout);//如果layout在创建时就已经将父窗口指针当参数，那就不用setlayout
                oContainer->resize(100,30);
                oContainer->show();
                QListWidgetItem *menuItem = new QListWidgetItem(ui->claim_listWidget);
                menuItem->setSizeHint(QSize(80,40));
                menuItem->setTextAlignment(Qt::AlignCenter);
                ui->claim_listWidget->setItemWidget(menuItem,oContainer);
                ui->claim_listWidget->addItem(menuItem);

            }
        }



   }
}
