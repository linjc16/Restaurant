#ifndef REVIEW_H
#define REVIEW_H

#include <QDialog>

namespace Ui {
class Review;
}

class Review : public QDialog
{
    Q_OBJECT

public:
    explicit Review(QWidget *parent = 0);
    ~Review();
protected:
    void paintEvent(QPaintEvent *event) override;
private slots:
    void on_star1_pbt_clicked();

    void on_star2_pbt_clicked();

    void on_star3_pbt_clicked();

    void on_star4_pbt_clicked();

    void on_star5_pbt_clicked();

    void on_pushButton_clicked();

    void on_star1_pbt_2_clicked();

    void on_star2_pbt_2_clicked();

    void on_star3_pbt_2_clicked();

    void on_star4_pbt_2_clicked();

    void on_star5_pbt_2_clicked();

    void on_back_btn_clicked();

    void on_next_btn_clicked();

private:
    Ui::Review *ui;
};

#endif // REVIEW_H
