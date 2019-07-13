#ifndef COOK_ADMIN_H
#define COOK_ADMIN_H

#include "all_headers_needed.h"
#include "dishes.h"
using namespace std;

extern vector <dishes> dish;
namespace Ui {
class Cook_admin;
}

class Cook_admin : public QDialog
{
    Q_OBJECT

public:
    explicit Cook_admin(QWidget *parent = 0);
    ~Cook_admin();

private slots:
    void on_claim_pbt_clicked();

    void on_finishpbt_clicked();

private:
    Ui::Cook_admin *ui;
};

#endif // COOK_ADMIN_H
