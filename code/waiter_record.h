#ifndef WAITER_RECORD_H
#define WAITER_RECORD_H
#include "all_headers_needed.h"
#include "record.h"

class Waiter_record:public Record
{
private:
    QString waiter_mobile = "";
public:
    Waiter_record();
    void set_waiter_mobile(const QString &wm);
    QString get_waiter_mobile();
};

#endif // WAITER_RECORD_H
