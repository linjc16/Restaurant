#ifndef ACCOUNT_ADMIN_H
#define ACCOUNT_ADMIN_H

#include <QDialog>

namespace Ui {
class account_admin;
}

class account_admin : public QDialog
{
    Q_OBJECT

public:
    explicit account_admin(QWidget *parent = 0);
    ~account_admin();

private:
    Ui::account_admin *ui;
};

#endif // ACCOUNT_ADMIN_H
