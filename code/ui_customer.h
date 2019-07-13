/********************************************************************************
** Form generated from reading UI file 'customer.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMER_H
#define UI_CUSTOMER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Customer
{
public:
    QPushButton *ensure_order_pb;
    QPushButton *quit_pb;
    QListWidget *menu_listWidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QListWidget *ordered_listWidget;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *settle_account_pbt;
    QPushButton *push_food_pbt;
    QPushButton *add_water_pbt;
    QPushButton *table_query_pbt;
    QPushButton *evaluate_pbt;
    QListWidget *progress_listWidget;
    QLabel *current_table_label;
    QLabel *label_7;
    QListView *listView;
    QListView *listView_2;
    QLabel *label_8;
    QLabel *sum_label;
    QListView *listView_3;
    QLabel *label_9;
    QLabel *waiterid_label;
    QListView *listView_4;
    QLabel *label_10;
    QLabel *dish_name_label;
    QLabel *dish_num_label;

    void setupUi(QDialog *Customer)
    {
        if (Customer->objectName().isEmpty())
            Customer->setObjectName(QStringLiteral("Customer"));
        Customer->resize(700, 450);
        Customer->setMinimumSize(QSize(700, 450));
        Customer->setMaximumSize(QSize(700, 450));
        Customer->setStyleSheet(QString::fromUtf8("QDialog#Customer{\n"
"border-image:url(:/Image/\347\231\273\345\275\225\347\225\214\351\235\242.png);\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
""));
        ensure_order_pb = new QPushButton(Customer);
        ensure_order_pb->setObjectName(QStringLiteral("ensure_order_pb"));
        ensure_order_pb->setGeometry(QRect(420, 360, 90, 30));
        ensure_order_pb->setStyleSheet(QString::fromUtf8("background-color:rgb(44, 178, 214);\n"
"border-radius:10%;\n"
"color:rgb(255, 255, 255);\n"
"font: 13pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"QPushButton#pushButton:hover{  \n"
"background-color:rgb(255, 255, 214);  \n"
"}  "));
        quit_pb = new QPushButton(Customer);
        quit_pb->setObjectName(QStringLiteral("quit_pb"));
        quit_pb->setGeometry(QRect(560, 360, 90, 30));
        quit_pb->setStyleSheet(QString::fromUtf8("background-color:rgb(116, 224, 191);\n"
"border-radius:10%;\n"
"color:rgb(255, 255, 255);\n"
"font: 13pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        menu_listWidget = new QListWidget(Customer);
        menu_listWidget->setObjectName(QStringLiteral("menu_listWidget"));
        menu_listWidget->setGeometry(QRect(10, 50, 320, 370));
        menu_listWidget->setStyleSheet(QString::fromUtf8("background-color:rgba(244,244,244,100);\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label = new QLabel(Customer);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 20, 60, 30));
        label->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_2 = new QLabel(Customer);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(80, 20, 60, 30));
        label_2->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_3 = new QLabel(Customer);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(130, 20, 80, 30));
        label_3->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        ordered_listWidget = new QListWidget(Customer);
        ordered_listWidget->setObjectName(QStringLiteral("ordered_listWidget"));
        ordered_listWidget->setGeometry(QRect(390, 50, 271, 141));
        ordered_listWidget->setStyleSheet(QString::fromUtf8("background-color:rgba(244,244,244,100);\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_4 = new QLabel(Customer);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(400, 20, 60, 30));
        label_4->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_5 = new QLabel(Customer);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(500, 20, 60, 30));
        label_5->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_6 = new QLabel(Customer);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(580, 20, 71, 30));
        label_6->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        settle_account_pbt = new QPushButton(Customer);
        settle_account_pbt->setObjectName(QStringLiteral("settle_account_pbt"));
        settle_account_pbt->setGeometry(QRect(420, 360, 90, 30));
        settle_account_pbt->setStyleSheet(QString::fromUtf8("background-color:rgb(44, 178, 214);\n"
"border-radius:10%;\n"
"color:rgb(255, 255, 255);\n"
"font: 13pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"QPushButton#pushButton:hover{  \n"
"background-color:rgb(255, 255, 214);  \n"
"}  "));
        push_food_pbt = new QPushButton(Customer);
        push_food_pbt->setObjectName(QStringLiteral("push_food_pbt"));
        push_food_pbt->setGeometry(QRect(560, 310, 90, 30));
        push_food_pbt->setStyleSheet(QString::fromUtf8("background-color:rgb(44, 178, 214);\n"
"border-radius:10%;\n"
"color:rgb(255, 255, 255);\n"
"font: 13pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"QPushButton#pushButton:hover{  \n"
"background-color:rgb(255, 255, 214);  \n"
"}  "));
        add_water_pbt = new QPushButton(Customer);
        add_water_pbt->setObjectName(QStringLiteral("add_water_pbt"));
        add_water_pbt->setGeometry(QRect(420, 310, 90, 30));
        add_water_pbt->setStyleSheet(QString::fromUtf8("background-color:rgb(44, 178, 214);\n"
"border-radius:10%;\n"
"color:rgb(255, 255, 255);\n"
"font: 13pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"QPushButton#pushButton:hover{  \n"
"background-color:rgb(255, 255, 214);  \n"
"}  "));
        table_query_pbt = new QPushButton(Customer);
        table_query_pbt->setObjectName(QStringLiteral("table_query_pbt"));
        table_query_pbt->setGeometry(QRect(560, 265, 90, 30));
        table_query_pbt->setStyleSheet(QString::fromUtf8("background-color:rgb(44, 178, 214);\n"
"border-radius:10%;\n"
"color:rgb(255, 255, 255);\n"
"font: 13pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"QPushButton#pushButton:hover{  \n"
"background-color:rgb(255, 255, 214);  \n"
"}  "));
        evaluate_pbt = new QPushButton(Customer);
        evaluate_pbt->setObjectName(QStringLiteral("evaluate_pbt"));
        evaluate_pbt->setGeometry(QRect(290, 10, 90, 30));
        evaluate_pbt->setStyleSheet(QString::fromUtf8("background-color:rgb(44, 178, 214);\n"
"border-radius:10%;\n"
"color:rgb(255, 255, 255);\n"
"font: 13pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"QPushButton#pushButton:hover{  \n"
"background-color:rgb(255, 255, 214);  \n"
"}  "));
        progress_listWidget = new QListWidget(Customer);
        progress_listWidget->setObjectName(QStringLiteral("progress_listWidget"));
        progress_listWidget->setGeometry(QRect(10, 50, 320, 370));
        progress_listWidget->setStyleSheet(QString::fromUtf8("background-color:rgba(244,244,244,100);\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        progress_listWidget->setViewMode(QListView::ListMode);
        current_table_label = new QLabel(Customer);
        current_table_label->setObjectName(QStringLiteral("current_table_label"));
        current_table_label->setGeometry(QRect(500, 265, 30, 30));
        current_table_label->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);\n"
"font: 13pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_7 = new QLabel(Customer);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(410, 265, 91, 30));
        label_7->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);\n"
"font: 13pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        listView = new QListView(Customer);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setGeometry(QRect(390, 210, 271, 40));
        listView->setStyleSheet(QLatin1String("background-color:rgba(254, 254, 254, 50);\n"
"border-radius:0;"));
        listView_2 = new QListView(Customer);
        listView_2->setObjectName(QStringLiteral("listView_2"));
        listView_2->setGeometry(QRect(470, 400, 151, 40));
        listView_2->setStyleSheet(QLatin1String("background-color:rgba(254, 254, 254, 50);\n"
"border-radius:0;"));
        label_8 = new QLabel(Customer);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(490, 405, 61, 30));
        label_8->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);\n"
"font: 13pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        sum_label = new QLabel(Customer);
        sum_label->setObjectName(QStringLiteral("sum_label"));
        sum_label->setGeometry(QRect(560, 405, 51, 30));
        sum_label->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);\n"
"font: 13pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        listView_3 = new QListView(Customer);
        listView_3->setObjectName(QStringLiteral("listView_3"));
        listView_3->setGeometry(QRect(400, 260, 131, 40));
        listView_3->setStyleSheet(QLatin1String("background-color:rgba(254, 254, 254, 50);\n"
"border-radius:0;"));
        label_9 = new QLabel(Customer);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(400, 215, 121, 30));
        label_9->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);\n"
"font: 13pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        waiterid_label = new QLabel(Customer);
        waiterid_label->setObjectName(QStringLiteral("waiterid_label"));
        waiterid_label->setGeometry(QRect(530, 215, 131, 30));
        waiterid_label->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);\n"
"font: 13pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        listView_4 = new QListView(Customer);
        listView_4->setObjectName(QStringLiteral("listView_4"));
        listView_4->setGeometry(QRect(180, 230, 151, 40));
        listView_4->setStyleSheet(QLatin1String("background-color:rgba(254, 254, 254, 50);\n"
"border-radius:0;"));
        label_10 = new QLabel(Customer);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(190, 20, 80, 30));
        label_10->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        dish_name_label = new QLabel(Customer);
        dish_name_label->setObjectName(QStringLiteral("dish_name_label"));
        dish_name_label->setGeometry(QRect(30, 20, 60, 30));
        dish_name_label->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        dish_num_label = new QLabel(Customer);
        dish_num_label->setObjectName(QStringLiteral("dish_num_label"));
        dish_num_label->setGeometry(QRect(125, 20, 60, 30));
        dish_num_label->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        QWidget::setTabOrder(ensure_order_pb, quit_pb);

        retranslateUi(Customer);
        QObject::connect(quit_pb, SIGNAL(clicked()), Customer, SLOT(close()));

        QMetaObject::connectSlotsByName(Customer);
    } // setupUi

    void retranslateUi(QDialog *Customer)
    {
        Customer->setWindowTitle(QApplication::translate("Customer", "Dialog", 0));
        ensure_order_pb->setText(QApplication::translate("Customer", "\347\241\256\350\256\244\344\270\213\345\215\225", 0));
        quit_pb->setText(QApplication::translate("Customer", "\351\200\200\345\207\272", 0));
        label->setText(QApplication::translate("Customer", "\347\261\273\345\210\253", 0));
        label_2->setText(QApplication::translate("Customer", "\350\217\234\345\220\215", 0));
        label_3->setText(QApplication::translate("Customer", "\345\215\225\344\273\267(\302\245)", 0));
        label_4->setText(QApplication::translate("Customer", "\350\217\234\345\220\215", 0));
        label_5->setText(QApplication::translate("Customer", "\346\225\260\351\207\217", 0));
        label_6->setText(QApplication::translate("Customer", "\345\260\217\350\256\241(\302\245)", 0));
        settle_account_pbt->setText(QApplication::translate("Customer", "\347\273\223\350\264\246", 0));
        push_food_pbt->setText(QApplication::translate("Customer", "\345\202\254\350\217\234", 0));
        add_water_pbt->setText(QApplication::translate("Customer", "\345\212\240\346\260\264", 0));
        table_query_pbt->setText(QApplication::translate("Customer", "\351\244\220\346\241\214\347\212\266\346\200\201", 0));
        evaluate_pbt->setText(QApplication::translate("Customer", "\350\257\204\344\273\267", 0));
        current_table_label->setText(QString());
        label_7->setText(QApplication::translate("Customer", "\345\275\223\345\211\215\346\241\214\344\275\215\357\274\232", 0));
        label_8->setText(QApplication::translate("Customer", "\346\200\273\350\256\241\357\274\232\302\245", 0));
        sum_label->setText(QString());
        label_9->setText(QApplication::translate("Customer", "\345\275\223\345\211\215\346\234\215\345\212\241\345\221\230ID\357\274\232", 0));
        waiterid_label->setText(QString());
        label_10->setText(QApplication::translate("Customer", "\350\257\204\344\273\267\346\230\237\347\272\247", 0));
        dish_name_label->setText(QApplication::translate("Customer", "\350\217\234\345\220\215", 0));
        dish_num_label->setText(QApplication::translate("Customer", "\346\225\260\351\207\217", 0));
    } // retranslateUi

};

namespace Ui {
    class Customer: public Ui_Customer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMER_H
