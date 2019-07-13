#ifndef TABLE_H
#define TABLE_H
#include "all_headers_needed.h"
class Table
{
private:
    QString mobile = "";
    int num = 0;
    int price = 0;
    QString waiter_mobile = "";
    int table_row = -1 ;
    //菜品
public:
    Table();
    void set_table_row(const int &str);
    int get_table_row();
    void set_waiter_mobile(const QString &wm);
    QString get_waiter_mobile();
    void set_mobile(const QString &m);
    void set_num(const int &n);
    QString get_mobile();
    int get_num();
    int is_settle_account = 0;
    int have_waiter = 0;
    int cook_claim = 0;
    int is_free = 1;
    int is_ordering = 0;
    int add_water = 0;
    int push_dishes = 0;
    void save_to_database();
    bool load_from_database(const int &num);

};

#endif // TABLE_H
