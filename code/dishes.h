#ifndef DISHES_H
#define DISHES_H
#include "all_headers_needed.h"
#include "object.h"
class dishes:public Object
{
private:

    double assess_point = 0;
    QString kind = "";


protected:
    QString mobile = "";
    int unit_price = 0;
    int number = 0;
    double remark_star = 0;
    QString remark_text = "";


public:
    int sales_volume = 0;
    int dish_remark_num = 0;
    dishes();
    dishes(const QString &n,const int &up,const int &ap,const QString &k );

    QString get_mobile() const;

    int get_unit_price() const;
    double get_assess_point() const;
    int get_num() const;
    QString get_kind() const;
    int get_have_already_cooked() const ;
    bool load_from_database(const QString &n);
    void save_to_database_dishes() ;


    void set_unit_price(const int &up);
    void set_assess_point(const double &ap);
    void set_kind(const QString &k);
    void set_num(const int &n);
    void set_mobile(const QString &m);
    double get_remark_star();
    void set_remark_star(const double &rs);
    QString get_remark_text();
    void set_remark_text(const QString &rt);
};


#endif // DISHES_H
