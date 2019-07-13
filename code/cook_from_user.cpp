#include "cook_from_user.h"
#include "ui_cook_from_user.h"

Cook_from_user::Cook_from_user(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Cook_from_user)
{
    ui->setupUi(this);
}

Cook_from_user::~Cook_from_user()
{
    delete ui;
}
