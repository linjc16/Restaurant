#include "have_already_ordered.h"
#include "ui_have_already_ordered.h"

Have_already_ordered::Have_already_ordered(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Have_already_ordered)
{
    ui->setupUi(this);
}

Have_already_ordered::~Have_already_ordered()
{
    delete ui;
}
