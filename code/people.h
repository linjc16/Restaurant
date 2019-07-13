#ifndef PEOPLE_H
#define PEOPLE_H
#include "all_headers_needed.h"
#include "object.h"
class People:public Object
{
protected:
    QString mobile = "";//手机号
    QString password = ""; //密码
    QString identity = ""; //身份
public:
    People();
    virtual QString get_password() const;
    virtual QString get_mobile() const;
    virtual QString get_indentity() const;
    virtual void set_mobile(const QString &m) ;
    virtual void set_password(const QString &pwd) ;
    virtual void set_identity() = 0;
};

#endif // PEOPLE_H
