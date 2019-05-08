/********************************************************************************
** Form generated from reading UI file 'maintaincefaultquerypage.ui'
**
** Created: Wed May 8 08:13:32 2019
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINTAINCEFAULTQUERYPAGE_H
#define UI_MAINTAINCEFAULTQUERYPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MaintainceFaultQueryPage
{
public:
    QPushButton *TC1;
    QLabel *label;
    QPushButton *MP1;
    QPushButton *M1;
    QPushButton *M2;
    QPushButton *MP2;
    QPushButton *TC2;
    QLabel *label_2;
    QPushButton *returnBtn;
    QLabel *label_3;
    QPushButton *TCMS;
    QPushButton *BCU;
    QPushButton *DCU;
    QPushButton *ACM;
    QPushButton *EDCU;
    QPushButton *PIS;
    QPushButton *WMS;
    QPushButton *HVAC;
    QLabel *mp2wheel2lbl;
    QLabel *mp1wheel1lbl;
    QLabel *tc1wheel1lbl;
    QLabel *mp1wheel2lbl;
    QLabel *m2wheel1lbl;
    QLabel *mp1lbl;
    QLabel *tc2wheel2lbl;
    QLabel *m2lbl;
    QLabel *tc1keylbl;
    QLabel *tc2lbl;
    QLabel *m1lbl;
    QLabel *mp2wheel1lbl;
    QLabel *m1wheel2lbl;
    QLabel *tc2wheel1lbl;
    QLabel *tc2keylbl;
    QLabel *mp2lbl;
    QLabel *tc1wheel2lbl;
    QLabel *tc1lbl;
    QLabel *m1wheel1lbl;
    QLabel *m2wheel2lbl;
    QPushButton *TCMSFaultBtn_2;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *TCMSFaultBtn_3;
    QLabel *tc1directionlbl;
    QLabel *tc2directionlbl;

    void setupUi(QWidget *MaintainceFaultQueryPage)
    {
        if (MaintainceFaultQueryPage->objectName().isEmpty())
            MaintainceFaultQueryPage->setObjectName(QString::fromUtf8("MaintainceFaultQueryPage"));
        MaintainceFaultQueryPage->resize(1024, 686);
        MaintainceFaultQueryPage->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"		background-color:black;\n"
"}\n"
"QPushButton\n"
"{\n"
"	font: 20px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: white;\n"
"	background-color: rgb(0, 128, 128);\n"
"	border-top: 2px solid white;	\n"
"	border-left: 2px solid white;\n"
"border-radius:8px;\n"
"}\n"
"QLabel\n"
"{\n"
"	color:white;\n"
"	font: 20px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"\n"
"}"));
        TC1 = new QPushButton(MaintainceFaultQueryPage);
        TC1->setObjectName(QString::fromUtf8("TC1"));
        TC1->setGeometry(QRect(200, 120, 90, 41));
        TC1->setFocusPolicy(Qt::NoFocus);
        label = new QLabel(MaintainceFaultQueryPage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 120, 90, 41));
        label->setAlignment(Qt::AlignCenter);
        MP1 = new QPushButton(MaintainceFaultQueryPage);
        MP1->setObjectName(QString::fromUtf8("MP1"));
        MP1->setGeometry(QRect(310, 120, 90, 41));
        MP1->setFocusPolicy(Qt::NoFocus);
        M1 = new QPushButton(MaintainceFaultQueryPage);
        M1->setObjectName(QString::fromUtf8("M1"));
        M1->setGeometry(QRect(420, 120, 90, 41));
        M1->setFocusPolicy(Qt::NoFocus);
        M2 = new QPushButton(MaintainceFaultQueryPage);
        M2->setObjectName(QString::fromUtf8("M2"));
        M2->setGeometry(QRect(530, 120, 90, 41));
        M2->setFocusPolicy(Qt::NoFocus);
        MP2 = new QPushButton(MaintainceFaultQueryPage);
        MP2->setObjectName(QString::fromUtf8("MP2"));
        MP2->setGeometry(QRect(640, 120, 90, 41));
        MP2->setFocusPolicy(Qt::NoFocus);
        TC2 = new QPushButton(MaintainceFaultQueryPage);
        TC2->setObjectName(QString::fromUtf8("TC2"));
        TC2->setGeometry(QRect(750, 120, 90, 41));
        TC2->setFocusPolicy(Qt::NoFocus);
        label_2 = new QLabel(MaintainceFaultQueryPage);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(3, 610, 1018, 72));
        label_2->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(0, 0, 0);\n"
"\n"
"	border:1px solid white;\n"
""));
        returnBtn = new QPushButton(MaintainceFaultQueryPage);
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
        label_3 = new QLabel(MaintainceFaultQueryPage);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 210, 90, 41));
        label_3->setAlignment(Qt::AlignCenter);
        TCMS = new QPushButton(MaintainceFaultQueryPage);
        TCMS->setObjectName(QString::fromUtf8("TCMS"));
        TCMS->setGeometry(QRect(200, 210, 90, 41));
        TCMS->setFocusPolicy(Qt::NoFocus);
        BCU = new QPushButton(MaintainceFaultQueryPage);
        BCU->setObjectName(QString::fromUtf8("BCU"));
        BCU->setGeometry(QRect(310, 210, 90, 41));
        BCU->setFocusPolicy(Qt::NoFocus);
        DCU = new QPushButton(MaintainceFaultQueryPage);
        DCU->setObjectName(QString::fromUtf8("DCU"));
        DCU->setGeometry(QRect(420, 210, 90, 41));
        DCU->setFocusPolicy(Qt::NoFocus);
        ACM = new QPushButton(MaintainceFaultQueryPage);
        ACM->setObjectName(QString::fromUtf8("ACM"));
        ACM->setGeometry(QRect(530, 210, 90, 41));
        ACM->setFocusPolicy(Qt::NoFocus);
        EDCU = new QPushButton(MaintainceFaultQueryPage);
        EDCU->setObjectName(QString::fromUtf8("EDCU"));
        EDCU->setGeometry(QRect(640, 210, 90, 41));
        EDCU->setFocusPolicy(Qt::NoFocus);
        PIS = new QPushButton(MaintainceFaultQueryPage);
        PIS->setObjectName(QString::fromUtf8("PIS"));
        PIS->setGeometry(QRect(750, 210, 90, 41));
        PIS->setFocusPolicy(Qt::NoFocus);
        WMS = new QPushButton(MaintainceFaultQueryPage);
        WMS->setObjectName(QString::fromUtf8("WMS"));
        WMS->setGeometry(QRect(200, 280, 90, 41));
        WMS->setFocusPolicy(Qt::NoFocus);
        HVAC = new QPushButton(MaintainceFaultQueryPage);
        HVAC->setObjectName(QString::fromUtf8("HVAC"));
        HVAC->setGeometry(QRect(310, 280, 90, 41));
        HVAC->setFocusPolicy(Qt::NoFocus);
        mp2wheel2lbl = new QLabel(MaintainceFaultQueryPage);
        mp2wheel2lbl->setObjectName(QString::fromUtf8("mp2wheel2lbl"));
        mp2wheel2lbl->setGeometry(QRect(640, 80, 14, 14));
        mp2wheel2lbl->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"border-radius:7px;\n"
"border:2px solid white;"));
        mp2wheel2lbl->setAlignment(Qt::AlignCenter);
        mp1wheel1lbl = new QLabel(MaintainceFaultQueryPage);
        mp1wheel1lbl->setObjectName(QString::fromUtf8("mp1wheel1lbl"));
        mp1wheel1lbl->setGeometry(QRect(330, 80, 14, 14));
        mp1wheel1lbl->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"border-radius:7px;\n"
"border:2px solid white;"));
        mp1wheel1lbl->setAlignment(Qt::AlignCenter);
        tc1wheel1lbl = new QLabel(MaintainceFaultQueryPage);
        tc1wheel1lbl->setObjectName(QString::fromUtf8("tc1wheel1lbl"));
        tc1wheel1lbl->setGeometry(QRect(230, 80, 14, 14));
        tc1wheel1lbl->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"border-radius:7px;\n"
"border:2px solid white;"));
        tc1wheel1lbl->setAlignment(Qt::AlignCenter);
        mp1wheel2lbl = new QLabel(MaintainceFaultQueryPage);
        mp1wheel2lbl->setObjectName(QString::fromUtf8("mp1wheel2lbl"));
        mp1wheel2lbl->setGeometry(QRect(380, 80, 14, 14));
        mp1wheel2lbl->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"border-radius:7px;\n"
"border:2px solid white;"));
        mp1wheel2lbl->setAlignment(Qt::AlignCenter);
        m2wheel1lbl = new QLabel(MaintainceFaultQueryPage);
        m2wheel1lbl->setObjectName(QString::fromUtf8("m2wheel1lbl"));
        m2wheel1lbl->setGeometry(QRect(590, 80, 14, 14));
        m2wheel1lbl->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"border-radius:7px;\n"
"border:2px solid white;"));
        m2wheel1lbl->setAlignment(Qt::AlignCenter);
        mp1lbl = new QLabel(MaintainceFaultQueryPage);
        mp1lbl->setObjectName(QString::fromUtf8("mp1lbl"));
        mp1lbl->setGeometry(QRect(314, 35, 100, 45));
        mp1lbl->setStyleSheet(QString::fromUtf8("	font:20px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	border:2px solid white;\n"
"	background-color: rgb(255,255,153);\n"
"color:black;\n"
""));
        mp1lbl->setAlignment(Qt::AlignCenter);
        tc2wheel2lbl = new QLabel(MaintainceFaultQueryPage);
        tc2wheel2lbl->setObjectName(QString::fromUtf8("tc2wheel2lbl"));
        tc2wheel2lbl->setGeometry(QRect(740, 80, 14, 14));
        tc2wheel2lbl->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"border-radius:7px;\n"
"border:2px solid white;"));
        tc2wheel2lbl->setAlignment(Qt::AlignCenter);
        m2lbl = new QLabel(MaintainceFaultQueryPage);
        m2lbl->setObjectName(QString::fromUtf8("m2lbl"));
        m2lbl->setGeometry(QRect(520, 35, 100, 45));
        m2lbl->setStyleSheet(QString::fromUtf8("	font:20px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	border:2px solid white;\n"
"	background-color: rgb(255,255,153);\n"
"color:black;\n"
""));
        m2lbl->setAlignment(Qt::AlignCenter);
        tc1keylbl = new QLabel(MaintainceFaultQueryPage);
        tc1keylbl->setObjectName(QString::fromUtf8("tc1keylbl"));
        tc1keylbl->setGeometry(QRect(180, 35, 31, 45));
        tc1keylbl->setStyleSheet(QString::fromUtf8("border-image: url(:/images/images/TC1traingraphKeynoact.bmp);"));
        tc1keylbl->setAlignment(Qt::AlignCenter);
        tc2lbl = new QLabel(MaintainceFaultQueryPage);
        tc2lbl->setObjectName(QString::fromUtf8("tc2lbl"));
        tc2lbl->setGeometry(QRect(726, 35, 100, 45));
        tc2lbl->setStyleSheet(QString::fromUtf8("	font:20px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	border:2px solid white;\n"
"	background-color: rgb(255,255,153);\n"
"color:black;\n"
""));
        tc2lbl->setAlignment(Qt::AlignCenter);
        m1lbl = new QLabel(MaintainceFaultQueryPage);
        m1lbl->setObjectName(QString::fromUtf8("m1lbl"));
        m1lbl->setGeometry(QRect(417, 35, 100, 45));
        m1lbl->setStyleSheet(QString::fromUtf8("	font:20px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	border:2px solid white;\n"
"	background-color: rgb(255,255,153);\n"
"color:black;\n"
""));
        m1lbl->setAlignment(Qt::AlignCenter);
        mp2wheel1lbl = new QLabel(MaintainceFaultQueryPage);
        mp2wheel1lbl->setObjectName(QString::fromUtf8("mp2wheel1lbl"));
        mp2wheel1lbl->setGeometry(QRect(690, 80, 14, 14));
        mp2wheel1lbl->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"border-radius:7px;\n"
"border:2px solid white;"));
        mp2wheel1lbl->setAlignment(Qt::AlignCenter);
        m1wheel2lbl = new QLabel(MaintainceFaultQueryPage);
        m1wheel2lbl->setObjectName(QString::fromUtf8("m1wheel2lbl"));
        m1wheel2lbl->setGeometry(QRect(480, 80, 14, 14));
        m1wheel2lbl->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"border-radius:7px;\n"
"border:2px solid white;"));
        m1wheel2lbl->setAlignment(Qt::AlignCenter);
        tc2wheel1lbl = new QLabel(MaintainceFaultQueryPage);
        tc2wheel1lbl->setObjectName(QString::fromUtf8("tc2wheel1lbl"));
        tc2wheel1lbl->setGeometry(QRect(790, 80, 14, 14));
        tc2wheel1lbl->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"border-radius:7px;\n"
"border:2px solid white;"));
        tc2wheel1lbl->setAlignment(Qt::AlignCenter);
        tc2keylbl = new QLabel(MaintainceFaultQueryPage);
        tc2keylbl->setObjectName(QString::fromUtf8("tc2keylbl"));
        tc2keylbl->setGeometry(QRect(825, 35, 31, 45));
        tc2keylbl->setStyleSheet(QString::fromUtf8("border-image: url(:/images/images/TC2traingraphKeynoact.bmp);"));
        tc2keylbl->setAlignment(Qt::AlignCenter);
        mp2lbl = new QLabel(MaintainceFaultQueryPage);
        mp2lbl->setObjectName(QString::fromUtf8("mp2lbl"));
        mp2lbl->setGeometry(QRect(623, 35, 100, 45));
        mp2lbl->setStyleSheet(QString::fromUtf8("	font:20px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	border:2px solid white;\n"
"	background-color: rgb(255,255,153);\n"
"color:black;\n"
""));
        mp2lbl->setAlignment(Qt::AlignCenter);
        tc1wheel2lbl = new QLabel(MaintainceFaultQueryPage);
        tc1wheel2lbl->setObjectName(QString::fromUtf8("tc1wheel2lbl"));
        tc1wheel2lbl->setGeometry(QRect(280, 80, 14, 14));
        tc1wheel2lbl->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"border-radius:7px;\n"
"border:2px solid white;"));
        tc1wheel2lbl->setAlignment(Qt::AlignCenter);
        tc1lbl = new QLabel(MaintainceFaultQueryPage);
        tc1lbl->setObjectName(QString::fromUtf8("tc1lbl"));
        tc1lbl->setGeometry(QRect(211, 35, 100, 45));
        tc1lbl->setStyleSheet(QString::fromUtf8("	font:20px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	border:2px solid white;\n"
"	background-color: rgb(255,255,153);\n"
"color:black;\n"
""));
        tc1lbl->setAlignment(Qt::AlignCenter);
        m1wheel1lbl = new QLabel(MaintainceFaultQueryPage);
        m1wheel1lbl->setObjectName(QString::fromUtf8("m1wheel1lbl"));
        m1wheel1lbl->setGeometry(QRect(430, 80, 14, 14));
        m1wheel1lbl->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"border-radius:7px;\n"
"border:2px solid white;"));
        m1wheel1lbl->setAlignment(Qt::AlignCenter);
        m2wheel2lbl = new QLabel(MaintainceFaultQueryPage);
        m2wheel2lbl->setObjectName(QString::fromUtf8("m2wheel2lbl"));
        m2wheel2lbl->setGeometry(QRect(540, 80, 14, 14));
        m2wheel2lbl->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"border-radius:7px;\n"
"border:2px solid white;"));
        m2wheel2lbl->setAlignment(Qt::AlignCenter);
        TCMSFaultBtn_2 = new QPushButton(MaintainceFaultQueryPage);
        TCMSFaultBtn_2->setObjectName(QString::fromUtf8("TCMSFaultBtn_2"));
        TCMSFaultBtn_2->setGeometry(QRect(880, 460, 90, 41));
        TCMSFaultBtn_2->setFocusPolicy(Qt::NoFocus);
        label_4 = new QLabel(MaintainceFaultQueryPage);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(770, 460, 90, 41));
        label_4->setAlignment(Qt::AlignCenter);
        label_5 = new QLabel(MaintainceFaultQueryPage);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(770, 520, 90, 41));
        label_5->setAlignment(Qt::AlignCenter);
        TCMSFaultBtn_3 = new QPushButton(MaintainceFaultQueryPage);
        TCMSFaultBtn_3->setObjectName(QString::fromUtf8("TCMSFaultBtn_3"));
        TCMSFaultBtn_3->setGeometry(QRect(880, 520, 90, 41));
        TCMSFaultBtn_3->setFocusPolicy(Qt::NoFocus);
        TCMSFaultBtn_3->setStyleSheet(QString::fromUtf8("	background-color: gray;\n"
""));
        tc1directionlbl = new QLabel(MaintainceFaultQueryPage);
        tc1directionlbl->setObjectName(QString::fromUtf8("tc1directionlbl"));
        tc1directionlbl->setGeometry(QRect(130, 40, 51, 51));
        tc1directionlbl->setStyleSheet(QString::fromUtf8("border-image: url(:/images/images/TC1traingraphDirection.bmp);"));
        tc1directionlbl->setAlignment(Qt::AlignCenter);
        tc2directionlbl = new QLabel(MaintainceFaultQueryPage);
        tc2directionlbl->setObjectName(QString::fromUtf8("tc2directionlbl"));
        tc2directionlbl->setGeometry(QRect(855, 40, 51, 51));
        tc2directionlbl->setStyleSheet(QString::fromUtf8("border-image: url(:/images/images/TC2traingraphDirection.bmp);"));
        tc2directionlbl->setAlignment(Qt::AlignCenter);

        retranslateUi(MaintainceFaultQueryPage);

        QMetaObject::connectSlotsByName(MaintainceFaultQueryPage);
    } // setupUi

    void retranslateUi(QWidget *MaintainceFaultQueryPage)
    {
        MaintainceFaultQueryPage->setWindowTitle(QApplication::translate("MaintainceFaultQueryPage", "Form", 0, QApplication::UnicodeUTF8));
        TC1->setText(QApplication::translate("MaintainceFaultQueryPage", "1\350\275\246", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MaintainceFaultQueryPage", "\350\275\246\350\276\206", 0, QApplication::UnicodeUTF8));
        MP1->setText(QApplication::translate("MaintainceFaultQueryPage", "2\350\275\246", 0, QApplication::UnicodeUTF8));
        M1->setText(QApplication::translate("MaintainceFaultQueryPage", "3\350\275\246", 0, QApplication::UnicodeUTF8));
        M2->setText(QApplication::translate("MaintainceFaultQueryPage", "4\350\275\246", 0, QApplication::UnicodeUTF8));
        MP2->setText(QApplication::translate("MaintainceFaultQueryPage", "5\350\275\246", 0, QApplication::UnicodeUTF8));
        TC2->setText(QApplication::translate("MaintainceFaultQueryPage", "6\350\275\246", 0, QApplication::UnicodeUTF8));
        label_2->setText(QString());
        returnBtn->setText(QApplication::translate("MaintainceFaultQueryPage", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MaintainceFaultQueryPage", "\347\263\273\347\273\237", 0, QApplication::UnicodeUTF8));
        TCMS->setText(QApplication::translate("MaintainceFaultQueryPage", "TCMS", 0, QApplication::UnicodeUTF8));
        BCU->setText(QApplication::translate("MaintainceFaultQueryPage", "\345\210\266\345\212\250\347\263\273\347\273\237", 0, QApplication::UnicodeUTF8));
        DCU->setText(QApplication::translate("MaintainceFaultQueryPage", "\347\211\265\345\274\225\347\263\273\347\273\237", 0, QApplication::UnicodeUTF8));
        ACM->setText(QApplication::translate("MaintainceFaultQueryPage", "\350\276\205\345\212\251\347\263\273\347\273\237", 0, QApplication::UnicodeUTF8));
        EDCU->setText(QApplication::translate("MaintainceFaultQueryPage", "\350\275\246\351\227\250\347\263\273\347\273\237", 0, QApplication::UnicodeUTF8));
        PIS->setText(QApplication::translate("MaintainceFaultQueryPage", "\345\271\277\346\222\255\347\263\273\347\273\237", 0, QApplication::UnicodeUTF8));
        WMS->setText(QApplication::translate("MaintainceFaultQueryPage", "\347\273\206\346\260\264\351\233\276", 0, QApplication::UnicodeUTF8));
        HVAC->setText(QApplication::translate("MaintainceFaultQueryPage", "\347\251\272\350\260\203\347\263\273\347\273\237", 0, QApplication::UnicodeUTF8));
        mp2wheel2lbl->setText(QString());
        mp1wheel1lbl->setText(QString());
        tc1wheel1lbl->setText(QString());
        mp1wheel2lbl->setText(QString());
        m2wheel1lbl->setText(QString());
        mp1lbl->setText(QApplication::translate("MaintainceFaultQueryPage", "1002", 0, QApplication::UnicodeUTF8));
        tc2wheel2lbl->setText(QString());
        m2lbl->setText(QApplication::translate("MaintainceFaultQueryPage", "1004", 0, QApplication::UnicodeUTF8));
        tc1keylbl->setText(QString());
        tc2lbl->setText(QApplication::translate("MaintainceFaultQueryPage", "1006", 0, QApplication::UnicodeUTF8));
        m1lbl->setText(QApplication::translate("MaintainceFaultQueryPage", "1003", 0, QApplication::UnicodeUTF8));
        mp2wheel1lbl->setText(QString());
        m1wheel2lbl->setText(QString());
        tc2wheel1lbl->setText(QString());
        tc2keylbl->setText(QString());
        mp2lbl->setText(QApplication::translate("MaintainceFaultQueryPage", "1005", 0, QApplication::UnicodeUTF8));
        tc1wheel2lbl->setText(QString());
        tc1lbl->setText(QApplication::translate("MaintainceFaultQueryPage", "1001", 0, QApplication::UnicodeUTF8));
        m1wheel1lbl->setText(QString());
        m2wheel2lbl->setText(QString());
        TCMSFaultBtn_2->setText(QString());
        label_4->setText(QApplication::translate("MaintainceFaultQueryPage", "\350\256\260\345\275\225", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MaintainceFaultQueryPage", "\346\234\252\350\256\260\345\275\225", 0, QApplication::UnicodeUTF8));
        TCMSFaultBtn_3->setText(QString());
        tc1directionlbl->setText(QString());
        tc2directionlbl->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MaintainceFaultQueryPage: public Ui_MaintainceFaultQueryPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINTAINCEFAULTQUERYPAGE_H
