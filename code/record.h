#ifndef RECORD_H
#define RECORD_H
#include "all_headers_needed.h"

class Record
{
private:
    QString mobile = "" ;
    QString dish_name = "";
    int dish_num = 0;
    QString date = "";
    QString cook_mobile = "";
public:
    Record();
    int id = 0 ;
    void set_mobile(const QString & m);
    QString get_mobile();
    void set_dish_name(const QString & dn);
    QString get_dish_name();
    void set_dish_num(const int &dn);
    int get_dish_num();
    void set_date(const QString &d);
    QString get_date();
    void set_cook_mobile(const QString & cm);
    QString get_cook_mobile();
};

#endif // RECORD_H
