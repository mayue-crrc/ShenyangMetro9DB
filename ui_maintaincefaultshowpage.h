/********************************************************************************
** Form generated from reading UI file 'maintaincefaultshowpage.ui'
**
** Created: Wed Dec 26 19:13:13 2018
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINTAINCEFAULTSHOWPAGE_H
#define UI_MAINTAINCEFAULTSHOWPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QTextBrowser>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MaintainceFaultShowPage
{
public:
    QPushButton *returnBtn;
    QLabel *label_2;
    QLabel *faultLevel_row9;
    QLabel *endTime_row8;
    QLabel *endTime_row1;
    QLabel *faultCode_row4;
    QLabel *faultLevel_row3;
    QLabel *mp2wheel2lbl;
    QLabel *faultCode_row3;
    QLabel *tc1lbl;
    QLabel *faultCode_row8;
    QLabel *lbl1_18;
    QLabel *tc1wheel2lbl;
    QLabel *m1wheel1lbl;
    QLabel *mp1wheel2lbl;
    QLabel *endTime_row6;
    QLabel *tc2keylbl;
    QLabel *mp2wheel1lbl;
    QLabel *startTime_row6;
    QLabel *startTime_row2;
    QLabel *metroCode_row1_7;
    QLabel *metroCode_row1_9;
    QLabel *tc2wheel1lbl;
    QLabel *lbl1_16;
    QLabel *endTime_row5;
    QLabel *faultLevel_row2;
    QLabel *startTime_row1;
    QLabel *faultpagelbl;
    QLabel *faultName_row6;
    QPushButton *NextPageBtn;
    QLabel *lbl1_17;
    QLabel *tc1wheel1lbl;
    QLabel *m2lbl;
    QLabel *faultLevel_row7;
    QLabel *tc2wheel2lbl;
    QPushButton *PrePageBtn;
    QLabel *tc2directionlbl;
    QLabel *metroCode_row1_5;
    QLabel *faultName_row3;
    QLabel *faultName_row1;
    QLabel *startTime_row5;
    QLabel *startTime_row4;
    QLabel *faultName_row7;
    QLabel *faultCode_row2;
    QLabel *endTime_row4;
    QLabel *m1lbl;
    QLabel *faultCode_row7;
    QLabel *metroCode_row1_6;
    QLabel *mp1lbl;
    QLabel *metroCode_row1_8;
    QLabel *m2wheel2lbl;
    QLabel *faultCode_row9;
    QLabel *faultName_row9;
    QLabel *metroCode_row1_4;
    QLabel *m1wheel2lbl;
    QLabel *endTime_row2;
    QLabel *lbl1_19;
    QLabel *lbl1_14;
    QLabel *metroCode_row1_3;
    QLabel *tc2lbl;
    QLabel *faultName_row8;
    QLabel *lbl1_13;
    QLabel *startTime_row8;
    QLabel *faultLevel_row6;
    QLabel *mp1wheel1lbl;
    QLabel *faultName_row4;
    QLabel *endTime_row7;
    QLabel *faultcntlbl;
    QLabel *startTime_row9;
    QLabel *tc1directionlbl;
    QLabel *faultLevel_row1;
    QLabel *m2wheel1lbl;
    QLabel *lbl1_20;
    QLabel *faultCode_row1;
    QLabel *tc1keylbl;
    QLabel *lbl1_21;
    QLabel *faultName_row2;
    QLabel *faultLevel_row8;
    QLabel *faultCode_row6;
    QLabel *metroCode_row1_2;
    QLabel *startTime_row7;
    QLabel *mp2lbl;
    QLabel *faultLevel_row5;
    QLabel *endTime_row3;
    QLabel *metroCode_row1;
    QLabel *endTime_row9;
    QLabel *faultLevel_row4;
    QLabel *startTime_row3;
    QLabel *faultCode_row5;
    QLabel *faultName_row5;
    QLabel *lbl1_15;
    QPushButton *BTNRow_5;
    QPushButton *BTNRow_8;
    QPushButton *BTNRow;
    QPushButton *BTNRow_6;
    QPushButton *BTNRow_3;
    QGroupBox *GROUPBOXFault;
    QLabel *Faultname_2;
    QLabel *lbl_2;
    QTextBrowser *FaultTips_2;
    QLabel *label_3;
    QPushButton *BTNClose_2;
    QPushButton *BTNRow_2;
    QPushButton *BTNRow_7;
    QPushButton *BTNRow_4;
    QPushButton *BTNRow_9;

    void setupUi(QWidget *MaintainceFaultShowPage)
    {
        if (MaintainceFaultShowPage->objectName().isEmpty())
            MaintainceFaultShowPage->setObjectName(QString::fromUtf8("MaintainceFaultShowPage"));
        MaintainceFaultShowPage->resize(1024, 686);
        MaintainceFaultShowPage->setStyleSheet(QString::fromUtf8("QWidget\n"
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
"background-color:black;\n"
"font:18px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(0,255,255);\n"
"border:1px solid black;\n"
"}"));
        returnBtn = new QPushButton(MaintainceFaultShowPage);
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
        label_2 = new QLabel(MaintainceFaultShowPage);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(3, 610, 1018, 72));
        label_2->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(0, 0, 0);\n"
"\n"
"	border:1px solid white;\n"
""));
        faultLevel_row9 = new QLabel(MaintainceFaultShowPage);
        faultLevel_row9->setObjectName(QString::fromUtf8("faultLevel_row9"));
        faultLevel_row9->setGeometry(QRect(205, 490, 61, 41));
        faultLevel_row9->setStyleSheet(QString::fromUtf8(""));
        faultLevel_row9->setAlignment(Qt::AlignCenter);
        endTime_row8 = new QLabel(MaintainceFaultShowPage);
        endTime_row8->setObjectName(QString::fromUtf8("endTime_row8"));
        endTime_row8->setGeometry(QRect(755, 450, 130, 41));
        endTime_row8->setStyleSheet(QString::fromUtf8("font:16px;"));
        endTime_row8->setAlignment(Qt::AlignCenter);
        endTime_row1 = new QLabel(MaintainceFaultShowPage);
        endTime_row1->setObjectName(QString::fromUtf8("endTime_row1"));
        endTime_row1->setGeometry(QRect(755, 170, 130, 41));
        endTime_row1->setStyleSheet(QString::fromUtf8("font:16px;"));
        endTime_row1->setAlignment(Qt::AlignCenter);
        faultCode_row4 = new QLabel(MaintainceFaultShowPage);
        faultCode_row4->setObjectName(QString::fromUtf8("faultCode_row4"));
        faultCode_row4->setGeometry(QRect(115, 290, 71, 41));
        faultCode_row4->setStyleSheet(QString::fromUtf8(""));
        faultCode_row4->setAlignment(Qt::AlignCenter);
        faultLevel_row3 = new QLabel(MaintainceFaultShowPage);
        faultLevel_row3->setObjectName(QString::fromUtf8("faultLevel_row3"));
        faultLevel_row3->setGeometry(QRect(205, 250, 61, 41));
        faultLevel_row3->setStyleSheet(QString::fromUtf8(""));
        faultLevel_row3->setAlignment(Qt::AlignCenter);
        mp2wheel2lbl = new QLabel(MaintainceFaultShowPage);
        mp2wheel2lbl->setObjectName(QString::fromUtf8("mp2wheel2lbl"));
        mp2wheel2lbl->setGeometry(QRect(645, 80, 14, 14));
        mp2wheel2lbl->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"border-radius:7px;\n"
"border:2px solid white;"));
        mp2wheel2lbl->setAlignment(Qt::AlignCenter);
        faultCode_row3 = new QLabel(MaintainceFaultShowPage);
        faultCode_row3->setObjectName(QString::fromUtf8("faultCode_row3"));
        faultCode_row3->setGeometry(QRect(115, 250, 71, 41));
        faultCode_row3->setStyleSheet(QString::fromUtf8(""));
        faultCode_row3->setAlignment(Qt::AlignCenter);
        tc1lbl = new QLabel(MaintainceFaultShowPage);
        tc1lbl->setObjectName(QString::fromUtf8("tc1lbl"));
        tc1lbl->setGeometry(QRect(216, 35, 100, 45));
        tc1lbl->setStyleSheet(QString::fromUtf8("	font:20px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	border:2px solid white;\n"
"	background-color: rgb(255,255,153);\n"
"color:black;\n"
""));
        tc1lbl->setAlignment(Qt::AlignCenter);
        faultCode_row8 = new QLabel(MaintainceFaultShowPage);
        faultCode_row8->setObjectName(QString::fromUtf8("faultCode_row8"));
        faultCode_row8->setGeometry(QRect(115, 450, 71, 41));
        faultCode_row8->setStyleSheet(QString::fromUtf8(""));
        faultCode_row8->setAlignment(Qt::AlignCenter);
        lbl1_18 = new QLabel(MaintainceFaultShowPage);
        lbl1_18->setObjectName(QString::fromUtf8("lbl1_18"));
        lbl1_18->setGeometry(QRect(210, 120, 51, 51));
        lbl1_18->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"font:18px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color:white;\n"
""));
        lbl1_18->setAlignment(Qt::AlignCenter);
        tc1wheel2lbl = new QLabel(MaintainceFaultShowPage);
        tc1wheel2lbl->setObjectName(QString::fromUtf8("tc1wheel2lbl"));
        tc1wheel2lbl->setGeometry(QRect(285, 80, 14, 14));
        tc1wheel2lbl->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"border-radius:7px;\n"
"border:2px solid white;"));
        tc1wheel2lbl->setAlignment(Qt::AlignCenter);
        m1wheel1lbl = new QLabel(MaintainceFaultShowPage);
        m1wheel1lbl->setObjectName(QString::fromUtf8("m1wheel1lbl"));
        m1wheel1lbl->setGeometry(QRect(435, 80, 14, 14));
        m1wheel1lbl->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"border-radius:7px;\n"
"border:2px solid white;"));
        m1wheel1lbl->setAlignment(Qt::AlignCenter);
        mp1wheel2lbl = new QLabel(MaintainceFaultShowPage);
        mp1wheel2lbl->setObjectName(QString::fromUtf8("mp1wheel2lbl"));
        mp1wheel2lbl->setGeometry(QRect(385, 80, 14, 14));
        mp1wheel2lbl->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"border-radius:7px;\n"
"border:2px solid white;"));
        mp1wheel2lbl->setAlignment(Qt::AlignCenter);
        endTime_row6 = new QLabel(MaintainceFaultShowPage);
        endTime_row6->setObjectName(QString::fromUtf8("endTime_row6"));
        endTime_row6->setGeometry(QRect(755, 370, 130, 41));
        endTime_row6->setStyleSheet(QString::fromUtf8("font:16px;"));
        endTime_row6->setAlignment(Qt::AlignCenter);
        tc2keylbl = new QLabel(MaintainceFaultShowPage);
        tc2keylbl->setObjectName(QString::fromUtf8("tc2keylbl"));
        tc2keylbl->setGeometry(QRect(830, 35, 31, 45));
        tc2keylbl->setStyleSheet(QString::fromUtf8("border-image: url(:/images/images/TC2traingraphKeynoact.bmp);"));
        tc2keylbl->setAlignment(Qt::AlignCenter);
        mp2wheel1lbl = new QLabel(MaintainceFaultShowPage);
        mp2wheel1lbl->setObjectName(QString::fromUtf8("mp2wheel1lbl"));
        mp2wheel1lbl->setGeometry(QRect(695, 80, 14, 14));
        mp2wheel1lbl->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"border-radius:7px;\n"
"border:2px solid white;"));
        mp2wheel1lbl->setAlignment(Qt::AlignCenter);
        startTime_row6 = new QLabel(MaintainceFaultShowPage);
        startTime_row6->setObjectName(QString::fromUtf8("startTime_row6"));
        startTime_row6->setGeometry(QRect(625, 370, 130, 41));
        startTime_row6->setStyleSheet(QString::fromUtf8("font:16px;"));
        startTime_row6->setAlignment(Qt::AlignCenter);
        startTime_row2 = new QLabel(MaintainceFaultShowPage);
        startTime_row2->setObjectName(QString::fromUtf8("startTime_row2"));
        startTime_row2->setGeometry(QRect(625, 210, 130, 41));
        startTime_row2->setStyleSheet(QString::fromUtf8("font:16px;"));
        startTime_row2->setAlignment(Qt::AlignCenter);
        metroCode_row1_7 = new QLabel(MaintainceFaultShowPage);
        metroCode_row1_7->setObjectName(QString::fromUtf8("metroCode_row1_7"));
        metroCode_row1_7->setGeometry(QRect(40, 410, 70, 41));
        metroCode_row1_7->setStyleSheet(QString::fromUtf8(""));
        metroCode_row1_7->setAlignment(Qt::AlignCenter);
        metroCode_row1_9 = new QLabel(MaintainceFaultShowPage);
        metroCode_row1_9->setObjectName(QString::fromUtf8("metroCode_row1_9"));
        metroCode_row1_9->setGeometry(QRect(40, 490, 70, 41));
        metroCode_row1_9->setStyleSheet(QString::fromUtf8(""));
        metroCode_row1_9->setAlignment(Qt::AlignCenter);
        tc2wheel1lbl = new QLabel(MaintainceFaultShowPage);
        tc2wheel1lbl->setObjectName(QString::fromUtf8("tc2wheel1lbl"));
        tc2wheel1lbl->setGeometry(QRect(795, 80, 14, 14));
        tc2wheel1lbl->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"border-radius:7px;\n"
"border:2px solid white;"));
        tc2wheel1lbl->setAlignment(Qt::AlignCenter);
        lbl1_16 = new QLabel(MaintainceFaultShowPage);
        lbl1_16->setObjectName(QString::fromUtf8("lbl1_16"));
        lbl1_16->setGeometry(QRect(45, 120, 61, 51));
        lbl1_16->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"font:18px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color:white;\n"
""));
        lbl1_16->setAlignment(Qt::AlignCenter);
        endTime_row5 = new QLabel(MaintainceFaultShowPage);
        endTime_row5->setObjectName(QString::fromUtf8("endTime_row5"));
        endTime_row5->setGeometry(QRect(755, 330, 130, 41));
        endTime_row5->setStyleSheet(QString::fromUtf8("font:16px;"));
        endTime_row5->setAlignment(Qt::AlignCenter);
        faultLevel_row2 = new QLabel(MaintainceFaultShowPage);
        faultLevel_row2->setObjectName(QString::fromUtf8("faultLevel_row2"));
        faultLevel_row2->setGeometry(QRect(205, 210, 61, 41));
        faultLevel_row2->setStyleSheet(QString::fromUtf8(""));
        faultLevel_row2->setAlignment(Qt::AlignCenter);
        startTime_row1 = new QLabel(MaintainceFaultShowPage);
        startTime_row1->setObjectName(QString::fromUtf8("startTime_row1"));
        startTime_row1->setGeometry(QRect(625, 170, 130, 41));
        startTime_row1->setStyleSheet(QString::fromUtf8("font:16px;"));
        startTime_row1->setAlignment(Qt::AlignCenter);
        faultpagelbl = new QLabel(MaintainceFaultShowPage);
        faultpagelbl->setObjectName(QString::fromUtf8("faultpagelbl"));
        faultpagelbl->setGeometry(QRect(665, 550, 180, 31));
        faultpagelbl->setStyleSheet(QString::fromUtf8("color:white\n"
""));
        faultpagelbl->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        faultName_row6 = new QLabel(MaintainceFaultShowPage);
        faultName_row6->setObjectName(QString::fromUtf8("faultName_row6"));
        faultName_row6->setGeometry(QRect(275, 370, 350, 41));
        faultName_row6->setStyleSheet(QString::fromUtf8(""));
        faultName_row6->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        NextPageBtn = new QPushButton(MaintainceFaultShowPage);
        NextPageBtn->setObjectName(QString::fromUtf8("NextPageBtn"));
        NextPageBtn->setGeometry(QRect(925, 460, 81, 51));
        NextPageBtn->setFocusPolicy(Qt::NoFocus);
        NextPageBtn->setStyleSheet(QString::fromUtf8("font:30px;\n"
"color:black;\n"
"background-color:orange;\n"
"border-radius:8px;"));
        lbl1_17 = new QLabel(MaintainceFaultShowPage);
        lbl1_17->setObjectName(QString::fromUtf8("lbl1_17"));
        lbl1_17->setGeometry(QRect(120, 120, 61, 51));
        lbl1_17->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"font:18px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color:white;\n"
""));
        lbl1_17->setAlignment(Qt::AlignCenter);
        tc1wheel1lbl = new QLabel(MaintainceFaultShowPage);
        tc1wheel1lbl->setObjectName(QString::fromUtf8("tc1wheel1lbl"));
        tc1wheel1lbl->setGeometry(QRect(235, 80, 14, 14));
        tc1wheel1lbl->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"border-radius:7px;\n"
"border:2px solid white;"));
        tc1wheel1lbl->setAlignment(Qt::AlignCenter);
        m2lbl = new QLabel(MaintainceFaultShowPage);
        m2lbl->setObjectName(QString::fromUtf8("m2lbl"));
        m2lbl->setGeometry(QRect(525, 35, 100, 45));
        m2lbl->setStyleSheet(QString::fromUtf8("	font:20px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	border:2px solid white;\n"
"	background-color: rgb(255,255,153);\n"
"color:black;\n"
""));
        m2lbl->setAlignment(Qt::AlignCenter);
        faultLevel_row7 = new QLabel(MaintainceFaultShowPage);
        faultLevel_row7->setObjectName(QString::fromUtf8("faultLevel_row7"));
        faultLevel_row7->setGeometry(QRect(205, 410, 61, 41));
        faultLevel_row7->setStyleSheet(QString::fromUtf8(""));
        faultLevel_row7->setAlignment(Qt::AlignCenter);
        tc2wheel2lbl = new QLabel(MaintainceFaultShowPage);
        tc2wheel2lbl->setObjectName(QString::fromUtf8("tc2wheel2lbl"));
        tc2wheel2lbl->setGeometry(QRect(745, 80, 14, 14));
        tc2wheel2lbl->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"border-radius:7px;\n"
"border:2px solid white;"));
        tc2wheel2lbl->setAlignment(Qt::AlignCenter);
        PrePageBtn = new QPushButton(MaintainceFaultShowPage);
        PrePageBtn->setObjectName(QString::fromUtf8("PrePageBtn"));
        PrePageBtn->setGeometry(QRect(925, 400, 81, 51));
        PrePageBtn->setFocusPolicy(Qt::NoFocus);
        PrePageBtn->setStyleSheet(QString::fromUtf8("font:30px;\n"
"color:black;\n"
"background-color:orange;\n"
"border-radius:8px;"));
        tc2directionlbl = new QLabel(MaintainceFaultShowPage);
        tc2directionlbl->setObjectName(QString::fromUtf8("tc2directionlbl"));
        tc2directionlbl->setGeometry(QRect(860, 35, 51, 51));
        tc2directionlbl->setStyleSheet(QString::fromUtf8("border-image: url(:/images/images/TC2traingraphDirection.bmp);"));
        tc2directionlbl->setAlignment(Qt::AlignCenter);
        metroCode_row1_5 = new QLabel(MaintainceFaultShowPage);
        metroCode_row1_5->setObjectName(QString::fromUtf8("metroCode_row1_5"));
        metroCode_row1_5->setGeometry(QRect(40, 330, 70, 41));
        metroCode_row1_5->setStyleSheet(QString::fromUtf8(""));
        metroCode_row1_5->setAlignment(Qt::AlignCenter);
        faultName_row3 = new QLabel(MaintainceFaultShowPage);
        faultName_row3->setObjectName(QString::fromUtf8("faultName_row3"));
        faultName_row3->setGeometry(QRect(275, 250, 350, 41));
        faultName_row3->setStyleSheet(QString::fromUtf8(""));
        faultName_row3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        faultName_row1 = new QLabel(MaintainceFaultShowPage);
        faultName_row1->setObjectName(QString::fromUtf8("faultName_row1"));
        faultName_row1->setGeometry(QRect(275, 170, 350, 41));
        faultName_row1->setStyleSheet(QString::fromUtf8(""));
        faultName_row1->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        startTime_row5 = new QLabel(MaintainceFaultShowPage);
        startTime_row5->setObjectName(QString::fromUtf8("startTime_row5"));
        startTime_row5->setGeometry(QRect(625, 330, 130, 41));
        startTime_row5->setStyleSheet(QString::fromUtf8("font:16px;"));
        startTime_row5->setAlignment(Qt::AlignCenter);
        startTime_row4 = new QLabel(MaintainceFaultShowPage);
        startTime_row4->setObjectName(QString::fromUtf8("startTime_row4"));
        startTime_row4->setGeometry(QRect(625, 290, 130, 41));
        startTime_row4->setStyleSheet(QString::fromUtf8("font:16px;"));
        startTime_row4->setAlignment(Qt::AlignCenter);
        faultName_row7 = new QLabel(MaintainceFaultShowPage);
        faultName_row7->setObjectName(QString::fromUtf8("faultName_row7"));
        faultName_row7->setGeometry(QRect(275, 410, 350, 41));
        faultName_row7->setStyleSheet(QString::fromUtf8(""));
        faultName_row7->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        faultCode_row2 = new QLabel(MaintainceFaultShowPage);
        faultCode_row2->setObjectName(QString::fromUtf8("faultCode_row2"));
        faultCode_row2->setGeometry(QRect(115, 210, 71, 41));
        faultCode_row2->setStyleSheet(QString::fromUtf8(""));
        faultCode_row2->setAlignment(Qt::AlignCenter);
        endTime_row4 = new QLabel(MaintainceFaultShowPage);
        endTime_row4->setObjectName(QString::fromUtf8("endTime_row4"));
        endTime_row4->setGeometry(QRect(755, 290, 130, 41));
        endTime_row4->setStyleSheet(QString::fromUtf8("font:16px;"));
        endTime_row4->setAlignment(Qt::AlignCenter);
        m1lbl = new QLabel(MaintainceFaultShowPage);
        m1lbl->setObjectName(QString::fromUtf8("m1lbl"));
        m1lbl->setGeometry(QRect(422, 35, 100, 45));
        m1lbl->setStyleSheet(QString::fromUtf8("	font:20px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	border:2px solid white;\n"
"	background-color: rgb(255,255,153);\n"
"color:black;\n"
""));
        m1lbl->setAlignment(Qt::AlignCenter);
        faultCode_row7 = new QLabel(MaintainceFaultShowPage);
        faultCode_row7->setObjectName(QString::fromUtf8("faultCode_row7"));
        faultCode_row7->setGeometry(QRect(115, 410, 71, 41));
        faultCode_row7->setStyleSheet(QString::fromUtf8(""));
        faultCode_row7->setAlignment(Qt::AlignCenter);
        metroCode_row1_6 = new QLabel(MaintainceFaultShowPage);
        metroCode_row1_6->setObjectName(QString::fromUtf8("metroCode_row1_6"));
        metroCode_row1_6->setGeometry(QRect(40, 370, 70, 41));
        metroCode_row1_6->setStyleSheet(QString::fromUtf8(""));
        metroCode_row1_6->setAlignment(Qt::AlignCenter);
        mp1lbl = new QLabel(MaintainceFaultShowPage);
        mp1lbl->setObjectName(QString::fromUtf8("mp1lbl"));
        mp1lbl->setGeometry(QRect(319, 35, 100, 45));
        mp1lbl->setStyleSheet(QString::fromUtf8("	font:20px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	border:2px solid white;\n"
"	background-color: rgb(255,255,153);\n"
"color:black;\n"
""));
        mp1lbl->setAlignment(Qt::AlignCenter);
        metroCode_row1_8 = new QLabel(MaintainceFaultShowPage);
        metroCode_row1_8->setObjectName(QString::fromUtf8("metroCode_row1_8"));
        metroCode_row1_8->setGeometry(QRect(40, 450, 70, 41));
        metroCode_row1_8->setStyleSheet(QString::fromUtf8(""));
        metroCode_row1_8->setAlignment(Qt::AlignCenter);
        m2wheel2lbl = new QLabel(MaintainceFaultShowPage);
        m2wheel2lbl->setObjectName(QString::fromUtf8("m2wheel2lbl"));
        m2wheel2lbl->setGeometry(QRect(545, 80, 14, 14));
        m2wheel2lbl->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"border-radius:7px;\n"
"border:2px solid white;"));
        m2wheel2lbl->setAlignment(Qt::AlignCenter);
        faultCode_row9 = new QLabel(MaintainceFaultShowPage);
        faultCode_row9->setObjectName(QString::fromUtf8("faultCode_row9"));
        faultCode_row9->setGeometry(QRect(115, 490, 71, 41));
        faultCode_row9->setStyleSheet(QString::fromUtf8(""));
        faultCode_row9->setAlignment(Qt::AlignCenter);
        faultName_row9 = new QLabel(MaintainceFaultShowPage);
        faultName_row9->setObjectName(QString::fromUtf8("faultName_row9"));
        faultName_row9->setGeometry(QRect(275, 490, 350, 41));
        faultName_row9->setStyleSheet(QString::fromUtf8(""));
        faultName_row9->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        metroCode_row1_4 = new QLabel(MaintainceFaultShowPage);
        metroCode_row1_4->setObjectName(QString::fromUtf8("metroCode_row1_4"));
        metroCode_row1_4->setGeometry(QRect(40, 290, 70, 41));
        metroCode_row1_4->setStyleSheet(QString::fromUtf8(""));
        metroCode_row1_4->setAlignment(Qt::AlignCenter);
        m1wheel2lbl = new QLabel(MaintainceFaultShowPage);
        m1wheel2lbl->setObjectName(QString::fromUtf8("m1wheel2lbl"));
        m1wheel2lbl->setGeometry(QRect(485, 80, 14, 14));
        m1wheel2lbl->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"border-radius:7px;\n"
"border:2px solid white;"));
        m1wheel2lbl->setAlignment(Qt::AlignCenter);
        endTime_row2 = new QLabel(MaintainceFaultShowPage);
        endTime_row2->setObjectName(QString::fromUtf8("endTime_row2"));
        endTime_row2->setGeometry(QRect(755, 210, 130, 41));
        endTime_row2->setStyleSheet(QString::fromUtf8("font:16px;"));
        endTime_row2->setAlignment(Qt::AlignCenter);
        lbl1_19 = new QLabel(MaintainceFaultShowPage);
        lbl1_19->setObjectName(QString::fromUtf8("lbl1_19"));
        lbl1_19->setGeometry(QRect(625, 120, 130, 51));
        lbl1_19->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"font:18px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color:white;\n"
""));
        lbl1_19->setAlignment(Qt::AlignCenter);
        lbl1_14 = new QLabel(MaintainceFaultShowPage);
        lbl1_14->setObjectName(QString::fromUtf8("lbl1_14"));
        lbl1_14->setGeometry(QRect(25, 110, 881, 481));
        lbl1_14->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"border-radius:10px;\n"
"font:14px;\n"
"color:white;\n"
"border:2px solid white;"));
        lbl1_14->setAlignment(Qt::AlignCenter);
        metroCode_row1_3 = new QLabel(MaintainceFaultShowPage);
        metroCode_row1_3->setObjectName(QString::fromUtf8("metroCode_row1_3"));
        metroCode_row1_3->setGeometry(QRect(40, 250, 70, 41));
        metroCode_row1_3->setStyleSheet(QString::fromUtf8(""));
        metroCode_row1_3->setAlignment(Qt::AlignCenter);
        tc2lbl = new QLabel(MaintainceFaultShowPage);
        tc2lbl->setObjectName(QString::fromUtf8("tc2lbl"));
        tc2lbl->setGeometry(QRect(731, 35, 100, 45));
        tc2lbl->setStyleSheet(QString::fromUtf8("	font:20px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	border:2px solid white;\n"
"	background-color: rgb(255,255,153);\n"
"color:black;\n"
""));
        tc2lbl->setAlignment(Qt::AlignCenter);
        faultName_row8 = new QLabel(MaintainceFaultShowPage);
        faultName_row8->setObjectName(QString::fromUtf8("faultName_row8"));
        faultName_row8->setGeometry(QRect(275, 450, 350, 41));
        faultName_row8->setStyleSheet(QString::fromUtf8(""));
        faultName_row8->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lbl1_13 = new QLabel(MaintainceFaultShowPage);
        lbl1_13->setObjectName(QString::fromUtf8("lbl1_13"));
        lbl1_13->setGeometry(QRect(915, 390, 101, 131));
        lbl1_13->setStyleSheet(QString::fromUtf8("background-color:lightgray;\n"
"border-radius:10px;\n"
"font:14px;\n"
"color:brown;"));
        lbl1_13->setAlignment(Qt::AlignCenter);
        startTime_row8 = new QLabel(MaintainceFaultShowPage);
        startTime_row8->setObjectName(QString::fromUtf8("startTime_row8"));
        startTime_row8->setGeometry(QRect(625, 450, 130, 41));
        startTime_row8->setStyleSheet(QString::fromUtf8("font:16px;"));
        startTime_row8->setAlignment(Qt::AlignCenter);
        faultLevel_row6 = new QLabel(MaintainceFaultShowPage);
        faultLevel_row6->setObjectName(QString::fromUtf8("faultLevel_row6"));
        faultLevel_row6->setGeometry(QRect(205, 370, 61, 41));
        faultLevel_row6->setStyleSheet(QString::fromUtf8(""));
        faultLevel_row6->setAlignment(Qt::AlignCenter);
        mp1wheel1lbl = new QLabel(MaintainceFaultShowPage);
        mp1wheel1lbl->setObjectName(QString::fromUtf8("mp1wheel1lbl"));
        mp1wheel1lbl->setGeometry(QRect(335, 80, 14, 14));
        mp1wheel1lbl->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"border-radius:7px;\n"
"border:2px solid white;"));
        mp1wheel1lbl->setAlignment(Qt::AlignCenter);
        faultName_row4 = new QLabel(MaintainceFaultShowPage);
        faultName_row4->setObjectName(QString::fromUtf8("faultName_row4"));
        faultName_row4->setGeometry(QRect(275, 290, 350, 41));
        faultName_row4->setStyleSheet(QString::fromUtf8(""));
        faultName_row4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        endTime_row7 = new QLabel(MaintainceFaultShowPage);
        endTime_row7->setObjectName(QString::fromUtf8("endTime_row7"));
        endTime_row7->setGeometry(QRect(755, 410, 130, 41));
        endTime_row7->setStyleSheet(QString::fromUtf8("font:16px;"));
        endTime_row7->setAlignment(Qt::AlignCenter);
        faultcntlbl = new QLabel(MaintainceFaultShowPage);
        faultcntlbl->setObjectName(QString::fromUtf8("faultcntlbl"));
        faultcntlbl->setGeometry(QRect(125, 550, 160, 31));
        faultcntlbl->setStyleSheet(QString::fromUtf8("color:white\n"
""));
        faultcntlbl->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        startTime_row9 = new QLabel(MaintainceFaultShowPage);
        startTime_row9->setObjectName(QString::fromUtf8("startTime_row9"));
        startTime_row9->setGeometry(QRect(625, 490, 130, 41));
        startTime_row9->setStyleSheet(QString::fromUtf8("font:16px;"));
        startTime_row9->setAlignment(Qt::AlignCenter);
        tc1directionlbl = new QLabel(MaintainceFaultShowPage);
        tc1directionlbl->setObjectName(QString::fromUtf8("tc1directionlbl"));
        tc1directionlbl->setGeometry(QRect(135, 35, 51, 51));
        tc1directionlbl->setStyleSheet(QString::fromUtf8("border-image: url(:/images/images/TC1traingraphDirection.bmp);"));
        tc1directionlbl->setAlignment(Qt::AlignCenter);
        faultLevel_row1 = new QLabel(MaintainceFaultShowPage);
        faultLevel_row1->setObjectName(QString::fromUtf8("faultLevel_row1"));
        faultLevel_row1->setGeometry(QRect(205, 170, 61, 41));
        faultLevel_row1->setStyleSheet(QString::fromUtf8(""));
        faultLevel_row1->setAlignment(Qt::AlignCenter);
        m2wheel1lbl = new QLabel(MaintainceFaultShowPage);
        m2wheel1lbl->setObjectName(QString::fromUtf8("m2wheel1lbl"));
        m2wheel1lbl->setGeometry(QRect(595, 80, 14, 14));
        m2wheel1lbl->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"border-radius:7px;\n"
"border:2px solid white;"));
        m2wheel1lbl->setAlignment(Qt::AlignCenter);
        lbl1_20 = new QLabel(MaintainceFaultShowPage);
        lbl1_20->setObjectName(QString::fromUtf8("lbl1_20"));
        lbl1_20->setGeometry(QRect(275, 120, 350, 51));
        lbl1_20->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"font:18px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color:white;\n"
""));
        lbl1_20->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        faultCode_row1 = new QLabel(MaintainceFaultShowPage);
        faultCode_row1->setObjectName(QString::fromUtf8("faultCode_row1"));
        faultCode_row1->setGeometry(QRect(115, 170, 71, 41));
        faultCode_row1->setStyleSheet(QString::fromUtf8(""));
        faultCode_row1->setAlignment(Qt::AlignCenter);
        tc1keylbl = new QLabel(MaintainceFaultShowPage);
        tc1keylbl->setObjectName(QString::fromUtf8("tc1keylbl"));
        tc1keylbl->setGeometry(QRect(185, 35, 31, 45));
        tc1keylbl->setStyleSheet(QString::fromUtf8("border-image: url(:/images/images/TC1traingraphKeynoact.bmp);"));
        tc1keylbl->setAlignment(Qt::AlignCenter);
        lbl1_21 = new QLabel(MaintainceFaultShowPage);
        lbl1_21->setObjectName(QString::fromUtf8("lbl1_21"));
        lbl1_21->setGeometry(QRect(755, 120, 130, 51));
        lbl1_21->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"font:18px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color:white;\n"
""));
        lbl1_21->setAlignment(Qt::AlignCenter);
        faultName_row2 = new QLabel(MaintainceFaultShowPage);
        faultName_row2->setObjectName(QString::fromUtf8("faultName_row2"));
        faultName_row2->setGeometry(QRect(275, 210, 350, 41));
        faultName_row2->setStyleSheet(QString::fromUtf8(""));
        faultName_row2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        faultLevel_row8 = new QLabel(MaintainceFaultShowPage);
        faultLevel_row8->setObjectName(QString::fromUtf8("faultLevel_row8"));
        faultLevel_row8->setGeometry(QRect(205, 450, 61, 41));
        faultLevel_row8->setStyleSheet(QString::fromUtf8(""));
        faultLevel_row8->setAlignment(Qt::AlignCenter);
        faultCode_row6 = new QLabel(MaintainceFaultShowPage);
        faultCode_row6->setObjectName(QString::fromUtf8("faultCode_row6"));
        faultCode_row6->setGeometry(QRect(115, 370, 71, 41));
        faultCode_row6->setStyleSheet(QString::fromUtf8(""));
        faultCode_row6->setAlignment(Qt::AlignCenter);
        metroCode_row1_2 = new QLabel(MaintainceFaultShowPage);
        metroCode_row1_2->setObjectName(QString::fromUtf8("metroCode_row1_2"));
        metroCode_row1_2->setGeometry(QRect(40, 210, 70, 41));
        metroCode_row1_2->setStyleSheet(QString::fromUtf8(""));
        metroCode_row1_2->setAlignment(Qt::AlignCenter);
        startTime_row7 = new QLabel(MaintainceFaultShowPage);
        startTime_row7->setObjectName(QString::fromUtf8("startTime_row7"));
        startTime_row7->setGeometry(QRect(625, 410, 130, 41));
        startTime_row7->setStyleSheet(QString::fromUtf8("font:16px;"));
        startTime_row7->setAlignment(Qt::AlignCenter);
        mp2lbl = new QLabel(MaintainceFaultShowPage);
        mp2lbl->setObjectName(QString::fromUtf8("mp2lbl"));
        mp2lbl->setGeometry(QRect(628, 35, 100, 45));
        mp2lbl->setStyleSheet(QString::fromUtf8("	font:20px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	border:2px solid white;\n"
"	background-color: rgb(255,255,153);\n"
"color:black;\n"
""));
        mp2lbl->setAlignment(Qt::AlignCenter);
        faultLevel_row5 = new QLabel(MaintainceFaultShowPage);
        faultLevel_row5->setObjectName(QString::fromUtf8("faultLevel_row5"));
        faultLevel_row5->setGeometry(QRect(205, 330, 61, 41));
        faultLevel_row5->setStyleSheet(QString::fromUtf8(""));
        faultLevel_row5->setAlignment(Qt::AlignCenter);
        endTime_row3 = new QLabel(MaintainceFaultShowPage);
        endTime_row3->setObjectName(QString::fromUtf8("endTime_row3"));
        endTime_row3->setGeometry(QRect(755, 250, 130, 41));
        endTime_row3->setStyleSheet(QString::fromUtf8("font:16px;"));
        endTime_row3->setAlignment(Qt::AlignCenter);
        metroCode_row1 = new QLabel(MaintainceFaultShowPage);
        metroCode_row1->setObjectName(QString::fromUtf8("metroCode_row1"));
        metroCode_row1->setGeometry(QRect(40, 170, 70, 41));
        metroCode_row1->setStyleSheet(QString::fromUtf8(""));
        metroCode_row1->setAlignment(Qt::AlignCenter);
        endTime_row9 = new QLabel(MaintainceFaultShowPage);
        endTime_row9->setObjectName(QString::fromUtf8("endTime_row9"));
        endTime_row9->setGeometry(QRect(755, 490, 130, 41));
        endTime_row9->setStyleSheet(QString::fromUtf8("font:16px;"));
        endTime_row9->setAlignment(Qt::AlignCenter);
        faultLevel_row4 = new QLabel(MaintainceFaultShowPage);
        faultLevel_row4->setObjectName(QString::fromUtf8("faultLevel_row4"));
        faultLevel_row4->setGeometry(QRect(205, 290, 61, 41));
        faultLevel_row4->setStyleSheet(QString::fromUtf8(""));
        faultLevel_row4->setAlignment(Qt::AlignCenter);
        startTime_row3 = new QLabel(MaintainceFaultShowPage);
        startTime_row3->setObjectName(QString::fromUtf8("startTime_row3"));
        startTime_row3->setGeometry(QRect(625, 250, 130, 41));
        startTime_row3->setStyleSheet(QString::fromUtf8("font:16px;"));
        startTime_row3->setAlignment(Qt::AlignCenter);
        faultCode_row5 = new QLabel(MaintainceFaultShowPage);
        faultCode_row5->setObjectName(QString::fromUtf8("faultCode_row5"));
        faultCode_row5->setGeometry(QRect(115, 330, 71, 41));
        faultCode_row5->setStyleSheet(QString::fromUtf8(""));
        faultCode_row5->setAlignment(Qt::AlignCenter);
        faultName_row5 = new QLabel(MaintainceFaultShowPage);
        faultName_row5->setObjectName(QString::fromUtf8("faultName_row5"));
        faultName_row5->setGeometry(QRect(275, 330, 350, 41));
        faultName_row5->setStyleSheet(QString::fromUtf8(""));
        faultName_row5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lbl1_15 = new QLabel(MaintainceFaultShowPage);
        lbl1_15->setObjectName(QString::fromUtf8("lbl1_15"));
        lbl1_15->setGeometry(QRect(25, 540, 881, 51));
        lbl1_15->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"border-radius:10px;\n"
"font:14px;\n"
"color:white;\n"
"border:2px solid white;"));
        lbl1_15->setAlignment(Qt::AlignCenter);
        BTNRow_5 = new QPushButton(MaintainceFaultShowPage);
        BTNRow_5->setObjectName(QString::fromUtf8("BTNRow_5"));
        BTNRow_5->setGeometry(QRect(40, 330, 861, 41));
        BTNRow_5->setStyleSheet(QString::fromUtf8("background-color:transparent;border-top: 2px solid transparent;	\n"
"border-left: 2px solid transparent;\n"
"border-radius:8px;"));
        BTNRow_8 = new QPushButton(MaintainceFaultShowPage);
        BTNRow_8->setObjectName(QString::fromUtf8("BTNRow_8"));
        BTNRow_8->setGeometry(QRect(40, 450, 861, 41));
        BTNRow_8->setStyleSheet(QString::fromUtf8("border-top: 2px solid transparent;	\n"
"border-left: 2px solid transparent;\n"
"border-radius:8px;background-color:transparent;"));
        BTNRow = new QPushButton(MaintainceFaultShowPage);
        BTNRow->setObjectName(QString::fromUtf8("BTNRow"));
        BTNRow->setGeometry(QRect(40, 170, 861, 41));
        BTNRow->setStyleSheet(QString::fromUtf8("background-color:transparent;	\n"
"border-top: 2px solid transparent;	\n"
"border-left: 2px solid transparent;\n"
"border-radius:8px;"));
        BTNRow_6 = new QPushButton(MaintainceFaultShowPage);
        BTNRow_6->setObjectName(QString::fromUtf8("BTNRow_6"));
        BTNRow_6->setGeometry(QRect(40, 370, 861, 41));
        BTNRow_6->setStyleSheet(QString::fromUtf8("background-color:transparent;border-top: 2px solid transparent;	\n"
"border-left: 2px solid transparent;\n"
"border-radius:8px;"));
        BTNRow_3 = new QPushButton(MaintainceFaultShowPage);
        BTNRow_3->setObjectName(QString::fromUtf8("BTNRow_3"));
        BTNRow_3->setGeometry(QRect(40, 250, 861, 41));
        BTNRow_3->setStyleSheet(QString::fromUtf8("background-color:transparent;border-top: 2px solid transparent;	\n"
"border-left: 2px solid transparent;\n"
"border-radius:8px;"));
        GROUPBOXFault = new QGroupBox(MaintainceFaultShowPage);
        GROUPBOXFault->setObjectName(QString::fromUtf8("GROUPBOXFault"));
        GROUPBOXFault->setGeometry(QRect(222, 180, 621, 321));
        Faultname_2 = new QLabel(GROUPBOXFault);
        Faultname_2->setObjectName(QString::fromUtf8("Faultname_2"));
        Faultname_2->setGeometry(QRect(40, 50, 521, 31));
        Faultname_2->setStyleSheet(QString::fromUtf8("color:yellow"));
        lbl_2 = new QLabel(GROUPBOXFault);
        lbl_2->setObjectName(QString::fromUtf8("lbl_2"));
        lbl_2->setGeometry(QRect(0, 0, 600, 300));
        lbl_2->setStyleSheet(QString::fromUtf8("color:yellow;\n"
"border:2px solid white;\n"
"border-radius:8px;\n"
"background-color:transparent;"));
        FaultTips_2 = new QTextBrowser(GROUPBOXFault);
        FaultTips_2->setObjectName(QString::fromUtf8("FaultTips_2"));
        FaultTips_2->setGeometry(QRect(40, 90, 521, 151));
        FaultTips_2->setStyleSheet(QString::fromUtf8("	    font: 18px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: white;\n"
"	background-color:black;"));
        label_3 = new QLabel(GROUPBOXFault);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(270, 10, 91, 31));
        label_3->setStyleSheet(QString::fromUtf8("color:red"));
        BTNClose_2 = new QPushButton(GROUPBOXFault);
        BTNClose_2->setObjectName(QString::fromUtf8("BTNClose_2"));
        BTNClose_2->setGeometry(QRect(470, 250, 98, 41));
        BTNRow_2 = new QPushButton(MaintainceFaultShowPage);
        BTNRow_2->setObjectName(QString::fromUtf8("BTNRow_2"));
        BTNRow_2->setGeometry(QRect(40, 210, 861, 41));
        BTNRow_2->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"border-top: 2px solid transparent;	\n"
"border-left: 2px solid transparent;\n"
"border-radius:8px;"));
        BTNRow_7 = new QPushButton(MaintainceFaultShowPage);
        BTNRow_7->setObjectName(QString::fromUtf8("BTNRow_7"));
        BTNRow_7->setGeometry(QRect(40, 410, 861, 41));
        BTNRow_7->setStyleSheet(QString::fromUtf8("background-color:transparent;border-top: 2px solid transparent;	\n"
"border-left: 2px solid transparent;\n"
"border-radius:8px;"));
        BTNRow_4 = new QPushButton(MaintainceFaultShowPage);
        BTNRow_4->setObjectName(QString::fromUtf8("BTNRow_4"));
        BTNRow_4->setGeometry(QRect(40, 290, 861, 41));
        BTNRow_4->setStyleSheet(QString::fromUtf8("background-color:transparent;border-top: 2px solid transparent;	\n"
"border-left: 2px solid transparent;\n"
"border-radius:8px;"));
        BTNRow_9 = new QPushButton(MaintainceFaultShowPage);
        BTNRow_9->setObjectName(QString::fromUtf8("BTNRow_9"));
        BTNRow_9->setGeometry(QRect(40, 490, 861, 41));
        BTNRow_9->setStyleSheet(QString::fromUtf8("background-color:transparent;border-top: 2px solid transparent;	\n"
"border-left: 2px solid transparent;\n"
"border-radius:8px;"));
        lbl1_13->raise();
        label_2->raise();
        lbl1_14->raise();
        returnBtn->raise();
        faultLevel_row9->raise();
        endTime_row8->raise();
        endTime_row1->raise();
        faultCode_row4->raise();
        faultLevel_row3->raise();
        mp2wheel2lbl->raise();
        faultCode_row3->raise();
        tc1lbl->raise();
        faultCode_row8->raise();
        lbl1_18->raise();
        tc1wheel2lbl->raise();
        m1wheel1lbl->raise();
        mp1wheel2lbl->raise();
        endTime_row6->raise();
        tc2keylbl->raise();
        mp2wheel1lbl->raise();
        startTime_row6->raise();
        startTime_row2->raise();
        metroCode_row1_7->raise();
        metroCode_row1_9->raise();
        tc2wheel1lbl->raise();
        lbl1_16->raise();
        endTime_row5->raise();
        faultLevel_row2->raise();
        startTime_row1->raise();
        faultpagelbl->raise();
        faultName_row6->raise();
        NextPageBtn->raise();
        lbl1_17->raise();
        tc1wheel1lbl->raise();
        m2lbl->raise();
        faultLevel_row7->raise();
        tc2wheel2lbl->raise();
        PrePageBtn->raise();
        tc2directionlbl->raise();
        metroCode_row1_5->raise();
        faultName_row3->raise();
        faultName_row1->raise();
        startTime_row5->raise();
        startTime_row4->raise();
        faultName_row7->raise();
        faultCode_row2->raise();
        endTime_row4->raise();
        m1lbl->raise();
        faultCode_row7->raise();
        metroCode_row1_6->raise();
        mp1lbl->raise();
        metroCode_row1_8->raise();
        m2wheel2lbl->raise();
        faultCode_row9->raise();
        faultName_row9->raise();
        metroCode_row1_4->raise();
        m1wheel2lbl->raise();
        endTime_row2->raise();
        lbl1_19->raise();
        metroCode_row1_3->raise();
        tc2lbl->raise();
        faultName_row8->raise();
        startTime_row8->raise();
        faultLevel_row6->raise();
        mp1wheel1lbl->raise();
        faultName_row4->raise();
        endTime_row7->raise();
        faultcntlbl->raise();
        startTime_row9->raise();
        tc1directionlbl->raise();
        faultLevel_row1->raise();
        m2wheel1lbl->raise();
        lbl1_20->raise();
        faultCode_row1->raise();
        tc1keylbl->raise();
        lbl1_21->raise();
        faultName_row2->raise();
        faultLevel_row8->raise();
        faultCode_row6->raise();
        metroCode_row1_2->raise();
        startTime_row7->raise();
        mp2lbl->raise();
        faultLevel_row5->raise();
        endTime_row3->raise();
        metroCode_row1->raise();
        endTime_row9->raise();
        faultLevel_row4->raise();
        startTime_row3->raise();
        faultCode_row5->raise();
        faultName_row5->raise();
        lbl1_15->raise();
        BTNRow_5->raise();
        BTNRow_8->raise();
        BTNRow->raise();
        BTNRow_6->raise();
        BTNRow_3->raise();
        BTNRow_2->raise();
        BTNRow_7->raise();
        BTNRow_4->raise();
        BTNRow_9->raise();
        GROUPBOXFault->raise();

        retranslateUi(MaintainceFaultShowPage);

        QMetaObject::connectSlotsByName(MaintainceFaultShowPage);
    } // setupUi

    void retranslateUi(QWidget *MaintainceFaultShowPage)
    {
        MaintainceFaultShowPage->setWindowTitle(QApplication::translate("MaintainceFaultShowPage", "Form", 0, QApplication::UnicodeUTF8));
        returnBtn->setText(QApplication::translate("MaintainceFaultShowPage", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
        label_2->setText(QString());
        faultLevel_row9->setText(QString());
        endTime_row8->setText(QString());
        endTime_row1->setText(QString());
        faultCode_row4->setText(QString());
        faultLevel_row3->setText(QString());
        mp2wheel2lbl->setText(QString());
        faultCode_row3->setText(QString());
        tc1lbl->setText(QApplication::translate("MaintainceFaultShowPage", "1001", 0, QApplication::UnicodeUTF8));
        faultCode_row8->setText(QString());
        lbl1_18->setText(QApplication::translate("MaintainceFaultShowPage", "\347\255\211\347\272\247", 0, QApplication::UnicodeUTF8));
        tc1wheel2lbl->setText(QString());
        m1wheel1lbl->setText(QString());
        mp1wheel2lbl->setText(QString());
        endTime_row6->setText(QString());
        tc2keylbl->setText(QString());
        mp2wheel1lbl->setText(QString());
        startTime_row6->setText(QString());
        startTime_row2->setText(QString());
        metroCode_row1_7->setText(QString());
        metroCode_row1_9->setText(QString());
        tc2wheel1lbl->setText(QString());
        lbl1_16->setText(QApplication::translate("MaintainceFaultShowPage", "\350\275\246\345\217\267", 0, QApplication::UnicodeUTF8));
        endTime_row5->setText(QString());
        faultLevel_row2->setText(QString());
        startTime_row1->setText(QString());
        faultpagelbl->setText(QApplication::translate("MaintainceFaultShowPage", "\347\254\2541\351\241\265/\345\205\2611\351\241\265", 0, QApplication::UnicodeUTF8));
        faultName_row6->setText(QString());
        NextPageBtn->setText(QApplication::translate("MaintainceFaultShowPage", "\357\271\200", 0, QApplication::UnicodeUTF8));
        lbl1_17->setText(QApplication::translate("MaintainceFaultShowPage", "\344\273\243\347\240\201", 0, QApplication::UnicodeUTF8));
        tc1wheel1lbl->setText(QString());
        m2lbl->setText(QApplication::translate("MaintainceFaultShowPage", "1004", 0, QApplication::UnicodeUTF8));
        faultLevel_row7->setText(QString());
        tc2wheel2lbl->setText(QString());
        PrePageBtn->setText(QApplication::translate("MaintainceFaultShowPage", "\357\270\277", 0, QApplication::UnicodeUTF8));
        tc2directionlbl->setText(QString());
        metroCode_row1_5->setText(QString());
        faultName_row3->setText(QString());
        faultName_row1->setText(QString());
        startTime_row5->setText(QString());
        startTime_row4->setText(QString());
        faultName_row7->setText(QString());
        faultCode_row2->setText(QString());
        endTime_row4->setText(QString());
        m1lbl->setText(QApplication::translate("MaintainceFaultShowPage", "1003", 0, QApplication::UnicodeUTF8));
        faultCode_row7->setText(QString());
        metroCode_row1_6->setText(QString());
        mp1lbl->setText(QApplication::translate("MaintainceFaultShowPage", "1002", 0, QApplication::UnicodeUTF8));
        metroCode_row1_8->setText(QString());
        m2wheel2lbl->setText(QString());
        faultCode_row9->setText(QString());
        faultName_row9->setText(QString());
        metroCode_row1_4->setText(QString());
        m1wheel2lbl->setText(QString());
        endTime_row2->setText(QString());
        lbl1_19->setText(QApplication::translate("MaintainceFaultShowPage", "\345\217\221\347\224\237\346\227\266\351\227\264", 0, QApplication::UnicodeUTF8));
        lbl1_14->setText(QString());
        metroCode_row1_3->setText(QString());
        tc2lbl->setText(QApplication::translate("MaintainceFaultShowPage", "1006", 0, QApplication::UnicodeUTF8));
        faultName_row8->setText(QString());
        lbl1_13->setText(QString());
        startTime_row8->setText(QString());
        faultLevel_row6->setText(QString());
        mp1wheel1lbl->setText(QString());
        faultName_row4->setText(QString());
        endTime_row7->setText(QString());
        faultcntlbl->setText(QApplication::translate("MaintainceFaultShowPage", "9 \346\235\241\346\225\205\351\232\234\350\256\260\345\275\225", 0, QApplication::UnicodeUTF8));
        startTime_row9->setText(QString());
        tc1directionlbl->setText(QString());
        faultLevel_row1->setText(QString());
        m2wheel1lbl->setText(QString());
        lbl1_20->setText(QApplication::translate("MaintainceFaultShowPage", "\346\225\205\351\232\234\345\220\215\347\247\260", 0, QApplication::UnicodeUTF8));
        faultCode_row1->setText(QString());
        tc1keylbl->setText(QString());
        lbl1_21->setText(QApplication::translate("MaintainceFaultShowPage", "\347\273\223\346\235\237\346\227\266\351\227\264", 0, QApplication::UnicodeUTF8));
        faultName_row2->setText(QString());
        faultLevel_row8->setText(QString());
        faultCode_row6->setText(QString());
        metroCode_row1_2->setText(QString());
        startTime_row7->setText(QString());
        mp2lbl->setText(QApplication::translate("MaintainceFaultShowPage", "1005", 0, QApplication::UnicodeUTF8));
        faultLevel_row5->setText(QString());
        endTime_row3->setText(QString());
        metroCode_row1->setText(QString());
        endTime_row9->setText(QString());
        faultLevel_row4->setText(QString());
        startTime_row3->setText(QString());
        faultCode_row5->setText(QString());
        faultName_row5->setText(QString());
        lbl1_15->setText(QString());
#ifndef QT_NO_WHATSTHIS
        BTNRow_5->setWhatsThis(QApplication::translate("MaintainceFaultShowPage", "4", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        BTNRow_5->setText(QString());
#ifndef QT_NO_WHATSTHIS
        BTNRow_8->setWhatsThis(QApplication::translate("MaintainceFaultShowPage", "7", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        BTNRow_8->setText(QString());
#ifndef QT_NO_WHATSTHIS
        BTNRow->setWhatsThis(QApplication::translate("MaintainceFaultShowPage", "0", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        BTNRow->setText(QString());
#ifndef QT_NO_WHATSTHIS
        BTNRow_6->setWhatsThis(QApplication::translate("MaintainceFaultShowPage", "5", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        BTNRow_6->setText(QString());
#ifndef QT_NO_WHATSTHIS
        BTNRow_3->setWhatsThis(QApplication::translate("MaintainceFaultShowPage", "2", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        BTNRow_3->setText(QString());
        GROUPBOXFault->setTitle(QApplication::translate("MaintainceFaultShowPage", "GroupBox", 0, QApplication::UnicodeUTF8));
        Faultname_2->setText(QString());
        lbl_2->setText(QString());
        FaultTips_2->setHtml(QApplication::translate("MaintainceFaultShowPage", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\276\256\350\275\257\351\233\205\351\273\221'; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p>\n"
"<p style=\"-qt-paragraph-type:e"
                        "mpty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0;"
                        " text-indent:0px;\"></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MaintainceFaultShowPage", "\346\225\205\351\232\234\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
        BTNClose_2->setText(QApplication::translate("MaintainceFaultShowPage", "\345\205\263\351\227\255", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        BTNRow_2->setWhatsThis(QApplication::translate("MaintainceFaultShowPage", "1", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        BTNRow_2->setText(QString());
#ifndef QT_NO_WHATSTHIS
        BTNRow_7->setWhatsThis(QApplication::translate("MaintainceFaultShowPage", "6", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        BTNRow_7->setText(QString());
#ifndef QT_NO_WHATSTHIS
        BTNRow_4->setWhatsThis(QApplication::translate("MaintainceFaultShowPage", "3", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        BTNRow_4->setText(QString());
#ifndef QT_NO_WHATSTHIS
        BTNRow_9->setWhatsThis(QApplication::translate("MaintainceFaultShowPage", "8", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        BTNRow_9->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MaintainceFaultShowPage: public Ui_MaintainceFaultShowPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINTAINCEFAULTSHOWPAGE_H
