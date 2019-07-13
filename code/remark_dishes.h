#ifndef REMARK_DISHES_H
#define REMARK_DISHES_H

#include <QDialog>

namespace Ui {
class Remark_dishes;
}

class Remark_dishes : public QDialog
{
    Q_OBJECT

public:
    explicit Remark_dishes(QWidget *parent = 0);
    ~Remark_dishes();

private slots:
    void on_star1_pbt_3_clicked();

    void on_star2_pbt_3_clicked();

    void on_star3_pbt_3_clicked();

    void on_star4_pbt_3_clicked();

    void on_star5_pbt_3_clicked();

    void on_back_btn_2_clicked();

    void on_next_btn_2_clicked();

private:
    Ui::Remark_dishes *ui;
};

#endif // REMARK_DISHES_H
