#include "waiter.h"
#include "all_headers_needed.h"
Waiter *waiters;
Waiter::Waiter()
{

}

void Waiter::set_identity()
{
    identity = "服务员";
}

int Waiter::get_remark_num()
{
    return remark_num;
}

void Waiter::set_remark_num(const int &srn)
{
    remark_num = srn;
}

int Waiter::get_work_load()
{
    return work_load;
}

void Waiter::add_work_load()
{
    work_load ++ ;
}

void Waiter::set_work_load(const int &wl)
{
    work_load = wl;
}

void Waiter::set_remark_star(const double &re)
{
    remark_star = re;
}

double Waiter::get_remark_star()
{
    return remark_star;
}

void Waiter::set_remark_text(const QString &rt)
{
    remark_text = rt ;
}

QString Waiter::get_remark_text()
{
    return remark_text;
}
