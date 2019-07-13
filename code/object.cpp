#include "object.h"

Object::Object()
{

}

QString Object::get_name() const
{
    return name;
}

void Object::set_id(const int &i)
{
    id = i;
}

void Object::set_name(const QString &n)
{
    name = n;
}

int Object::get_id() const
{
    return id;
}
