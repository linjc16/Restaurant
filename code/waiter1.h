#ifndef WAITER_H
#define WAITER_H

#include "all_headers_needed.h"
#include "remark.h"
#include "table.h"
namespace Ui {
class Waiter;
}

class Waiter : public QDialog
{
    Q_OBJECT

public:
    explicit Waiter(QWidget *parent = 0);
    ~Waiter();

private:
    Ui::Waiter *ui;
    Table t;
    Remark remark;
    QString message;
    bool is_waitering;
    QString id ;
    QString password;
    QString identity;
};

#endif // WAITER_H
