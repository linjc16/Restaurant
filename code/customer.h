#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <vector>
#include <QDialog>
#include "all_headers_needed.h"
#include "table.h"
#include "data.h"
using namespace std;
extern vector<Table> tb;
extern int dish_num;
namespace Ui {
class QSqlTableModel;
class Customer;
}

class Customer : public QDialog
{
    Q_OBJECT

public:
    explicit Customer(QWidget *parent = 0);
    bool able_ensure_order_pbt();
    ~Customer();

protected:
    void paintEvent(QPaintEvent *event) override;


private slots:
     void plus_btn_clicked();
     void minus_btn_clicked();
     void on_ensure_order_pb_clicked();

     void on_settle_account_pbt_clicked();

     void on_table_query_pbt_clicked();


     void on_add_water_pbt_clicked();

     void on_push_food_pbt_clicked();

     void on_evaluate_pbt_clicked();

private:
    Ui::Customer *ui;
    QSqlTableModel * model;
    QTableView *menu_view;
    QPushButton *plus_btn;
    QPushButton *minue_btn;


};

#endif // CUSTOMER_H
