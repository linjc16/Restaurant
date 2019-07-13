/********************************************************************************
** Form generated from reading UI file 'review.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REVIEW_H
#define UI_REVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Review
{
public:
    QTabWidget *tabWidget;
    QWidget *tab_waiter;
    QPushButton *star1_pbt;
    QPushButton *star2_pbt;
    QPushButton *star3_pbt;
    QPushButton *star5_pbt;
    QPushButton *star4_pbt;
    QTextEdit *waiter_textEdit;
    QLabel *label;
    QLabel *label_2;
    QListView *listView_2;
    QListView *listView_3;
    QWidget *tab_dishes;
    QPushButton *back_btn;
    QPushButton *next_btn;
    QPushButton *star5_pbt_2;
    QPushButton *star4_pbt_2;
    QPushButton *star2_pbt_2;
    QPushButton *star1_pbt_2;
    QPushButton *star3_pbt_2;
    QTextEdit *dishes_textEdit;
    QLabel *label_3;
    QLabel *dish_name_label;
    QListView *listView_4;
    QListView *listView_5;
    QPushButton *pushButton;

    void setupUi(QDialog *Review)
    {
        if (Review->objectName().isEmpty())
            Review->setObjectName(QStringLiteral("Review"));
        Review->resize(700, 450);
        Review->setStyleSheet(QString::fromUtf8("QDialog#Review{\n"
"border-image:url(:/Image/\347\231\273\345\275\225\347\225\214\351\235\242.png);\n"
"}\n"
""));
        tabWidget = new QTabWidget(Review);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(-10, -1, 721, 461));
        tabWidget->setStyleSheet(QString::fromUtf8("QWidget#tab_waiter\n"
"{\n"
"	border-image:url(:/Image/\347\231\273\345\275\225\347\225\214\351\235\2422.png);\n"
"	border-radius:0;\n"
"}\n"
"QWidget#tab_dishes\n"
"{\n"
"	border-image:url(:/Image/\347\231\273\345\275\225\347\225\214\351\235\2422.png);\n"
"	border-radius:0;\n"
"}\n"
""));
        tab_waiter = new QWidget();
        tab_waiter->setObjectName(QStringLiteral("tab_waiter"));
        star1_pbt = new QPushButton(tab_waiter);
        star1_pbt->setObjectName(QStringLiteral("star1_pbt"));
        star1_pbt->setGeometry(QRect(60, 260, 30, 30));
        star1_pbt->setStyleSheet(QStringLiteral("border-radius:0;"));
        star2_pbt = new QPushButton(tab_waiter);
        star2_pbt->setObjectName(QStringLiteral("star2_pbt"));
        star2_pbt->setGeometry(QRect(120, 260, 30, 30));
        star2_pbt->setStyleSheet(QStringLiteral("border-radius:0;"));
        star3_pbt = new QPushButton(tab_waiter);
        star3_pbt->setObjectName(QStringLiteral("star3_pbt"));
        star3_pbt->setGeometry(QRect(180, 260, 30, 30));
        star3_pbt->setStyleSheet(QStringLiteral("border-radius:0;"));
        star5_pbt = new QPushButton(tab_waiter);
        star5_pbt->setObjectName(QStringLiteral("star5_pbt"));
        star5_pbt->setGeometry(QRect(300, 260, 30, 30));
        star5_pbt->setStyleSheet(QStringLiteral("border-radius:0;"));
        star4_pbt = new QPushButton(tab_waiter);
        star4_pbt->setObjectName(QStringLiteral("star4_pbt"));
        star4_pbt->setGeometry(QRect(240, 260, 30, 30));
        star4_pbt->setStyleSheet(QStringLiteral("border-radius:0;"));
        waiter_textEdit = new QTextEdit(tab_waiter);
        waiter_textEdit->setObjectName(QStringLiteral("waiter_textEdit"));
        waiter_textEdit->setGeometry(QRect(400, 50, 270, 300));
        waiter_textEdit->setStyleSheet(QString::fromUtf8("background-color:rgba(244,244,244,100);\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label = new QLabel(tab_waiter);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(100, 145, 91, 30));
        label->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);\n"
"font: 13pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_2 = new QLabel(tab_waiter);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(190, 145, 111, 30));
        label_2->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);\n"
"font: 13pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        listView_2 = new QListView(tab_waiter);
        listView_2->setObjectName(QStringLiteral("listView_2"));
        listView_2->setGeometry(QRect(90, 140, 211, 40));
        listView_2->setStyleSheet(QLatin1String("background-color:rgba(254, 254, 254, 50);\n"
"border-radius:0;"));
        listView_3 = new QListView(tab_waiter);
        listView_3->setObjectName(QStringLiteral("listView_3"));
        listView_3->setGeometry(QRect(50, 255, 295, 40));
        listView_3->setStyleSheet(QLatin1String("background-color:rgba(254, 254, 254, 50);\n"
"border-radius:0;"));
        tabWidget->addTab(tab_waiter, QString());
        waiter_textEdit->raise();
        label->raise();
        label_2->raise();
        listView_2->raise();
        listView_3->raise();
        star3_pbt->raise();
        star2_pbt->raise();
        star4_pbt->raise();
        star1_pbt->raise();
        star5_pbt->raise();
        tab_dishes = new QWidget();
        tab_dishes->setObjectName(QStringLiteral("tab_dishes"));
        back_btn = new QPushButton(tab_dishes);
        back_btn->setObjectName(QStringLiteral("back_btn"));
        back_btn->setGeometry(QRect(90, 20, 30, 30));
        back_btn->setStyleSheet(QStringLiteral("border-radius:0;"));
        next_btn = new QPushButton(tab_dishes);
        next_btn->setObjectName(QStringLiteral("next_btn"));
        next_btn->setGeometry(QRect(160, 20, 30, 30));
        next_btn->setStyleSheet(QStringLiteral("border-radius:0;"));
        star5_pbt_2 = new QPushButton(tab_dishes);
        star5_pbt_2->setObjectName(QStringLiteral("star5_pbt_2"));
        star5_pbt_2->setGeometry(QRect(300, 260, 30, 30));
        star5_pbt_2->setStyleSheet(QStringLiteral("border-radius:0;"));
        star4_pbt_2 = new QPushButton(tab_dishes);
        star4_pbt_2->setObjectName(QStringLiteral("star4_pbt_2"));
        star4_pbt_2->setGeometry(QRect(240, 260, 30, 30));
        star4_pbt_2->setStyleSheet(QStringLiteral("border-radius:0;"));
        star2_pbt_2 = new QPushButton(tab_dishes);
        star2_pbt_2->setObjectName(QStringLiteral("star2_pbt_2"));
        star2_pbt_2->setGeometry(QRect(120, 260, 30, 30));
        star2_pbt_2->setStyleSheet(QStringLiteral("border-radius:0;"));
        star1_pbt_2 = new QPushButton(tab_dishes);
        star1_pbt_2->setObjectName(QStringLiteral("star1_pbt_2"));
        star1_pbt_2->setGeometry(QRect(60, 260, 30, 30));
        star1_pbt_2->setStyleSheet(QStringLiteral("border-radius:0;"));
        star3_pbt_2 = new QPushButton(tab_dishes);
        star3_pbt_2->setObjectName(QStringLiteral("star3_pbt_2"));
        star3_pbt_2->setGeometry(QRect(180, 260, 30, 30));
        star3_pbt_2->setStyleSheet(QStringLiteral("border-radius:0;"));
        dishes_textEdit = new QTextEdit(tab_dishes);
        dishes_textEdit->setObjectName(QStringLiteral("dishes_textEdit"));
        dishes_textEdit->setGeometry(QRect(400, 50, 270, 300));
        dishes_textEdit->setStyleSheet(QString::fromUtf8("background-color:rgba(244,244,244,100);\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_3 = new QLabel(tab_dishes);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(100, 145, 71, 30));
        label_3->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);\n"
"font: 13pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        dish_name_label = new QLabel(tab_dishes);
        dish_name_label->setObjectName(QStringLiteral("dish_name_label"));
        dish_name_label->setGeometry(QRect(180, 145, 101, 30));
        dish_name_label->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);\n"
"font: 13pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        listView_4 = new QListView(tab_dishes);
        listView_4->setObjectName(QStringLiteral("listView_4"));
        listView_4->setGeometry(QRect(90, 140, 200, 40));
        listView_4->setStyleSheet(QLatin1String("background-color:rgba(254, 254, 254, 50);\n"
"border-radius:0;"));
        listView_5 = new QListView(tab_dishes);
        listView_5->setObjectName(QStringLiteral("listView_5"));
        listView_5->setGeometry(QRect(50, 255, 295, 40));
        listView_5->setStyleSheet(QLatin1String("background-color:rgba(254, 254, 254, 50);\n"
"border-radius:0;"));
        tabWidget->addTab(tab_dishes, QString());
        back_btn->raise();
        next_btn->raise();
        dishes_textEdit->raise();
        label_3->raise();
        dish_name_label->raise();
        listView_4->raise();
        listView_5->raise();
        star4_pbt_2->raise();
        star1_pbt_2->raise();
        star5_pbt_2->raise();
        star3_pbt_2->raise();
        star2_pbt_2->raise();
        pushButton = new QPushButton(Review);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(570, 400, 90, 30));
        pushButton->setStyleSheet(QString::fromUtf8("background-color:rgb(44, 178, 214);\n"
"border-radius:10%;\n"
"color:rgb(255, 255, 255);\n"
"font: 13pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"QPushButton#pushButton:hover{  \n"
"background-color:rgb(255, 255, 214);  \n"
"}  "));

        retranslateUi(Review);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Review);
    } // setupUi

    void retranslateUi(QDialog *Review)
    {
        Review->setWindowTitle(QApplication::translate("Review", "Dialog", 0));
        star1_pbt->setText(QString());
        star2_pbt->setText(QString());
        star3_pbt->setText(QString());
        star5_pbt->setText(QString());
        star4_pbt->setText(QString());
        label->setText(QApplication::translate("Review", "\346\234\215\345\212\241\345\221\230ID\357\274\232", 0));
        label_2->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_waiter), QApplication::translate("Review", "\350\257\204\344\273\267\346\234\215\345\212\241\345\221\230", 0));
        back_btn->setText(QString());
        next_btn->setText(QString());
        star5_pbt_2->setText(QString());
        star4_pbt_2->setText(QString());
        star2_pbt_2->setText(QString());
        star1_pbt_2->setText(QString());
        star3_pbt_2->setText(QString());
        label_3->setText(QApplication::translate("Review", " \350\217\234\345\220\215\357\274\232", 0));
        dish_name_label->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_dishes), QApplication::translate("Review", "\350\257\204\344\273\267\350\217\234\345\223\201", 0));
        pushButton->setText(QApplication::translate("Review", "\346\217\220\344\272\244\350\257\204\344\273\267", 0));
    } // retranslateUi

};

namespace Ui {
    class Review: public Ui_Review {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REVIEW_H
