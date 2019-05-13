/********************************************************************************
** Form generated from reading UI file 'maintainceportsdatapage.ui'
**
** Created: Mon May 13 10:17:24 2019
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINTAINCEPORTSDATAPAGE_H
#define UI_MAINTAINCEPORTSDATAPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MaintaincePortsDataPage
{
public:
    QPushButton *returnBtn;
    QPushButton *Num1;
    QPushButton *Num2;
    QPushButton *Num3;
    QPushButton *Num4;
    QPushButton *Num5;
    QPushButton *Num6;
    QPushButton *Num7;
    QPushButton *Num8;
    QPushButton *Num9;
    QPushButton *Num0;
    QPushButton *NumA;
    QPushButton *NumC;
    QPushButton *NumE;
    QPushButton *NumD;
    QPushButton *NumF;
    QPushButton *NumB;
    QPushButton *CancelBtn;
    QPushButton *ConfirmBtn;
    QLabel *PortAddressLbl;
    QLabel *lbl1;

    void setupUi(QWidget *MaintaincePortsDataPage)
    {
        if (MaintaincePortsDataPage->objectName().isEmpty())
            MaintaincePortsDataPage->setObjectName(QString::fromUtf8("MaintaincePortsDataPage"));
        MaintaincePortsDataPage->resize(1024, 686);
        MaintaincePortsDataPage->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"		background-color:black;\n"
"}\n"
"QPushButton\n"
"{\n"
"	font: 20px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: white;\n"
"		border-radius:8px;\n"
"background-color: rgb(0, 128, 128);\n"
"	border-top: 2px solid white;	\n"
"	border-left: 2px solid white;\n"
"}"));
        returnBtn = new QPushButton(MaintaincePortsDataPage);
        returnBtn->setObjectName(QString::fromUtf8("returnBtn"));
        returnBtn->setGeometry(QRect(910, 621, 100, 50));
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
        Num1 = new QPushButton(MaintaincePortsDataPage);
        Num1->setObjectName(QString::fromUtf8("Num1"));
        Num1->setGeometry(QRect(190, 640, 70, 27));
        Num1->setFocusPolicy(Qt::NoFocus);
        Num2 = new QPushButton(MaintaincePortsDataPage);
        Num2->setObjectName(QString::fromUtf8("Num2"));
        Num2->setGeometry(QRect(260, 640, 70, 27));
        Num2->setFocusPolicy(Qt::NoFocus);
        Num3 = new QPushButton(MaintaincePortsDataPage);
        Num3->setObjectName(QString::fromUtf8("Num3"));
        Num3->setGeometry(QRect(330, 640, 70, 27));
        Num3->setFocusPolicy(Qt::NoFocus);
        Num4 = new QPushButton(MaintaincePortsDataPage);
        Num4->setObjectName(QString::fromUtf8("Num4"));
        Num4->setGeometry(QRect(400, 640, 70, 27));
        Num4->setFocusPolicy(Qt::NoFocus);
        Num5 = new QPushButton(MaintaincePortsDataPage);
        Num5->setObjectName(QString::fromUtf8("Num5"));
        Num5->setGeometry(QRect(470, 640, 70, 27));
        Num5->setFocusPolicy(Qt::NoFocus);
        Num6 = new QPushButton(MaintaincePortsDataPage);
        Num6->setObjectName(QString::fromUtf8("Num6"));
        Num6->setGeometry(QRect(540, 640, 70, 27));
        Num6->setFocusPolicy(Qt::NoFocus);
        Num7 = new QPushButton(MaintaincePortsDataPage);
        Num7->setObjectName(QString::fromUtf8("Num7"));
        Num7->setGeometry(QRect(610, 640, 70, 27));
        Num7->setFocusPolicy(Qt::NoFocus);
        Num8 = new QPushButton(MaintaincePortsDataPage);
        Num8->setObjectName(QString::fromUtf8("Num8"));
        Num8->setGeometry(QRect(680, 640, 70, 27));
        Num8->setFocusPolicy(Qt::NoFocus);
        Num9 = new QPushButton(MaintaincePortsDataPage);
        Num9->setObjectName(QString::fromUtf8("Num9"));
        Num9->setGeometry(QRect(750, 640, 70, 27));
        Num9->setFocusPolicy(Qt::NoFocus);
        Num0 = new QPushButton(MaintaincePortsDataPage);
        Num0->setObjectName(QString::fromUtf8("Num0"));
        Num0->setGeometry(QRect(820, 640, 70, 27));
        Num0->setFocusPolicy(Qt::NoFocus);
        NumA = new QPushButton(MaintaincePortsDataPage);
        NumA->setObjectName(QString::fromUtf8("NumA"));
        NumA->setGeometry(QRect(470, 610, 70, 27));
        NumA->setFocusPolicy(Qt::NoFocus);
        NumC = new QPushButton(MaintaincePortsDataPage);
        NumC->setObjectName(QString::fromUtf8("NumC"));
        NumC->setGeometry(QRect(609, 610, 71, 27));
        NumC->setFocusPolicy(Qt::NoFocus);
        NumE = new QPushButton(MaintaincePortsDataPage);
        NumE->setObjectName(QString::fromUtf8("NumE"));
        NumE->setGeometry(QRect(750, 610, 70, 27));
        NumE->setFocusPolicy(Qt::NoFocus);
        NumD = new QPushButton(MaintaincePortsDataPage);
        NumD->setObjectName(QString::fromUtf8("NumD"));
        NumD->setGeometry(QRect(680, 610, 70, 27));
        NumD->setFocusPolicy(Qt::NoFocus);
        NumF = new QPushButton(MaintaincePortsDataPage);
        NumF->setObjectName(QString::fromUtf8("NumF"));
        NumF->setGeometry(QRect(820, 610, 70, 27));
        NumF->setFocusPolicy(Qt::NoFocus);
        NumB = new QPushButton(MaintaincePortsDataPage);
        NumB->setObjectName(QString::fromUtf8("NumB"));
        NumB->setGeometry(QRect(540, 610, 70, 27));
        NumB->setFocusPolicy(Qt::NoFocus);
        CancelBtn = new QPushButton(MaintaincePortsDataPage);
        CancelBtn->setObjectName(QString::fromUtf8("CancelBtn"));
        CancelBtn->setGeometry(QRect(190, 590, 100, 40));
        CancelBtn->setFocusPolicy(Qt::NoFocus);
        ConfirmBtn = new QPushButton(MaintaincePortsDataPage);
        ConfirmBtn->setObjectName(QString::fromUtf8("ConfirmBtn"));
        ConfirmBtn->setGeometry(QRect(300, 590, 100, 40));
        ConfirmBtn->setFocusPolicy(Qt::NoFocus);
        PortAddressLbl = new QLabel(MaintaincePortsDataPage);
        PortAddressLbl->setObjectName(QString::fromUtf8("PortAddressLbl"));
        PortAddressLbl->setGeometry(QRect(30, 610, 131, 51));
        PortAddressLbl->setStyleSheet(QString::fromUtf8("border: 1px solid white;\n"
"color:rgb(0,128,128);\n"
"font:28px \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        PortAddressLbl->setAlignment(Qt::AlignCenter);
        lbl1 = new QLabel(MaintaincePortsDataPage);
        lbl1->setObjectName(QString::fromUtf8("lbl1"));
        lbl1->setGeometry(QRect(30, 570, 131, 31));
        lbl1->setStyleSheet(QString::fromUtf8("font:20px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color:white;"));
        lbl1->setAlignment(Qt::AlignCenter);

        retranslateUi(MaintaincePortsDataPage);

        QMetaObject::connectSlotsByName(MaintaincePortsDataPage);
    } // setupUi

    void retranslateUi(QWidget *MaintaincePortsDataPage)
    {
        MaintaincePortsDataPage->setWindowTitle(QApplication::translate("MaintaincePortsDataPage", "Form", 0, QApplication::UnicodeUTF8));
        returnBtn->setText(QApplication::translate("MaintaincePortsDataPage", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
        Num1->setText(QApplication::translate("MaintaincePortsDataPage", "1", 0, QApplication::UnicodeUTF8));
        Num2->setText(QApplication::translate("MaintaincePortsDataPage", "2", 0, QApplication::UnicodeUTF8));
        Num3->setText(QApplication::translate("MaintaincePortsDataPage", "3", 0, QApplication::UnicodeUTF8));
        Num4->setText(QApplication::translate("MaintaincePortsDataPage", "4", 0, QApplication::UnicodeUTF8));
        Num5->setText(QApplication::translate("MaintaincePortsDataPage", "5", 0, QApplication::UnicodeUTF8));
        Num6->setText(QApplication::translate("MaintaincePortsDataPage", "6", 0, QApplication::UnicodeUTF8));
        Num7->setText(QApplication::translate("MaintaincePortsDataPage", "7", 0, QApplication::UnicodeUTF8));
        Num8->setText(QApplication::translate("MaintaincePortsDataPage", "8", 0, QApplication::UnicodeUTF8));
        Num9->setText(QApplication::translate("MaintaincePortsDataPage", "9", 0, QApplication::UnicodeUTF8));
        Num0->setText(QApplication::translate("MaintaincePortsDataPage", "0", 0, QApplication::UnicodeUTF8));
        NumA->setText(QApplication::translate("MaintaincePortsDataPage", "A", 0, QApplication::UnicodeUTF8));
        NumC->setText(QApplication::translate("MaintaincePortsDataPage", "C", 0, QApplication::UnicodeUTF8));
        NumE->setText(QApplication::translate("MaintaincePortsDataPage", "E", 0, QApplication::UnicodeUTF8));
        NumD->setText(QApplication::translate("MaintaincePortsDataPage", "D", 0, QApplication::UnicodeUTF8));
        NumF->setText(QApplication::translate("MaintaincePortsDataPage", "F", 0, QApplication::UnicodeUTF8));
        NumB->setText(QApplication::translate("MaintaincePortsDataPage", "B", 0, QApplication::UnicodeUTF8));
        CancelBtn->setText(QApplication::translate("MaintaincePortsDataPage", "\345\217\226\346\266\210", 0, QApplication::UnicodeUTF8));
        ConfirmBtn->setText(QApplication::translate("MaintaincePortsDataPage", "\347\241\256\345\256\232", 0, QApplication::UnicodeUTF8));
        PortAddressLbl->setText(QApplication::translate("MaintaincePortsDataPage", "0xFF", 0, QApplication::UnicodeUTF8));
        lbl1->setText(QApplication::translate("MaintaincePortsDataPage", "\347\253\257\345\217\243\345\217\267", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MaintaincePortsDataPage: public Ui_MaintaincePortsDataPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINTAINCEPORTSDATAPAGE_H
