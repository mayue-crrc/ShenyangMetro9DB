/********************************************************************************
** Form generated from reading UI file 'maintaincewheelsetpage.ui'
**
** Created: Mon May 13 10:17:24 2019
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINTAINCEWHEELSETPAGE_H
#define UI_MAINTAINCEWHEELSETPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MaintainceWheelsetPage
{
public:
    QPushButton *returnBtn;
    QLabel *label;
    QLabel *Trainlbl;
    QLabel *lbl1;
    QLabel *lbl2;
    QLabel *lbl3;
    QLabel *lbl4;
    QLabel *lbl5;
    QLabel *lbl6;
    QPushButton *TC1SelectBtn;
    QPushButton *TC2SelectBtn;
    QPushButton *MP1SelectBtn;
    QPushButton *M1SelectBtn;
    QPushButton *M2SelectBtn;
    QPushButton *MP2SelectBtn;
    QPushButton *ALLSelectBtn;
    QLabel *lbl7;
    QLabel *WheelVallbl;
    QLabel *lbl7_2;
    QLabel *TC1Wheellbl;
    QLabel *TC2Wheellbl;
    QLabel *TC1Wheelinputlbl;
    QLabel *MP1Wheelinputlbl;
    QLabel *MP1Wheellbl;
    QLabel *M1Wheellbl;
    QLabel *M1Wheelinputlbl;
    QLabel *M2Wheellbl;
    QLabel *M2Wheelinputlbl;
    QLabel *MP2Wheellbl;
    QLabel *MP2Wheelinputlbl;
    QLabel *TC2Wheelinputlbl;
    QPushButton *confirmBtn;
    QPushButton *ReSeleclBtn;
    QLabel *ReWheelinputlbl;
    QLabel *ReWheellbl;

    void setupUi(QWidget *MaintainceWheelsetPage)
    {
        if (MaintainceWheelsetPage->objectName().isEmpty())
            MaintainceWheelsetPage->setObjectName(QString::fromUtf8("MaintainceWheelsetPage"));
        MaintainceWheelsetPage->resize(1024, 595);
        MaintainceWheelsetPage->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"	background-color:black;\n"
"}\n"
"QPushButton\n"
"{\n"
"font: 20px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";color: white;background-color: rgb(0, 128, 128);	border-radius:8px;border-top: 2px solid white;border-left: 2px solid white;\n"
"\n"
"}\n"
""));
        returnBtn = new QPushButton(MaintainceWheelsetPage);
        returnBtn->setObjectName(QString::fromUtf8("returnBtn"));
        returnBtn->setGeometry(QRect(910, 530, 100, 50));
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
        label = new QLabel(MaintainceWheelsetPage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(3, 520, 1018, 72));
        label->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(0, 0, 0);\n"
"\n"
"	border:1px solid white;\n"
""));
        Trainlbl = new QLabel(MaintainceWheelsetPage);
        Trainlbl->setObjectName(QString::fromUtf8("Trainlbl"));
        Trainlbl->setGeometry(QRect(35, 20, 131, 61));
        Trainlbl->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"border:2px solid white;\n"
"color:white;\n"
"font:24px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
""));
        Trainlbl->setAlignment(Qt::AlignCenter);
        lbl1 = new QLabel(MaintainceWheelsetPage);
        lbl1->setObjectName(QString::fromUtf8("lbl1"));
        lbl1->setGeometry(QRect(165, 20, 115, 61));
        lbl1->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"border:2px solid white;\n"
"color:white;\n"
"font:24px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
""));
        lbl1->setAlignment(Qt::AlignCenter);
        lbl2 = new QLabel(MaintainceWheelsetPage);
        lbl2->setObjectName(QString::fromUtf8("lbl2"));
        lbl2->setGeometry(QRect(280, 20, 115, 61));
        lbl2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"border:2px solid white;\n"
"color:white;\n"
"font:24px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
""));
        lbl2->setAlignment(Qt::AlignCenter);
        lbl3 = new QLabel(MaintainceWheelsetPage);
        lbl3->setObjectName(QString::fromUtf8("lbl3"));
        lbl3->setGeometry(QRect(395, 20, 115, 61));
        lbl3->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"border:2px solid white;\n"
"color:white;\n"
"font:24px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
""));
        lbl3->setAlignment(Qt::AlignCenter);
        lbl4 = new QLabel(MaintainceWheelsetPage);
        lbl4->setObjectName(QString::fromUtf8("lbl4"));
        lbl4->setGeometry(QRect(510, 20, 115, 61));
        lbl4->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"border:2px solid white;\n"
"color:white;\n"
"font:24px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
""));
        lbl4->setAlignment(Qt::AlignCenter);
        lbl5 = new QLabel(MaintainceWheelsetPage);
        lbl5->setObjectName(QString::fromUtf8("lbl5"));
        lbl5->setGeometry(QRect(625, 20, 115, 61));
        lbl5->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"border:2px solid white;\n"
"color:white;\n"
"font:24px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
""));
        lbl5->setAlignment(Qt::AlignCenter);
        lbl6 = new QLabel(MaintainceWheelsetPage);
        lbl6->setObjectName(QString::fromUtf8("lbl6"));
        lbl6->setGeometry(QRect(740, 20, 115, 61));
        lbl6->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"border:2px solid white;\n"
"color:white;\n"
"font:24px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
""));
        lbl6->setAlignment(Qt::AlignCenter);
        TC1SelectBtn = new QPushButton(MaintainceWheelsetPage);
        TC1SelectBtn->setObjectName(QString::fromUtf8("TC1SelectBtn"));
        TC1SelectBtn->setGeometry(QRect(170, 30, 40, 40));
        TC1SelectBtn->setFocusPolicy(Qt::NoFocus);
        TC1SelectBtn->setStyleSheet(QString::fromUtf8(""));
        TC2SelectBtn = new QPushButton(MaintainceWheelsetPage);
        TC2SelectBtn->setObjectName(QString::fromUtf8("TC2SelectBtn"));
        TC2SelectBtn->setGeometry(QRect(745, 30, 40, 40));
        TC2SelectBtn->setFocusPolicy(Qt::NoFocus);
        TC2SelectBtn->setStyleSheet(QString::fromUtf8("font:18px;"));
        MP1SelectBtn = new QPushButton(MaintainceWheelsetPage);
        MP1SelectBtn->setObjectName(QString::fromUtf8("MP1SelectBtn"));
        MP1SelectBtn->setGeometry(QRect(285, 30, 40, 40));
        MP1SelectBtn->setFocusPolicy(Qt::NoFocus);
        MP1SelectBtn->setStyleSheet(QString::fromUtf8("font:18px;"));
        M1SelectBtn = new QPushButton(MaintainceWheelsetPage);
        M1SelectBtn->setObjectName(QString::fromUtf8("M1SelectBtn"));
        M1SelectBtn->setGeometry(QRect(400, 30, 40, 40));
        M1SelectBtn->setFocusPolicy(Qt::NoFocus);
        M1SelectBtn->setStyleSheet(QString::fromUtf8("font:18px;"));
        M2SelectBtn = new QPushButton(MaintainceWheelsetPage);
        M2SelectBtn->setObjectName(QString::fromUtf8("M2SelectBtn"));
        M2SelectBtn->setGeometry(QRect(515, 30, 40, 40));
        M2SelectBtn->setFocusPolicy(Qt::NoFocus);
        M2SelectBtn->setStyleSheet(QString::fromUtf8("font:18px;"));
        MP2SelectBtn = new QPushButton(MaintainceWheelsetPage);
        MP2SelectBtn->setObjectName(QString::fromUtf8("MP2SelectBtn"));
        MP2SelectBtn->setGeometry(QRect(630, 30, 40, 40));
        MP2SelectBtn->setFocusPolicy(Qt::NoFocus);
        MP2SelectBtn->setStyleSheet(QString::fromUtf8("font:18px;"));
        ALLSelectBtn = new QPushButton(MaintainceWheelsetPage);
        ALLSelectBtn->setObjectName(QString::fromUtf8("ALLSelectBtn"));
        ALLSelectBtn->setGeometry(QRect(100, 150, 101, 41));
        ALLSelectBtn->setFocusPolicy(Qt::NoFocus);
        ALLSelectBtn->setStyleSheet(QString::fromUtf8(""));
        lbl7 = new QLabel(MaintainceWheelsetPage);
        lbl7->setObjectName(QString::fromUtf8("lbl7"));
        lbl7->setGeometry(QRect(290, 140, 131, 61));
        lbl7->setFocusPolicy(Qt::NoFocus);
        lbl7->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color:white;\n"
"font:24px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
""));
        lbl7->setAlignment(Qt::AlignCenter);
        WheelVallbl = new QLabel(MaintainceWheelsetPage);
        WheelVallbl->setObjectName(QString::fromUtf8("WheelVallbl"));
        WheelVallbl->setGeometry(QRect(440, 140, 141, 61));
        WheelVallbl->setFocusPolicy(Qt::NoFocus);
        WheelVallbl->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color:rgb(0,255,255);\n"
"font:24px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"border:2px solid white\n"
""));
        WheelVallbl->setAlignment(Qt::AlignCenter);
        lbl7_2 = new QLabel(MaintainceWheelsetPage);
        lbl7_2->setObjectName(QString::fromUtf8("lbl7_2"));
        lbl7_2->setGeometry(QRect(590, 140, 191, 61));
        lbl7_2->setFocusPolicy(Qt::NoFocus);
        lbl7_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color:white;\n"
"font:24px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
""));
        lbl7_2->setAlignment(Qt::AlignCenter);
        TC1Wheellbl = new QLabel(MaintainceWheelsetPage);
        TC1Wheellbl->setObjectName(QString::fromUtf8("TC1Wheellbl"));
        TC1Wheellbl->setGeometry(QRect(215, 30, 61, 20));
        TC1Wheellbl->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color:white;\n"
"font:16px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
""));
        TC1Wheellbl->setAlignment(Qt::AlignCenter);
        TC2Wheellbl = new QLabel(MaintainceWheelsetPage);
        TC2Wheellbl->setObjectName(QString::fromUtf8("TC2Wheellbl"));
        TC2Wheellbl->setGeometry(QRect(785, 30, 61, 20));
        TC2Wheellbl->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color:white;\n"
"font:16px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
""));
        TC2Wheellbl->setAlignment(Qt::AlignCenter);
        TC1Wheelinputlbl = new QLabel(MaintainceWheelsetPage);
        TC1Wheelinputlbl->setObjectName(QString::fromUtf8("TC1Wheelinputlbl"));
        TC1Wheelinputlbl->setGeometry(QRect(215, 50, 61, 21));
        TC1Wheelinputlbl->setStyleSheet(QString::fromUtf8("background-color: blue;\n"
"color:white;\n"
"font:16px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"border:2px solid white"));
        TC1Wheelinputlbl->setAlignment(Qt::AlignCenter);
        MP1Wheelinputlbl = new QLabel(MaintainceWheelsetPage);
        MP1Wheelinputlbl->setObjectName(QString::fromUtf8("MP1Wheelinputlbl"));
        MP1Wheelinputlbl->setGeometry(QRect(330, 50, 61, 21));
        MP1Wheelinputlbl->setStyleSheet(QString::fromUtf8("background-color: blue;\n"
"color:white;\n"
"font:16px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"border:2px solid white"));
        MP1Wheelinputlbl->setAlignment(Qt::AlignCenter);
        MP1Wheellbl = new QLabel(MaintainceWheelsetPage);
        MP1Wheellbl->setObjectName(QString::fromUtf8("MP1Wheellbl"));
        MP1Wheellbl->setGeometry(QRect(330, 30, 61, 20));
        MP1Wheellbl->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color:white;\n"
"font:16px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
""));
        MP1Wheellbl->setAlignment(Qt::AlignCenter);
        M1Wheellbl = new QLabel(MaintainceWheelsetPage);
        M1Wheellbl->setObjectName(QString::fromUtf8("M1Wheellbl"));
        M1Wheellbl->setGeometry(QRect(445, 30, 61, 20));
        M1Wheellbl->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color:white;\n"
"font:16px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
""));
        M1Wheellbl->setAlignment(Qt::AlignCenter);
        M1Wheelinputlbl = new QLabel(MaintainceWheelsetPage);
        M1Wheelinputlbl->setObjectName(QString::fromUtf8("M1Wheelinputlbl"));
        M1Wheelinputlbl->setGeometry(QRect(445, 50, 61, 21));
        M1Wheelinputlbl->setStyleSheet(QString::fromUtf8("background-color: blue;\n"
"color:white;\n"
"font:16px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"border:2px solid white"));
        M1Wheelinputlbl->setAlignment(Qt::AlignCenter);
        M2Wheellbl = new QLabel(MaintainceWheelsetPage);
        M2Wheellbl->setObjectName(QString::fromUtf8("M2Wheellbl"));
        M2Wheellbl->setGeometry(QRect(560, 30, 61, 20));
        M2Wheellbl->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color:white;\n"
"font:16px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
""));
        M2Wheellbl->setAlignment(Qt::AlignCenter);
        M2Wheelinputlbl = new QLabel(MaintainceWheelsetPage);
        M2Wheelinputlbl->setObjectName(QString::fromUtf8("M2Wheelinputlbl"));
        M2Wheelinputlbl->setGeometry(QRect(560, 50, 61, 21));
        M2Wheelinputlbl->setStyleSheet(QString::fromUtf8("background-color: blue;\n"
"color:white;\n"
"font:16px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"border:2px solid white"));
        M2Wheelinputlbl->setAlignment(Qt::AlignCenter);
        MP2Wheellbl = new QLabel(MaintainceWheelsetPage);
        MP2Wheellbl->setObjectName(QString::fromUtf8("MP2Wheellbl"));
        MP2Wheellbl->setGeometry(QRect(675, 30, 61, 20));
        MP2Wheellbl->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color:white;\n"
"font:16px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
""));
        MP2Wheellbl->setAlignment(Qt::AlignCenter);
        MP2Wheelinputlbl = new QLabel(MaintainceWheelsetPage);
        MP2Wheelinputlbl->setObjectName(QString::fromUtf8("MP2Wheelinputlbl"));
        MP2Wheelinputlbl->setGeometry(QRect(675, 50, 61, 21));
        MP2Wheelinputlbl->setStyleSheet(QString::fromUtf8("background-color: blue;\n"
"color:white;\n"
"font:16px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"border:2px solid white"));
        MP2Wheelinputlbl->setAlignment(Qt::AlignCenter);
        TC2Wheelinputlbl = new QLabel(MaintainceWheelsetPage);
        TC2Wheelinputlbl->setObjectName(QString::fromUtf8("TC2Wheelinputlbl"));
        TC2Wheelinputlbl->setGeometry(QRect(790, 50, 61, 21));
        TC2Wheelinputlbl->setStyleSheet(QString::fromUtf8("background-color: blue;\n"
"color:white;\n"
"font:16px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"border:2px solid white"));
        TC2Wheelinputlbl->setAlignment(Qt::AlignCenter);
        confirmBtn = new QPushButton(MaintainceWheelsetPage);
        confirmBtn->setObjectName(QString::fromUtf8("confirmBtn"));
        confirmBtn->setGeometry(QRect(370, 450, 270, 50));
        confirmBtn->setFocusPolicy(Qt::NoFocus);
        confirmBtn->setStyleSheet(QString::fromUtf8(""));
        ReSeleclBtn = new QPushButton(MaintainceWheelsetPage);
        ReSeleclBtn->setObjectName(QString::fromUtf8("ReSeleclBtn"));
        ReSeleclBtn->setGeometry(QRect(880, 25, 71, 51));
        ReSeleclBtn->setFocusPolicy(Qt::NoFocus);
        ReSeleclBtn->setStyleSheet(QString::fromUtf8("font:18px;"));
        ReWheelinputlbl = new QLabel(MaintainceWheelsetPage);
        ReWheelinputlbl->setObjectName(QString::fromUtf8("ReWheelinputlbl"));
        ReWheelinputlbl->setGeometry(QRect(955, 50, 61, 21));
        ReWheelinputlbl->setStyleSheet(QString::fromUtf8("background-color: blue;\n"
"color:white;\n"
"font:16px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"border:2px solid white"));
        ReWheelinputlbl->setAlignment(Qt::AlignCenter);
        ReWheellbl = new QLabel(MaintainceWheelsetPage);
        ReWheellbl->setObjectName(QString::fromUtf8("ReWheellbl"));
        ReWheellbl->setGeometry(QRect(955, 30, 61, 20));
        ReWheellbl->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color:white;\n"
"font:16px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
""));
        ReWheellbl->setAlignment(Qt::AlignCenter);
        label->raise();
        returnBtn->raise();
        Trainlbl->raise();
        lbl1->raise();
        lbl2->raise();
        lbl3->raise();
        lbl4->raise();
        lbl5->raise();
        lbl6->raise();
        TC1SelectBtn->raise();
        TC2SelectBtn->raise();
        MP1SelectBtn->raise();
        M1SelectBtn->raise();
        M2SelectBtn->raise();
        MP2SelectBtn->raise();
        ALLSelectBtn->raise();
        lbl7->raise();
        WheelVallbl->raise();
        lbl7_2->raise();
        TC1Wheellbl->raise();
        TC2Wheellbl->raise();
        TC1Wheelinputlbl->raise();
        MP1Wheelinputlbl->raise();
        MP1Wheellbl->raise();
        M1Wheellbl->raise();
        M1Wheelinputlbl->raise();
        M2Wheellbl->raise();
        M2Wheelinputlbl->raise();
        MP2Wheellbl->raise();
        MP2Wheelinputlbl->raise();
        TC2Wheelinputlbl->raise();
        confirmBtn->raise();
        ReSeleclBtn->raise();
        ReWheelinputlbl->raise();
        ReWheellbl->raise();

        retranslateUi(MaintainceWheelsetPage);

        QMetaObject::connectSlotsByName(MaintainceWheelsetPage);
    } // setupUi

    void retranslateUi(QWidget *MaintainceWheelsetPage)
    {
        MaintainceWheelsetPage->setWindowTitle(QApplication::translate("MaintainceWheelsetPage", "Form", 0, QApplication::UnicodeUTF8));
        returnBtn->setText(QApplication::translate("MaintainceWheelsetPage", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MaintainceWheelsetPage", "TextLabel", 0, QApplication::UnicodeUTF8));
        Trainlbl->setText(QString());
        lbl1->setText(QString());
        lbl2->setText(QString());
        lbl3->setText(QString());
        lbl4->setText(QString());
        lbl5->setText(QString());
        lbl6->setText(QString());
        TC1SelectBtn->setText(QApplication::translate("MaintainceWheelsetPage", "\351\200\211\346\213\251", 0, QApplication::UnicodeUTF8));
        TC2SelectBtn->setText(QApplication::translate("MaintainceWheelsetPage", "\351\200\211\346\213\251", 0, QApplication::UnicodeUTF8));
        MP1SelectBtn->setText(QApplication::translate("MaintainceWheelsetPage", "\351\200\211\346\213\251", 0, QApplication::UnicodeUTF8));
        M1SelectBtn->setText(QApplication::translate("MaintainceWheelsetPage", "\351\200\211\346\213\251", 0, QApplication::UnicodeUTF8));
        M2SelectBtn->setText(QApplication::translate("MaintainceWheelsetPage", "\351\200\211\346\213\251", 0, QApplication::UnicodeUTF8));
        MP2SelectBtn->setText(QApplication::translate("MaintainceWheelsetPage", "\351\200\211\346\213\251", 0, QApplication::UnicodeUTF8));
        ALLSelectBtn->setText(QApplication::translate("MaintainceWheelsetPage", "\346\211\200\346\234\211\350\275\264", 0, QApplication::UnicodeUTF8));
        lbl7->setText(QApplication::translate("MaintainceWheelsetPage", "\350\275\256\345\276\204\350\256\276\345\256\232\345\200\274", 0, QApplication::UnicodeUTF8));
        WheelVallbl->setText(QString());
        lbl7_2->setText(QApplication::translate("MaintainceWheelsetPage", "(770--845mm)", 0, QApplication::UnicodeUTF8));
        TC1Wheellbl->setText(QApplication::translate("MaintainceWheelsetPage", "840", 0, QApplication::UnicodeUTF8));
        TC2Wheellbl->setText(QApplication::translate("MaintainceWheelsetPage", "840", 0, QApplication::UnicodeUTF8));
        TC1Wheelinputlbl->setText(QApplication::translate("MaintainceWheelsetPage", "--", 0, QApplication::UnicodeUTF8));
        MP1Wheelinputlbl->setText(QApplication::translate("MaintainceWheelsetPage", "--", 0, QApplication::UnicodeUTF8));
        MP1Wheellbl->setText(QApplication::translate("MaintainceWheelsetPage", "840", 0, QApplication::UnicodeUTF8));
        M1Wheellbl->setText(QApplication::translate("MaintainceWheelsetPage", "840", 0, QApplication::UnicodeUTF8));
        M1Wheelinputlbl->setText(QApplication::translate("MaintainceWheelsetPage", "--", 0, QApplication::UnicodeUTF8));
        M2Wheellbl->setText(QApplication::translate("MaintainceWheelsetPage", "840", 0, QApplication::UnicodeUTF8));
        M2Wheelinputlbl->setText(QApplication::translate("MaintainceWheelsetPage", "--", 0, QApplication::UnicodeUTF8));
        MP2Wheellbl->setText(QApplication::translate("MaintainceWheelsetPage", "840", 0, QApplication::UnicodeUTF8));
        MP2Wheelinputlbl->setText(QApplication::translate("MaintainceWheelsetPage", "--", 0, QApplication::UnicodeUTF8));
        TC2Wheelinputlbl->setText(QApplication::translate("MaintainceWheelsetPage", "--", 0, QApplication::UnicodeUTF8));
        confirmBtn->setText(QApplication::translate("MaintainceWheelsetPage", "\347\241\256\345\256\232", 0, QApplication::UnicodeUTF8));
        ReSeleclBtn->setText(QApplication::translate("MaintainceWheelsetPage", "\345\217\202\350\200\203\345\200\274\n"
"\350\256\276\345\256\232", 0, QApplication::UnicodeUTF8));
        ReWheelinputlbl->setText(QApplication::translate("MaintainceWheelsetPage", "--", 0, QApplication::UnicodeUTF8));
        ReWheellbl->setText(QApplication::translate("MaintainceWheelsetPage", "840", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MaintainceWheelsetPage: public Ui_MaintainceWheelsetPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINTAINCEWHEELSETPAGE_H
