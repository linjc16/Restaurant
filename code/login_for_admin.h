#ifndef LOGIN_FOR_ADMIN_H
#define LOGIN_FOR_ADMIN_H

#include <QDialog>

namespace Ui {
class Login_for_admin;
}

class Login_for_admin : public QDialog
{
    Q_OBJECT

public:
    explicit Login_for_admin(QWidget *parent = 0);
    ~Login_for_admin();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

    void on_pb_admin_clicked();

private:
    Ui::Login_for_admin *ui;
};

#endif // LOGIN_FOR_ADMIN_H
