#include "data.h"
vector <Cook_record> Data::cook_record(100);
vector <Waiter_record> Data::waiter_record(100);
vector <Order_record> Data::order_record(100);
vector <Cook> Data::cook(100);
vector <Waiter> Data::waiter(100);
vector <Ordinary_user> Data::user(100);
vector <dishes> Data::dish(100);
vector <Table> Data::tb(100);
vector <Ordinary_user> Data::admin(100);
vector <Remark> Data::remark_dishes(100);
vector <Remark> Data::remark_waiter(100);
int Data::order_record_temp = 0;
int Data::waiter_record_temp = 0;
int Data::cook_record_temp = 0;
int Data::cook_record_num = 0;
int Data::waiter_record_num = 0;
int Data::order_record_num = 0;
int Data::remark_dish_id_record = 0;
int Data::remark_waiter_id_record = 0;
int Data::remark_dish_num = 0;
int Data::remark_waiter_num = 0;
int Data::user_num = 0;
int Data::cook_num = 0;
int Data::waiter_num = 0;
int Data::dish_num = 0;
int Data::admin_num = 0;