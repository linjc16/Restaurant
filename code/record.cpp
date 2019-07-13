#include "record.h"

Record::Record()
{

}

QString Record::get_date()
{
    return date;
}

QString Record::get_dish_name()
{
    return dish_name;
}

int Record::get_dish_num()
{
   return dish_num ;
}

QString Record::get_mobile()
{
    return mobile;
}



QString Record::get_cook_mobile()
{
    return cook_mobile;
}

void Record::set_cook_mobile(const QString &cm)
{
    cook_mobile = cm;
}

void Record::set_date(const QString &d)
{
    date = d;
}

void Record::set_dish_name(const QString &dn)
{
    dish_name = dn;
}

void Record::set_dish_num(const int &dn)
{
    dish_num = dn;
}

void Record::set_mobile(const QString &m)
{
    mobile = m ;
}



