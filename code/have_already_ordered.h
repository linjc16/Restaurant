#ifndef HAVE_ALREADY_ORDERED_H
#define HAVE_ALREADY_ORDERED_H

#include <QDialog>

namespace Ui {
class Have_already_ordered;
}

class Have_already_ordered : public QDialog
{
    Q_OBJECT

public:
    explicit Have_already_ordered(QWidget *parent = 0);
    ~Have_already_ordered();

private:
    Ui::Have_already_ordered *ui;
};

#endif // HAVE_ALREADY_ORDERED_H
