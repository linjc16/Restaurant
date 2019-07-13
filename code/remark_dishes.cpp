#include "remark_dishes.h"
#include "ui_remark_dishes.h"
#include "logindlg.h"
#include "data.h"
int current_row = -1 ;
Remark_dishes::Remark_dishes(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Remark_dishes)
{
    ui->setupUi(this);
    ui->back_btn_2->setIcon(QPixmap(":/Image/向前.png"));
    ui->back_btn_2->setIconSize(QSize(30,30));
    ui->next_btn_2->setIcon(QPixmap(":/Image/向后.png"));
    ui->next_btn_2->setIconSize(QSize(30,30));
    ui->label_5->setText(Data::remark_dishes[0].get_dish_name());
    int temp = Data::remark_dishes[0].get_star();
       switch(temp)
       {
       case 1:
           ui->star1_pbt_3->clicked();
           break;
       case 2:
           ui->star2_pbt_3->clicked();
           break;
       case 3:
           ui->star3_pbt_3->clicked();
           break;
       case 4:
           ui->star4_pbt_3->clicked();
           break;
       case 5:
           ui->star5_pbt_3->clicked();
           break;
       default:
           break;
       }
     ui->waiter_textEdit_2->setText(Data::remark_dishes[0].get_remark_text());
     current_row = 0;
     ui->label_7->setText(Data::remark_dishes[0].get_mobile());
}

Remark_dishes::~Remark_dishes()
{
    delete ui;
}

void Remark_dishes::on_star1_pbt_3_clicked()
{
    ui->star1_pbt_3->setIcon(QPixmap(":/Image/star1.png"));
    ui->star1_pbt_3->setIconSize(QSize(30,30));
    ui->star2_pbt_3->setIcon(QPixmap(":/Image/star.png"));
    ui->star2_pbt_3->setIconSize(QSize(30,30));
    ui->star3_pbt_3->setIcon(QPixmap(":/Image/star.png"));
    ui->star3_pbt_3->setIconSize(QSize(30,30));
    ui->star4_pbt_3->setIcon(QPixmap(":/Image/star.png"));
    ui->star4_pbt_3->setIconSize(QSize(30,30));
    ui->star5_pbt_3->setIcon(QPixmap(":/Image/star.png"));
    ui->star5_pbt_3->setIconSize(QSize(30,30));
}

void Remark_dishes::on_star2_pbt_3_clicked()
{
    ui->star1_pbt_3->setIcon(QPixmap(":/Image/star1.png"));
    ui->star1_pbt_3->setIconSize(QSize(30,30));
    ui->star2_pbt_3->setIcon(QPixmap(":/Image/star1.png"));
    ui->star2_pbt_3->setIconSize(QSize(30,30));
    ui->star3_pbt_3->setIcon(QPixmap(":/Image/star.png"));
    ui->star3_pbt_3->setIconSize(QSize(30,30));
    ui->star4_pbt_3->setIcon(QPixmap(":/Image/star.png"));
    ui->star4_pbt_3->setIconSize(QSize(30,30));
    ui->star5_pbt_3->setIcon(QPixmap(":/Image/star.png"));
    ui->star5_pbt_3->setIconSize(QSize(30,30));
}

void Remark_dishes::on_star3_pbt_3_clicked()
{
    ui->star1_pbt_3->setIcon(QPixmap(":/Image/star1.png"));
    ui->star1_pbt_3->setIconSize(QSize(30,30));
    ui->star2_pbt_3->setIcon(QPixmap(":/Image/star1.png"));
    ui->star2_pbt_3->setIconSize(QSize(30,30));
    ui->star3_pbt_3->setIcon(QPixmap(":/Image/star1.png"));
    ui->star3_pbt_3->setIconSize(QSize(30,30));
    ui->star4_pbt_3->setIcon(QPixmap(":/Image/star.png"));
    ui->star4_pbt_3->setIconSize(QSize(30,30));
    ui->star5_pbt_3->setIcon(QPixmap(":/Image/star.png"));
    ui->star5_pbt_3->setIconSize(QSize(30,30));
}

void Remark_dishes::on_star4_pbt_3_clicked()
{
    ui->star1_pbt_3->setIcon(QPixmap(":/Image/star1.png"));
    ui->star1_pbt_3->setIconSize(QSize(30,30));
    ui->star2_pbt_3->setIcon(QPixmap(":/Image/star1.png"));
    ui->star2_pbt_3->setIconSize(QSize(30,30));
    ui->star3_pbt_3->setIcon(QPixmap(":/Image/star1.png"));
    ui->star3_pbt_3->setIconSize(QSize(30,30));
    ui->star4_pbt_3->setIcon(QPixmap(":/Image/star1.png"));
    ui->star4_pbt_3->setIconSize(QSize(30,30));
    ui->star5_pbt_3->setIcon(QPixmap(":/Image/star.png"));
    ui->star5_pbt_3->setIconSize(QSize(30,30));
}

void Remark_dishes::on_star5_pbt_3_clicked()
{
    ui->star1_pbt_3->setIcon(QPixmap(":/Image/star1.png"));
    ui->star1_pbt_3->setIconSize(QSize(30,30));
    ui->star2_pbt_3->setIcon(QPixmap(":/Image/star1.png"));
    ui->star2_pbt_3->setIconSize(QSize(30,30));
    ui->star3_pbt_3->setIcon(QPixmap(":/Image/star1.png"));
    ui->star3_pbt_3->setIconSize(QSize(30,30));
    ui->star4_pbt_3->setIcon(QPixmap(":/Image/star1.png"));
    ui->star4_pbt_3->setIconSize(QSize(30,30));
    ui->star5_pbt_3->setIcon(QPixmap(":/Image/star1.png"));
    ui->star5_pbt_3->setIconSize(QSize(30,30));
}

void Remark_dishes::on_back_btn_2_clicked()
{
    if(current_row >  0)
    {
        current_row -- ;
        ui->label_5->setText(Data::remark_dishes[current_row].get_dish_name());
        int temp = Data::remark_dishes[current_row].get_star();
           switch(temp)
           {
           case 1:
               ui->star1_pbt_3->clicked();
               break;
           case 2:
               ui->star2_pbt_3->clicked();
               break;
           case 3:
               ui->star3_pbt_3->clicked();
               break;
           case 4:
               ui->star4_pbt_3->clicked();
               break;
           case 5:
               ui->star5_pbt_3->clicked();
               break;
           default:
               break;
           }
         ui->waiter_textEdit_2->setText(Data::remark_dishes[current_row].get_remark_text());
         ui->label_7->setText(Data::remark_dishes[current_row].get_mobile());

    }
}

void Remark_dishes::on_next_btn_2_clicked()
{
    if(current_row < Data::remark_dish_num - 1)
    {
        current_row ++ ;
        ui->label_5->setText(Data::remark_dishes[current_row].get_dish_name());
        int temp = Data::remark_dishes[current_row].get_star();
           switch(temp)
           {
           case 1:
               ui->star1_pbt_3->clicked();
               break;
           case 2:
               ui->star2_pbt_3->clicked();
               break;
           case 3:
               ui->star3_pbt_3->clicked();
               break;
           case 4:
               ui->star4_pbt_3->clicked();
               break;
           case 5:
               ui->star5_pbt_3->clicked();
               break;
           default:
               break;
           }
         ui->waiter_textEdit_2->setText(Data::remark_dishes[current_row].get_remark_text());
         ui->label_7->setText(Data::remark_dishes[current_row].get_mobile());

    }
}
