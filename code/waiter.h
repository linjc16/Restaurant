#ifndef WAITER_H
#define WAITER_H
#include "all_headers_needed.h"
#include "ordinary_user.h"
using namespace std;
class Waiter : public People
{
private:
    QString remark_text = "";
    double remark_star = 0;
    int work_load = 0;
    int remark_num = 0;
public:
    Waiter();
    void set_identity();
    int current_user_remark_star = 0;
    vector <Ordinary_user> waiting_user;
    int table_num[100] = {};
    QString get_remark_text();
    void set_remark_text(const QString &rt);
    int waiting_user_num = 0;
    int get_work_load();
    double get_remark_star();
    void set_remark_star(const double &re);
    void add_work_load();
    void set_work_load(const int &wl);
    void set_remark_num(const int & srn);
    int get_remark_num();
};

#endif // WAITER_H
