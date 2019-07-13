#ifndef HAVE_ORDERED_DISHES_H
#define HAVE_ORDERED_DISHES_H
#include "dishes.h"
#include "all_headers_needed.h"
class Have_ordered_dishes:public dishes
{
private:
    int order_row = -1;
    int claimed_order_row = -1;

public:
    Have_ordered_dishes();
    bool remarked = 0;
    int current_remark_star = 0;
    int have_cooked = 0;
    int have_served = 0;
    int have_claimed = 0;
    void set_order_row(const int &n);
    void set_claimed_order_row(const int &cor);
    int get_order_row()const;
    int get_claimed_order_row();
};

#endif // HAVE_ORDERED_DISHES_H
