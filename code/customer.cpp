#include "customer.h"
#include "ui_customer.h"
#include "all_headers_needed.h"
#include "have_ordered_dishes.h"
#include "table_query.h"
#include "logindlg.h"
#include "remark.h"
#include "review.h"
#include "data.h"
using namespace std;

vector <Have_ordered_dishes> od(100);
Customer::Customer(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Customer)
{
    ui->setupUi(this);
    ui->evaluate_pbt->hide();
    ui->ensure_order_pb->setStyleSheet("QPushButton{background-color:rgb(44, 178, 214);\
        color:white; border-radius:10%;font: 13pt '微软雅黑' ;}"
        "QPushButton:hover{background-color:rgb(44, 200, 255); }"
         );
    ui->settle_account_pbt->setStyleSheet("QPushButton{background-color:rgb(44, 178, 214);\
                                          color:white; border-radius:10%;font: 13pt '微软雅黑' ;}"
                                          "QPushButton:hover{background-color:rgb(44, 200, 255); }"
                                           );
    ui->table_query_pbt->setStyleSheet("QPushButton{background-color:rgb(44, 178, 214);\
                                           color:white; border-radius:10%;font: 13pt '微软雅黑' ;}"
                                           "QPushButton:hover{background-color:rgb(44, 200, 255); }"
                                            );
    ui->add_water_pbt->setStyleSheet("QPushButton{background-color:rgb(44, 178, 214);\
                                     color:white; border-radius:10%;font: 13pt '微软雅黑' ;}"
                                     "QPushButton:hover{background-color:rgb(44, 200, 255); }"
                                      );
    ui->push_food_pbt->setStyleSheet("QPushButton{background-color:rgb(44, 178, 214);\
                                     color:white; border-radius:10%;font: 13pt '微软雅黑' ;}"
                                     "QPushButton:hover{background-color:rgb(44, 200, 255); }"
                                      );
    ui->quit_pb->setStyleSheet("QPushButton{background-color:rgb(116, 224, 191);\
                               color:white; border-radius:10%;font: 13pt '微软雅黑';}"
                                   "QPushButton:hover{background-color:rgb(116, 240, 220); }"
                                                       );
    ui->current_table_label->setText(QString::number(users->get_table_num()));
    //显示菜单界面
    if(users->have_ordered == 0)
    {
    ui->dish_name_label->hide();
    ui->dish_name_label->hide();
    ui->progress_listWidget->hide();
    ui->add_water_pbt->hide();
    ui->push_food_pbt->hide();
    ui->settle_account_pbt->hide();
    ui->menu_listWidget->setResizeMode(QListView::Adjust);
    ui->ensure_order_pb->setDisabled(able_ensure_order_pbt());
    ui->menu_listWidget->setAutoScroll(true);
    for(int i = 0;i < Data::dish_num ; i++)
    {
      QWidget *wContainer = new QWidget(ui->menu_listWidget);
      QHBoxLayout *hLayout = new QHBoxLayout(wContainer);
      QLabel *imageIcon = new QLabel();
      if(Data::dish[i].get_kind() == "汤")
      {
          imageIcon->setPixmap(QPixmap(":/Image/汤-Soup.png").scaled(35,35));
      }
      if(Data::dish[i].get_kind() == "主食")
      {
          imageIcon->setPixmap(QPixmap(":/Image/米饭2.png").scaled(35,35));
      }
      if(Data::dish[i].get_kind() == "小吃")
      {
          imageIcon->setPixmap(QPixmap(":/Image/32菜品_小吃.png").scaled(35,35));
      }
      if(Data::dish[i].get_kind() == "甜点饮品")
      {
          imageIcon->setPixmap(QPixmap(":/Image/甜点饮品.png").scaled(35,35));
      }
      if(Data::dish[i].get_kind() == "菜")
      {
          imageIcon->setPixmap(QPixmap(":/Image/畅销菜品.png").scaled(35,35));
      }
      QLabel *nameLabel = new QLabel((Data::dish[i].get_name()));
      QLabel *up_Label = new QLabel (QString::number(Data::dish[i].get_unit_price()));
      QLabel *remark_label = new QLabel(QString::number(Data::dish[i].get_assess_point()));
      QPushButton *plus_btn = new QPushButton();
      plus_btn->setFocusProxy(wContainer);
      QPushButton *minus_btn = new QPushButton();
      minus_btn->setFocusProxy(wContainer);
      minus_btn->setMaximumSize(25,25);
      hLayout ->addWidget(imageIcon);
      plus_btn->setMaximumSize(25,25);
      plus_btn->setStyleSheet("QPushButton{border-image:url(:/Image/加号1.png);\
                              color:white; border-radius:20%;font: 9pt '微软雅黑' ;}"
                              "QPushButton:hover{background-color:rgb(230, 230, 235); }");
      minus_btn->setStyleSheet("QPushButton{border-image:url(:/Image/减号1.png);\
                               color:white; border-radius:20%;font: 9pt '微软雅黑' ;}"
                               "QPushButton:hover{background-color:rgb(230, 230, 235); }");
      hLayout->addWidget(nameLabel);
      hLayout->addWidget(up_Label);
      hLayout->addWidget(remark_label);
      hLayout->addWidget(plus_btn);
      hLayout->addWidget(minus_btn);
      hLayout->setContentsMargins(5,0,0,5);//关键代码，如果没有很可能显示不出来
      wContainer->setLayout(hLayout);//如果layout在创建时就已经将父窗口指针当参数，那就不用setlayout
      wContainer->resize(350,50);
      //plus_btn->setFocusProxy(wContainer);
      wContainer->show();
      QListWidgetItem *menuItem = new QListWidgetItem(ui->menu_listWidget);
      menuItem->setSizeHint(QSize(80,40));
      menuItem->setTextAlignment(Qt::AlignCenter);
      ui->menu_listWidget->setItemWidget(menuItem,wContainer);
      ui->menu_listWidget->addItem(menuItem);
      connect(plus_btn,SIGNAL(clicked(bool)),plus_btn,SLOT(setFocus()));
      connect(plus_btn,SIGNAL(clicked()),this,SLOT(plus_btn_clicked()));
      connect(minus_btn,SIGNAL(clicked(bool)),minus_btn,SLOT(setFocus()));
      connect(minus_btn,SIGNAL(clicked()),this,SLOT(minus_btn_clicked()));
      ui->ordered_listWidget->clear();
      for(int i = 0 ; i <users->dish_kind_num ; i++)
      {
          if(users->uhod[i].get_num() == 0) continue;
          QWidget *oContainer = new QWidget(ui->ordered_listWidget);
          QHBoxLayout *oLayout = new QHBoxLayout(oContainer);
          QLabel *onamelabel = new QLabel (users->uhod[i].get_name());
          QLabel *onumlabel = new QLabel (QString::number(users->uhod[i].get_num()));
          QLabel *osmall_sum = new QLabel (QString::number(users->uhod[i].get_num()*users->uhod[i].get_unit_price()));
          oLayout->addWidget(onamelabel);
          oLayout->addWidget(onumlabel);
          oLayout->addWidget(osmall_sum);
          oLayout->setContentsMargins(5,0,0,5);//关键代码，如果没有很可能显示不出来
          oContainer->setLayout(oLayout);//如果layout在创建时就已经将父窗口指针当参数，那就不用setlayout
          oContainer->resize(100,30);
          oContainer->show();
          QListWidgetItem *menuItem = new QListWidgetItem(ui->ordered_listWidget);
          menuItem->setSizeHint(QSize(80,40));
          menuItem->setTextAlignment(Qt::AlignCenter);
          ui->ordered_listWidget->setItemWidget(menuItem,oContainer);
          ui->ordered_listWidget->addItem(menuItem);
      }
    }
    }
    //显示已点之后的界面
    if(users->have_ordered ==1)
    {
        if(users->have_settle_account == 1) ui->settle_account_pbt->setDisabled(1);
        ui->dish_name_label->show();
        ui->dish_num_label->show();
        ui->menu_listWidget->hide();
        ui->ensure_order_pb->hide();
        ui->quit_pb->hide();
        ui->label->hide();
        ui->label_2->hide();
        ui->label_3->hide();
        ui->ordered_listWidget->show();
        ui->progress_listWidget->show();
        ui->add_water_pbt->show();
        ui->push_food_pbt->show();
        ui->settle_account_pbt->show();
        ui->label_10->hide();
       // ui->evaluate_pbt->show();
        //显示已点
        for(int i = 0 ; i <users->dish_kind_num ; i++)
        {
            if(users->uhod[i].get_num() == 0) continue;
            QWidget *oContainer = new QWidget(ui->ordered_listWidget);
            QHBoxLayout *oLayout = new QHBoxLayout(oContainer);
            QLabel *onamelabel = new QLabel (users->uhod[i].get_name());
            QLabel *onumlabel = new QLabel (QString::number(users->uhod[i].get_num()));
            QLabel *osmall_sum = new QLabel (QString::number(users->uhod[i].get_num()*users->uhod[i].get_unit_price()));
            oLayout->addWidget(onamelabel);
            oLayout->addWidget(onumlabel);
            oLayout->addWidget(osmall_sum);
            oLayout->setContentsMargins(5,0,0,5);//关键代码，如果没有很可能显示不出来
            oContainer->setLayout(oLayout);//如果layout在创建时就已经将父窗口指针当参数，那就不用setlayout
            oContainer->resize(100,30);
            oContainer->show();
            QListWidgetItem *menuItem = new QListWidgetItem(ui->ordered_listWidget);
            menuItem->setSizeHint(QSize(80,40));
            menuItem->setTextAlignment(Qt::AlignCenter);
            ui->ordered_listWidget->setItemWidget(menuItem,oContainer);
            ui->ordered_listWidget->addItem(menuItem);
        }

        // 进度界面
        for(int i = 0; i < users->dish_kind_num ; i++)
        {

            if(users->uhod[i].get_num() == 0)
                continue;
            QWidget *oContainer = new QWidget(ui->progress_listWidget);
            QHBoxLayout *oLayout = new QHBoxLayout(oContainer);
            QLabel *onamelabel = new QLabel (users->uhod[i].get_name());
            QLabel *onumlabel = new QLabel (QString::number(users->uhod[i].get_num()));

            QLabel *ostate_yet_label = new QLabel("尚未烹饪");

            QLabel *ostate_ing_label = new QLabel("正在烹饪");

            QLabel *ostate_done_label = new QLabel("已完成");


            oLayout->addWidget(onamelabel);
            oLayout->addWidget(onumlabel);
            if(users->uhod[i].have_claimed == 0)
                 oLayout->addWidget(ostate_yet_label);
            else if(users->uhod[i].have_claimed == 1&&users->uhod[i].have_cooked == 0)
                 oLayout->addWidget(ostate_ing_label);
            else if(users->uhod[i].have_cooked  == 1)
                oLayout->addWidget(ostate_done_label);

            oLayout->setContentsMargins(5,0,0,5);//关键代码，如果没有很可能显示不出来
            oContainer->setLayout(oLayout);//如果layout在创建时就已经将父窗口指针当参数，那就不用setlayout
            oContainer->resize(100,30);
            oContainer->show();
            QListWidgetItem *menuItem = new QListWidgetItem(ui->progress_listWidget);
            menuItem->setSizeHint(QSize(80,40));
            menuItem->setTextAlignment(Qt::AlignCenter);
            ui->progress_listWidget->setItemWidget(menuItem,oContainer);
            ui->progress_listWidget->addItem(menuItem);
        }

    }
}

Customer::~Customer()
{
    delete ui;
}

//判断确认下单键的可用性
bool Customer::able_ensure_order_pbt()
{
    for(int i = 0;i < users->dish_kind_num ; i++)
    {
        if(users->uhod[i].get_num() >0 )
            return 0;
    }

    return 1;
}

//加号
void Customer::plus_btn_clicked()
{


    if(ui->menu_listWidget->currentRow()>-1)
  {
        int row = ui->menu_listWidget->currentRow();
        bool Flag = 0;
        for(int i = 0 ;i < users->dish_kind_num ; i++)
        {
            if(users->uhod[i].get_name() == Data::dish[row].get_name())
            {
                Flag = 1;

                users->uhod[i].set_num(users->uhod[i].get_num()+1);
                break;
            }
        }
        if(!Flag)
        {
            Have_ordered_dishes tmp;
            tmp.set_name(Data::dish[row].get_name());
            tmp.set_num(1);
            tmp.set_unit_price(Data::dish[row].get_unit_price());
            users->uhod.push_back(tmp);
            users->dish_kind_num ++ ;
        }

    ui->ordered_listWidget->clear();
    this->ui->ordered_listWidget->setResizeMode(QListView::Adjust);
    this->ui->ordered_listWidget->setAutoScroll(true);

    for(int i = 0;i<users->dish_kind_num;i++)
    {
        if(users->uhod[i].get_num() == 0) continue;
        QWidget *oContainer = new QWidget(ui->ordered_listWidget);
        QHBoxLayout *oLayout = new QHBoxLayout(oContainer);
        QLabel *onamelabel = new QLabel (users->uhod[i].get_name());
        QLabel *onumlabel = new QLabel (QString::number(users->uhod[i].get_num()));
        QLabel *osmall_sum = new QLabel (QString::number(users->uhod[i].get_num()*users->uhod[i].get_unit_price()));

        oLayout->addWidget(onamelabel);
        oLayout->addWidget(onumlabel);
        oLayout->addWidget(osmall_sum);

        oLayout->setContentsMargins(5,0,0,5);//关键代码，如果没有很可能显示不出来
        oContainer->setLayout(oLayout);//如果layout在创建时就已经将父窗口指针当参数，那就不用setlayout
        oContainer->resize(100,30);
        oContainer->show();
        QListWidgetItem *menuItem = new QListWidgetItem(ui->ordered_listWidget);
        menuItem->setSizeHint(QSize(80,40));
        menuItem->setTextAlignment(Qt::AlignCenter);
        ui->ordered_listWidget->setItemWidget(menuItem,oContainer);
        ui->ordered_listWidget->addItem(menuItem);

    }
    ui->ensure_order_pb->setDisabled(able_ensure_order_pbt());


  }
}
//减号
void Customer::minus_btn_clicked()
{
    if(ui->menu_listWidget->currentRow()>-1)
    {
        int row = ui->menu_listWidget->currentRow();
        for(int i = 0; i < users->dish_kind_num ; i++)
        {
            if(users->uhod[i].get_name() == Data::dish[row].get_name())
            {
                if(users->uhod[i].get_num() == 1)
                {
                    users->uhod[i].set_num(0);
                }
                else if(users->uhod[i].get_num() > 1)
                {
                    users->uhod[i].set_num(users->uhod[i].get_num()-1);
                }
            }
        }
    ui->ordered_listWidget->clear();
    this->ui->ordered_listWidget->setResizeMode(QListView::Adjust);
    this->ui->ordered_listWidget->setAutoScroll(true);
    for(int i = 0;i < users->dish_kind_num; i++)
    {

        if(users->uhod[i].get_num() == 0)
            continue;
        QWidget *oContainer = new QWidget(ui->ordered_listWidget);
        QHBoxLayout *oLayout = new QHBoxLayout(oContainer);
        QLabel *onamelabel = new QLabel (users->uhod[i].get_name());
        QLabel *onumlabel = new QLabel (QString::number(users->uhod[i].get_num()));
        QLabel *osmall_sum = new QLabel (QString::number(users->uhod[i].get_num()*users->uhod[i].get_unit_price()));


        oLayout->addWidget(onamelabel);
        oLayout->addWidget(onumlabel);
        oLayout->addWidget(osmall_sum);

        oLayout->setContentsMargins(5,0,0,5);//关键代码，如果没有很可能显示不出来
        oContainer->setLayout(oLayout);//如果layout在创建时就已经将父窗口指针当参数，那就不用setlayout
        oContainer->resize(100,30);
        oContainer->show();
        QListWidgetItem *menuItem = new QListWidgetItem(ui->ordered_listWidget);
        menuItem->setSizeHint(QSize(80,40));
        menuItem->setTextAlignment(Qt::AlignCenter);
        ui->ordered_listWidget->setItemWidget(menuItem,oContainer);
        ui->ordered_listWidget->addItem(menuItem);
    }
    ui->ensure_order_pb->setDisabled(able_ensure_order_pbt());
    }
}
//确认下单后的界面更新
void Customer::on_ensure_order_pb_clicked()
{

    int ret = QMessageBox::question(this,tr("下单确认"),tr("确认下单吗？"),QMessageBox::Yes,QMessageBox::No);
    if(ret == QMessageBox::Yes)
    {
        QMessageBox::information(this,tr("提示"),tr("下单成功"),QMessageBox::Yes);
        ui->dish_name_label->show();
        ui->dish_num_label->show();
        ui->menu_listWidget->hide();
        ui->ensure_order_pb->hide();
        ui->quit_pb->hide();
        ui->label->hide();
        ui->label_2->hide();
        ui->label_3->hide();
        ui->progress_listWidget->show();
        ui->add_water_pbt->show();
        ui->push_food_pbt->show();
        ui->settle_account_pbt->show();
        ui->label_10->hide();
        //ui->evaluate_pbt->show();
        users->have_ordered = 1;

        for(int i = 0 ; i < users->dish_kind_num ; i++)
        {
            if(users->uhod[i].get_num() == 0)
                continue;
            Data::order_record[Data::order_record_num].set_mobile(users->get_mobile());
            Data::order_record[Data::order_record_num].set_dish_num(users->uhod[i].get_num());
            Data::order_record[Data::order_record_num].set_dish_name(users->uhod[i].get_name());
            Data::order_record_num ++;
           // order_record[order_record_num].set_date()
        }
      for(int i = 0 ; i<users->dish_kind_num ; i++)
      {

          if(users->uhod[i].get_num() == 0)
              continue;
          QWidget *oContainer = new QWidget(ui->progress_listWidget);
          QHBoxLayout *oLayout = new QHBoxLayout(oContainer);
          QLabel *onamelabel = new QLabel (users->uhod[i].get_name());
          QLabel *onumlabel = new QLabel (QString::number(users->uhod[i].get_num()));

          QLabel *ostate_yet_label = new QLabel("尚未烹饪");

          QLabel *ostate_ing_label = new QLabel("正在烹饪");

          QLabel *ostate_done_label = new QLabel("已完成");


          oLayout->addWidget(onamelabel);
          oLayout->addWidget(onumlabel);
          if(users->uhod[i].have_claimed == 0)
               oLayout->addWidget(ostate_yet_label);
          else if(users->uhod[i].have_claimed == 1&&users->uhod[i].have_cooked == 0)
               oLayout->addWidget(ostate_ing_label);
          else if(users->uhod[i].have_cooked  == 1)
              oLayout->addWidget(ostate_done_label);

          oLayout->setContentsMargins(5,0,0,5);//关键代码，如果没有很可能显示不出来
          oContainer->setLayout(oLayout);//如果layout在创建时就已经将父窗口指针当参数，那就不用setlayout
          oContainer->resize(100,30);
          oContainer->show();
          QListWidgetItem *menuItem = new QListWidgetItem(ui->progress_listWidget);
          menuItem->setSizeHint(QSize(80,40));
          menuItem->setTextAlignment(Qt::AlignCenter);
          ui->progress_listWidget->setItemWidget(menuItem,oContainer);
          ui->progress_listWidget->addItem(menuItem);
      }

    }
}
//结账
void Customer::on_settle_account_pbt_clicked()
{
    double sum = 0;
    for(int i = 0 ; i < users->dish_kind_num ; i++)
    {
        sum += (users->uhod[i].get_unit_price())*(users->uhod[i].get_num());
    }

    int ret = QMessageBox::question(this,tr("结账确认"),tr("总计%1元，确认结账吗？").arg(sum),QMessageBox::Yes,QMessageBox::No);
    if(ret == QMessageBox::Yes)
    {
        QMessageBox::information(this,tr("提示"),tr("付款成功"),QMessageBox::Yes);
        ui->settle_account_pbt->setDisabled(1);
        users->have_settle_account = 1;
        Data::tb[users->get_table_num()-1].is_settle_account = 1;
    }
}
//实时查询餐桌情况
void Customer::on_table_query_pbt_clicked()
{
    Table_query tq;
    if(tq.exec() == QDialog::Accepted)
    {
        int ret = QMessageBox::question(this,tr("评价"),tr("给个好评吧"),QMessageBox::Yes,QMessageBox::No);
        if(ret == QMessageBox::Yes)
        {
            Review r;
           if(r.exec() == QDialog::Accepted)
               this->close();
        }
        else
        {
            this->close();
        }


    }
}

//加水
void Customer::on_add_water_pbt_clicked()
{
    QMessageBox::information(this,tr("提示"),tr("消息已发出，请稍等片刻"),QMessageBox::Yes);
    Data::tb[users->get_table_num()-1].add_water = 1;
}
//催菜
void Customer::on_push_food_pbt_clicked()
{
    QMessageBox::information(this,tr("提示"),tr("消息已发出，请稍等片刻"),QMessageBox::Yes);
    Data::tb[users->get_table_num()-1].push_dishes = 1;
}

void Customer::on_evaluate_pbt_clicked()
{
    Review r;
    r.exec();
}

void Customer::paintEvent(QPaintEvent *event)
{
    double sum  = 0;
    for(int i = 0 ; i < users->dish_kind_num ; i++)
    {
        sum += (users->uhod[i].get_unit_price())*(users->uhod[i].get_num());
    }
    ui->waiterid_label->setText(Data::tb[users->get_table_num()-1].get_waiter_mobile());
    if(Data::tb[users->get_table_num()-1].get_waiter_mobile()!= "")
    {
        ui->add_water_pbt->setDisabled(0);
        ui->push_food_pbt->setDisabled(0);
    }
    else
    {
        ui->add_water_pbt->setDisabled(1);
        ui->push_food_pbt->setDisabled(1);
    }
    ui->sum_label->setText(QString::number(sum));

    QDialog::paintEvent(event);
}
