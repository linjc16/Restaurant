#include "remark_waiter.h"
#include "ui_remark_waiter.h"
#include "logindlg.h"
#include "data.h"
int cur_row = -1 ;
Remark_waiter::Remark_waiter(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Remark_waiter)
{
    ui->setupUi(this);
    ui->star1_pbt_3->setIcon(QPixmap(":/Image/star.png"));
    ui->star1_pbt_3->setIconSize(QSize(30,30));
    ui->star2_pbt_3->setIcon(QPixmap(":/Image/star.png"));
    ui->star2_pbt_3->setIconSize(QSize(30,30));
    ui->star3_pbt_3->setIcon(QPixmap(":/Image/star.png"));
    ui->star3_pbt_3->setIconSize(QSize(30,30));
    ui->star4_pbt_3->setIcon(QPixmap(":/Image/star.png"));
    ui->star4_pbt_3->setIconSize(QSize(30,30));
    ui->star5_pbt_3->setIcon(QPixmap(":/Image/star.png"));
    ui->star5_pbt_3->setIconSize(QSize(30,30));
    ui->back_btn_2->setIcon(QPixmap(":/Image/向前.png"));
    ui->back_btn_2->setIconSize(QSize(30,30));
    ui->next_btn_2->setIcon(QPixmap(":/Image/向后.png"));
    ui->next_btn_2->setIconSize(QSize(30,30));
    ui->label_5->setText(Data::remark_waiter[0].get_waiter_mobile());
    int temp = Data::remark_waiter[0].get_star();
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
     ui->waiter_textEdit_2->setText(Data::remark_waiter[0].get_remark_text());
     ui->label_7->setText(Data::remark_waiter[0].get_mobile());
     cur_row = 0;

}

Remark_waiter::~Remark_waiter()
{
    delete ui;
}

void Remark_waiter::on_star1_pbt_3_clicked()
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

void Remark_waiter::on_star2_pbt_3_clicked()
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

void Remark_waiter::on_star3_pbt_3_clicked()
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

void Remark_waiter::on_star4_pbt_3_clicked()
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

void Remark_waiter::on_star5_pbt_3_clicked()
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

void Remark_waiter::on_back_btn_2_clicked()
{
    if(cur_row >  0)
    {
        cur_row -- ;
        ui->label_5->setText(Data::remark_waiter[cur_row].get_waiter_mobile());
        int temp = Data::remark_waiter[cur_row].get_star();
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
         ui->waiter_textEdit_2->setText(Data::remark_waiter[cur_row].get_remark_text());
         ui->label_7->setText(Data::remark_waiter[cur_row].get_mobile());

    }
}

void Remark_waiter::on_next_btn_2_clicked()
{
    if(cur_row <  Data::remark_waiter_num - 1)
    {
        cur_row ++ ;
        ui->label_5->setText(Data::remark_waiter[cur_row].get_waiter_mobile());
        int temp = Data::remark_waiter[cur_row].get_star();
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
         ui->waiter_textEdit_2->setText(Data::remark_waiter[cur_row].get_remark_text());
         ui->label_7->setText(Data::remark_waiter[cur_row].get_mobile());

    }
}
