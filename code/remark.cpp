#include "remark.h"

Remark::Remark()
{

}

void Remark::set_cook_mobile(const QString &cm)
{
    cook_mobile = cm;
}

void Remark::set_date(const QString &d)
{
    date = d;
}

void Remark::set_dish_name(const QString &dn)
{
    dish_name = dn;
}

void Remark::set_mobile(const QString &m)
{
    mobile = m;
}

void Remark::set_remark_text(const QString &rt)
{
    remark_text = rt;
}

void Remark::set_star(const double &s)
{
    star = s;
}

void Remark::set_waiter_mobile(const QString &wm)
{
    waiter_mobile = wm;
}

double Remark::get_star()
{
    return star;
}

QString Remark::get_cook_mobile()
{
    return cook_mobile;
}

QString Remark::get_date()
{
    return date;
}

QString Remark::get_dish_name()
{
    return dish_name;
}

QString Remark::get_mobile()
{
    return mobile;
}

QString Remark::get_remark_text()
{
    return remark_text;
}

QString Remark::get_waiter_mobile()
{
    return waiter_mobile;
}
