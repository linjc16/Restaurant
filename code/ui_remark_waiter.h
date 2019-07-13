/********************************************************************************
** Form generated from reading UI file 'remark_waiter.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REMARK_WAITER_H
#define UI_REMARK_WAITER_H

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

class Ui_Remark_waiter
{
public:
    QPushButton *back_btn_2;
    QPushButton *next_btn_2;
    QLabel *label_4;
    QLabel *label_5;
    QListView *listView_6;
    QPushButton *star1_pbt_3;
    QPushButton *star4_pbt_3;
    QPushButton *star5_pbt_3;
    QPushButton *star2_pbt_3;
    QPushButton *star3_pbt_3;
    QListView *listView_7;
    QTextEdit *waiter_textEdit_2;
    QListView *listView_8;
    QLabel *label_6;
    QLabel *label_7;

    void setupUi(QDialog *Remark_waiter)
    {
        if (Remark_waiter->objectName().isEmpty())
            Remark_waiter->setObjectName(QStringLiteral("Remark_waiter"));
        Remark_waiter->resize(721, 461);
        Remark_waiter->setMinimumSize(QSize(721, 461));
        Remark_waiter->setMaximumSize(QSize(721, 461));
        Remark_waiter->setStyleSheet(QString::fromUtf8("QDialog#Remark_waiter{\n"
"border-image:url(:/Image/\347\231\273\345\275\225\347\225\214\351\235\242.png);\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
""));
        back_btn_2 = new QPushButton(Remark_waiter);
        back_btn_2->setObjectName(QStringLiteral("back_btn_2"));
        back_btn_2->setGeometry(QRect(130, 60, 30, 30));
        back_btn_2->setStyleSheet(QStringLiteral("border-radius:0;"));
        next_btn_2 = new QPushButton(Remark_waiter);
        next_btn_2->setObjectName(QStringLiteral("next_btn_2"));
        next_btn_2->setGeometry(QRect(210, 60, 30, 30));
        next_btn_2->setStyleSheet(QStringLiteral("border-radius:0;"));
        label_4 = new QLabel(Remark_waiter);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(100, 145, 90, 30));
        label_4->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);\n"
"font: 13pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_5 = new QLabel(Remark_waiter);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(190, 145, 110, 30));
        label_5->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);\n"
"font: 13pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        listView_6 = new QListView(Remark_waiter);
        listView_6->setObjectName(QStringLiteral("listView_6"));
        listView_6->setGeometry(QRect(90, 140, 220, 40));
        listView_6->setStyleSheet(QLatin1String("background-color:rgba(254, 254, 254, 100);\n"
"border-radius:0;"));
        star1_pbt_3 = new QPushButton(Remark_waiter);
        star1_pbt_3->setObjectName(QStringLiteral("star1_pbt_3"));
        star1_pbt_3->setGeometry(QRect(50, 290, 30, 30));
        star1_pbt_3->setStyleSheet(QStringLiteral("border-radius:0;"));
        star4_pbt_3 = new QPushButton(Remark_waiter);
        star4_pbt_3->setObjectName(QStringLiteral("star4_pbt_3"));
        star4_pbt_3->setGeometry(QRect(230, 290, 30, 30));
        star4_pbt_3->setStyleSheet(QStringLiteral("border-radius:0;"));
        star5_pbt_3 = new QPushButton(Remark_waiter);
        star5_pbt_3->setObjectName(QStringLiteral("star5_pbt_3"));
        star5_pbt_3->setGeometry(QRect(290, 290, 30, 30));
        star5_pbt_3->setStyleSheet(QStringLiteral("border-radius:0;"));
        star2_pbt_3 = new QPushButton(Remark_waiter);
        star2_pbt_3->setObjectName(QStringLiteral("star2_pbt_3"));
        star2_pbt_3->setGeometry(QRect(110, 290, 30, 30));
        star2_pbt_3->setStyleSheet(QStringLiteral("border-radius:0;"));
        star3_pbt_3 = new QPushButton(Remark_waiter);
        star3_pbt_3->setObjectName(QStringLiteral("star3_pbt_3"));
        star3_pbt_3->setGeometry(QRect(170, 290, 30, 30));
        star3_pbt_3->setStyleSheet(QStringLiteral("border-radius:0;"));
        listView_7 = new QListView(Remark_waiter);
        listView_7->setObjectName(QStringLiteral("listView_7"));
        listView_7->setGeometry(QRect(40, 285, 295, 40));
        listView_7->setStyleSheet(QLatin1String("background-color:rgba(254, 254, 254, 100);\n"
"border-radius:0;"));
        waiter_textEdit_2 = new QTextEdit(Remark_waiter);
        waiter_textEdit_2->setObjectName(QStringLiteral("waiter_textEdit_2"));
        waiter_textEdit_2->setGeometry(QRect(410, 90, 270, 300));
        waiter_textEdit_2->setStyleSheet(QString::fromUtf8("background-color:rgba(244,244,244,100);\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        waiter_textEdit_2->setReadOnly(true);
        listView_8 = new QListView(Remark_waiter);
        listView_8->setObjectName(QStringLiteral("listView_8"));
        listView_8->setGeometry(QRect(90, 210, 220, 40));
        listView_8->setStyleSheet(QLatin1String("background-color:rgba(254, 254, 254, 100);\n"
"border-radius:0;"));
        label_6 = new QLabel(Remark_waiter);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(100, 215, 90, 30));
        label_6->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);\n"
"font: 13pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_7 = new QLabel(Remark_waiter);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(190, 215, 110, 30));
        label_7->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);\n"
"font: 13pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        retranslateUi(Remark_waiter);

        QMetaObject::connectSlotsByName(Remark_waiter);
    } // setupUi

    void retranslateUi(QDialog *Remark_waiter)
    {
        Remark_waiter->setWindowTitle(QApplication::translate("Remark_waiter", "Dialog", 0));
        back_btn_2->setText(QString());
        next_btn_2->setText(QString());
        label_4->setText(QApplication::translate("Remark_waiter", "\346\234\215\345\212\241\345\221\230ID\357\274\232", 0));
        label_5->setText(QString());
        star1_pbt_3->setText(QString());
        star4_pbt_3->setText(QString());
        star5_pbt_3->setText(QString());
        star2_pbt_3->setText(QString());
        star3_pbt_3->setText(QString());
        label_6->setText(QApplication::translate("Remark_waiter", "\351\241\276\345\256\242ID\357\274\232", 0));
        label_7->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Remark_waiter: public Ui_Remark_waiter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMARK_WAITER_H
