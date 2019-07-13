/********************************************************************************
** Form generated from reading UI file 'register.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_H
#define UI_REGISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Register
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLineEdit *mobile;
    QLineEdit *reg_pwd;
    QLineEdit *reg_pwd_check;
    QLabel *label_4;
    QLabel *mobile_label;
    QLabel *password_label;
    QLabel *pwd_ensure_label;
    QLabel *label_m;
    QLabel *label_p;
    QLabel *label_ep;

    void setupUi(QDialog *Register)
    {
        if (Register->objectName().isEmpty())
            Register->setObjectName(QStringLiteral("Register"));
        Register->resize(610, 400);
        Register->setMinimumSize(QSize(610, 400));
        Register->setMaximumSize(QSize(610, 400));
        Register->setStyleSheet(QString::fromUtf8("QDialog#Register{\n"
"border-image:url(:/Image/\347\231\273\345\275\225\347\225\214\351\235\242.png);\n"
"}\n"
""));
        pushButton = new QPushButton(Register);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(150, 300, 90, 30));
        pushButton->setStyleSheet(QString::fromUtf8("background-color:rgb(44, 178, 214);\n"
"border-radius:10%;\n"
"color:rgb(255, 255, 255);\n"
"font: 13pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"QPushButton#pushButton:hover{  \n"
"background-color:rgb(255, 255, 214);  \n"
"}  "));
        pushButton_2 = new QPushButton(Register);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(370, 300, 90, 30));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color:rgb(116, 224, 191);\n"
"border-radius:10%;\n"
"color:rgb(255, 255, 255);\n"
"font: 13pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        mobile = new QLineEdit(Register);
        mobile->setObjectName(QStringLiteral("mobile"));
        mobile->setGeometry(QRect(230, 130, 150, 30));
        mobile->setStyleSheet(QString::fromUtf8("border-radius:10%;\n"
"background-color:rgb(255, 255, 255);\n"
"color:rgb(200, 193, 197);\n"
"padding-left:20%;\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        reg_pwd = new QLineEdit(Register);
        reg_pwd->setObjectName(QStringLiteral("reg_pwd"));
        reg_pwd->setGeometry(QRect(230, 180, 150, 30));
        reg_pwd->setStyleSheet(QString::fromUtf8("border-radius:10%;\n"
"background-color:rgb(255, 255, 255);\n"
"color:rgb(200, 193, 197);\n"
"padding-left:20%;\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        reg_pwd->setEchoMode(QLineEdit::Password);
        reg_pwd_check = new QLineEdit(Register);
        reg_pwd_check->setObjectName(QStringLiteral("reg_pwd_check"));
        reg_pwd_check->setGeometry(QRect(230, 230, 150, 30));
        reg_pwd_check->setStyleSheet(QString::fromUtf8("border-radius:10%;\n"
"background-color:rgb(255, 255, 255);\n"
"color:rgb(200, 193, 197);\n"
"padding-left:20%;\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        reg_pwd_check->setEchoMode(QLineEdit::Password);
        label_4 = new QLabel(Register);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(270, 60, 61, 40));
        label_4->setStyleSheet(QString::fromUtf8("color:white;\n"
"font: 22pt \"\351\200\240\345\255\227\345\267\245\346\210\277\345\212\233\351\273\221\357\274\210\351\235\236\345\225\206\347\224\250\357\274\211\345\270\270\350\247\204\344\275\223\";"));
        mobile_label = new QLabel(Register);
        mobile_label->setObjectName(QStringLiteral("mobile_label"));
        mobile_label->setGeometry(QRect(390, 135, 18, 18));
        password_label = new QLabel(Register);
        password_label->setObjectName(QStringLiteral("password_label"));
        password_label->setGeometry(QRect(390, 185, 18, 18));
        pwd_ensure_label = new QLabel(Register);
        pwd_ensure_label->setObjectName(QStringLiteral("pwd_ensure_label"));
        pwd_ensure_label->setGeometry(QRect(390, 235, 18, 18));
        label_m = new QLabel(Register);
        label_m->setObjectName(QStringLiteral("label_m"));
        label_m->setGeometry(QRect(390, 135, 101, 18));
        label_m->setStyleSheet(QStringLiteral("color:rgb(255, 8, 12)"));
        label_p = new QLabel(Register);
        label_p->setObjectName(QStringLiteral("label_p"));
        label_p->setGeometry(QRect(390, 185, 101, 18));
        label_p->setStyleSheet(QStringLiteral("color:rgb(255, 8, 12)"));
        label_ep = new QLabel(Register);
        label_ep->setObjectName(QStringLiteral("label_ep"));
        label_ep->setGeometry(QRect(390, 235, 101, 18));
        label_ep->setStyleSheet(QStringLiteral("color:rgb(255, 8, 12)"));

        retranslateUi(Register);
        QObject::connect(pushButton_2, SIGNAL(clicked()), Register, SLOT(close()));

        QMetaObject::connectSlotsByName(Register);
    } // setupUi

    void retranslateUi(QDialog *Register)
    {
        Register->setWindowTitle(QApplication::translate("Register", "Dialog", 0));
        pushButton->setText(QApplication::translate("Register", "\347\241\256\350\256\244\346\263\250\345\206\214", 0));
        pushButton_2->setText(QApplication::translate("Register", "\345\217\226\346\266\210", 0));
        mobile->setText(QString());
        mobile->setPlaceholderText(QApplication::translate("Register", "\350\257\267\350\276\223\345\205\24511\344\275\215\346\211\213\346\234\272\345\217\267", 0));
        reg_pwd->setPlaceholderText(QApplication::translate("Register", "\350\257\267\350\276\223\345\205\245\346\202\250\347\232\204\345\257\206\347\240\201", 0));
        reg_pwd_check->setPlaceholderText(QApplication::translate("Register", "\345\206\215\346\254\241\350\276\223\345\205\245\346\202\250\347\232\204\345\257\206\347\240\201", 0));
        label_4->setText(QApplication::translate("Register", "\346\263\250\345\206\214", 0));
        mobile_label->setText(QString());
        password_label->setText(QString());
        pwd_ensure_label->setText(QString());
        label_m->setText(QString());
        label_p->setText(QString());
        label_ep->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Register: public Ui_Register {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_H
