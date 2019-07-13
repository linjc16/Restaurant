#include "cook.h"
#include "all_headers_needed.h"

Cook *cooks;
Cook::Cook()
{

}

void Cook::set_identity()
{
    identity = "厨师";
}

int Cook::get_remark_num()
{
    return remark_num;
}

void Cook::set_remark_num(const int &srn)
{
    remark_num = srn;
}

int Cook::get_work_load()
{
    return work_load;
}

void Cook::add_work_load(int num)
{
    work_load += num;
}

void Cook::set_work_load(const int &wl)
{
    work_load = wl;
}

void Cook::set_remark_star(const double &re)
{
    remark_star = re;
}

double Cook::get_remark_star()
{
    return remark_star;
}
