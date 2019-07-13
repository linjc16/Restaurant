#include "table_admin.h"

menu_admin::menu_admin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::menu_admin)
{
    ui->setupUi(this);
}

menu_admin::~menu_admin()
{
    delete ui;
}
