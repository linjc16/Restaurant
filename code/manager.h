#ifndef MANAGER_H
#define MANAGER_H

#include <QDialog>

namespace Ui {
class Manager;
}

class Manager : public QDialog
{
    Q_OBJECT

public:
    explicit Manager(QWidget *parent = 0);
    ~Manager();

private slots:
    void on_admin_pbt_clicked();

    void on_remark_waiter_pbt_clicked();

    void on_remark_dish_pbt_clicked();

private:
    Ui::Manager *ui;
};

#endif // MANAGER_H
