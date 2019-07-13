#ifndef REGISTER_H
#define REGISTER_H

#include <QDialog>
#include "all_headers_needed.h"
namespace Ui {
class Register;
}

class Register : public QDialog
{
    Q_OBJECT


public:
    explicit Register(QWidget *parent = 0);
    bool login_re_reg(const QString id);
    ~Register();


private slots:
    void on_pushButton_clicked();

protected:
    bool is_valid_mobile(const QString &mobile);
    bool is_blank_pwd(const QString &pwd);
    void paintEvent(QPaintEvent *event) override;
private:
    Ui::Register *ui;
};

#endif // REGISTER_H
