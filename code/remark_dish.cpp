#include "remark_dish.h"
#include "ui_remark_dish.h"

Remark_dish::Remark_dish(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Remark_dish)
{
    ui->setupUi(this);
}

Remark_dish::~Remark_dish()
{
    delete ui;
}
