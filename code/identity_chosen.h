#ifndef IDENTITY_CHOSEN_H
#define IDENTITY_CHOSEN_H

#include <QDialog>

namespace Ui {
class identity_chosen;
}

class identity_chosen : public QDialog
{
    Q_OBJECT

public:
    explicit identity_chosen(QWidget *parent = 0);
    ~identity_chosen();

private slots:
    void on_user_Button_clicked();

    void on_admin_button_clicked();

private:
    Ui::identity_chosen *ui;
};

#endif // IDENTITY_CHOSEN_H
