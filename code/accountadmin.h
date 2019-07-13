#ifndef ACCOUNTADMIN_H
#define ACCOUNTADMIN_H

#include <QDialog>
#include "all_headers_needed.h"
namespace Ui {
class AccountAdmin;
class QSqlTableModel;
}

class AccountAdmin : public QDialog
{
    Q_OBJECT

public:
    explicit AccountAdmin(QWidget *parent = 0);
    ~AccountAdmin();

private slots:
    void on_pbt_1_clicked();

    void on_pbt_2_clicked();

    void on_pbt_3_clicked();

    void on_pbt_4_clicked();

    void on_pbt_6_clicked();

    void on_pbt_5_clicked();

    void on_pbt_7_clicked();

    void on_pbt_8_clicked();

    void on_pbt_9_clicked();

    void on_pbt_10_clicked();

    void on_pbt_11_clicked();

    void on_pbt_12_clicked();

    void on_pbt_13_clicked();

private:
    Ui::AccountAdmin *ui;
    QSqlTableModel * account_model;
    QSqlTableModel * dishes_model;
};

#endif // ACCOUNTADMIN_H
