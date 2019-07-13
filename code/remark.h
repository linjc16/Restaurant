#ifndef REMARK_H
#define REMARK_H
#include "all_headers_needed.h"

class Remark
{
private:
    double star = 0;
    QString mobile = "";
    QString remark_text = "";
    QString date = "";
    QString dish_name = "";
    QString waiter_mobile = "";
    QString cook_mobile = "";
public:
    int remark_id = 0;
    Remark();
    void set_star(const double &s);
    void set_mobile(const QString &m);
    void set_remark_text(const QString &rt);
    void set_date(const QString &d);
    void set_dish_name (const QString &dn);
    void set_waiter_mobile(const QString &wm);
    void set_cook_mobile(const QString &cm);
    double get_star();
    QString get_mobile();
    QString get_remark_text();
    QString get_date();
    QString get_dish_name();
    QString get_waiter_mobile();
    QString get_cook_mobile();
};

#endif // REMARK_H
