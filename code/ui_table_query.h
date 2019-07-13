/********************************************************************************
** Form generated from reading UI file 'table_query.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABLE_QUERY_H
#define UI_TABLE_QUERY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Table_query
{
public:
    QGroupBox *groupBox;
    QLabel *label;
    QPushButton *leave_pbt;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QListView *listView;
    QListView *listView_2;

    void setupUi(QDialog *Table_query)
    {
        if (Table_query->objectName().isEmpty())
            Table_query->setObjectName(QStringLiteral("Table_query"));
        Table_query->resize(630, 450);
        Table_query->setMinimumSize(QSize(630, 450));
        Table_query->setMaximumSize(QSize(630, 450));
        Table_query->setStyleSheet(QString::fromUtf8("QDialog#Table_query{\n"
"border-image:url(:/Image/\351\200\211\346\213\251\346\241\214\344\275\2152.jpg);\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
""));
        groupBox = new QGroupBox(Table_query);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(50, 0, 450, 431));
        groupBox->setStyleSheet(QStringLiteral("border-radius:0;"));
        label = new QLabel(Table_query);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(505, 185, 111, 30));
        label->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);\n"
"font: 13pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        leave_pbt = new QPushButton(Table_query);
        leave_pbt->setObjectName(QStringLiteral("leave_pbt"));
        leave_pbt->setGeometry(QRect(520, 370, 90, 30));
        leave_pbt->setStyleSheet(QString::fromUtf8("background-color:rgb(212, 111, 21);\n"
"border-radius:10%;\n"
"color:rgb(255, 255, 255);\n"
"font: 13pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"QPushButton#pushButton:hover{  \n"
"background-color:rgb(255, 255, 214);  \n"
"}  "));
        label_2 = new QLabel(Table_query);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(550, 40, 60, 30));
        label_2->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);\n"
"font: 13pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_3 = new QLabel(Table_query);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(550, 70, 60, 30));
        label_3->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);\n"
"font: 13pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_4 = new QLabel(Table_query);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(510, 40, 30, 30));
        label_4->setStyleSheet(QString::fromUtf8("border-image:url(:/Image/\351\244\220\346\241\214_s1.png);"));
        label_5 = new QLabel(Table_query);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(510, 70, 30, 30));
        label_5->setStyleSheet(QString::fromUtf8("border-image:url(:/Image/\351\244\220\346\241\214\357\274\210\345\277\231\347\242\214\357\274\211.png);"));
        listView = new QListView(Table_query);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setGeometry(QRect(500, 180, 120, 40));
        listView->setStyleSheet(QLatin1String("background-color:rgba(254, 254, 254, 100);\n"
"border-radius:0;"));
        listView_2 = new QListView(Table_query);
        listView_2->setObjectName(QStringLiteral("listView_2"));
        listView_2->setGeometry(QRect(500, 40, 120, 61));
        listView_2->setStyleSheet(QLatin1String("background-color:rgba(254, 254, 254, 100);\n"
"border-radius:0;"));

        retranslateUi(Table_query);

        QMetaObject::connectSlotsByName(Table_query);
    } // setupUi

    void retranslateUi(QDialog *Table_query)
    {
        Table_query->setWindowTitle(QApplication::translate("Table_query", "Dialog", 0));
        groupBox->setTitle(QString());
        label->setText(QString());
        leave_pbt->setText(QApplication::translate("Table_query", "\347\246\273\345\274\200\345\272\247\344\275\215", 0));
        label_2->setText(QApplication::translate("Table_query", "FREE", 0));
        label_3->setText(QApplication::translate("Table_query", "TOKEN", 0));
        label_4->setText(QString());
        label_5->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Table_query: public Ui_Table_query {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABLE_QUERY_H
