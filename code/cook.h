#ifndef COOK_H
#define COOK_H
#include "ordinary_user.h"
#include "have_ordered_dishes.h"
using namespace std;
class Cook : public People
{
private:
    double remark_star = 0;
    int work_load = 0;
    int remark_num = 0;

public:
    Cook();
    int claimed_dish_num = 0;
    int finished_dish_num = 0;
    void set_identity();
    int get_work_load();
    double get_remark_star();
    void set_remark_star(const double &re);
    void add_work_load(int num);
    void set_work_load(const int &wl);
    void set_remark_num(const int &srn);
    int get_remark_num();
};

#endif // COOK_H
