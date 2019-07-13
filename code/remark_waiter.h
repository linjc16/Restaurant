#ifndef REMARK_WAITER_H
#define REMARK_WAITER_H

#include <QDialog>

namespace Ui {
class Remark_waiter;
}

class Remark_waiter : public QDialog
{
    Q_OBJECT

public:
    explicit Remark_waiter(QWidget *parent = 0);
    ~Remark_waiter();

private slots:
    void on_star1_pbt_3_clicked();

    void on_star2_pbt_3_clicked();

    void on_star3_pbt_3_clicked();

    void on_star4_pbt_3_clicked();

    void on_star5_pbt_3_clicked();

    void on_back_btn_2_clicked();

    void on_next_btn_2_clicked();

private:
    Ui::Remark_waiter *ui;
};

#endif // REMARK_WAITER_H
