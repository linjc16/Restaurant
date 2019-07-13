/********************************************************************************
** Form generated from reading UI file 'cook_admin.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COOK_ADMIN_H
#define UI_COOK_ADMIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Cook_admin
{
public:
    QPushButton *finishpbt;
    QPushButton *claim_pbt;
    QListWidget *cook_listWidget;
    QListWidget *claim_listWidget;

    void setupUi(QDialog *Cook_admin)
    {
        if (Cook_admin->objectName().isEmpty())
            Cook_admin->setObjectName(QStringLiteral("Cook_admin"));
        Cook_admin->resize(760, 480);
        Cook_admin->setMinimumSize(QSize(760, 480));
        Cook_admin->setMaximumSize(QSize(760, 480));
        Cook_admin->setStyleSheet(QString::fromUtf8("QDialog#Cook_admin{\n"
"border-image:url(:/Image/\347\231\273\345\275\225\347\225\214\351\235\242.png);\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
""));
        finishpbt = new QPushButton(Cook_admin);
        finishpbt->setObjectName(QStringLiteral("finishpbt"));
        finishpbt->setGeometry(QRect(540, 440, 90, 30));
        finishpbt->setStyleSheet(QString::fromUtf8("background-color:rgb(44, 178, 214);\n"
"border-radius:10%;\n"
"color:rgb(255, 255, 255);\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"QPushButton#pushButton:hover{  \n"
"background-color:rgb(255, 255, 214);  \n"
"}  "));
        claim_pbt = new QPushButton(Cook_admin);
        claim_pbt->setObjectName(QStringLiteral("claim_pbt"));
        claim_pbt->setGeometry(QRect(120, 440, 90, 30));
        claim_pbt->setStyleSheet(QString::fromUtf8("background-color:rgb(44, 178, 214);\n"
"border-radius:10%;\n"
"color:rgb(255, 255, 255);\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"QPushButton#pushButton:hover{  \n"
"background-color:rgb(255, 255, 214);  \n"
"}  "));
        cook_listWidget = new QListWidget(Cook_admin);
        cook_listWidget->setObjectName(QStringLiteral("cook_listWidget"));
        cook_listWidget->setGeometry(QRect(10, 40, 320, 391));
        cook_listWidget->setStyleSheet(QString::fromUtf8("background-color:rgba(244,244,244,100);\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        claim_listWidget = new QListWidget(Cook_admin);
        claim_listWidget->setObjectName(QStringLiteral("claim_listWidget"));
        claim_listWidget->setGeometry(QRect(430, 40, 320, 391));
        claim_listWidget->setLayoutDirection(Qt::LeftToRight);
        claim_listWidget->setStyleSheet(QString::fromUtf8("background-color:rgba(244,244,244,100);\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        QWidget::setTabOrder(claim_pbt, finishpbt);
        QWidget::setTabOrder(finishpbt, cook_listWidget);
        QWidget::setTabOrder(cook_listWidget, claim_listWidget);

        retranslateUi(Cook_admin);

        QMetaObject::connectSlotsByName(Cook_admin);
    } // setupUi

    void retranslateUi(QDialog *Cook_admin)
    {
        Cook_admin->setWindowTitle(QApplication::translate("Cook_admin", "Dialog", 0));
        finishpbt->setText(QApplication::translate("Cook_admin", "\345\256\214\346\210\220\351\200\211\344\270\255", 0));
        claim_pbt->setText(QApplication::translate("Cook_admin", "\350\256\244\351\242\206\351\200\211\344\270\255", 0));
    } // retranslateUi

};

namespace Ui {
    class Cook_admin: public Ui_Cook_admin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COOK_ADMIN_H
