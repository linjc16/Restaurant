#include "have_ordered_dishes.h"
#include "all_headers_needed.h"
Have_ordered_dishes::Have_ordered_dishes()
{

}
void Have_ordered_dishes::set_order_row(const int &n)
{
    order_row = n;
}


int Have_ordered_dishes::get_order_row() const
{
    return order_row;
}

void Have_ordered_dishes::set_claimed_order_row(const int &cor)
{
    claimed_order_row = cor;
}

int Have_ordered_dishes::get_claimed_order_row()
{
    return claimed_order_row;
}
