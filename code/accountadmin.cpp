#include "accountadmin.h"
#include "ui_accountadmin.h"
#include "all_headers_needed.h"
#include "data.h"
AccountAdmin::AccountAdmin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AccountAdmin)
{
    ui->setupUi(this);
    account_model = new QSqlTableModel(this);
    account_model -> setTable("account");
    account_model -> select();
    account_model -> setEditStrategy(QSqlTableModel::OnManualSubmit);
    ui->tableView_account ->setModel(account_model);
    ui->tableView_account->horizontalHeader()->setDefaultAlignment(Qt::AlignCenter);
    dishes_model = new QSqlTableModel(this);
    dishes_model ->setTable("dish");
    dishes_model ->select();
    dishes_model ->setEditStrategy(QSqlTableModel::OnManualSubmit);
    ui->tableView_dishes->setModel(dishes_model);
    ui->tableView_dishes->horizontalHeader()->setDefaultAlignment(Qt::AlignCenter);
}

AccountAdmin::~AccountAdmin()
{
    delete ui;
}

void AccountAdmin::on_pbt_1_clicked()
{
    account_model->database().transaction();
    if(account_model->submitAll())
    {
        if(account_model->database().commit())
            QMessageBox::information(this,tr("tableModel"),tr("数据修改成功！"));
    }
    else
    {
        account_model->database().rollback();
        QMessageBox::warning(this,tr("tableModel"),
                             tr("数据库错误：1&").arg(account_model->lastError().text()),QMessageBox::Ok);

    }
}

void AccountAdmin::on_pbt_2_clicked()
{
    account_model->revertAll();
}

void AccountAdmin::on_pbt_3_clicked()
{
    int rowNum = account_model ->rowCount();
    QString id = "0";
    account_model->insertRow(rowNum);
    account_model->setData(account_model->index(rowNum,0),id);
    account_model->submitAll();
}

void AccountAdmin::on_pbt_4_clicked()
{
    int curRow = ui ->tableView_account->currentIndex().row();
    account_model->removeRow(curRow);
    int ok = QMessageBox::warning(this,tr("删除当前行"),
                                  tr("确定删除？"),QMessageBox::Yes,QMessageBox::No);
    if(ok == QMessageBox::No)
    {
        account_model->revertAll();
    }
    else
    {
        account_model->submitAll();
    }
}

void AccountAdmin::on_pbt_6_clicked()
{
    account_model ->setTable("account");
    account_model ->select();
}

void AccountAdmin::on_pbt_5_clicked()
{
    QString id = ui->lineEdit->text();

    account_model->setFilter(QString("id = '%1'").arg(id));

    account_model->select();
}

void AccountAdmin::on_pbt_7_clicked()
{
    this->close();
}

void AccountAdmin::on_pbt_8_clicked()
{
    dishes_model->database().transaction();
    if(dishes_model->submitAll())
    {
        if(dishes_model->database().commit())
            QMessageBox::information(this,tr("tableModel"),tr("数据修改成功！"));
    }
    else
    {
        dishes_model->database().rollback();
        QMessageBox::warning(this,tr("tableModel"),
                             tr("数据库错误：1&").arg(dishes_model->lastError().text()),QMessageBox::Ok);

    }
}

void AccountAdmin::on_pbt_9_clicked()
{
     dishes_model->revertAll();
}

void AccountAdmin::on_pbt_10_clicked()
{
    int rowNum = dishes_model ->rowCount();
    QString id = "0";
    dishes_model->insertRow(rowNum);
    dishes_model->setData(dishes_model->index(rowNum,0),id);
    dishes_model->submitAll();
}

void AccountAdmin::on_pbt_11_clicked()
{
    int curRow = ui ->tableView_dishes->currentIndex().row();
    dishes_model->removeRow(curRow);
    int ok = QMessageBox::warning(this,tr("删除当前行"),
                                  tr("确定删除？"),QMessageBox::Yes,QMessageBox::No);
    if(ok == QMessageBox::No)
    {
        dishes_model->revertAll();
    }
    else
    {
        dishes_model->submitAll();
    }
}

void AccountAdmin::on_pbt_12_clicked()
{
    dishes_model ->setTable("dish");
    dishes_model ->select();
}

void AccountAdmin::on_pbt_13_clicked()
{
    QString name = ui->lineEdit_2->text();

    dishes_model->setFilter(QString("name = '%1'").arg(name));

    dishes_model->select();
}
