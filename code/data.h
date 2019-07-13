#ifndef DATA_H
#define DATA_H
#include "all_headers_needed.h"
#include "table.h"
#include "cook.h"
#include "waiter.h"
#include "remark.h"
#include "order_record.h"
#include "waiter_record.h"
#include "cook_record.h"
using namespace std;

class Data
{
private:
    Data() = delete;
public:
    static vector <Cook_record> cook_record;
    static vector <Waiter_record> waiter_record;
    static vector <Order_record> order_record;
    static vector <Cook> cook;
    static vector <Waiter> waiter;
    static vector <Ordinary_user> user;
    static vector <dishes> dish;
    static vector <Table> tb;
    static vector <Ordinary_user> admin;
    static vector <Remark> remark_dishes;
    static vector <Remark> remark_waiter;
    static int order_record_temp;
    static int waiter_record_temp;
    static int cook_record_temp;
    static int cook_record_num;
    static int waiter_record_num;
    static int order_record_num;
    static int remark_dish_id_record;
    static int remark_waiter_id_record;
    static int remark_dish_num;
    static int remark_waiter_num;
    static int user_num;
    static int cook_num;
    static int waiter_num;
    static int dish_num;
    static int admin_num;

};

#endif // DATA_H
