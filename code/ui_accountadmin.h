/********************************************************************************
** Form generated from reading UI file 'accountadmin.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCOUNTADMIN_H
#define UI_ACCOUNTADMIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_AccountAdmin
{
public:
    QPushButton *pbt_2;
    QPushButton *pbt_7;
    QLineEdit *lineEdit;
    QPushButton *pbt_4;
    QPushButton *pbt_1;
    QTableView *tableView_account;
    QPushButton *pbt_6;
    QPushButton *pbt_3;
    QLabel *label;
    QPushButton *pbt_5;
    QTableView *tableView_dishes;
    QPushButton *pbt_8;
    QPushButton *pbt_9;
    QPushButton *pbt_10;
    QPushButton *pbt_11;
    QPushButton *pbt_12;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QPushButton *pbt_13;

    void setupUi(QDialog *AccountAdmin)
    {
        if (AccountAdmin->objectName().isEmpty())
            AccountAdmin->setObjectName(QStringLiteral("AccountAdmin"));
        AccountAdmin->resize(760, 480);
        AccountAdmin->setMinimumSize(QSize(760, 480));
        AccountAdmin->setMaximumSize(QSize(760, 480));
        AccountAdmin->setStyleSheet(QString::fromUtf8("QDialog#AccountAdmin{\n"
"border-image:url(:/Image/\347\231\273\345\275\225\347\225\214\351\235\242.png);\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
""));
        pbt_2 = new QPushButton(AccountAdmin);
        pbt_2->setObjectName(QStringLiteral("pbt_2"));
        pbt_2->setGeometry(QRect(130, 390, 90, 30));
        pbt_2->setStyleSheet(QString::fromUtf8("background-color:rgb(116, 224, 191);\n"
"border-radius:10%;\n"
"color:rgb(255, 255, 255);\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        pbt_7 = new QPushButton(AccountAdmin);
        pbt_7->setObjectName(QStringLiteral("pbt_7"));
        pbt_7->setGeometry(QRect(340, 430, 90, 30));
        pbt_7->setStyleSheet(QString::fromUtf8("background-color:rgb(116, 224, 191);\n"
"border-radius:10%;\n"
"color:rgb(255, 255, 255);\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lineEdit = new QLineEdit(AccountAdmin);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(90, 350, 140, 30));
        lineEdit->setStyleSheet(QString::fromUtf8("background-color:rgba(254, 254, 254, 150);\n"
"border-radius:10%;\n"
"padding-left:20%;\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        pbt_4 = new QPushButton(AccountAdmin);
        pbt_4->setObjectName(QStringLiteral("pbt_4"));
        pbt_4->setGeometry(QRect(130, 430, 90, 30));
        pbt_4->setStyleSheet(QString::fromUtf8("background-color:rgb(116, 224, 191);\n"
"border-radius:10%;\n"
"color:rgb(255, 255, 255);\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        pbt_1 = new QPushButton(AccountAdmin);
        pbt_1->setObjectName(QStringLiteral("pbt_1"));
        pbt_1->setGeometry(QRect(20, 390, 90, 30));
        pbt_1->setStyleSheet(QString::fromUtf8("background-color:rgb(44, 178, 214);\n"
"border-radius:10%;\n"
"color:rgb(255, 255, 255);\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"QPushButton#pushButton:hover{  \n"
"background-color:rgb(255, 255, 214);  \n"
"}  "));
        tableView_account = new QTableView(AccountAdmin);
        tableView_account->setObjectName(QStringLiteral("tableView_account"));
        tableView_account->setGeometry(QRect(10, 20, 320, 320));
        tableView_account->setStyleSheet(QString::fromUtf8("background-color:rgba(244,244,244,200);\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        pbt_6 = new QPushButton(AccountAdmin);
        pbt_6->setObjectName(QStringLiteral("pbt_6"));
        pbt_6->setGeometry(QRect(240, 390, 90, 30));
        pbt_6->setStyleSheet(QString::fromUtf8("background-color:rgb(44, 178, 214);\n"
"border-radius:10%;\n"
"color:rgb(255, 255, 255);\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"QPushButton#pushButton:hover{  \n"
"background-color:rgb(255, 255, 214);  \n"
"}  "));
        pbt_3 = new QPushButton(AccountAdmin);
        pbt_3->setObjectName(QStringLiteral("pbt_3"));
        pbt_3->setGeometry(QRect(20, 430, 90, 30));
        pbt_3->setStyleSheet(QString::fromUtf8("background-color:rgb(44, 178, 214);\n"
"border-radius:10%;\n"
"color:rgb(255, 255, 255);\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"QPushButton#pushButton:hover{  \n"
"background-color:rgb(255, 255, 214);  \n"
"}  "));
        label = new QLabel(AccountAdmin);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 350, 81, 20));
        label->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);\n"
"font: 13pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        pbt_5 = new QPushButton(AccountAdmin);
        pbt_5->setObjectName(QStringLiteral("pbt_5"));
        pbt_5->setGeometry(QRect(240, 350, 90, 30));
        pbt_5->setStyleSheet(QString::fromUtf8("background-color:rgb(116, 224, 191);\n"
"border-radius:10%;\n"
"color:rgb(255, 255, 255);\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        tableView_dishes = new QTableView(AccountAdmin);
        tableView_dishes->setObjectName(QStringLiteral("tableView_dishes"));
        tableView_dishes->setGeometry(QRect(430, 20, 320, 320));
        tableView_dishes->setStyleSheet(QString::fromUtf8("background-color:rgba(244,244,244,200);\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        pbt_8 = new QPushButton(AccountAdmin);
        pbt_8->setObjectName(QStringLiteral("pbt_8"));
        pbt_8->setGeometry(QRect(660, 390, 90, 30));
        pbt_8->setStyleSheet(QString::fromUtf8("background-color:rgb(44, 178, 214);\n"
"border-radius:10%;\n"
"color:rgb(255, 255, 255);\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"QPushButton#pushButton:hover{  \n"
"background-color:rgb(255, 255, 214);  \n"
"}  "));
        pbt_9 = new QPushButton(AccountAdmin);
        pbt_9->setObjectName(QStringLiteral("pbt_9"));
        pbt_9->setGeometry(QRect(560, 390, 90, 30));
        pbt_9->setStyleSheet(QString::fromUtf8("background-color:rgb(116, 224, 191);\n"
"border-radius:10%;\n"
"color:rgb(255, 255, 255);\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        pbt_10 = new QPushButton(AccountAdmin);
        pbt_10->setObjectName(QStringLiteral("pbt_10"));
        pbt_10->setGeometry(QRect(660, 430, 90, 30));
        pbt_10->setStyleSheet(QString::fromUtf8("background-color:rgb(44, 178, 214);\n"
"border-radius:10%;\n"
"color:rgb(255, 255, 255);\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"QPushButton#pushButton:hover{  \n"
"background-color:rgb(255, 255, 214);  \n"
"}  "));
        pbt_11 = new QPushButton(AccountAdmin);
        pbt_11->setObjectName(QStringLiteral("pbt_11"));
        pbt_11->setGeometry(QRect(560, 430, 90, 30));
        pbt_11->setStyleSheet(QString::fromUtf8("background-color:rgb(116, 224, 191);\n"
"border-radius:10%;\n"
"color:rgb(255, 255, 255);\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        pbt_12 = new QPushButton(AccountAdmin);
        pbt_12->setObjectName(QStringLiteral("pbt_12"));
        pbt_12->setGeometry(QRect(450, 390, 90, 30));
        pbt_12->setStyleSheet(QString::fromUtf8("background-color:rgb(44, 178, 214);\n"
"border-radius:10%;\n"
"color:rgb(255, 255, 255);\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"QPushButton#pushButton:hover{  \n"
"background-color:rgb(255, 255, 214);  \n"
"}  "));
        label_2 = new QLabel(AccountAdmin);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(450, 350, 51, 20));
        label_2->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);\n"
"font: 13pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lineEdit_2 = new QLineEdit(AccountAdmin);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(500, 350, 140, 30));
        lineEdit_2->setStyleSheet(QString::fromUtf8("background-color:rgba(254, 254, 254, 150);\n"
"border-radius:10%;\n"
"padding-left:20%;\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        pbt_13 = new QPushButton(AccountAdmin);
        pbt_13->setObjectName(QStringLiteral("pbt_13"));
        pbt_13->setGeometry(QRect(660, 350, 90, 30));
        pbt_13->setStyleSheet(QString::fromUtf8("background-color:rgb(116, 224, 191);\n"
"border-radius:10%;\n"
"color:rgb(255, 255, 255);\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        QWidget::setTabOrder(lineEdit, pbt_5);
        QWidget::setTabOrder(pbt_5, pbt_4);
        QWidget::setTabOrder(pbt_4, pbt_1);
        QWidget::setTabOrder(pbt_1, tableView_account);
        QWidget::setTabOrder(tableView_account, pbt_6);
        QWidget::setTabOrder(pbt_6, pbt_3);
        QWidget::setTabOrder(pbt_3, pbt_2);
        QWidget::setTabOrder(pbt_2, pbt_7);

        retranslateUi(AccountAdmin);

        QMetaObject::connectSlotsByName(AccountAdmin);
    } // setupUi

    void retranslateUi(QDialog *AccountAdmin)
    {
        AccountAdmin->setWindowTitle(QApplication::translate("AccountAdmin", "Dialog", 0));
        pbt_2->setText(QApplication::translate("AccountAdmin", "\346\222\244\351\224\200\344\277\256\346\224\271\350\264\246\346\210\267", 0));
        pbt_7->setText(QApplication::translate("AccountAdmin", "\351\200\200\345\207\272", 0));
        lineEdit->setText(QString());
        pbt_4->setText(QApplication::translate("AccountAdmin", "\345\210\240\351\231\244\350\264\246\346\210\267", 0));
        pbt_1->setText(QApplication::translate("AccountAdmin", "\346\217\220\344\272\244\344\277\256\346\224\271\350\264\246\346\210\267", 0));
        pbt_6->setText(QApplication::translate("AccountAdmin", "\346\230\276\347\244\272\345\205\250\351\203\250\350\264\246\346\210\267", 0));
        pbt_3->setText(QApplication::translate("AccountAdmin", "\346\267\273\345\212\240\350\264\246\346\210\267", 0));
        label->setText(QApplication::translate("AccountAdmin", "\347\224\265\350\257\235\345\217\267\347\240\201\357\274\232", 0));
        pbt_5->setText(QApplication::translate("AccountAdmin", "\346\237\245\350\257\242", 0));
        pbt_8->setText(QApplication::translate("AccountAdmin", "\346\217\220\344\272\244\344\277\256\346\224\271\350\217\234\345\223\201", 0));
        pbt_9->setText(QApplication::translate("AccountAdmin", "\346\222\244\351\224\200\344\277\256\346\224\271\350\217\234\345\223\201", 0));
        pbt_10->setText(QApplication::translate("AccountAdmin", "\346\267\273\345\212\240\350\217\234\345\223\201", 0));
        pbt_11->setText(QApplication::translate("AccountAdmin", "\345\210\240\351\231\244\350\217\234\345\223\201", 0));
        pbt_12->setText(QApplication::translate("AccountAdmin", "\346\230\276\347\244\272\345\205\250\351\203\250\350\217\234\345\223\201", 0));
        label_2->setText(QApplication::translate("AccountAdmin", "\350\217\234\345\220\215\357\274\232", 0));
        pbt_13->setText(QApplication::translate("AccountAdmin", "\346\237\245\350\257\242", 0));
    } // retranslateUi

};

namespace Ui {
    class AccountAdmin: public Ui_AccountAdmin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCOUNTADMIN_H
