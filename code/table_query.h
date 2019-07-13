#ifndef TABLE_QUERY_H
#define TABLE_QUERY_H

#include <QDialog>
#include "all_headers_needed.h"
#include "table.h"
using namespace std;
extern vector <Table> tb;
namespace Ui {
class Table_query;
class QSqlTableModel;
}

class Table_query : public QDialog
{
    Q_OBJECT

public:
    explicit Table_query(QWidget *parent = 0);
    ~Table_query();

private slots:
    void SeatClicked(int i);
    void on_leave_pbt_clicked();

private:
    Ui::Table_query *ui;
    QWidget* widget;
    QHBoxLayout* hLayout;
    QVector <QPushButton *> seat;
};

#endif // TABLE_QUERY_H
