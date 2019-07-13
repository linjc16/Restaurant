/********************************************************************************
** Form generated from reading UI file 'logindlg.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDLG_H
#define UI_LOGINDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_LoginDlg
{
public:
    QPushButton *pushButton_2;
    QLineEdit *txtname;
    QLineEdit *txtpwd;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QComboBox *model_chosen;
    QLabel *label;

    void setupUi(QDialog *LoginDlg)
    {
        if (LoginDlg->objectName().isEmpty())
            LoginDlg->setObjectName(QStringLiteral("LoginDlg"));
        LoginDlg->resize(610, 400);
        LoginDlg->setMinimumSize(QSize(610, 400));
        LoginDlg->setMaximumSize(QSize(610, 400));
        LoginDlg->setCursor(QCursor(Qt::ArrowCursor));
        LoginDlg->setFocusPolicy(Qt::NoFocus);
        LoginDlg->setStyleSheet(QString::fromUtf8("QDialog#LoginDlg{\n"
"border-image:url(:/Image/\347\231\273\345\275\225\347\225\214\351\235\242.png);\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
""));
        pushButton_2 = new QPushButton(LoginDlg);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(370, 300, 90, 30));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color:rgb(116, 224, 191);\n"
"border-radius:10%;\n"
"color:rgb(255, 255, 255);\n"
"font: 13pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        txtname = new QLineEdit(LoginDlg);
        txtname->setObjectName(QStringLiteral("txtname"));
        txtname->setGeometry(QRect(230, 180, 150, 30));
        txtname->setStyleSheet(QString::fromUtf8("border-radius:10%;\n"
"background-color:rgb(255, 255, 255);\n"
"color:rgb(200, 193, 197);\n"
"padding-left:20%;\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        txtpwd = new QLineEdit(LoginDlg);
        txtpwd->setObjectName(QStringLiteral("txtpwd"));
        txtpwd->setGeometry(QRect(230, 230, 150, 30));
        txtpwd->setStyleSheet(QString::fromUtf8("border-radius:10%;\n"
"color:rgb(200, 193, 197);\n"
"background-color:rgb(255, 255, 255);\n"
"padding-left:20%;\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        txtpwd->setEchoMode(QLineEdit::Password);
        pushButton = new QPushButton(LoginDlg);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(150, 300, 90, 30));
        pushButton->setStyleSheet(QString::fromUtf8("background-color:rgb(44, 178, 214);\n"
"border-radius:10%;\n"
"color:rgb(255, 255, 255);\n"
"font: 13pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"QPushButton#pushButton:hover{  \n"
"background-color:rgb(255, 255, 214);  \n"
"}  "));
        pushButton->setCheckable(true);
        pushButton->setAutoDefault(true);
        pushButton_3 = new QPushButton(LoginDlg);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(390, 185, 75, 20));
        pushButton_3->setStyleSheet(QLatin1String("background-color:rgb(218, 80, 104);\n"
"border-radius:10%;\n"
"color:rgb(255, 255, 255);"));
        model_chosen = new QComboBox(LoginDlg);
        model_chosen->setObjectName(QStringLiteral("model_chosen"));
        model_chosen->setGeometry(QRect(230, 130, 150, 30));
        model_chosen->setStyleSheet(QString::fromUtf8("border: 1px solid #32435E;   \n"
"border-radius: 3px;       \n"
"down-arrow{image:url(:/Image/\344\270\213\346\213\211\346\241\206\346\217\220\347\244\272\345\233\276\346\240\207.png) ;}\n"
"\n"
""));
        label = new QLabel(LoginDlg);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(230, 80, 150, 40));
        label->setStyleSheet(QString::fromUtf8("font: 30pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";\n"
"color:rgb(255, 255, 255);"));
        label->setFrameShadow(QFrame::Plain);

        retranslateUi(LoginDlg);

        QMetaObject::connectSlotsByName(LoginDlg);
    } // setupUi

    void retranslateUi(QDialog *LoginDlg)
    {
        LoginDlg->setWindowTitle(QApplication::translate("LoginDlg", "\351\233\266\345\237\272\347\241\200\351\244\220\345\216\205", 0));
        pushButton_2->setText(QApplication::translate("LoginDlg", "\351\200\200\345\207\272", 0));
        txtname->setText(QString());
        txtname->setPlaceholderText(QApplication::translate("LoginDlg", "\350\257\267\350\276\223\345\205\24511\344\275\215\346\211\213\346\234\272\345\217\267", 0));
        txtpwd->setText(QString());
        txtpwd->setPlaceholderText(QApplication::translate("LoginDlg", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201", 0));
        pushButton->setText(QApplication::translate("LoginDlg", "\347\231\273\345\275\225", 0));
        pushButton_3->setText(QApplication::translate("LoginDlg", "\346\226\260\347\224\250\346\210\267\346\263\250\345\206\214", 0));
        model_chosen->clear();
        model_chosen->insertItems(0, QStringList()
         << QApplication::translate("LoginDlg", "\347\224\250\346\210\267", 0)
         << QApplication::translate("LoginDlg", "\347\256\241\347\220\206\345\221\230", 0)
         << QApplication::translate("LoginDlg", "\346\234\215\345\212\241\345\221\230", 0)
         << QApplication::translate("LoginDlg", "\345\216\250\345\270\210", 0)
         << QApplication::translate("LoginDlg", "\347\273\217\347\220\206", 0)
        );
        label->setText(QApplication::translate("LoginDlg", "Restaurant", 0));
    } // retranslateUi

};

namespace Ui {
    class LoginDlg: public Ui_LoginDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDLG_H
