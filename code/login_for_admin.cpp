#include "login_for_admin.h"
#include "ui_login_for_admin.h"
#include "all_headers_needed.h"
#include "identity_chosen.h"
#include "menu_admin.h"
Login_for_admin::Login_for_admin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login_for_admin)
{
    ui->setupUi(this);
}

Login_for_admin::~Login_for_admin()
{
    delete ui;
}


void Login_for_admin::on_pushButton_4_clicked()
{
    identity_chosen idt;
    close();
    idt.exec();
}

void Login_for_admin::on_pb_admin_clicked()
{
    if(ui->txtname_admin->text() == "admin" && ui->txtpwd_admin->text() == "admin")
    {
        qDebug()<<ui->txtname_admin->text()<<ui->txtpwd_admin->text();
        accept();
    }
    else
    {
        QMessageBox::warning(this,tr("警告"),tr("用户名或密码错误！"),QMessageBox::Yes);
        this->ui->txtname_admin->clear();
        this->ui->txtpwd_admin->clear();
        this->ui->txtname_admin->setFocus();
    }
}
