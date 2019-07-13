#ifndef OBJECT_H
#define OBJECT_H

#include "all_headers_needed.h"

class Object
{
protected:
    QString name = "";
    int id = 0;
public:
    Object();
    virtual void set_name(const QString &n);
    virtual QString get_name() const;
    virtual void set_id(const int &i);
    virtual int get_id() const;
};

#endif // OBJECT_H
