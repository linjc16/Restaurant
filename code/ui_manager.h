/********************************************************************************
** Form generated from reading UI file 'manager.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGER_H
#define UI_MANAGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Manager
{
public:
    QListWidget *waiter_listWidget;
    QListWidget *cook_listWidget;
    QPushButton *admin_pbt;
    QPushButton *remark_dish_pbt;
    QPushButton *remark_waiter_pbt;
    QListWidget *order_listWidget;
    QListWidget *cook_record_listWidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;

    void setupUi(QDialog *Manager)
    {
        if (Manager->objectName().isEmpty())
            Manager->setObjectName(QStringLiteral("Manager"));
        Manager->resize(768, 472);
        Manager->setMinimumSize(QSize(768, 472));
        Manager->setMaximumSize(QSize(768, 472));
        Manager->setStyleSheet(QString::fromUtf8("QDialog#Manager{\n"
"border-image:url(:/Image/\347\231\273\345\275\225\347\225\214\351\235\242.png);\n"
"}\n"
""));
        waiter_listWidget = new QListWidget(Manager);
        waiter_listWidget->setObjectName(QStringLiteral("waiter_listWidget"));
        waiter_listWidget->setGeometry(QRect(10, 40, 361, 171));
        waiter_listWidget->setStyleSheet(QString::fromUtf8("background-color:rgba(244,244,244,100);\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        cook_listWidget = new QListWidget(Manager);
        cook_listWidget->setObjectName(QStringLiteral("cook_listWidget"));
        cook_listWidget->setGeometry(QRect(400, 40, 361, 171));
        cook_listWidget->setStyleSheet(QString::fromUtf8("background-color:rgba(244,244,244,100);\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        admin_pbt = new QPushButton(Manager);
        admin_pbt->setObjectName(QStringLiteral("admin_pbt"));
        admin_pbt->setGeometry(QRect(340, 440, 90, 30));
        admin_pbt->setStyleSheet(QString::fromUtf8("background-color:rgb(44, 178, 214);\n"
"border-radius:10%;\n"
"color:rgb(255, 255, 255);\n"
"font: 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"QPushButton#pushButton:hover{  \n"
"background-color:rgb(255, 255, 214);  \n"
"}  "));
        remark_dish_pbt = new QPushButton(Manager);
        remark_dish_pbt->setObjectName(QStringLiteral("remark_dish_pbt"));
        remark_dish_pbt->setGeometry(QRect(130, 440, 90, 30));
        remark_dish_pbt->setStyleSheet(QString::fromUtf8("background-color:rgb(44, 178, 214);\n"
"border-radius:10%;\n"
"color:rgb(255, 255, 255);\n"
"font: 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"QPushButton#pushButton:hover{  \n"
"background-color:rgb(255, 255, 214);  \n"
"}  "));
        remark_waiter_pbt = new QPushButton(Manager);
        remark_waiter_pbt->setObjectName(QStringLiteral("remark_waiter_pbt"));
        remark_waiter_pbt->setGeometry(QRect(550, 440, 90, 30));
        remark_waiter_pbt->setStyleSheet(QString::fromUtf8("background-color:rgb(44, 178, 214);\n"
"border-radius:10%;\n"
"color:rgb(255, 255, 255);\n"
"font: 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"QPushButton#pushButton:hover{  \n"
"background-color:rgb(255, 255, 214);  \n"
"}  "));
        order_listWidget = new QListWidget(Manager);
        order_listWidget->setObjectName(QStringLiteral("order_listWidget"));
        order_listWidget->setGeometry(QRect(10, 260, 361, 171));
        order_listWidget->setStyleSheet(QString::fromUtf8("background-color:rgba(244,244,244,100);\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        cook_record_listWidget = new QListWidget(Manager);
        cook_record_listWidget->setObjectName(QStringLiteral("cook_record_listWidget"));
        cook_record_listWidget->setGeometry(QRect(400, 260, 361, 171));
        cook_record_listWidget->setStyleSheet(QString::fromUtf8("background-color:rgba(244,244,244,100);\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label = new QLabel(Manager);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(160, 220, 60, 20));
        label->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_2 = new QLabel(Manager);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(130, 5, 91, 20));
        label_2->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_3 = new QLabel(Manager);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(540, 5, 81, 20));
        label_3->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_4 = new QLabel(Manager);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(540, 220, 80, 20));
        label_4->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_5 = new QLabel(Manager);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(30, 245, 54, 12));
        label_5->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);\n"
"font: 8pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_6 = new QLabel(Manager);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(140, 245, 54, 12));
        label_6->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);\n"
"font: 8pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_7 = new QLabel(Manager);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(260, 245, 54, 12));
        label_7->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);\n"
"font: 8pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_8 = new QLabel(Manager);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(20, 25, 54, 12));
        label_8->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);\n"
"font: 8pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_9 = new QLabel(Manager);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(150, 25, 54, 12));
        label_9->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);\n"
"font: 8pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_10 = new QLabel(Manager);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(270, 25, 54, 12));
        label_10->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);\n"
"font: 8pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_11 = new QLabel(Manager);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(640, 25, 54, 12));
        label_11->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);\n"
"font: 8pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_12 = new QLabel(Manager);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(450, 25, 54, 12));
        label_12->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);\n"
"font: 8pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_13 = new QLabel(Manager);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(410, 245, 54, 12));
        label_13->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);\n"
"font: 8pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_14 = new QLabel(Manager);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(505, 245, 54, 12));
        label_14->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);\n"
"font: 8pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_15 = new QLabel(Manager);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(680, 245, 54, 12));
        label_15->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);\n"
"font: 8pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_16 = new QLabel(Manager);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(590, 245, 54, 12));
        label_16->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);\n"
"font: 8pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        retranslateUi(Manager);

        QMetaObject::connectSlotsByName(Manager);
    } // setupUi

    void retranslateUi(QDialog *Manager)
    {
        Manager->setWindowTitle(QApplication::translate("Manager", "Dialog", 0));
        admin_pbt->setText(QApplication::translate("Manager", "\350\277\233\345\205\245\347\256\241\347\220\206\345\221\230\347\225\214\351\235\242", 0));
        remark_dish_pbt->setText(QApplication::translate("Manager", "\346\237\245\347\234\213\350\217\234\345\223\201\350\257\204\350\256\272", 0));
        remark_waiter_pbt->setText(QApplication::translate("Manager", "\346\237\245\347\234\213\346\234\215\345\212\241\345\221\230\350\257\204\350\256\272", 0));
        label->setText(QApplication::translate("Manager", "\350\256\242\345\215\225\350\256\260\345\275\225", 0));
        label_2->setText(QApplication::translate("Manager", "\346\234\215\345\212\241\345\221\230\345\267\245\344\275\234\344\277\241\346\201\257", 0));
        label_3->setText(QApplication::translate("Manager", "\345\216\250\345\270\210\345\267\245\344\275\234\344\277\241\346\201\257", 0));
        label_4->setText(QApplication::translate("Manager", "\345\216\250\345\270\210\345\267\245\344\275\234\350\256\260\345\275\225", 0));
        label_5->setText(QApplication::translate("Manager", "\351\241\276\345\256\242ID", 0));
        label_6->setText(QApplication::translate("Manager", "\350\217\234\345\223\201\345\220\215\347\247\260", 0));
        label_7->setText(QApplication::translate("Manager", "\344\270\213\345\215\225\346\225\260\351\207\217", 0));
        label_8->setText(QApplication::translate("Manager", "\346\234\215\345\212\241\345\221\230ID", 0));
        label_9->setText(QApplication::translate("Manager", "\345\267\245\344\275\234\351\207\217", 0));
        label_10->setText(QApplication::translate("Manager", "\345\271\263\345\235\207\350\257\204\344\273\267", 0));
        label_11->setText(QApplication::translate("Manager", "\345\267\245\344\275\234\351\207\217", 0));
        label_12->setText(QApplication::translate("Manager", "\345\216\250\345\270\210ID", 0));
        label_13->setText(QApplication::translate("Manager", "\345\216\250\345\270\210ID", 0));
        label_14->setText(QApplication::translate("Manager", "\350\217\234\345\223\201\345\220\215\347\247\260", 0));
        label_15->setText(QApplication::translate("Manager", "\351\241\276\345\256\242ID", 0));
        label_16->setText(QApplication::translate("Manager", "\346\225\260\351\207\217", 0));
    } // retranslateUi

};

namespace Ui {
    class Manager: public Ui_Manager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGER_H
