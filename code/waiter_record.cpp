#include "waiter_record.h"

Waiter_record::Waiter_record()
{

}

void Waiter_record::set_waiter_mobile(const QString &wm)
{
    waiter_mobile = wm ;
}

QString Waiter_record::get_waiter_mobile()
{
    return waiter_mobile;
}
