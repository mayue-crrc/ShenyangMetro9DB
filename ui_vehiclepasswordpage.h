/********************************************************************************
** Form generated from reading UI file 'vehiclepasswordpage.ui'
**
** Created: Wed Oct 24 13:51:39 2018
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VEHICLEPASSWORDPAGE_H
#define UI_VEHICLEPASSWORDPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VehiclePasswordPage
{
public:
    QLabel *label;
    QPushButton *returnBtn;
    QPushButton *Num1;
    QPushButton *Num2;
    QPushButton *Num3;
    QPushButton *Num5;
    QPushButton *Num4;
    QPushButton *Num6;
    QPushButton *Num8;
    QPushButton *Num7;
    QPushButton *Num9;
    QPushButton *Num0;
    QPushButton *NumDEL;
    QLabel *PasswordLbl;
    QLabel *label_2;
    QPushButton *confirmBtn;
    QLabel *alarmlbl;

    void setupUi(QWidget *VehiclePasswordPage)
    {
        if (VehiclePasswordPage->objectName().isEmpty())
            VehiclePasswordPage->setObjectName(QString::fromUtf8("VehiclePasswordPage"));
        VehiclePasswordPage->resize(1024, 686);
        VehiclePasswordPage->setStyleSheet(QString::fromUtf8("QWidget \n"
"{\n"
"	background-color:black;\n"
"}\n"
"QPushButton\n"
"{\n"
"	font:30px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: white;\n"
"	background-color:black;\n"
"	border-radius:8px;border-top: 4px solid lightgray;	\n"
"	border-left: 4px solid lightgray;border-bottom: 1px solid lightgray;	\n"
"	border-right: 1px solid lightgray;\n"
"}"));
        label = new QLabel(VehiclePasswordPage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(3, 610, 1018, 72));
        label->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(0, 0, 0);\n"
"\n"
"	border:1px solid white;\n"
""));
        returnBtn = new QPushButton(VehiclePasswordPage);
        returnBtn->setObjectName(QString::fromUtf8("returnBtn"));
        returnBtn->setGeometry(QRect(910, 620, 100, 50));
        returnBtn->setFocusPolicy(Qt::NoFocus);
        returnBtn->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	font: 20px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: white;\n"
"	background-color: rgb(0, 128, 0);\n"
"    border-top: 2px solid white;\n"
"	border-left: 2px solid white;\n"
"\n"
"}"));
        Num1 = new QPushButton(VehiclePasswordPage);
        Num1->setObjectName(QString::fromUtf8("Num1"));
        Num1->setGeometry(QRect(650, 190, 78, 71));
        Num1->setFocusPolicy(Qt::NoFocus);
        Num2 = new QPushButton(VehiclePasswordPage);
        Num2->setObjectName(QString::fromUtf8("Num2"));
        Num2->setGeometry(QRect(730, 190, 78, 71));
        Num2->setFocusPolicy(Qt::NoFocus);
        Num3 = new QPushButton(VehiclePasswordPage);
        Num3->setObjectName(QString::fromUtf8("Num3"));
        Num3->setGeometry(QRect(810, 190, 78, 71));
        Num3->setFocusPolicy(Qt::NoFocus);
        Num5 = new QPushButton(VehiclePasswordPage);
        Num5->setObjectName(QString::fromUtf8("Num5"));
        Num5->setGeometry(QRect(730, 260, 78, 71));
        Num5->setFocusPolicy(Qt::NoFocus);
        Num4 = new QPushButton(VehiclePasswordPage);
        Num4->setObjectName(QString::fromUtf8("Num4"));
        Num4->setGeometry(QRect(650, 260, 78, 71));
        Num4->setFocusPolicy(Qt::NoFocus);
        Num6 = new QPushButton(VehiclePasswordPage);
        Num6->setObjectName(QString::fromUtf8("Num6"));
        Num6->setGeometry(QRect(810, 260, 78, 71));
        Num6->setFocusPolicy(Qt::NoFocus);
        Num8 = new QPushButton(VehiclePasswordPage);
        Num8->setObjectName(QString::fromUtf8("Num8"));
        Num8->setGeometry(QRect(730, 330, 78, 71));
        Num8->setFocusPolicy(Qt::NoFocus);
        Num7 = new QPushButton(VehiclePasswordPage);
        Num7->setObjectName(QString::fromUtf8("Num7"));
        Num7->setGeometry(QRect(650, 330, 78, 71));
        Num7->setFocusPolicy(Qt::NoFocus);
        Num9 = new QPushButton(VehiclePasswordPage);
        Num9->setObjectName(QString::fromUtf8("Num9"));
        Num9->setGeometry(QRect(810, 330, 78, 71));
        Num9->setFocusPolicy(Qt::NoFocus);
        Num0 = new QPushButton(VehiclePasswordPage);
        Num0->setObjectName(QString::fromUtf8("Num0"));
        Num0->setGeometry(QRect(650, 400, 78, 71));
        Num0->setFocusPolicy(Qt::NoFocus);
        NumDEL = new QPushButton(VehiclePasswordPage);
        NumDEL->setObjectName(QString::fromUtf8("NumDEL"));
        NumDEL->setGeometry(QRect(730, 400, 161, 71));
        NumDEL->setFocusPolicy(Qt::NoFocus);
        PasswordLbl = new QLabel(VehiclePasswordPage);
        PasswordLbl->setObjectName(QString::fromUtf8("PasswordLbl"));
        PasswordLbl->setGeometry(QRect(290, 190, 271, 61));
        PasswordLbl->setStyleSheet(QString::fromUtf8("border:  3px solid white;\n"
"background-color:blue;\n"
"border-radius:8px;\n"
"font:30px; \n"
"color:white;"));
        PasswordLbl->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(VehiclePasswordPage);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 190, 221, 51));
        label_2->setStyleSheet(QString::fromUtf8("font:30px \"\345\276\256\350\275\257\351\233\205\351\273\221\"; \n"
"color:white;"));
        label_2->setAlignment(Qt::AlignCenter);
        confirmBtn = new QPushButton(VehiclePasswordPage);
        confirmBtn->setObjectName(QString::fromUtf8("confirmBtn"));
        confirmBtn->setGeometry(QRect(770, 620, 100, 50));
        confirmBtn->setFocusPolicy(Qt::NoFocus);
        confirmBtn->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	font: 20px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: white;\n"
"	background-color: rgb(0, 128, 0);\n"
"    border-top: 2px solid white;\n"
"	border-left: 2px solid white;\n"
"\n"
"}"));
        alarmlbl = new QLabel(VehiclePasswordPage);
        alarmlbl->setObjectName(QString::fromUtf8("alarmlbl"));
        alarmlbl->setGeometry(QRect(260, 310, 341, 51));
        alarmlbl->setStyleSheet(QString::fromUtf8("font:30px \"\345\276\256\350\275\257\351\233\205\351\273\221\"; \n"
"color:red;"));
        alarmlbl->setAlignment(Qt::AlignCenter);

        retranslateUi(VehiclePasswordPage);

        QMetaObject::connectSlotsByName(VehiclePasswordPage);
    } // setupUi

    void retranslateUi(QWidget *VehiclePasswordPage)
    {
        VehiclePasswordPage->setWindowTitle(QApplication::translate("VehiclePasswordPage", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("VehiclePasswordPage", "TextLabel", 0, QApplication::UnicodeUTF8));
        returnBtn->setText(QApplication::translate("VehiclePasswordPage", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
        Num1->setText(QApplication::translate("VehiclePasswordPage", "1", 0, QApplication::UnicodeUTF8));
        Num2->setText(QApplication::translate("VehiclePasswordPage", "2", 0, QApplication::UnicodeUTF8));
        Num3->setText(QApplication::translate("VehiclePasswordPage", "3", 0, QApplication::UnicodeUTF8));
        Num5->setText(QApplication::translate("VehiclePasswordPage", "5", 0, QApplication::UnicodeUTF8));
        Num4->setText(QApplication::translate("VehiclePasswordPage", "4", 0, QApplication::UnicodeUTF8));
        Num6->setText(QApplication::translate("VehiclePasswordPage", "6", 0, QApplication::UnicodeUTF8));
        Num8->setText(QApplication::translate("VehiclePasswordPage", "8", 0, QApplication::UnicodeUTF8));
        Num7->setText(QApplication::translate("VehiclePasswordPage", "7", 0, QApplication::UnicodeUTF8));
        Num9->setText(QApplication::translate("VehiclePasswordPage", "9", 0, QApplication::UnicodeUTF8));
        Num0->setText(QApplication::translate("VehiclePasswordPage", "0", 0, QApplication::UnicodeUTF8));
        NumDEL->setText(QApplication::translate("VehiclePasswordPage", "DEL", 0, QApplication::UnicodeUTF8));
        PasswordLbl->setText(QString());
        label_2->setText(QApplication::translate("VehiclePasswordPage", "\350\276\223\345\205\245\345\257\206\347\240\201", 0, QApplication::UnicodeUTF8));
        confirmBtn->setText(QApplication::translate("VehiclePasswordPage", "\347\241\256\350\256\244", 0, QApplication::UnicodeUTF8));
        alarmlbl->setText(QApplication::translate("VehiclePasswordPage", "\345\257\206\347\240\201\351\224\231\350\257\257\357\274\201\350\257\267\351\207\215\346\226\260\350\276\223\345\205\245\357\274\201", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class VehiclePasswordPage: public Ui_VehiclePasswordPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VEHICLEPASSWORDPAGE_H
