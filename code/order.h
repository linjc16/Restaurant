#ifndef ORDER_H
#define ORDER_H

#include <QDialog>

namespace Ui {
class Order;
}

class Order : public QDialog
{
    Q_OBJECT

public:
    explicit Order(QWidget *parent = 0);
    ~Order();

private:
    Ui::Order *ui;
};

#endif // ORDER_H
