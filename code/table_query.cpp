#include "table_query.h"
#include "ui_table_query.h"
#include "all_headers_needed.h"
#include "logindlg.h"
#include "data.h"
using namespace std;
Table_query::Table_query(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Table_query)
{
    ui->setupUi(this);
    ui->leave_pbt->setStyleSheet("QPushButton{background-color:rgb(212, 111, 21);\
                                 color:white; border-radius:10%;font: 13pt '微软雅黑' ;}"
                                 "QPushButton:hover{background-color:rgb(240, 111, 21); }"
                                  );
    int nSeat = 36;
    int nCol = round(sqrt(nSeat));
    int nSize = 50, nDiv = 60;
    for(int i = 1 ;i <= nSeat;i++)
    {
        seat.push_back(new QPushButton(ui->groupBox));
    }

    for(int i = 0;i< nSeat; ++i)
    {
        seat[i]->setGeometry(25 + ((i) % nCol) * nDiv, 25 + ((i) / nCol) * nDiv, nSize, nSize);
        //seat[i]->setText(QString("桌号%0").arg(i+1));
        seat[i]->show();
        seat[i]->setStyleSheet("QPushButton{border-image:url(:/Image/餐桌_s3.png);\
                               color:white; border-radius:20%;font: 9pt '微软雅黑' ;}"
                               "QPushButton:hover{background-color:rgb(44, 200, 255); }");
        if(Data::tb[i].is_free == 0)
        {
            seat[i]->setDisabled(1);
            seat[i]->setStyleSheet("QPushButton{border-image:url(:/Image/餐桌（忙碌）.png);\
                                   color:white; border-radius:20%;font: 9pt '微软雅黑' ;}"
                                   "QPushButton:hover{background-color:rgb(44, 200, 255); }");
        }
        else
        {
            seat[i]->setDisabled(0);
        }
    connect(seat[i], &QPushButton::clicked,
        [=]()
        {
            SeatClicked(i);
        });
    }
    ui->leave_pbt->setDisabled(1);
    if(users->have_seated == 1 && users->leave_seat == 0)
    {
        ui->label->setText(QString("当前桌号 %1").arg(users->get_table_num()));
        if(users->have_settle_account == 1)
        {
            ui->leave_pbt->setEnabled(1);
        }
    }


}

Table_query::~Table_query()
{
    delete ui;
}



void Table_query::SeatClicked(int i)
{
    int ret = 0;

    if(users->have_seated == 0)
    {
        users->set_table_num(i+1);
        ret = QMessageBox::question(this,tr("选位确认"),tr("确认选择%1号位吗？").arg(i+1),QMessageBox::Yes,QMessageBox::No);
        if(ret == QMessageBox::Yes)
        {
            QMessageBox::information(this,tr("提示"),tr("选位成功"),QMessageBox::Yes);
            Data::tb[i].is_free = 0;
            Data::tb[i].set_mobile(users->get_mobile());
            users->have_seated = 1;
            users->leave_seat = 0;
            this->accept();
            this->close();
        }
    }
}



void Table_query::on_leave_pbt_clicked()
{
    int ret;
    ret = QMessageBox::question(this,tr("选位确认"),tr("确认离开座位吗？"),QMessageBox::Yes,QMessageBox::No);
    if(ret == QMessageBox::Yes)
    {
      users->leave_seat = 1;
      users->have_seated = 0;
      ui->leave_pbt->setDisabled(1);
      for(int i = 0 ; i < 36 ; i++)
      {
          if(Data::tb[i].is_free == 1)
              continue;
          if(Data::tb[i].get_num() == users->get_table_num())
          {
              Data::tb[i].is_free = 1;
              break;
          }
      }
      close();
      this->accept();
    }
}
