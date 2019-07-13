#ifndef COOK_H
#define COOK_H

#include <QDialog>
#include "all_headers_needed.h"
namespace Ui {
class Cook;
}

class Cook : public QDialog
{
    Q_OBJECT

public:
    explicit Cook(QWidget *parent = 0);
    ~Cook();

private:
    Ui::Cook *ui;
    QString id ;
    QString password;
    QString identity;
    //菜品
    int finished_num;
};

#endif // COOK_H
