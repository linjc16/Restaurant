#ifndef WAITER_ADMIN_H
#define WAITER_ADMIN_H
#include "all_headers_needed.h"
#include "table.h"
using namespace std;
extern vector<Table> tb;
namespace Ui {
class Waiter_admin;
}

class Waiter_admin : public QDialog
{
    Q_OBJECT


public:
    explicit Waiter_admin(QWidget *parent = 0);
    ~Waiter_admin();

private slots:
    void on_ensure_pushButton_clicked();

private:
    Ui::Waiter_admin *ui;
};

#endif // WAITER_ADMIN_H
