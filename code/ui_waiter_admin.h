/********************************************************************************
** Form generated from reading UI file 'waiter_admin.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WAITER_ADMIN_H
#define UI_WAITER_ADMIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Waiter_admin
{
public:
    QListWidget *table_listWidget;
    QListWidget *message_listWidget;
    QListWidget *dishes_listWidget;
    QPushButton *ensure_pushButton;
    QListWidget *waitering_listWidget;

    void setupUi(QDialog *Waiter_admin)
    {
        if (Waiter_admin->objectName().isEmpty())
            Waiter_admin->setObjectName(QStringLiteral("Waiter_admin"));
        Waiter_admin->resize(700, 465);
        Waiter_admin->setMinimumSize(QSize(700, 465));
        Waiter_admin->setMaximumSize(QSize(700, 465));
        Waiter_admin->setStyleSheet(QString::fromUtf8("QDialog#Waiter_admin{\n"
"border-image:url(:/Image/\347\231\273\345\275\225\347\225\214\351\235\242.png);\n"
"}\n"
""));
        table_listWidget = new QListWidget(Waiter_admin);
        table_listWidget->setObjectName(QStringLiteral("table_listWidget"));
        table_listWidget->setGeometry(QRect(20, 20, 321, 281));
        table_listWidget->setStyleSheet(QString::fromUtf8("background-color:rgba(244,244,244,100);\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        message_listWidget = new QListWidget(Waiter_admin);
        message_listWidget->setObjectName(QStringLiteral("message_listWidget"));
        message_listWidget->setGeometry(QRect(360, 20, 321, 171));
        message_listWidget->setStyleSheet(QString::fromUtf8("background-color:rgba(244,244,244,100);\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        dishes_listWidget = new QListWidget(Waiter_admin);
        dishes_listWidget->setObjectName(QStringLiteral("dishes_listWidget"));
        dishes_listWidget->setGeometry(QRect(360, 220, 321, 192));
        dishes_listWidget->setStyleSheet(QString::fromUtf8("background-color:rgba(244,244,244,100);\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        ensure_pushButton = new QPushButton(Waiter_admin);
        ensure_pushButton->setObjectName(QStringLiteral("ensure_pushButton"));
        ensure_pushButton->setGeometry(QRect(140, 430, 90, 30));
        ensure_pushButton->setStyleSheet(QString::fromUtf8("background-color:rgb(44, 178, 214);\n"
"border-radius:10%;\n"
"color:rgb(255, 255, 255);\n"
"font: 13pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"QPushButton#pushButton:hover{  \n"
"background-color:rgb(255, 255, 214);  \n"
"}  "));
        waitering_listWidget = new QListWidget(Waiter_admin);
        waitering_listWidget->setObjectName(QStringLiteral("waitering_listWidget"));
        waitering_listWidget->setGeometry(QRect(20, 310, 321, 101));
        waitering_listWidget->setStyleSheet(QString::fromUtf8("background-color:rgba(244,244,244,100);\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        retranslateUi(Waiter_admin);

        QMetaObject::connectSlotsByName(Waiter_admin);
    } // setupUi

    void retranslateUi(QDialog *Waiter_admin)
    {
        Waiter_admin->setWindowTitle(QApplication::translate("Waiter_admin", "Dialog", 0));
        ensure_pushButton->setText(QApplication::translate("Waiter_admin", "\346\234\215\345\212\241\351\200\211\344\270\255", 0));
    } // retranslateUi

};

namespace Ui {
    class Waiter_admin: public Ui_Waiter_admin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WAITER_ADMIN_H
