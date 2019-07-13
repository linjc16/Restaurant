/********************************************************************************
** Form generated from reading UI file 'remark_dishes.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REMARK_DISHES_H
#define UI_REMARK_DISHES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Remark_dishes
{
public:
    QPushButton *star5_pbt_3;
    QTextEdit *waiter_textEdit_2;
    QListView *listView_6;
    QLabel *label_5;
    QPushButton *star1_pbt_3;
    QPushButton *star4_pbt_3;
    QPushButton *next_btn_2;
    QPushButton *star3_pbt_3;
    QPushButton *back_btn_2;
    QLabel *label_4;
    QPushButton *star2_pbt_3;
    QListView *listView_7;
    QListView *listView_8;
    QLabel *label_6;
    QLabel *label_7;

    void setupUi(QDialog *Remark_dishes)
    {
        if (Remark_dishes->objectName().isEmpty())
            Remark_dishes->setObjectName(QStringLiteral("Remark_dishes"));
        Remark_dishes->resize(721, 461);
        Remark_dishes->setMinimumSize(QSize(721, 461));
        Remark_dishes->setMaximumSize(QSize(721, 461));
        Remark_dishes->setStyleSheet(QString::fromUtf8("QDialog#Remark_dishes{\n"
"border-image:url(:/Image/\347\231\273\345\275\225\347\225\214\351\235\242.png);\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
""));
        star5_pbt_3 = new QPushButton(Remark_dishes);
        star5_pbt_3->setObjectName(QStringLiteral("star5_pbt_3"));
        star5_pbt_3->setGeometry(QRect(300, 290, 30, 30));
        star5_pbt_3->setStyleSheet(QStringLiteral("border-radius:0;"));
        waiter_textEdit_2 = new QTextEdit(Remark_dishes);
        waiter_textEdit_2->setObjectName(QStringLiteral("waiter_textEdit_2"));
        waiter_textEdit_2->setGeometry(QRect(410, 80, 270, 300));
        waiter_textEdit_2->setStyleSheet(QString::fromUtf8("background-color:rgba(244,244,244,100);\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        waiter_textEdit_2->setReadOnly(true);
        listView_6 = new QListView(Remark_dishes);
        listView_6->setObjectName(QStringLiteral("listView_6"));
        listView_6->setGeometry(QRect(90, 135, 220, 40));
        listView_6->setStyleSheet(QLatin1String("background-color:rgba(254, 254, 254, 100);\n"
"border-radius:0;"));
        label_5 = new QLabel(Remark_dishes);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(190, 140, 110, 30));
        label_5->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);\n"
"font: 13pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        star1_pbt_3 = new QPushButton(Remark_dishes);
        star1_pbt_3->setObjectName(QStringLiteral("star1_pbt_3"));
        star1_pbt_3->setGeometry(QRect(60, 290, 30, 30));
        star1_pbt_3->setStyleSheet(QStringLiteral("border-radius:0;"));
        star4_pbt_3 = new QPushButton(Remark_dishes);
        star4_pbt_3->setObjectName(QStringLiteral("star4_pbt_3"));
        star4_pbt_3->setGeometry(QRect(240, 290, 30, 30));
        star4_pbt_3->setStyleSheet(QStringLiteral("border-radius:0;"));
        next_btn_2 = new QPushButton(Remark_dishes);
        next_btn_2->setObjectName(QStringLiteral("next_btn_2"));
        next_btn_2->setGeometry(QRect(210, 60, 30, 30));
        next_btn_2->setStyleSheet(QStringLiteral("border-radius:0;"));
        star3_pbt_3 = new QPushButton(Remark_dishes);
        star3_pbt_3->setObjectName(QStringLiteral("star3_pbt_3"));
        star3_pbt_3->setGeometry(QRect(180, 290, 30, 30));
        star3_pbt_3->setStyleSheet(QStringLiteral("border-radius:0;"));
        back_btn_2 = new QPushButton(Remark_dishes);
        back_btn_2->setObjectName(QStringLiteral("back_btn_2"));
        back_btn_2->setGeometry(QRect(130, 60, 30, 30));
        back_btn_2->setStyleSheet(QStringLiteral("border-radius:0;"));
        label_4 = new QLabel(Remark_dishes);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(100, 140, 90, 30));
        label_4->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);\n"
"font: 13pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        star2_pbt_3 = new QPushButton(Remark_dishes);
        star2_pbt_3->setObjectName(QStringLiteral("star2_pbt_3"));
        star2_pbt_3->setGeometry(QRect(120, 290, 30, 30));
        star2_pbt_3->setStyleSheet(QStringLiteral("border-radius:0;"));
        listView_7 = new QListView(Remark_dishes);
        listView_7->setObjectName(QStringLiteral("listView_7"));
        listView_7->setGeometry(QRect(40, 285, 295, 40));
        listView_7->setStyleSheet(QLatin1String("background-color:rgba(254, 254, 254, 100);\n"
"border-radius:0;"));
        listView_8 = new QListView(Remark_dishes);
        listView_8->setObjectName(QStringLiteral("listView_8"));
        listView_8->setGeometry(QRect(90, 215, 220, 40));
        listView_8->setStyleSheet(QLatin1String("background-color:rgba(254, 254, 254, 100);\n"
"border-radius:0;"));
        label_6 = new QLabel(Remark_dishes);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(100, 220, 90, 30));
        label_6->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);\n"
"font: 13pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_7 = new QLabel(Remark_dishes);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(190, 220, 110, 30));
        label_7->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);\n"
"font: 13pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        retranslateUi(Remark_dishes);

        QMetaObject::connectSlotsByName(Remark_dishes);
    } // setupUi

    void retranslateUi(QDialog *Remark_dishes)
    {
        Remark_dishes->setWindowTitle(QApplication::translate("Remark_dishes", "Dialog", 0));
        star5_pbt_3->setText(QString());
        label_5->setText(QString());
        star1_pbt_3->setText(QString());
        star4_pbt_3->setText(QString());
        next_btn_2->setText(QString());
        star3_pbt_3->setText(QString());
        back_btn_2->setText(QString());
        label_4->setText(QApplication::translate("Remark_dishes", "\350\217\234\345\223\201\345\220\215\345\255\227\357\274\232", 0));
        star2_pbt_3->setText(QString());
        label_6->setText(QApplication::translate("Remark_dishes", "\351\241\276\345\256\242ID\357\274\232", 0));
        label_7->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Remark_dishes: public Ui_Remark_dishes {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMARK_DISHES_H
