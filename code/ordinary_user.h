#ifndef ORDINARY_USER_H
#define ORDINARY_USER_H
#include "all_headers_needed.h"
#include "table.h"
#include "have_ordered_dishes.h"
#include "people.h"
using namespace std;
class Ordinary_user:public People
{
protected:
    int table_num = 0; //桌号
    QString waiter_mobile = ""; //服务员手机号
public:
    vector <Have_ordered_dishes> uhod; //顾客点餐
    int dish_kind_num = 0;//记录顾客点餐总数
    bool add_water = 0; //是否发出加水指令
    bool have_settle_account = 0; //是否结账
    bool leave_seat = 0; //是否离开座位
    bool have_seated = 0; //是否已经就座
    bool have_ordered = 0; //时候已点餐
    explicit Ordinary_user();
    explicit Ordinary_user(const QString &i,const QString &pwd,const QString &idt );
    QString get_waiter_mobile() const ;
    int get_table_num() const;
    void set_identity();
    void set_table_num(const int &n);
    void set_waiter_mobile(const QString &wm);
    bool load_from_database(const QString &i);
    void save_to_database_register() ;

};

#endif // ORDINARY_USER_H
