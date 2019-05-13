/********************************************************************************
** Form generated from reading UI file 'maintaincetestpage.ui'
**
** Created: Mon May 13 10:17:24 2019
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINTAINCETESTPAGE_H
#define UI_MAINTAINCETESTPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MaintainceTestPage
{
public:
    QLabel *label;
    QPushButton *returnBtn;
    QLabel *MTempM2lbl;
    QLabel *MTempM1lbl;
    QLabel *MTempMP1lbl;
    QLabel *MTempMP2lbl;
    QLabel *lbl1_9;
    QLabel *lbl1;
    QLabel *lbl1_2;
    QLabel *BCPTC11lbl;
    QLabel *lbl1_10;
    QLabel *BCPTC12lbl;
    QLabel *BCPMP12lbl;
    QLabel *BCPMP11lbl;
    QLabel *BCPM12lbl;
    QLabel *BCPM11lbl;
    QLabel *BCPM21lbl;
    QLabel *BCPM22lbl;
    QLabel *BCPMP21lbl;
    QLabel *BCPMP22lbl;
    QLabel *BCPTC21lbl;
    QLabel *BCPTC22lbl;
    QLabel *lbl1_3;
    QLabel *Speedlbl;
    QLabel *lbl1_4;
    QLabel *lbl1_5;
    QLabel *lbl1_6;
    QLabel *ASpeedlbl;
    QLabel *lbl1_7;
    QLabel *levellbl;
    QLabel *lbl1_8;
    QLabel *lbl1_11;
    QLabel *lbl1_12;
    QLabel *lbl1_13;
    QLabel *A40Speedlbl;
    QLabel *lbl1_14;
    QLabel *A80Speedlbl;
    QLabel *lbl1_15;
    QLabel *InitSpeedlbl;
    QLabel *lbl1_16;
    QLabel *AveSpeedlbl;
    QLabel *lbl1_17;
    QLabel *BrakeDistancelbl;
    QLabel *lbl1_18;
    QLabel *Braketimelbl;
    QLabel *lbl1_19;
    QLabel *lbl1_20;
    QLabel *lbl1_21;
    QLabel *lbl1_22;
    QLabel *lbl1_23;
    QPushButton *StartTestBtn;
    QPushButton *StopTestBtn;
    QLabel *Teststatuslbl;
    QLabel *Teststatuslbl_2;

    void setupUi(QWidget *MaintainceTestPage)
    {
        if (MaintainceTestPage->objectName().isEmpty())
            MaintainceTestPage->setObjectName(QString::fromUtf8("MaintainceTestPage"));
        MaintainceTestPage->resize(1024, 595);
        MaintainceTestPage->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"	background-color:black;\n"
"}\n"
"QLabel\n"
"{\n"
"font:20px  \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color:rgb(23,176,176);\n"
"color:white;\n"
"background-color:blue;\n"
"}\n"
"QPushButton\n"
"{\n"
"	border-radius:8px;\n"
"font: 20px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";color: white;background-color: rgb(0, 128, 128);border-top: 2px solid white;border-left: 2px solid white;\n"
"}"));
        label = new QLabel(MaintainceTestPage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(3, 520, 1018, 72));
        label->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(0, 0, 0);\n"
"\n"
"	border:1px solid white;\n"
""));
        returnBtn = new QPushButton(MaintainceTestPage);
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
        MTempM2lbl = new QLabel(MaintainceTestPage);
        MTempM2lbl->setObjectName(QString::fromUtf8("MTempM2lbl"));
        MTempM2lbl->setGeometry(QRect(540, 15, 81, 31));
        MTempM2lbl->setAlignment(Qt::AlignCenter);
        MTempM1lbl = new QLabel(MaintainceTestPage);
        MTempM1lbl->setObjectName(QString::fromUtf8("MTempM1lbl"));
        MTempM1lbl->setGeometry(QRect(410, 15, 81, 31));
        MTempM1lbl->setAlignment(Qt::AlignCenter);
        MTempMP1lbl = new QLabel(MaintainceTestPage);
        MTempMP1lbl->setObjectName(QString::fromUtf8("MTempMP1lbl"));
        MTempMP1lbl->setGeometry(QRect(290, 15, 81, 31));
        MTempMP1lbl->setAlignment(Qt::AlignCenter);
        MTempMP2lbl = new QLabel(MaintainceTestPage);
        MTempMP2lbl->setObjectName(QString::fromUtf8("MTempMP2lbl"));
        MTempMP2lbl->setGeometry(QRect(660, 15, 81, 31));
        MTempMP2lbl->setAlignment(Qt::AlignCenter);
        lbl1_9 = new QLabel(MaintainceTestPage);
        lbl1_9->setObjectName(QString::fromUtf8("lbl1_9"));
        lbl1_9->setGeometry(QRect(130, 30, 800, 2));
        lbl1_9->setStyleSheet(QString::fromUtf8("background-color:white;"));
        lbl1_9->setAlignment(Qt::AlignCenter);
        lbl1 = new QLabel(MaintainceTestPage);
        lbl1->setObjectName(QString::fromUtf8("lbl1"));
        lbl1->setGeometry(QRect(10, 15, 121, 31));
        lbl1->setStyleSheet(QString::fromUtf8("background-color:black;"));
        lbl1->setAlignment(Qt::AlignCenter);
        lbl1_2 = new QLabel(MaintainceTestPage);
        lbl1_2->setObjectName(QString::fromUtf8("lbl1_2"));
        lbl1_2->setGeometry(QRect(10, 60, 121, 71));
        lbl1_2->setStyleSheet(QString::fromUtf8("background-color:black;"));
        lbl1_2->setAlignment(Qt::AlignCenter);
        BCPTC11lbl = new QLabel(MaintainceTestPage);
        BCPTC11lbl->setObjectName(QString::fromUtf8("BCPTC11lbl"));
        BCPTC11lbl->setGeometry(QRect(160, 80, 41, 31));
        BCPTC11lbl->setAlignment(Qt::AlignCenter);
        lbl1_10 = new QLabel(MaintainceTestPage);
        lbl1_10->setObjectName(QString::fromUtf8("lbl1_10"));
        lbl1_10->setGeometry(QRect(130, 95, 800, 2));
        lbl1_10->setStyleSheet(QString::fromUtf8("background-color:white;"));
        lbl1_10->setAlignment(Qt::AlignCenter);
        BCPTC12lbl = new QLabel(MaintainceTestPage);
        BCPTC12lbl->setObjectName(QString::fromUtf8("BCPTC12lbl"));
        BCPTC12lbl->setGeometry(QRect(210, 80, 41, 31));
        BCPTC12lbl->setAlignment(Qt::AlignCenter);
        BCPMP12lbl = new QLabel(MaintainceTestPage);
        BCPMP12lbl->setObjectName(QString::fromUtf8("BCPMP12lbl"));
        BCPMP12lbl->setGeometry(QRect(330, 80, 41, 31));
        BCPMP12lbl->setAlignment(Qt::AlignCenter);
        BCPMP11lbl = new QLabel(MaintainceTestPage);
        BCPMP11lbl->setObjectName(QString::fromUtf8("BCPMP11lbl"));
        BCPMP11lbl->setGeometry(QRect(280, 80, 41, 31));
        BCPMP11lbl->setAlignment(Qt::AlignCenter);
        BCPM12lbl = new QLabel(MaintainceTestPage);
        BCPM12lbl->setObjectName(QString::fromUtf8("BCPM12lbl"));
        BCPM12lbl->setGeometry(QRect(450, 80, 41, 31));
        BCPM12lbl->setAlignment(Qt::AlignCenter);
        BCPM11lbl = new QLabel(MaintainceTestPage);
        BCPM11lbl->setObjectName(QString::fromUtf8("BCPM11lbl"));
        BCPM11lbl->setGeometry(QRect(400, 80, 41, 31));
        BCPM11lbl->setAlignment(Qt::AlignCenter);
        BCPM21lbl = new QLabel(MaintainceTestPage);
        BCPM21lbl->setObjectName(QString::fromUtf8("BCPM21lbl"));
        BCPM21lbl->setGeometry(QRect(590, 80, 41, 31));
        BCPM21lbl->setAlignment(Qt::AlignCenter);
        BCPM22lbl = new QLabel(MaintainceTestPage);
        BCPM22lbl->setObjectName(QString::fromUtf8("BCPM22lbl"));
        BCPM22lbl->setGeometry(QRect(540, 80, 41, 31));
        BCPM22lbl->setAlignment(Qt::AlignCenter);
        BCPMP21lbl = new QLabel(MaintainceTestPage);
        BCPMP21lbl->setObjectName(QString::fromUtf8("BCPMP21lbl"));
        BCPMP21lbl->setGeometry(QRect(710, 80, 41, 31));
        BCPMP21lbl->setAlignment(Qt::AlignCenter);
        BCPMP22lbl = new QLabel(MaintainceTestPage);
        BCPMP22lbl->setObjectName(QString::fromUtf8("BCPMP22lbl"));
        BCPMP22lbl->setGeometry(QRect(660, 80, 41, 31));
        BCPMP22lbl->setAlignment(Qt::AlignCenter);
        BCPTC21lbl = new QLabel(MaintainceTestPage);
        BCPTC21lbl->setObjectName(QString::fromUtf8("BCPTC21lbl"));
        BCPTC21lbl->setGeometry(QRect(830, 80, 41, 31));
        BCPTC21lbl->setAlignment(Qt::AlignCenter);
        BCPTC22lbl = new QLabel(MaintainceTestPage);
        BCPTC22lbl->setObjectName(QString::fromUtf8("BCPTC22lbl"));
        BCPTC22lbl->setGeometry(QRect(780, 80, 41, 31));
        BCPTC22lbl->setAlignment(Qt::AlignCenter);
        lbl1_3 = new QLabel(MaintainceTestPage);
        lbl1_3->setObjectName(QString::fromUtf8("lbl1_3"));
        lbl1_3->setGeometry(QRect(10, 140, 121, 61));
        lbl1_3->setStyleSheet(QString::fromUtf8("background-color:black;"));
        lbl1_3->setAlignment(Qt::AlignCenter);
        Speedlbl = new QLabel(MaintainceTestPage);
        Speedlbl->setObjectName(QString::fromUtf8("Speedlbl"));
        Speedlbl->setGeometry(QRect(140, 150, 81, 41));
        Speedlbl->setStyleSheet(QString::fromUtf8("font:24px  \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color:rgb(23,176,176);\n"
"background-color:black;"));
        Speedlbl->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lbl1_4 = new QLabel(MaintainceTestPage);
        lbl1_4->setObjectName(QString::fromUtf8("lbl1_4"));
        lbl1_4->setGeometry(QRect(220, 160, 71, 21));
        lbl1_4->setStyleSheet(QString::fromUtf8("background-color:black;"));
        lbl1_4->setAlignment(Qt::AlignCenter);
        lbl1_5 = new QLabel(MaintainceTestPage);
        lbl1_5->setObjectName(QString::fromUtf8("lbl1_5"));
        lbl1_5->setGeometry(QRect(360, 140, 211, 61));
        lbl1_5->setStyleSheet(QString::fromUtf8("background-color:black;"));
        lbl1_5->setAlignment(Qt::AlignCenter);
        lbl1_6 = new QLabel(MaintainceTestPage);
        lbl1_6->setObjectName(QString::fromUtf8("lbl1_6"));
        lbl1_6->setGeometry(QRect(650, 160, 71, 21));
        lbl1_6->setStyleSheet(QString::fromUtf8("background-color:black;"));
        lbl1_6->setAlignment(Qt::AlignCenter);
        ASpeedlbl = new QLabel(MaintainceTestPage);
        ASpeedlbl->setObjectName(QString::fromUtf8("ASpeedlbl"));
        ASpeedlbl->setGeometry(QRect(570, 150, 81, 41));
        ASpeedlbl->setStyleSheet(QString::fromUtf8("font:24px  \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color:rgb(23,176,176);\n"
"background-color:black;"));
        ASpeedlbl->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lbl1_7 = new QLabel(MaintainceTestPage);
        lbl1_7->setObjectName(QString::fromUtf8("lbl1_7"));
        lbl1_7->setGeometry(QRect(790, 140, 121, 61));
        lbl1_7->setStyleSheet(QString::fromUtf8("background-color:black;"));
        lbl1_7->setAlignment(Qt::AlignCenter);
        levellbl = new QLabel(MaintainceTestPage);
        levellbl->setObjectName(QString::fromUtf8("levellbl"));
        levellbl->setGeometry(QRect(920, 150, 61, 41));
        levellbl->setStyleSheet(QString::fromUtf8("font:24px  \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color:rgb(23,176,176);\n"
"background-color:black;"));
        levellbl->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lbl1_8 = new QLabel(MaintainceTestPage);
        lbl1_8->setObjectName(QString::fromUtf8("lbl1_8"));
        lbl1_8->setGeometry(QRect(10, 210, 121, 61));
        lbl1_8->setStyleSheet(QString::fromUtf8("background-color:black;"));
        lbl1_8->setAlignment(Qt::AlignCenter);
        lbl1_11 = new QLabel(MaintainceTestPage);
        lbl1_11->setObjectName(QString::fromUtf8("lbl1_11"));
        lbl1_11->setGeometry(QRect(10, 280, 121, 61));
        lbl1_11->setStyleSheet(QString::fromUtf8("background-color:black;"));
        lbl1_11->setAlignment(Qt::AlignCenter);
        lbl1_12 = new QLabel(MaintainceTestPage);
        lbl1_12->setObjectName(QString::fromUtf8("lbl1_12"));
        lbl1_12->setGeometry(QRect(170, 210, 181, 61));
        lbl1_12->setStyleSheet(QString::fromUtf8("background-color:black;"));
        lbl1_12->setAlignment(Qt::AlignCenter);
        lbl1_13 = new QLabel(MaintainceTestPage);
        lbl1_13->setObjectName(QString::fromUtf8("lbl1_13"));
        lbl1_13->setGeometry(QRect(430, 230, 71, 21));
        lbl1_13->setStyleSheet(QString::fromUtf8("background-color:black;"));
        lbl1_13->setAlignment(Qt::AlignCenter);
        A40Speedlbl = new QLabel(MaintainceTestPage);
        A40Speedlbl->setObjectName(QString::fromUtf8("A40Speedlbl"));
        A40Speedlbl->setGeometry(QRect(350, 220, 81, 41));
        A40Speedlbl->setStyleSheet(QString::fromUtf8("font:24px  \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color:rgb(23,176,176);\n"
"background-color:black;"));
        A40Speedlbl->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lbl1_14 = new QLabel(MaintainceTestPage);
        lbl1_14->setObjectName(QString::fromUtf8("lbl1_14"));
        lbl1_14->setGeometry(QRect(590, 210, 181, 61));
        lbl1_14->setStyleSheet(QString::fromUtf8("background-color:black;"));
        lbl1_14->setAlignment(Qt::AlignCenter);
        A80Speedlbl = new QLabel(MaintainceTestPage);
        A80Speedlbl->setObjectName(QString::fromUtf8("A80Speedlbl"));
        A80Speedlbl->setGeometry(QRect(770, 220, 81, 41));
        A80Speedlbl->setStyleSheet(QString::fromUtf8("font:24px  \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color:rgb(23,176,176);\n"
"background-color:black;"));
        A80Speedlbl->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lbl1_15 = new QLabel(MaintainceTestPage);
        lbl1_15->setObjectName(QString::fromUtf8("lbl1_15"));
        lbl1_15->setGeometry(QRect(850, 230, 71, 21));
        lbl1_15->setStyleSheet(QString::fromUtf8("background-color:black;"));
        lbl1_15->setAlignment(Qt::AlignCenter);
        InitSpeedlbl = new QLabel(MaintainceTestPage);
        InitSpeedlbl->setObjectName(QString::fromUtf8("InitSpeedlbl"));
        InitSpeedlbl->setGeometry(QRect(210, 310, 81, 41));
        InitSpeedlbl->setStyleSheet(QString::fromUtf8("font:24px  \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color:rgb(23,176,176);\n"
"background-color:black;"));
        InitSpeedlbl->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lbl1_16 = new QLabel(MaintainceTestPage);
        lbl1_16->setObjectName(QString::fromUtf8("lbl1_16"));
        lbl1_16->setGeometry(QRect(290, 320, 71, 21));
        lbl1_16->setStyleSheet(QString::fromUtf8("background-color:black;"));
        lbl1_16->setAlignment(Qt::AlignCenter);
        AveSpeedlbl = new QLabel(MaintainceTestPage);
        AveSpeedlbl->setObjectName(QString::fromUtf8("AveSpeedlbl"));
        AveSpeedlbl->setGeometry(QRect(420, 310, 81, 41));
        AveSpeedlbl->setStyleSheet(QString::fromUtf8("font:24px  \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color:rgb(23,176,176);\n"
"background-color:black;"));
        AveSpeedlbl->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lbl1_17 = new QLabel(MaintainceTestPage);
        lbl1_17->setObjectName(QString::fromUtf8("lbl1_17"));
        lbl1_17->setGeometry(QRect(500, 320, 71, 21));
        lbl1_17->setStyleSheet(QString::fromUtf8("background-color:black;"));
        lbl1_17->setAlignment(Qt::AlignCenter);
        BrakeDistancelbl = new QLabel(MaintainceTestPage);
        BrakeDistancelbl->setObjectName(QString::fromUtf8("BrakeDistancelbl"));
        BrakeDistancelbl->setGeometry(QRect(630, 310, 81, 41));
        BrakeDistancelbl->setStyleSheet(QString::fromUtf8("font:24px  \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color:rgb(23,176,176);\n"
"background-color:black;"));
        BrakeDistancelbl->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lbl1_18 = new QLabel(MaintainceTestPage);
        lbl1_18->setObjectName(QString::fromUtf8("lbl1_18"));
        lbl1_18->setGeometry(QRect(710, 320, 41, 21));
        lbl1_18->setStyleSheet(QString::fromUtf8("background-color:black;"));
        lbl1_18->setAlignment(Qt::AlignCenter);
        Braketimelbl = new QLabel(MaintainceTestPage);
        Braketimelbl->setObjectName(QString::fromUtf8("Braketimelbl"));
        Braketimelbl->setGeometry(QRect(810, 310, 81, 41));
        Braketimelbl->setStyleSheet(QString::fromUtf8("font:24px  \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color:rgb(23,176,176);\n"
"background-color:black;"));
        Braketimelbl->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lbl1_19 = new QLabel(MaintainceTestPage);
        lbl1_19->setObjectName(QString::fromUtf8("lbl1_19"));
        lbl1_19->setGeometry(QRect(890, 320, 31, 21));
        lbl1_19->setStyleSheet(QString::fromUtf8("background-color:black;"));
        lbl1_19->setAlignment(Qt::AlignCenter);
        lbl1_20 = new QLabel(MaintainceTestPage);
        lbl1_20->setObjectName(QString::fromUtf8("lbl1_20"));
        lbl1_20->setGeometry(QRect(240, 280, 91, 31));
        lbl1_20->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"font:16px;"));
        lbl1_20->setAlignment(Qt::AlignCenter);
        lbl1_21 = new QLabel(MaintainceTestPage);
        lbl1_21->setObjectName(QString::fromUtf8("lbl1_21"));
        lbl1_21->setGeometry(QRect(450, 280, 91, 31));
        lbl1_21->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"font:16px;"));
        lbl1_21->setAlignment(Qt::AlignCenter);
        lbl1_22 = new QLabel(MaintainceTestPage);
        lbl1_22->setObjectName(QString::fromUtf8("lbl1_22"));
        lbl1_22->setGeometry(QRect(640, 280, 91, 31));
        lbl1_22->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"font:16px;"));
        lbl1_22->setAlignment(Qt::AlignCenter);
        lbl1_23 = new QLabel(MaintainceTestPage);
        lbl1_23->setObjectName(QString::fromUtf8("lbl1_23"));
        lbl1_23->setGeometry(QRect(820, 280, 91, 31));
        lbl1_23->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"font:16px;"));
        lbl1_23->setAlignment(Qt::AlignCenter);
        StartTestBtn = new QPushButton(MaintainceTestPage);
        StartTestBtn->setObjectName(QString::fromUtf8("StartTestBtn"));
        StartTestBtn->setGeometry(QRect(160, 360, 100, 50));
        StartTestBtn->setFocusPolicy(Qt::NoFocus);
        StartTestBtn->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	font: 20px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: white;\n"
"	background-color: rgb(0, 128, 0);\n"
"    border-top: 2px solid white;\n"
"	border-left: 2px solid white;\n"
"\n"
"}"));
        StopTestBtn = new QPushButton(MaintainceTestPage);
        StopTestBtn->setObjectName(QString::fromUtf8("StopTestBtn"));
        StopTestBtn->setGeometry(QRect(800, 360, 100, 50));
        StopTestBtn->setFocusPolicy(Qt::NoFocus);
        StopTestBtn->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	font: 20px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: white;\n"
"	background-color: rgb(0, 128, 0);\n"
"    border-top: 2px solid white;\n"
"	border-left: 2px solid white;\n"
"\n"
"}"));
        Teststatuslbl = new QLabel(MaintainceTestPage);
        Teststatuslbl->setObjectName(QString::fromUtf8("Teststatuslbl"));
        Teststatuslbl->setGeometry(QRect(290, 360, 481, 50));
        Teststatuslbl->setStyleSheet(QString::fromUtf8("background-color:yellow;\n"
"color:black;"));
        Teststatuslbl->setAlignment(Qt::AlignCenter);
        Teststatuslbl_2 = new QLabel(MaintainceTestPage);
        Teststatuslbl_2->setObjectName(QString::fromUtf8("Teststatuslbl_2"));
        Teststatuslbl_2->setGeometry(QRect(170, 430, 731, 81));
        Teststatuslbl_2->setStyleSheet(QString::fromUtf8("background-color:black; font:16px;"));
        Teststatuslbl_2->setAlignment(Qt::AlignCenter);
        lbl1_9->raise();
        lbl1_10->raise();
        label->raise();
        returnBtn->raise();
        MTempM2lbl->raise();
        MTempM1lbl->raise();
        MTempMP1lbl->raise();
        MTempMP2lbl->raise();
        lbl1->raise();
        lbl1_2->raise();
        BCPTC11lbl->raise();
        BCPTC12lbl->raise();
        BCPMP12lbl->raise();
        BCPMP11lbl->raise();
        BCPM12lbl->raise();
        BCPM11lbl->raise();
        BCPM21lbl->raise();
        BCPM22lbl->raise();
        BCPMP21lbl->raise();
        BCPMP22lbl->raise();
        BCPTC21lbl->raise();
        BCPTC22lbl->raise();
        lbl1_3->raise();
        Speedlbl->raise();
        lbl1_4->raise();
        lbl1_5->raise();
        lbl1_6->raise();
        ASpeedlbl->raise();
        lbl1_7->raise();
        levellbl->raise();
        lbl1_8->raise();
        lbl1_11->raise();
        lbl1_12->raise();
        lbl1_13->raise();
        A40Speedlbl->raise();
        lbl1_14->raise();
        A80Speedlbl->raise();
        lbl1_15->raise();
        InitSpeedlbl->raise();
        lbl1_16->raise();
        AveSpeedlbl->raise();
        lbl1_17->raise();
        BrakeDistancelbl->raise();
        lbl1_18->raise();
        Braketimelbl->raise();
        lbl1_19->raise();
        lbl1_20->raise();
        lbl1_21->raise();
        lbl1_22->raise();
        lbl1_23->raise();
        StartTestBtn->raise();
        StopTestBtn->raise();
        Teststatuslbl->raise();
        Teststatuslbl_2->raise();

        retranslateUi(MaintainceTestPage);

        QMetaObject::connectSlotsByName(MaintainceTestPage);
    } // setupUi

    void retranslateUi(QWidget *MaintainceTestPage)
    {
        MaintainceTestPage->setWindowTitle(QApplication::translate("MaintainceTestPage", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        returnBtn->setText(QApplication::translate("MaintainceTestPage", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
        MTempM2lbl->setText(QString());
        MTempM1lbl->setText(QString());
        MTempMP1lbl->setText(QString());
        MTempMP2lbl->setText(QString());
        lbl1_9->setText(QString());
        lbl1->setText(QApplication::translate("MaintainceTestPage", "\347\224\265\346\234\272\346\270\251\345\272\246", 0, QApplication::UnicodeUTF8));
        lbl1_2->setText(QApplication::translate("MaintainceTestPage", "BC\345\216\213\n"
"(Bar)", 0, QApplication::UnicodeUTF8));
        BCPTC11lbl->setText(QApplication::translate("MaintainceTestPage", "3.4", 0, QApplication::UnicodeUTF8));
        lbl1_10->setText(QString());
        BCPTC12lbl->setText(QString());
        BCPMP12lbl->setText(QString());
        BCPMP11lbl->setText(QString());
        BCPM12lbl->setText(QString());
        BCPM11lbl->setText(QString());
        BCPM21lbl->setText(QString());
        BCPM22lbl->setText(QString());
        BCPMP21lbl->setText(QString());
        BCPMP22lbl->setText(QString());
        BCPTC21lbl->setText(QString());
        BCPTC22lbl->setText(QString());
        lbl1_3->setText(QApplication::translate("MaintainceTestPage", "\351\200\237\345\272\246\351\200\211\346\213\251", 0, QApplication::UnicodeUTF8));
        Speedlbl->setText(QApplication::translate("MaintainceTestPage", "123", 0, QApplication::UnicodeUTF8));
        lbl1_4->setText(QApplication::translate("MaintainceTestPage", "km/h", 0, QApplication::UnicodeUTF8));
        lbl1_5->setText(QApplication::translate("MaintainceTestPage", "\345\212\240\351\200\237\345\272\246(+)\345\207\217\351\200\237\345\272\246(-)", 0, QApplication::UnicodeUTF8));
        lbl1_6->setText(QApplication::translate("MaintainceTestPage", "m/s\302\262", 0, QApplication::UnicodeUTF8));
        ASpeedlbl->setText(QApplication::translate("MaintainceTestPage", "99.99", 0, QApplication::UnicodeUTF8));
        lbl1_7->setText(QApplication::translate("MaintainceTestPage", "\346\223\215\344\275\234\347\272\247\344\275\215", 0, QApplication::UnicodeUTF8));
        levellbl->setText(QApplication::translate("MaintainceTestPage", "123", 0, QApplication::UnicodeUTF8));
        lbl1_8->setText(QApplication::translate("MaintainceTestPage", "\345\212\240\351\200\237\345\272\246", 0, QApplication::UnicodeUTF8));
        lbl1_11->setText(QApplication::translate("MaintainceTestPage", "\345\207\217\351\200\237\345\272\246", 0, QApplication::UnicodeUTF8));
        lbl1_12->setText(QApplication::translate("MaintainceTestPage", "0\357\274\215>40km/h", 0, QApplication::UnicodeUTF8));
        lbl1_13->setText(QApplication::translate("MaintainceTestPage", "m/s\302\262", 0, QApplication::UnicodeUTF8));
        A40Speedlbl->setText(QApplication::translate("MaintainceTestPage", "0.00", 0, QApplication::UnicodeUTF8));
        lbl1_14->setText(QApplication::translate("MaintainceTestPage", "0\357\274\215>80km/h", 0, QApplication::UnicodeUTF8));
        A80Speedlbl->setText(QApplication::translate("MaintainceTestPage", "0.00", 0, QApplication::UnicodeUTF8));
        lbl1_15->setText(QApplication::translate("MaintainceTestPage", "m/s\302\262", 0, QApplication::UnicodeUTF8));
        InitSpeedlbl->setText(QApplication::translate("MaintainceTestPage", "0.00", 0, QApplication::UnicodeUTF8));
        lbl1_16->setText(QApplication::translate("MaintainceTestPage", "km/h", 0, QApplication::UnicodeUTF8));
        AveSpeedlbl->setText(QApplication::translate("MaintainceTestPage", "0.00", 0, QApplication::UnicodeUTF8));
        lbl1_17->setText(QApplication::translate("MaintainceTestPage", "m/s\302\262", 0, QApplication::UnicodeUTF8));
        BrakeDistancelbl->setText(QApplication::translate("MaintainceTestPage", "0.00", 0, QApplication::UnicodeUTF8));
        lbl1_18->setText(QApplication::translate("MaintainceTestPage", "m", 0, QApplication::UnicodeUTF8));
        Braketimelbl->setText(QApplication::translate("MaintainceTestPage", "0.00", 0, QApplication::UnicodeUTF8));
        lbl1_19->setText(QApplication::translate("MaintainceTestPage", "s", 0, QApplication::UnicodeUTF8));
        lbl1_20->setText(QApplication::translate("MaintainceTestPage", "\350\265\267\345\247\213\351\200\237\345\272\246", 0, QApplication::UnicodeUTF8));
        lbl1_21->setText(QApplication::translate("MaintainceTestPage", "\345\271\263\345\235\207\345\207\217\351\200\237\345\272\246", 0, QApplication::UnicodeUTF8));
        lbl1_22->setText(QApplication::translate("MaintainceTestPage", "\345\210\266\345\212\250\350\267\235\347\246\273", 0, QApplication::UnicodeUTF8));
        lbl1_23->setText(QApplication::translate("MaintainceTestPage", "\345\210\266\345\212\250\346\227\266\351\227\264", 0, QApplication::UnicodeUTF8));
        StartTestBtn->setText(QApplication::translate("MaintainceTestPage", "\345\274\200\345\247\213\346\265\213\350\257\225", 0, QApplication::UnicodeUTF8));
        StopTestBtn->setText(QApplication::translate("MaintainceTestPage", "\347\273\223\346\235\237\346\265\213\350\257\225", 0, QApplication::UnicodeUTF8));
        Teststatuslbl->setText(QApplication::translate("MaintainceTestPage", "\346\265\213\350\257\225\346\234\252\350\277\233\350\241\214", 0, QApplication::UnicodeUTF8));
        Teststatuslbl_2->setText(QApplication::translate("MaintainceTestPage", "\345\210\227\350\275\246\351\235\231\346\255\242\346\227\266\357\274\214\347\202\271\345\207\273\342\200\234\345\274\200\345\247\213\346\265\213\350\257\225\342\200\235\346\214\211\351\222\256\345\220\216\357\274\214\346\230\276\347\244\272\345\261\217\346\230\276\347\244\272\342\200\234\346\265\213\350\257\225\350\277\233\350\241\214\344\270\255\342\200\235\343\200\202\n"
"\345\217\270\346\216\247\345\231\250\346\211\213\346\237\204\346\216\250\350\207\263\347\211\265\345\274\225\345\220\216\357\274\214\350\277\233\350\241\214\345\212\240\351\200\237\345\272\246\346\265\213\350\257\225\343\200\202\345\210\227\350\275\246\351\200\237\345\272\246\345\244\247\344\272\216\351\233\266\345\220\216\357\274\214\346\211\213\346\237\204\346\216\250\350\207\263\345\210\266\345\212\250\344\275\215\347\275\256\357\274\214\350\277\233\350\241\214\345\207\217\351\200\237\345\272\246\346\265\213\350\257\225\343\200\202\n"
"\346\265\213\350\257\225\347\273\223\346\235\237\345\220\216\357\274\214\347\202\271\345\207\273\342\200"
                        "\234\346\265\213\350\257\225\347\273\223\346\235\237\342\200\235\346\214\211\351\222\256\343\200\202", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MaintainceTestPage: public Ui_MaintainceTestPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINTAINCETESTPAGE_H
