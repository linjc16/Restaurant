#include "identity_chosen.h"
#include "ui_identity_chosen.h"
#include "logindlg.h"
#include "all_headers_needed.h"
identity_chosen::identity_chosen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::identity_chosen)
{
    ui->setupUi(this);
}

identity_chosen::~identity_chosen()
{
    delete ui;
}

void identity_chosen::on_user_Button_clicked()
{
    LoginDlg dlg;
    close();
    dlg.exec();
}

