#-------------------------------------------------
#
# Project created by QtCreator 2017-08-05T21:08:14
#
#-------------------------------------------------

QT       += core gui
QT       += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = login
TEMPLATE = app


SOURCES += main.cpp\
    logindlg.cpp \
    register.cpp \
    ordinary_user.cpp \
    dishes.cpp \
    customer.cpp \
    manager.cpp \
    table.cpp \
    remark.cpp \
    accountadmin.cpp \
    have_ordered_dishes.cpp \
    table_query.cpp\
    review.cpp \
    waiter_admin.cpp \
    cook_admin.cpp \
    cook.cpp \
    waiter.cpp \
    record.cpp \
    order_record.cpp \
    waiter_record.cpp \
    cook_record.cpp \
    remark_dishes.cpp \
    remark_waiter.cpp \
    object.cpp \
    people.cpp \
    data.cpp

HEADERS  += \
    logindlg.h \
    register.h \
    ordinary_user.h \
    all_headers_needed.h \
    dishes.h \
    customer.h \
    manager.h \
    table.h \
    remark.h \
    accountadmin.h \
    have_ordered_dishes.h \
    table_query.h \
    review.h \
    waiter_admin.h \
    cook_admin.h \
    cook.h \
    waiter.h \
    record.h \
    order_record.h \
    waiter_record.h \
    cook_record.h \
    remark_dishes.h \
    remark_waiter.h \
    object.h \
    people.h \
    data.h

FORMS    += \
    register.ui \
    customer.ui \
    manager.ui \
    accountadmin.ui \
    table_query.ui \
    logindlg.ui \
    review.ui \
    waiter_admin.ui \
    cook_admin.ui \
    remark_dishes.ui \
    remark_waiter.ui

RESOURCES += \
    image.qrc

RC_ICONS = myico.ico

DISTFILES +=LIBS += -lwsock32
