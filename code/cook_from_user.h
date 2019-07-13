#ifndef COOK_FROM_USER_H
#define COOK_FROM_USER_H

#include <QDialog>

namespace Ui {
class Cook_from_user;
}

class Cook_from_user : public QDialog
{
    Q_OBJECT

public:
    explicit Cook_from_user(QWidget *parent = 0);
    ~Cook_from_user();

private:
    Ui::Cook_from_user *ui;
};

#endif // COOK_FROM_USER_H
