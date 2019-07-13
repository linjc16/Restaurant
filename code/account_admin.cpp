#include "account_admin.h"
#include "ui_account_admin.h"

account_admin::account_admin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::account_admin)
{
    ui->setupUi(this);
}

account_admin::~account_admin()
{
    delete ui;
}
