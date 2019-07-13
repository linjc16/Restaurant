#ifndef MENU_ADMIN_H
#define MENU_ADMIN_H

#include <QDialog>

namespace Ui {
class menu_admin;
}

class menu_admin : public QDialog
{
    Q_OBJECT

public:
    explicit menu_admin(QWidget *parent = 0);
    ~menu_admin();

private:
    Ui::menu_admin *ui;
};

#endif // MENU_ADMIN_H
