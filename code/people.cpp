#include "people.h"

People::People()
{

}


QString People::get_mobile() const
{
    return mobile;
}

QString People::get_indentity() const
{
    return identity;
}

QString People::get_password() const
{
    return password;
}

void People::set_mobile(const QString &m)
{
    mobile = m;
}

void People::set_password(const QString &pwd)
{
    password = pwd;
    return;
}

