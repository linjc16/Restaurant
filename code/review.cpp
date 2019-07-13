#include "review.h"
#include "ui_review.h"
#include "logindlg.h"
#include "all_headers_needed.h"
#include "data.h"
bool waiter_Flag = 0;
double star_tmp = 0;
int current_order_row = -1;
int user_order_num = 0 ;
vector <QString> order_dish(100);
Review::Review(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Review)
{
    ui->setupUi(this);
    ui->pushButton->setStyleSheet("QPushButton{background-color:rgb(44, 178, 214);\
                                  color:white; border-radius:10%;font: 13pt '微软雅黑' ;}"
                                  "QPushButton:hover{background-color:rgb(44, 200, 255); }"
                                   );
    ui->label_2->setText(Data::tb[users->get_table_num()-1].get_waiter_mobile());
    ui->star1_pbt->setIcon(QPixmap(":/Image/star.png"));
    ui->star1_pbt->setIconSize(QSize(30,30));
    ui->star2_pbt->setIcon(QPixmap(":/Image/star.png"));
    ui->star2_pbt->setIconSize(QSize(30,30));
    ui->star3_pbt->setIcon(QPixmap(":/Image/star.png"));
    ui->star3_pbt->setIconSize(QSize(30,30));
    ui->star4_pbt->setIcon(QPixmap(":/Image/star.png"));
    ui->star4_pbt->setIconSize(QSize(30,30));
    ui->star5_pbt->setIcon(QPixmap(":/Image/star.png"));
    ui->star5_pbt->setIconSize(QSize(30,30));
    ui->back_btn->setIcon(QPixmap(":/Image/向前.png"));
    ui->back_btn->setIconSize(QSize(30,30));
    ui->next_btn->setIcon(QPixmap(":/Image/向后.png"));
    ui->next_btn->setIconSize(QSize(30,30));

    ui->star1_pbt_2->setIcon(QPixmap(":/Image/star.png"));
    ui->star1_pbt_2->setIconSize(QSize(30,30));
    ui->star2_pbt_2->setIcon(QPixmap(":/Image/star.png"));
    ui->star2_pbt_2->setIconSize(QSize(30,30));
    ui->star3_pbt_2->setIcon(QPixmap(":/Image/star.png"));
    ui->star3_pbt_2->setIconSize(QSize(30,30));
    ui->star4_pbt_2->setIcon(QPixmap(":/Image/star.png"));
    ui->star4_pbt_2->setIconSize(QSize(30,30));
    ui->star5_pbt_2->setIcon(QPixmap(":/Image/star.png"));
    ui->star5_pbt_2->setIconSize(QSize(30,30));
    for(int i = 0 ; i < users->dish_kind_num ; i++)
    {
        if(users->uhod[i].get_num() == 0)
            continue;
        order_dish[user_order_num] = users->uhod[i].get_name();
        user_order_num ++ ;
        if(user_order_num == 1)
        {
            ui->dishes_textEdit->setText(users->uhod[i].get_remark_text());
            if(users->uhod[i].remarked)
            {
                int temp = users->uhod[i].current_remark_star;
                switch(temp)
                {
                case 1:
                    ui->star1_pbt_2->clicked();
                    break;
                case 2:
                    ui->star2_pbt_2->clicked();
                    break;
                case 3:
                    ui->star3_pbt_2->clicked();
                    break;
                case 4:
                    ui->star4_pbt_2->clicked();
                    break;
                case 5:
                    ui->star5_pbt_2->clicked();
                    break;
                default:
                    break;
                }
            }
        }

    }
    ui->dish_name_label->setText(order_dish[0]);
    current_order_row = 0;
    //重新登录该界面则显示已评价的记录
    if(waiter_Flag)
    {
        for(int i = 0 ; i < Data::waiter_num ; i++)
        {
            if(Data::tb[users->get_table_num()-1].get_waiter_mobile() == Data::waiter[i].get_mobile())
            {
                int temp = Data::waiter[i].current_user_remark_star;
                switch(temp)
                {
                case 1:
                    ui->star1_pbt->clicked();
                    break;
                case 2:
                    ui->star2_pbt->clicked();
                    break;
                case 3:
                    ui->star3_pbt->clicked();
                    break;
                case 4:
                    ui->star4_pbt->clicked();
                    break;
                case 5:
                    ui->star5_pbt->clicked();
                    break;
                default:
                    break;
                }
            }
        }
    }



}

Review::~Review()
{
    delete ui;
}

void Review::on_star1_pbt_clicked()
{
    ui->star1_pbt->setIcon(QPixmap(":/Image/star1.png"));
    ui->star1_pbt->setIconSize(QSize(30,30));
    ui->star2_pbt->setIcon(QPixmap(":/Image/star.png"));
    ui->star2_pbt->setIconSize(QSize(30,30));
    ui->star3_pbt->setIcon(QPixmap(":/Image/star.png"));
    ui->star3_pbt->setIconSize(QSize(30,30));
    ui->star4_pbt->setIcon(QPixmap(":/Image/star.png"));
    ui->star4_pbt->setIconSize(QSize(30,30));
    ui->star5_pbt->setIcon(QPixmap(":/Image/star.png"));
    ui->star5_pbt->setIconSize(QSize(30,30));
    star_tmp = 1.0;
    waiter_Flag = 1;
    for(int i = 0 ; i < Data::waiter_num ; i++)
    {
        if(Data::tb[users->get_table_num()-1].get_waiter_mobile() == Data::waiter[i].get_mobile())
        {
            Data::waiter[i].current_user_remark_star = 1.0;
            break;
        }
    }
}

void Review::on_star2_pbt_clicked()
{
    ui->star1_pbt->setIcon(QPixmap(":/Image/star1.png"));
    ui->star1_pbt->setIconSize(QSize(30,30));
    ui->star2_pbt->setIcon(QPixmap(":/Image/star1.png"));
    ui->star2_pbt->setIconSize(QSize(30,30));
    ui->star3_pbt->setIcon(QPixmap(":/Image/star.png"));
    ui->star3_pbt->setIconSize(QSize(30,30));
    ui->star4_pbt->setIcon(QPixmap(":/Image/star.png"));
    ui->star4_pbt->setIconSize(QSize(30,30));
    ui->star5_pbt->setIcon(QPixmap(":/Image/star.png"));
    ui->star5_pbt->setIconSize(QSize(30,30));
    star_tmp = 2.0 ;
    waiter_Flag = 1;
    for(int i = 0 ; i < Data::waiter_num ; i++)
    {
        if(Data::tb[users->get_table_num()-1].get_waiter_mobile() == Data::waiter[i].get_mobile())
        {
            Data::waiter[i].current_user_remark_star = 2.0;
            break;
        }
    }
}

void Review::on_star3_pbt_clicked()
{
    ui->star1_pbt->setIcon(QPixmap(":/Image/star1.png"));
    ui->star1_pbt->setIconSize(QSize(30,30));
    ui->star2_pbt->setIcon(QPixmap(":/Image/star1.png"));
    ui->star2_pbt->setIconSize(QSize(30,30));
    ui->star3_pbt->setIcon(QPixmap(":/Image/star1.png"));
    ui->star3_pbt->setIconSize(QSize(30,30));
    ui->star4_pbt->setIcon(QPixmap(":/Image/star.png"));
    ui->star4_pbt->setIconSize(QSize(30,30));
    ui->star5_pbt->setIcon(QPixmap(":/Image/star.png"));
    ui->star5_pbt->setIconSize(QSize(30,30));
    star_tmp = 3.0 ;
    waiter_Flag = 1;
    for(int i = 0 ; i < Data::waiter_num ; i++)
    {
        if(Data::tb[users->get_table_num()-1].get_waiter_mobile() == Data::waiter[i].get_mobile())
        {
            Data::waiter[i].current_user_remark_star = 3.0;
            break;
        }
    }
}

void Review::on_star4_pbt_clicked()
{
    ui->star1_pbt->setIcon(QPixmap(":/Image/star1.png"));
    ui->star1_pbt->setIconSize(QSize(30,30));
    ui->star2_pbt->setIcon(QPixmap(":/Image/star1.png"));
    ui->star2_pbt->setIconSize(QSize(30,30));
    ui->star3_pbt->setIcon(QPixmap(":/Image/star1.png"));
    ui->star3_pbt->setIconSize(QSize(30,30));
    ui->star4_pbt->setIcon(QPixmap(":/Image/star1.png"));
    ui->star4_pbt->setIconSize(QSize(30,30));
    ui->star5_pbt->setIcon(QPixmap(":/Image/star.png"));
    ui->star5_pbt->setIconSize(QSize(30,30));
    star_tmp = 4.0 ;
    waiter_Flag = 1;
    for(int i = 0 ; i < Data::waiter_num ; i++)
    {
        if(Data::tb[users->get_table_num()-1].get_waiter_mobile() == Data::waiter[i].get_mobile())
        {
            Data::waiter[i].current_user_remark_star = 4.0;
            break;
        }
    }
}

void Review::on_star5_pbt_clicked()
{
    ui->star1_pbt->setIcon(QPixmap(":/Image/star1.png"));
    ui->star1_pbt->setIconSize(QSize(30,30));
    ui->star2_pbt->setIcon(QPixmap(":/Image/star1.png"));
    ui->star2_pbt->setIconSize(QSize(30,30));
    ui->star3_pbt->setIcon(QPixmap(":/Image/star1.png"));
    ui->star3_pbt->setIconSize(QSize(30,30));
    ui->star4_pbt->setIcon(QPixmap(":/Image/star1.png"));
    ui->star4_pbt->setIconSize(QSize(30,30));
    ui->star5_pbt->setIcon(QPixmap(":/Image/star1.png"));
    ui->star5_pbt->setIconSize(QSize(30,30));
    star_tmp = 5.0 ;
    waiter_Flag = 1;
    for(int i = 0 ; i < Data::waiter_num ; i++)
    {
        if(Data::tb[users->get_table_num()-1].get_waiter_mobile() == Data::waiter[i].get_mobile())
        {
            Data::waiter[i].current_user_remark_star = 5.0;
            break;
        }
    }
}

void Review::on_pushButton_clicked()
{
    int ret = QMessageBox::question(this,tr("提交确认"),tr("确认提交评论吗？"),QMessageBox::Yes,QMessageBox::No);
    if(ret == QMessageBox::Yes)
    {
      //存储服务员评价
      for(int i = 0 ;i < Data::waiter_num ; i++)
      {
          if(Data::tb[users->get_table_num()-1].get_waiter_mobile() == Data::waiter[i].get_mobile())
          {
              if(Data::waiter[i].current_user_remark_star == 0)
                  break;
              Data::waiter[i].set_remark_num(Data::waiter[i].get_remark_num()+1);
              double temp;
              temp = (Data::waiter[i].get_remark_star()*(Data::waiter[i].get_remark_num()-1)+ Data::waiter[i].current_user_remark_star )/Data::waiter[i].get_remark_num();
              Data::waiter[i].set_remark_star(temp);
              Data::remark_waiter[Data::remark_waiter_num].set_mobile(users->get_mobile());
              Data::remark_waiter[Data::remark_waiter_num].set_waiter_mobile(Data::waiter[i].get_mobile());
              Data::remark_waiter[Data::remark_waiter_num].set_star(Data::waiter[i].current_user_remark_star);
              Data::remark_waiter[Data::remark_waiter_num].set_remark_text(Data::waiter[i].get_remark_text());
              Data::remark_waiter_num ++ ;
              break;
          }
      }
      //储存菜品评价
      for(int i = 0 ; i < users->dish_kind_num ; i++)
      {
          if(users->uhod[i].get_num() == 0)
              continue;
          Data::remark_dishes[Data::remark_dish_num].set_mobile(users->get_mobile());
          Data::remark_dishes[Data::remark_dish_num].set_dish_name(users->uhod[i].get_name());
          Data::remark_dishes[Data::remark_dish_num].set_star(users->uhod[i].current_remark_star);
          Data::remark_dishes[Data::remark_dish_num].set_remark_text(users->uhod[i].get_remark_text());
          Data::remark_dish_num ++ ;
      }
      this->accept();
      close();
    }

}

void Review::on_star1_pbt_2_clicked()
{
    ui->star1_pbt_2->setIcon(QPixmap(":/Image/star1.png"));
    ui->star1_pbt_2->setIconSize(QSize(30,30));
    ui->star2_pbt_2->setIcon(QPixmap(":/Image/star.png"));
    ui->star2_pbt_2->setIconSize(QSize(30,30));
    ui->star3_pbt_2->setIcon(QPixmap(":/Image/star.png"));
    ui->star3_pbt_2->setIconSize(QSize(30,30));
    ui->star4_pbt_2->setIcon(QPixmap(":/Image/star.png"));
    ui->star4_pbt_2->setIconSize(QSize(30,30));
    ui->star5_pbt_2->setIcon(QPixmap(":/Image/star.png"));
    ui->star5_pbt_2->setIconSize(QSize(30,30));
    star_tmp = 1.0;
    for(int i = 0 ; i < users->dish_kind_num ; i++)
    {
        if(users->uhod[i].get_name() == order_dish[current_order_row])
        {
            users->uhod[i].current_remark_star = 1;
            users->uhod[i].remarked = 1;
            break;
        }
    }
}

void Review::on_star2_pbt_2_clicked()
{
    ui->star1_pbt_2->setIcon(QPixmap(":/Image/star1.png"));
    ui->star1_pbt_2->setIconSize(QSize(30,30));
    ui->star2_pbt_2->setIcon(QPixmap(":/Image/star1.png"));
    ui->star2_pbt_2->setIconSize(QSize(30,30));
    ui->star3_pbt_2->setIcon(QPixmap(":/Image/star.png"));
    ui->star3_pbt_2->setIconSize(QSize(30,30));
    ui->star4_pbt_2->setIcon(QPixmap(":/Image/star.png"));
    ui->star4_pbt_2->setIconSize(QSize(30,30));
    ui->star5_pbt_2->setIcon(QPixmap(":/Image/star.png"));
    ui->star5_pbt_2->setIconSize(QSize(30,30));
    star_tmp = 2.0;
    for(int i = 0 ; i < users->dish_kind_num ; i++)
    {
        if(users->uhod[i].get_name() == order_dish[current_order_row])
        {
            users->uhod[i].current_remark_star = 2;
            users->uhod[i].remarked = 1;
            break;
        }
    }
}


void Review::on_star3_pbt_2_clicked()
{
    ui->star1_pbt_2->setIcon(QPixmap(":/Image/star1.png"));
    ui->star1_pbt_2->setIconSize(QSize(30,30));
    ui->star2_pbt_2->setIcon(QPixmap(":/Image/star1.png"));
    ui->star2_pbt_2->setIconSize(QSize(30,30));
    ui->star3_pbt_2->setIcon(QPixmap(":/Image/star1.png"));
    ui->star3_pbt_2->setIconSize(QSize(30,30));
    ui->star4_pbt_2->setIcon(QPixmap(":/Image/star.png"));
    ui->star4_pbt_2->setIconSize(QSize(30,30));
    ui->star5_pbt_2->setIcon(QPixmap(":/Image/star.png"));
    ui->star5_pbt_2->setIconSize(QSize(30,30));
    star_tmp = 3.0;
    for(int i = 0 ; i < users->dish_kind_num ; i++)
    {
        if(users->uhod[i].get_name() == order_dish[current_order_row])
        {
            users->uhod[i].current_remark_star = 3;
            users->uhod[i].remarked = 1;
            break;
        }
    }
}

void Review::on_star4_pbt_2_clicked()
{
    ui->star1_pbt_2->setIcon(QPixmap(":/Image/star1.png"));
    ui->star1_pbt_2->setIconSize(QSize(30,30));
    ui->star2_pbt_2->setIcon(QPixmap(":/Image/star1.png"));
    ui->star2_pbt_2->setIconSize(QSize(30,30));
    ui->star3_pbt_2->setIcon(QPixmap(":/Image/star1.png"));
    ui->star3_pbt_2->setIconSize(QSize(30,30));
    ui->star4_pbt_2->setIcon(QPixmap(":/Image/star1.png"));
    ui->star4_pbt_2->setIconSize(QSize(30,30));
    ui->star5_pbt_2->setIcon(QPixmap(":/Image/star.png"));
    ui->star5_pbt_2->setIconSize(QSize(30,30));
    star_tmp = 4.0;
    for(int i = 0 ; i < users->dish_kind_num ; i++)
    {
        if(users->uhod[i].get_name() == order_dish[current_order_row])
        {
            users->uhod[i].current_remark_star = 4;
            users->uhod[i].remarked = 1;
            break;
        }
    }
}

void Review::on_star5_pbt_2_clicked()
{
    ui->star1_pbt_2->setIcon(QPixmap(":/Image/star1.png"));
    ui->star1_pbt_2->setIconSize(QSize(30,30));
    ui->star2_pbt_2->setIcon(QPixmap(":/Image/star1.png"));
    ui->star2_pbt_2->setIconSize(QSize(30,30));
    ui->star3_pbt_2->setIcon(QPixmap(":/Image/star1.png"));
    ui->star3_pbt_2->setIconSize(QSize(30,30));
    ui->star4_pbt_2->setIcon(QPixmap(":/Image/star1.png"));
    ui->star4_pbt_2->setIconSize(QSize(30,30));
    ui->star5_pbt_2->setIcon(QPixmap(":/Image/star1.png"));
    ui->star5_pbt_2->setIconSize(QSize(30,30));
    star_tmp = 5.0;
   for(int i = 0 ; i < users->dish_kind_num ; i++)
   {
       if(users->uhod[i].get_name() == order_dish[current_order_row])
       {
           users->uhod[i].current_remark_star = 5;
           users->uhod[i].remarked = 1;
           break;
       }
   }
}

void Review::on_back_btn_clicked()
{
    if(current_order_row >  0)
    {
        ui->star1_pbt_2->setIcon(QPixmap(":/Image/star.png"));
        ui->star1_pbt_2->setIconSize(QSize(30,30));
        ui->star2_pbt_2->setIcon(QPixmap(":/Image/star.png"));
        ui->star2_pbt_2->setIconSize(QSize(30,30));
        ui->star3_pbt_2->setIcon(QPixmap(":/Image/star.png"));
        ui->star3_pbt_2->setIconSize(QSize(30,30));
        ui->star4_pbt_2->setIcon(QPixmap(":/Image/star.png"));
        ui->star4_pbt_2->setIconSize(QSize(30,30));
        ui->star5_pbt_2->setIcon(QPixmap(":/Image/star.png"));
        ui->star5_pbt_2->setIconSize(QSize(30,30));
        current_order_row -- ;
        ui->dish_name_label->setText(order_dish[current_order_row]);
       for(int i = 0 ; i < users->dish_kind_num ; i++)
       {
           if(users->uhod[i].get_name() == order_dish[current_order_row])
           {
               ui->dishes_textEdit->setText(users->uhod[i].get_remark_text());
               if(users->uhod[i].remarked)
               {
                   int temp = users->uhod[i].current_remark_star;
                   switch(temp)
                   {
                   case 1:
                       ui->star1_pbt_2->clicked();
                       break;
                   case 2:
                       ui->star2_pbt_2->clicked();
                       break;
                   case 3:
                       ui->star3_pbt_2->clicked();
                       break;
                   case 4:
                       ui->star4_pbt_2->clicked();
                       break;
                   case 5:
                       ui->star5_pbt_2->clicked();
                       break;
                   default:
                       break;
                   }
               }
               break;
           }
       }
    }
}

void Review::on_next_btn_clicked()
{
    if(current_order_row <  user_order_num - 1)
    {
        ui->star1_pbt_2->setIcon(QPixmap(":/Image/star.png"));
        ui->star1_pbt_2->setIconSize(QSize(30,30));
        ui->star2_pbt_2->setIcon(QPixmap(":/Image/star.png"));
        ui->star2_pbt_2->setIconSize(QSize(30,30));
        ui->star3_pbt_2->setIcon(QPixmap(":/Image/star.png"));
        ui->star3_pbt_2->setIconSize(QSize(30,30));
        ui->star4_pbt_2->setIcon(QPixmap(":/Image/star.png"));
        ui->star4_pbt_2->setIconSize(QSize(30,30));
        ui->star5_pbt_2->setIcon(QPixmap(":/Image/star.png"));
        ui->star5_pbt_2->setIconSize(QSize(30,30));
        current_order_row ++ ;
        ui->dish_name_label->setText(order_dish[current_order_row]);
           for(int i = 0 ; i < users->dish_kind_num ; i++)
           {
               if(users->uhod[i].get_name() == order_dish[current_order_row])
               {
                   ui->dishes_textEdit->setText(users->uhod[i].get_remark_text());
                   if(users->uhod[i].remarked)
                   {
                       int temp = users->uhod[i].current_remark_star;
                       switch(temp)
                       {
                       case 1:
                           ui->star1_pbt_2->clicked();
                           break;
                       case 2:
                           ui->star2_pbt_2->clicked();
                           break;
                       case 3:
                           ui->star3_pbt_2->clicked();
                           break;
                       case 4:
                           ui->star4_pbt_2->clicked();
                           break;
                       case 5:
                           ui->star5_pbt_2->clicked();
                           break;
                       default:
                           break;
                       }
                   }
                   break;
               }
           }

    }
}

void Review::paintEvent(QPaintEvent *event)
{
    for(int i = 0 ; i < users->dish_kind_num ; i ++)
    {
        if(users->uhod[i].get_name() == order_dish[current_order_row])
        {
            users->uhod[i].set_remark_text(ui->dishes_textEdit->toPlainText());
            break;
        }
    }
    for(int i = 0 ; i< Data::waiter_num ; i++)
    {
        if(Data::tb[users->get_table_num()-1].get_waiter_mobile() == Data::waiter[i].get_mobile())
        {
            Data::waiter[i].set_remark_text(ui->waiter_textEdit->toPlainText());
            break;
        }
    }
    QDialog::paintEvent(event);
}
