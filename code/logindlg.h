#ifndef LOGINDLG_H
#define LOGINDLG_H

#include <QDialog>
#include <QtWidgets>
#include <QMainWindow>
#include "cook.h"
#include "all_headers_needed.h"
#include "waiter.h"
#include "dishes.h"
#include "table.h"
#include "remark.h"
#include "order_record.h"
#include "cook_record.h"
#include "waiter_record.h"
using namespace std;
extern class Ordinary_user *users;
extern class Cook *cooks;
extern class Waiter *waiters;
namespace Ui {
class LoginDlg;
}

class LoginDlg : public QDialog
{
    Q_OBJECT

public:
    bool login_success();

    explicit LoginDlg(QWidget *parent = 0);
    ~LoginDlg();
protected:
    void closeEvent(QCloseEvent * event);

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();


private:
    Ui::LoginDlg *ui;
};

#endif // LOGINDLG_H
