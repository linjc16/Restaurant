#include "register.h"
#include "ui_register.h"
#include "QMessageBox.h"
#include <QDialog>
#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>
#include "logindlg.h"
#include "ordinary_user.h"
#include "data.h"
Register::Register(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Register)
{
    ui->setupUi(this);
    //使得手机号输入框只能输入数字 正则表达式
    QRegExp regx("[1-9][0-9]+$");
    QValidator *validator = new QRegExpValidator(regx, ui->mobile);
    ui->mobile->setValidator(validator);
    //使得密码输入框只能输入密码 正则表达式
    QRegExp regx_pwd("^[A-Za-z0-9]+$");
    QValidator *validator_pwd = new QRegExpValidator(regx_pwd, ui->reg_pwd);
    ui->reg_pwd->setValidator(validator_pwd);
    //使得密码输入框只能输入密码 正则表达式
    QValidator *validator_pwd_ag = new QRegExpValidator(regx_pwd, ui->reg_pwd_check);
    ui->reg_pwd_check->setValidator(validator_pwd_ag);
    ui->pushButton->setStyleSheet("QPushButton{background-color:rgb(44, 178, 214);\
        color:white; border-radius:10%;font: 13pt '微软雅黑' ;}"
        "QPushButton:hover{background-color:rgb(44, 200, 255); }"
         );
    ui->pushButton_2->setStyleSheet("QPushButton{background-color:rgb(116, 224, 191);\
        color:white; border-radius:10%;font: 13pt '微软雅黑';}"
            "QPushButton:hover{background-color:rgb(116, 240, 220); }"
                                );
}

Register::~Register()
{
    delete ui;
}

//重复注册判断
bool Register::login_re_reg(const QString mp)
{
    for(int i = 0 ; i < Data::user_num ; i++)
    {
        if(Data::user[i].get_mobile() == mp)
        {
            return 1;
        }
    }
    for(int i = 0 ; i < Data::waiter_num ; i++)
    {
        if(Data::waiter[i].get_mobile() == mp)
            return 1 ;
    }
    for(int i = 0 ; i < Data::cook_num ; i++)
    {
        if(Data::cook[i].get_mobile() == mp)
            return 1 ;
    }
    for(int i = 0 ; i < Data::admin_num ; i ++)
    {
        if(Data::admin[i].get_mobile() == mp)
            return 1;
    }
    return 0;
}
//空密码判断
bool Register::is_blank_pwd(const QString &pwd)
{
    if(pwd.size()==0)
    {
        return 0;
    }
    else return 1;
}
//手机号有效性判断
bool Register::is_valid_mobile(const QString &mobile)
{
    if(mobile.size()!=11)
    {
        return 0;
    }
    if(mobile[0]!='1')
    {
        return 0;
    }
    for(int i=1;i<11;i++)
    {
        if(mobile[i]<'0'||mobile[i]>'9')
        {
            return 0;
        }
    }
    return 1;
}

//注册确认
void Register::on_pushButton_clicked()
{
    Ordinary_user ou;
    QString mp = ui->mobile->text();
    if(login_re_reg(mp))
    {
        QMessageBox::warning(this,tr("警告"),tr("该手机号已被注册！"),QMessageBox::Yes);
    }
    else if(is_valid_mobile(ui->mobile->text())&&ui->reg_pwd->text()==ui->reg_pwd_check->text()&&is_blank_pwd(ui->reg_pwd->text()))
    {
        ou.set_mobile(ui->mobile->text());
        ou.set_password(ui->reg_pwd->text());
        ou.set_identity();
        ou.save_to_database_register();
        Data::user[Data::user_num].set_mobile(ui->mobile->text());
        Data::user[Data::user_num].set_password(ui->reg_pwd->text());
        Data::user[Data::user_num].set_identity();
        Data::user_num ++ ;
        accept();
    }
    else if(!is_valid_mobile(ui->mobile->text()))
    {
        QMessageBox::warning(this,tr("警告"),tr("手机号不规范！"),QMessageBox::Yes);
        this->ui->mobile->clear();
        this->ui->mobile->setFocus();
    }
    else if(!is_blank_pwd(ui->reg_pwd->text()))
    {
        QMessageBox::warning(this,tr("警告"),tr("密码不能为空！"),QMessageBox::Yes);
        this->ui->reg_pwd->setFocus();
    }
    else
    {
        QMessageBox::warning(this,tr("警告"),tr("两次输入的密码不一致！"),QMessageBox::Yes);
        this->ui->reg_pwd->clear();
        this->ui->reg_pwd_check->clear();
        this->ui->reg_pwd->setFocus();
    }
}
//重绘
void Register::paintEvent(QPaintEvent *event)
{
    if(ui->mobile->text().size() < 11 && ui->mobile->text().size() > 0)
    {
        ui->label_m->show();
        ui->label_m->setText("请输入11位手机号");
        ui->mobile_label->hide();
    }
    else if(ui->mobile->text().size() == 11)
    {
        if(login_re_reg(ui->mobile->text()))
        {
            ui->label_m->show();
            ui->label_m->setText("该账号已被注册");
            ui->mobile_label->hide();
        }
        else if(is_valid_mobile(ui->mobile->text()))
        {
            ui->mobile_label->show();
            ui->mobile_label->setPixmap(QPixmap(":/Image/right240.png").scaled(18,18));
            ui->label_m->hide();
        }
    }
    else if(ui->mobile->text().size() > 11)
    {
        ui->mobile_label->hide();
        ui->label_m->show();
        ui->label_m->setText("请输入11位手机号");
    }

    if(ui->reg_pwd->text().size() < 7 && ui->reg_pwd->text().size() > 0)
    {
        ui->label_p->show();
        ui->label_p->setText("长度不小于7位");
        ui->password_label->hide();
    }
    else if(ui->reg_pwd->text().size() >= 7)
    {
        ui->password_label->show();
        ui->password_label->setPixmap(QPixmap(":/Image/right240.png").scaled(18,18));
        ui->label_p->hide();
    }

    if(ui->reg_pwd_check->text().size() > 0 && ui->reg_pwd_check->text() != ui->reg_pwd->text())
    {
        ui->label_ep->show();
        ui->label_ep->setText("两次密码不一致");
        ui->pwd_ensure_label->hide();
    }
    else if(ui->reg_pwd_check->text() == ui->reg_pwd->text() && ui->reg_pwd_check->text().size() > 0)
    {
        ui->pwd_ensure_label->show();
        ui->label_ep->hide();
        ui->pwd_ensure_label->setPixmap(QPixmap(":/Image/right240.png").scaled(18,18));
    }

    QDialog::paintEvent(event);
}

