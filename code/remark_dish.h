#ifndef REMARK_DISH_H
#define REMARK_DISH_H

#include <QDialog>

namespace Ui {
class Remark_dish;
}

class Remark_dish : public QDialog
{
    Q_OBJECT

public:
    explicit Remark_dish(QWidget *parent = 0);
    ~Remark_dish();

private:
    Ui::Remark_dish *ui;
};

#endif // REMARK_DISH_H
