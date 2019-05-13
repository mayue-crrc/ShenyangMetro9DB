/********************************************************************************
** Form generated from reading UI file 'vehiclecurrentfaultpage.ui'
**
** Created: Mon May 13 10:17:24 2019
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VEHICLECURRENTFAULTPAGE_H
#define UI_VEHICLECURRENTFAULTPAGE_H

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

class Ui_VehicleCurrentFaultPage
{
public:
    QLabel *lbl1_13;
    QPushButton *PrePageBtn;
    QPushButton *NextPageBtn;
    QLabel *lbl1_14;
    QLabel *lbl1_15;
    QLabel *lbl1_16;
    QLabel *lbl1_17;
    QLabel *lbl1_18;
    QLabel *lbl1_20;
    QLabel *metroCode_row1;
    QLabel *faultCode_row1;
    QLabel *faultLevel_row1;
    QLabel *faultName_row1;
    QLabel *faultName_row2;
    QLabel *metroCode_row1_2;
    QLabel *faultLevel_row2;
    QLabel *faultCode_row2;
    QLabel *faultName_row3;
    QLabel *metroCode_row1_3;
    QLabel *faultLevel_row3;
    QLabel *faultCode_row3;
    QLabel *faultName_row4;
    QLabel *metroCode_row1_4;
    QLabel *faultLevel_row4;
    QLabel *faultCode_row4;
    QLabel *faultName_row5;
    QLabel *metroCode_row1_5;
    QLabel *faultLevel_row5;
    QLabel *faultCode_row5;
    QLabel *faultName_row6;
    QLabel *metroCode_row1_6;
    QLabel *faultLevel_row6;
    QLabel *faultCode_row6;
    QLabel *faultName_row7;
    QLabel *metroCode_row1_7;
    QLabel *faultLevel_row7;
    QLabel *faultCode_row7;
    QLabel *faultName_row8;
    QLabel *metroCode_row1_8;
    QLabel *faultLevel_row8;
    QLabel *faultCode_row8;
    QLabel *faultName_row9;
    QLabel *metroCode_row1_9;
    QLabel *faultLevel_row9;
    QLabel *faultCode_row9;
    QLabel *faultcntlbl;
    QLabel *faultpagelbl;
    QLabel *lbl1_19;
    QLabel *tc1keylbl;
    QLabel *m2wheel2lbl;
    QLabel *tc2lbl;
    QLabel *m2wheel1lbl;
    QLabel *m1lbl;
    QLabel *mp2wheel2lbl;
    QLabel *mp1wheel2lbl;
    QLabel *tc2directionlbl;
    QLabel *m1wheel1lbl;
    QLabel *tc2wheel2lbl;
    QLabel *m2lbl;
    QLabel *mp2wheel1lbl;
    QLabel *tc1lbl;
    QLabel *tc1wheel1lbl;
    QLabel *tc2keylbl;
    QLabel *mp1wheel1lbl;
    QLabel *tc2wheel1lbl;
    QLabel *tc1wheel2lbl;
    QLabel *mp1lbl;
    QLabel *mp2lbl;
    QLabel *tc1directionlbl;
    QLabel *m1wheel2lbl;
    QLabel *faultStarttime_row2;
    QLabel *faultStarttime_row7;
    QLabel *faultStarttime_row1;
    QLabel *faultStarttime_row6;
    QLabel *faultStarttime_row4;
    QLabel *faultStarttime_row8;
    QLabel *faultStarttime_row3;
    QLabel *faultStarttime_row5;
    QLabel *faultStarttime_row9;
    QLabel *lbl1_21;
    QPushButton *BTNRow;
    QPushButton *BTNRow_2;
    QPushButton *BTNRow_3;
    QPushButton *BTNRow_4;
    QPushButton *BTNRow_5;
    QPushButton *BTNRow_6;
    QPushButton *BTNRow_7;
    QPushButton *BTNRow_8;
    QPushButton *BTNRow_9;
    QGroupBox *GROUPBOXFault;
    QLabel *Faultname;
    QLabel *lbl;
    QTextBrowser *FaultTips;
    QLabel *label;
    QPushButton *BTNClose;

    void setupUi(QWidget *VehicleCurrentFaultPage)
    {
        if (VehicleCurrentFaultPage->objectName().isEmpty())
            VehicleCurrentFaultPage->setObjectName(QString::fromUtf8("VehicleCurrentFaultPage"));
        VehicleCurrentFaultPage->resize(1024, 604);
        VehicleCurrentFaultPage->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"	background-color:black;\n"
"}\n"
"QLabel\n"
"{\n"
"background-color:black;\n"
"font:18px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(0,255,255);\n"
"border:1px solid black;\n"
"}\n"
"QPushButton\n"
"{\n"
"	font: 20px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: white;\n"
"	background-color: rgb(0, 128, 128);\n"
"	border-top: 2px solid white;	\n"
"	border-left: 2px solid white;\n"
"border-radius:8px;\n"
"}"));
        lbl1_13 = new QLabel(VehicleCurrentFaultPage);
        lbl1_13->setObjectName(QString::fromUtf8("lbl1_13"));
        lbl1_13->setGeometry(QRect(910, 390, 101, 131));
        lbl1_13->setStyleSheet(QString::fromUtf8("background-color:gray;\n"
"border-radius:10px;\n"
"font:14px;\n"
"color:yellow;\n"
"background-color:darkgray;"));
        lbl1_13->setAlignment(Qt::AlignCenter);
        PrePageBtn = new QPushButton(VehicleCurrentFaultPage);
        PrePageBtn->setObjectName(QString::fromUtf8("PrePageBtn"));
        PrePageBtn->setGeometry(QRect(920, 400, 81, 51));
        PrePageBtn->setFocusPolicy(Qt::NoFocus);
        PrePageBtn->setStyleSheet(QString::fromUtf8("font:30px;\n"
"color:black;\n"
"background-color:orange;\n"
"border-radius:8px;"));
        NextPageBtn = new QPushButton(VehicleCurrentFaultPage);
        NextPageBtn->setObjectName(QString::fromUtf8("NextPageBtn"));
        NextPageBtn->setGeometry(QRect(920, 460, 81, 51));
        NextPageBtn->setFocusPolicy(Qt::NoFocus);
        NextPageBtn->setStyleSheet(QString::fromUtf8("font:30px;\n"
"color:black;\n"
"background-color:orange;\n"
"border-radius:8px;"));
        lbl1_14 = new QLabel(VehicleCurrentFaultPage);
        lbl1_14->setObjectName(QString::fromUtf8("lbl1_14"));
        lbl1_14->setGeometry(QRect(20, 110, 881, 481));
        lbl1_14->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"border-radius:10px;\n"
"font:14px;\n"
"color:white;\n"
"border:2px solid white;"));
        lbl1_14->setAlignment(Qt::AlignCenter);
        lbl1_15 = new QLabel(VehicleCurrentFaultPage);
        lbl1_15->setObjectName(QString::fromUtf8("lbl1_15"));
        lbl1_15->setGeometry(QRect(20, 540, 881, 51));
        lbl1_15->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"border-radius:10px;\n"
"font:14px;\n"
"color:white;\n"
"border:2px solid white;"));
        lbl1_15->setAlignment(Qt::AlignCenter);
        lbl1_16 = new QLabel(VehicleCurrentFaultPage);
        lbl1_16->setObjectName(QString::fromUtf8("lbl1_16"));
        lbl1_16->setGeometry(QRect(40, 120, 61, 51));
        lbl1_16->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"font:18px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color:white;\n"
""));
        lbl1_16->setAlignment(Qt::AlignCenter);
        lbl1_17 = new QLabel(VehicleCurrentFaultPage);
        lbl1_17->setObjectName(QString::fromUtf8("lbl1_17"));
        lbl1_17->setGeometry(QRect(115, 120, 61, 51));
        lbl1_17->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"font:18px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color:white;\n"
""));
        lbl1_17->setAlignment(Qt::AlignCenter);
        lbl1_18 = new QLabel(VehicleCurrentFaultPage);
        lbl1_18->setObjectName(QString::fromUtf8("lbl1_18"));
        lbl1_18->setGeometry(QRect(205, 120, 51, 51));
        lbl1_18->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"font:18px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color:white;\n"
""));
        lbl1_18->setAlignment(Qt::AlignCenter);
        lbl1_20 = new QLabel(VehicleCurrentFaultPage);
        lbl1_20->setObjectName(QString::fromUtf8("lbl1_20"));
        lbl1_20->setGeometry(QRect(270, 120, 400, 51));
        lbl1_20->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"font:18px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color:white;\n"
""));
        lbl1_20->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        metroCode_row1 = new QLabel(VehicleCurrentFaultPage);
        metroCode_row1->setObjectName(QString::fromUtf8("metroCode_row1"));
        metroCode_row1->setGeometry(QRect(35, 170, 70, 41));
        metroCode_row1->setStyleSheet(QString::fromUtf8(""));
        metroCode_row1->setAlignment(Qt::AlignCenter);
        faultCode_row1 = new QLabel(VehicleCurrentFaultPage);
        faultCode_row1->setObjectName(QString::fromUtf8("faultCode_row1"));
        faultCode_row1->setGeometry(QRect(110, 170, 71, 41));
        faultCode_row1->setStyleSheet(QString::fromUtf8(""));
        faultCode_row1->setAlignment(Qt::AlignCenter);
        faultLevel_row1 = new QLabel(VehicleCurrentFaultPage);
        faultLevel_row1->setObjectName(QString::fromUtf8("faultLevel_row1"));
        faultLevel_row1->setGeometry(QRect(200, 170, 61, 41));
        faultLevel_row1->setStyleSheet(QString::fromUtf8(""));
        faultLevel_row1->setAlignment(Qt::AlignCenter);
        faultName_row1 = new QLabel(VehicleCurrentFaultPage);
        faultName_row1->setObjectName(QString::fromUtf8("faultName_row1"));
        faultName_row1->setGeometry(QRect(270, 170, 350, 41));
        faultName_row1->setStyleSheet(QString::fromUtf8(""));
        faultName_row1->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        faultName_row2 = new QLabel(VehicleCurrentFaultPage);
        faultName_row2->setObjectName(QString::fromUtf8("faultName_row2"));
        faultName_row2->setGeometry(QRect(270, 210, 350, 41));
        faultName_row2->setStyleSheet(QString::fromUtf8(""));
        faultName_row2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        metroCode_row1_2 = new QLabel(VehicleCurrentFaultPage);
        metroCode_row1_2->setObjectName(QString::fromUtf8("metroCode_row1_2"));
        metroCode_row1_2->setGeometry(QRect(35, 210, 70, 41));
        metroCode_row1_2->setStyleSheet(QString::fromUtf8(""));
        metroCode_row1_2->setAlignment(Qt::AlignCenter);
        faultLevel_row2 = new QLabel(VehicleCurrentFaultPage);
        faultLevel_row2->setObjectName(QString::fromUtf8("faultLevel_row2"));
        faultLevel_row2->setGeometry(QRect(200, 210, 61, 41));
        faultLevel_row2->setStyleSheet(QString::fromUtf8(""));
        faultLevel_row2->setAlignment(Qt::AlignCenter);
        faultCode_row2 = new QLabel(VehicleCurrentFaultPage);
        faultCode_row2->setObjectName(QString::fromUtf8("faultCode_row2"));
        faultCode_row2->setGeometry(QRect(110, 210, 71, 41));
        faultCode_row2->setStyleSheet(QString::fromUtf8(""));
        faultCode_row2->setAlignment(Qt::AlignCenter);
        faultName_row3 = new QLabel(VehicleCurrentFaultPage);
        faultName_row3->setObjectName(QString::fromUtf8("faultName_row3"));
        faultName_row3->setGeometry(QRect(270, 250, 350, 41));
        faultName_row3->setStyleSheet(QString::fromUtf8(""));
        faultName_row3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        metroCode_row1_3 = new QLabel(VehicleCurrentFaultPage);
        metroCode_row1_3->setObjectName(QString::fromUtf8("metroCode_row1_3"));
        metroCode_row1_3->setGeometry(QRect(35, 250, 70, 41));
        metroCode_row1_3->setStyleSheet(QString::fromUtf8(""));
        metroCode_row1_3->setAlignment(Qt::AlignCenter);
        faultLevel_row3 = new QLabel(VehicleCurrentFaultPage);
        faultLevel_row3->setObjectName(QString::fromUtf8("faultLevel_row3"));
        faultLevel_row3->setGeometry(QRect(200, 250, 61, 41));
        faultLevel_row3->setStyleSheet(QString::fromUtf8(""));
        faultLevel_row3->setAlignment(Qt::AlignCenter);
        faultCode_row3 = new QLabel(VehicleCurrentFaultPage);
        faultCode_row3->setObjectName(QString::fromUtf8("faultCode_row3"));
        faultCode_row3->setGeometry(QRect(110, 250, 71, 41));
        faultCode_row3->setStyleSheet(QString::fromUtf8(""));
        faultCode_row3->setAlignment(Qt::AlignCenter);
        faultName_row4 = new QLabel(VehicleCurrentFaultPage);
        faultName_row4->setObjectName(QString::fromUtf8("faultName_row4"));
        faultName_row4->setGeometry(QRect(270, 290, 350, 41));
        faultName_row4->setStyleSheet(QString::fromUtf8(""));
        faultName_row4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        metroCode_row1_4 = new QLabel(VehicleCurrentFaultPage);
        metroCode_row1_4->setObjectName(QString::fromUtf8("metroCode_row1_4"));
        metroCode_row1_4->setGeometry(QRect(35, 290, 70, 41));
        metroCode_row1_4->setStyleSheet(QString::fromUtf8(""));
        metroCode_row1_4->setAlignment(Qt::AlignCenter);
        faultLevel_row4 = new QLabel(VehicleCurrentFaultPage);
        faultLevel_row4->setObjectName(QString::fromUtf8("faultLevel_row4"));
        faultLevel_row4->setGeometry(QRect(200, 290, 61, 41));
        faultLevel_row4->setStyleSheet(QString::fromUtf8(""));
        faultLevel_row4->setAlignment(Qt::AlignCenter);
        faultCode_row4 = new QLabel(VehicleCurrentFaultPage);
        faultCode_row4->setObjectName(QString::fromUtf8("faultCode_row4"));
        faultCode_row4->setGeometry(QRect(110, 290, 71, 41));
        faultCode_row4->setStyleSheet(QString::fromUtf8(""));
        faultCode_row4->setAlignment(Qt::AlignCenter);
        faultName_row5 = new QLabel(VehicleCurrentFaultPage);
        faultName_row5->setObjectName(QString::fromUtf8("faultName_row5"));
        faultName_row5->setGeometry(QRect(270, 330, 350, 41));
        faultName_row5->setStyleSheet(QString::fromUtf8(""));
        faultName_row5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        metroCode_row1_5 = new QLabel(VehicleCurrentFaultPage);
        metroCode_row1_5->setObjectName(QString::fromUtf8("metroCode_row1_5"));
        metroCode_row1_5->setGeometry(QRect(35, 330, 70, 41));
        metroCode_row1_5->setStyleSheet(QString::fromUtf8(""));
        metroCode_row1_5->setAlignment(Qt::AlignCenter);
        faultLevel_row5 = new QLabel(VehicleCurrentFaultPage);
        faultLevel_row5->setObjectName(QString::fromUtf8("faultLevel_row5"));
        faultLevel_row5->setGeometry(QRect(200, 330, 61, 41));
        faultLevel_row5->setStyleSheet(QString::fromUtf8(""));
        faultLevel_row5->setAlignment(Qt::AlignCenter);
        faultCode_row5 = new QLabel(VehicleCurrentFaultPage);
        faultCode_row5->setObjectName(QString::fromUtf8("faultCode_row5"));
        faultCode_row5->setGeometry(QRect(110, 330, 71, 41));
        faultCode_row5->setStyleSheet(QString::fromUtf8(""));
        faultCode_row5->setAlignment(Qt::AlignCenter);
        faultName_row6 = new QLabel(VehicleCurrentFaultPage);
        faultName_row6->setObjectName(QString::fromUtf8("faultName_row6"));
        faultName_row6->setGeometry(QRect(270, 370, 350, 41));
        faultName_row6->setStyleSheet(QString::fromUtf8(""));
        faultName_row6->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        metroCode_row1_6 = new QLabel(VehicleCurrentFaultPage);
        metroCode_row1_6->setObjectName(QString::fromUtf8("metroCode_row1_6"));
        metroCode_row1_6->setGeometry(QRect(35, 370, 70, 41));
        metroCode_row1_6->setStyleSheet(QString::fromUtf8(""));
        metroCode_row1_6->setAlignment(Qt::AlignCenter);
        faultLevel_row6 = new QLabel(VehicleCurrentFaultPage);
        faultLevel_row6->setObjectName(QString::fromUtf8("faultLevel_row6"));
        faultLevel_row6->setGeometry(QRect(200, 370, 61, 41));
        faultLevel_row6->setStyleSheet(QString::fromUtf8(""));
        faultLevel_row6->setAlignment(Qt::AlignCenter);
        faultCode_row6 = new QLabel(VehicleCurrentFaultPage);
        faultCode_row6->setObjectName(QString::fromUtf8("faultCode_row6"));
        faultCode_row6->setGeometry(QRect(110, 370, 71, 41));
        faultCode_row6->setStyleSheet(QString::fromUtf8(""));
        faultCode_row6->setAlignment(Qt::AlignCenter);
        faultName_row7 = new QLabel(VehicleCurrentFaultPage);
        faultName_row7->setObjectName(QString::fromUtf8("faultName_row7"));
        faultName_row7->setGeometry(QRect(270, 410, 350, 41));
        faultName_row7->setStyleSheet(QString::fromUtf8(""));
        faultName_row7->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        metroCode_row1_7 = new QLabel(VehicleCurrentFaultPage);
        metroCode_row1_7->setObjectName(QString::fromUtf8("metroCode_row1_7"));
        metroCode_row1_7->setGeometry(QRect(35, 410, 70, 41));
        metroCode_row1_7->setStyleSheet(QString::fromUtf8(""));
        metroCode_row1_7->setAlignment(Qt::AlignCenter);
        faultLevel_row7 = new QLabel(VehicleCurrentFaultPage);
        faultLevel_row7->setObjectName(QString::fromUtf8("faultLevel_row7"));
        faultLevel_row7->setGeometry(QRect(200, 410, 61, 41));
        faultLevel_row7->setStyleSheet(QString::fromUtf8(""));
        faultLevel_row7->setAlignment(Qt::AlignCenter);
        faultCode_row7 = new QLabel(VehicleCurrentFaultPage);
        faultCode_row7->setObjectName(QString::fromUtf8("faultCode_row7"));
        faultCode_row7->setGeometry(QRect(110, 410, 71, 41));
        faultCode_row7->setStyleSheet(QString::fromUtf8(""));
        faultCode_row7->setAlignment(Qt::AlignCenter);
        faultName_row8 = new QLabel(VehicleCurrentFaultPage);
        faultName_row8->setObjectName(QString::fromUtf8("faultName_row8"));
        faultName_row8->setGeometry(QRect(270, 450, 350, 41));
        faultName_row8->setStyleSheet(QString::fromUtf8(""));
        faultName_row8->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        metroCode_row1_8 = new QLabel(VehicleCurrentFaultPage);
        metroCode_row1_8->setObjectName(QString::fromUtf8("metroCode_row1_8"));
        metroCode_row1_8->setGeometry(QRect(35, 450, 70, 41));
        metroCode_row1_8->setStyleSheet(QString::fromUtf8(""));
        metroCode_row1_8->setAlignment(Qt::AlignCenter);
        faultLevel_row8 = new QLabel(VehicleCurrentFaultPage);
        faultLevel_row8->setObjectName(QString::fromUtf8("faultLevel_row8"));
        faultLevel_row8->setGeometry(QRect(200, 450, 61, 41));
        faultLevel_row8->setStyleSheet(QString::fromUtf8(""));
        faultLevel_row8->setAlignment(Qt::AlignCenter);
        faultCode_row8 = new QLabel(VehicleCurrentFaultPage);
        faultCode_row8->setObjectName(QString::fromUtf8("faultCode_row8"));
        faultCode_row8->setGeometry(QRect(110, 450, 71, 41));
        faultCode_row8->setStyleSheet(QString::fromUtf8(""));
        faultCode_row8->setAlignment(Qt::AlignCenter);
        faultName_row9 = new QLabel(VehicleCurrentFaultPage);
        faultName_row9->setObjectName(QString::fromUtf8("faultName_row9"));
        faultName_row9->setGeometry(QRect(270, 490, 350, 41));
        faultName_row9->setStyleSheet(QString::fromUtf8(""));
        faultName_row9->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        metroCode_row1_9 = new QLabel(VehicleCurrentFaultPage);
        metroCode_row1_9->setObjectName(QString::fromUtf8("metroCode_row1_9"));
        metroCode_row1_9->setGeometry(QRect(35, 490, 70, 41));
        metroCode_row1_9->setStyleSheet(QString::fromUtf8(""));
        metroCode_row1_9->setAlignment(Qt::AlignCenter);
        faultLevel_row9 = new QLabel(VehicleCurrentFaultPage);
        faultLevel_row9->setObjectName(QString::fromUtf8("faultLevel_row9"));
        faultLevel_row9->setGeometry(QRect(200, 490, 61, 41));
        faultLevel_row9->setStyleSheet(QString::fromUtf8(""));
        faultLevel_row9->setAlignment(Qt::AlignCenter);
        faultCode_row9 = new QLabel(VehicleCurrentFaultPage);
        faultCode_row9->setObjectName(QString::fromUtf8("faultCode_row9"));
        faultCode_row9->setGeometry(QRect(110, 490, 71, 41));
        faultCode_row9->setStyleSheet(QString::fromUtf8(""));
        faultCode_row9->setAlignment(Qt::AlignCenter);
        faultcntlbl = new QLabel(VehicleCurrentFaultPage);
        faultcntlbl->setObjectName(QString::fromUtf8("faultcntlbl"));
        faultcntlbl->setGeometry(QRect(120, 550, 160, 31));
        faultcntlbl->setStyleSheet(QString::fromUtf8("color:white\n"
""));
        faultcntlbl->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        faultpagelbl = new QLabel(VehicleCurrentFaultPage);
        faultpagelbl->setObjectName(QString::fromUtf8("faultpagelbl"));
        faultpagelbl->setGeometry(QRect(660, 550, 180, 31));
        faultpagelbl->setStyleSheet(QString::fromUtf8("color:white\n"
""));
        faultpagelbl->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lbl1_19 = new QLabel(VehicleCurrentFaultPage);
        lbl1_19->setObjectName(QString::fromUtf8("lbl1_19"));
        lbl1_19->setGeometry(QRect(840, 130, 51, 51));
        lbl1_19->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"font:18px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color:white;\n"
""));
        lbl1_19->setAlignment(Qt::AlignCenter);
        tc1keylbl = new QLabel(VehicleCurrentFaultPage);
        tc1keylbl->setObjectName(QString::fromUtf8("tc1keylbl"));
        tc1keylbl->setGeometry(QRect(180, 35, 31, 45));
        tc1keylbl->setStyleSheet(QString::fromUtf8("border-image: url(:/images/images/TC1traingraphKeynoact.bmp);"));
        tc1keylbl->setAlignment(Qt::AlignCenter);
        m2wheel2lbl = new QLabel(VehicleCurrentFaultPage);
        m2wheel2lbl->setObjectName(QString::fromUtf8("m2wheel2lbl"));
        m2wheel2lbl->setGeometry(QRect(540, 80, 14, 14));
        m2wheel2lbl->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"border-radius:7px;\n"
"border:2px solid white;"));
        m2wheel2lbl->setAlignment(Qt::AlignCenter);
        tc2lbl = new QLabel(VehicleCurrentFaultPage);
        tc2lbl->setObjectName(QString::fromUtf8("tc2lbl"));
        tc2lbl->setGeometry(QRect(726, 35, 100, 45));
        tc2lbl->setAlignment(Qt::AlignCenter);
        m2wheel1lbl = new QLabel(VehicleCurrentFaultPage);
        m2wheel1lbl->setObjectName(QString::fromUtf8("m2wheel1lbl"));
        m2wheel1lbl->setGeometry(QRect(590, 80, 14, 14));
        m2wheel1lbl->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"border-radius:7px;\n"
"border:2px solid white;"));
        m2wheel1lbl->setAlignment(Qt::AlignCenter);
        m1lbl = new QLabel(VehicleCurrentFaultPage);
        m1lbl->setObjectName(QString::fromUtf8("m1lbl"));
        m1lbl->setGeometry(QRect(417, 35, 100, 45));
        m1lbl->setAlignment(Qt::AlignCenter);
        mp2wheel2lbl = new QLabel(VehicleCurrentFaultPage);
        mp2wheel2lbl->setObjectName(QString::fromUtf8("mp2wheel2lbl"));
        mp2wheel2lbl->setGeometry(QRect(640, 80, 14, 14));
        mp2wheel2lbl->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"border-radius:7px;\n"
"border:2px solid white;"));
        mp2wheel2lbl->setAlignment(Qt::AlignCenter);
        mp1wheel2lbl = new QLabel(VehicleCurrentFaultPage);
        mp1wheel2lbl->setObjectName(QString::fromUtf8("mp1wheel2lbl"));
        mp1wheel2lbl->setGeometry(QRect(380, 80, 14, 14));
        mp1wheel2lbl->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"border-radius:7px;\n"
"border:2px solid white;"));
        mp1wheel2lbl->setAlignment(Qt::AlignCenter);
        tc2directionlbl = new QLabel(VehicleCurrentFaultPage);
        tc2directionlbl->setObjectName(QString::fromUtf8("tc2directionlbl"));
        tc2directionlbl->setGeometry(QRect(855, 35, 51, 51));
        tc2directionlbl->setStyleSheet(QString::fromUtf8("border-image: url(:/images/images/TC2traingraphDirection.bmp);"));
        tc2directionlbl->setAlignment(Qt::AlignCenter);
        m1wheel1lbl = new QLabel(VehicleCurrentFaultPage);
        m1wheel1lbl->setObjectName(QString::fromUtf8("m1wheel1lbl"));
        m1wheel1lbl->setGeometry(QRect(430, 80, 14, 14));
        m1wheel1lbl->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"border-radius:7px;\n"
"border:2px solid white;"));
        m1wheel1lbl->setAlignment(Qt::AlignCenter);
        tc2wheel2lbl = new QLabel(VehicleCurrentFaultPage);
        tc2wheel2lbl->setObjectName(QString::fromUtf8("tc2wheel2lbl"));
        tc2wheel2lbl->setGeometry(QRect(740, 80, 14, 14));
        tc2wheel2lbl->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"border-radius:7px;\n"
"border:2px solid white;"));
        tc2wheel2lbl->setAlignment(Qt::AlignCenter);
        m2lbl = new QLabel(VehicleCurrentFaultPage);
        m2lbl->setObjectName(QString::fromUtf8("m2lbl"));
        m2lbl->setGeometry(QRect(520, 35, 100, 45));
        m2lbl->setAlignment(Qt::AlignCenter);
        mp2wheel1lbl = new QLabel(VehicleCurrentFaultPage);
        mp2wheel1lbl->setObjectName(QString::fromUtf8("mp2wheel1lbl"));
        mp2wheel1lbl->setGeometry(QRect(690, 80, 14, 14));
        mp2wheel1lbl->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"border-radius:7px;\n"
"border:2px solid white;"));
        mp2wheel1lbl->setAlignment(Qt::AlignCenter);
        tc1lbl = new QLabel(VehicleCurrentFaultPage);
        tc1lbl->setObjectName(QString::fromUtf8("tc1lbl"));
        tc1lbl->setGeometry(QRect(211, 35, 100, 45));
        tc1lbl->setAlignment(Qt::AlignCenter);
        tc1wheel1lbl = new QLabel(VehicleCurrentFaultPage);
        tc1wheel1lbl->setObjectName(QString::fromUtf8("tc1wheel1lbl"));
        tc1wheel1lbl->setGeometry(QRect(230, 80, 14, 14));
        tc1wheel1lbl->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"border-radius:7px;\n"
"border:2px solid white;"));
        tc1wheel1lbl->setAlignment(Qt::AlignCenter);
        tc2keylbl = new QLabel(VehicleCurrentFaultPage);
        tc2keylbl->setObjectName(QString::fromUtf8("tc2keylbl"));
        tc2keylbl->setGeometry(QRect(825, 35, 31, 45));
        tc2keylbl->setStyleSheet(QString::fromUtf8("border-image: url(:/images/images/TC2traingraphKeynoact.bmp);"));
        tc2keylbl->setAlignment(Qt::AlignCenter);
        mp1wheel1lbl = new QLabel(VehicleCurrentFaultPage);
        mp1wheel1lbl->setObjectName(QString::fromUtf8("mp1wheel1lbl"));
        mp1wheel1lbl->setGeometry(QRect(330, 80, 14, 14));
        mp1wheel1lbl->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"border-radius:7px;\n"
"border:2px solid white;"));
        mp1wheel1lbl->setAlignment(Qt::AlignCenter);
        tc2wheel1lbl = new QLabel(VehicleCurrentFaultPage);
        tc2wheel1lbl->setObjectName(QString::fromUtf8("tc2wheel1lbl"));
        tc2wheel1lbl->setGeometry(QRect(790, 80, 14, 14));
        tc2wheel1lbl->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"border-radius:7px;\n"
"border:2px solid white;"));
        tc2wheel1lbl->setAlignment(Qt::AlignCenter);
        tc1wheel2lbl = new QLabel(VehicleCurrentFaultPage);
        tc1wheel2lbl->setObjectName(QString::fromUtf8("tc1wheel2lbl"));
        tc1wheel2lbl->setGeometry(QRect(280, 80, 14, 14));
        tc1wheel2lbl->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"border-radius:7px;\n"
"border:2px solid white;"));
        tc1wheel2lbl->setAlignment(Qt::AlignCenter);
        mp1lbl = new QLabel(VehicleCurrentFaultPage);
        mp1lbl->setObjectName(QString::fromUtf8("mp1lbl"));
        mp1lbl->setGeometry(QRect(314, 35, 100, 45));
        mp1lbl->setAlignment(Qt::AlignCenter);
        mp2lbl = new QLabel(VehicleCurrentFaultPage);
        mp2lbl->setObjectName(QString::fromUtf8("mp2lbl"));
        mp2lbl->setGeometry(QRect(623, 35, 100, 45));
        mp2lbl->setAlignment(Qt::AlignCenter);
        tc1directionlbl = new QLabel(VehicleCurrentFaultPage);
        tc1directionlbl->setObjectName(QString::fromUtf8("tc1directionlbl"));
        tc1directionlbl->setGeometry(QRect(130, 35, 51, 51));
        tc1directionlbl->setStyleSheet(QString::fromUtf8("border-image: url(:/images/images/TC1traingraphDirection.bmp);"));
        tc1directionlbl->setAlignment(Qt::AlignCenter);
        m1wheel2lbl = new QLabel(VehicleCurrentFaultPage);
        m1wheel2lbl->setObjectName(QString::fromUtf8("m1wheel2lbl"));
        m1wheel2lbl->setGeometry(QRect(480, 80, 14, 14));
        m1wheel2lbl->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"border-radius:7px;\n"
"border:2px solid white;"));
        m1wheel2lbl->setAlignment(Qt::AlignCenter);
        faultStarttime_row2 = new QLabel(VehicleCurrentFaultPage);
        faultStarttime_row2->setObjectName(QString::fromUtf8("faultStarttime_row2"));
        faultStarttime_row2->setGeometry(QRect(620, 210, 130, 41));
        faultStarttime_row2->setStyleSheet(QString::fromUtf8("font:16px;"));
        faultStarttime_row2->setAlignment(Qt::AlignCenter);
        faultStarttime_row7 = new QLabel(VehicleCurrentFaultPage);
        faultStarttime_row7->setObjectName(QString::fromUtf8("faultStarttime_row7"));
        faultStarttime_row7->setGeometry(QRect(620, 410, 130, 41));
        faultStarttime_row7->setStyleSheet(QString::fromUtf8("font:16px;"));
        faultStarttime_row7->setAlignment(Qt::AlignCenter);
        faultStarttime_row1 = new QLabel(VehicleCurrentFaultPage);
        faultStarttime_row1->setObjectName(QString::fromUtf8("faultStarttime_row1"));
        faultStarttime_row1->setGeometry(QRect(620, 170, 130, 41));
        faultStarttime_row1->setStyleSheet(QString::fromUtf8("font:16px;"));
        faultStarttime_row1->setAlignment(Qt::AlignCenter);
        faultStarttime_row6 = new QLabel(VehicleCurrentFaultPage);
        faultStarttime_row6->setObjectName(QString::fromUtf8("faultStarttime_row6"));
        faultStarttime_row6->setGeometry(QRect(620, 370, 130, 41));
        faultStarttime_row6->setStyleSheet(QString::fromUtf8("font:16px;"));
        faultStarttime_row6->setAlignment(Qt::AlignCenter);
        faultStarttime_row4 = new QLabel(VehicleCurrentFaultPage);
        faultStarttime_row4->setObjectName(QString::fromUtf8("faultStarttime_row4"));
        faultStarttime_row4->setGeometry(QRect(620, 290, 130, 41));
        faultStarttime_row4->setStyleSheet(QString::fromUtf8("font:16px;"));
        faultStarttime_row4->setAlignment(Qt::AlignCenter);
        faultStarttime_row8 = new QLabel(VehicleCurrentFaultPage);
        faultStarttime_row8->setObjectName(QString::fromUtf8("faultStarttime_row8"));
        faultStarttime_row8->setGeometry(QRect(620, 450, 130, 41));
        faultStarttime_row8->setStyleSheet(QString::fromUtf8("font:16px;"));
        faultStarttime_row8->setAlignment(Qt::AlignCenter);
        faultStarttime_row3 = new QLabel(VehicleCurrentFaultPage);
        faultStarttime_row3->setObjectName(QString::fromUtf8("faultStarttime_row3"));
        faultStarttime_row3->setGeometry(QRect(620, 250, 130, 41));
        faultStarttime_row3->setStyleSheet(QString::fromUtf8("font:16px;"));
        faultStarttime_row3->setAlignment(Qt::AlignCenter);
        faultStarttime_row5 = new QLabel(VehicleCurrentFaultPage);
        faultStarttime_row5->setObjectName(QString::fromUtf8("faultStarttime_row5"));
        faultStarttime_row5->setGeometry(QRect(620, 330, 130, 41));
        faultStarttime_row5->setStyleSheet(QString::fromUtf8("font:16px;"));
        faultStarttime_row5->setAlignment(Qt::AlignCenter);
        faultStarttime_row9 = new QLabel(VehicleCurrentFaultPage);
        faultStarttime_row9->setObjectName(QString::fromUtf8("faultStarttime_row9"));
        faultStarttime_row9->setGeometry(QRect(620, 490, 130, 41));
        faultStarttime_row9->setStyleSheet(QString::fromUtf8("font:16px;"));
        faultStarttime_row9->setAlignment(Qt::AlignCenter);
        lbl1_21 = new QLabel(VehicleCurrentFaultPage);
        lbl1_21->setObjectName(QString::fromUtf8("lbl1_21"));
        lbl1_21->setGeometry(QRect(620, 120, 130, 51));
        lbl1_21->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"font:18px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color:white;\n"
""));
        lbl1_21->setAlignment(Qt::AlignCenter);
        BTNRow = new QPushButton(VehicleCurrentFaultPage);
        BTNRow->setObjectName(QString::fromUtf8("BTNRow"));
        BTNRow->setGeometry(QRect(30, 170, 861, 41));
        BTNRow->setStyleSheet(QString::fromUtf8("background-color:transparent;	\n"
"border-top: 2px solid transparent;	\n"
"border-left: 2px solid transparent;\n"
"border-radius:8px;"));
        BTNRow_2 = new QPushButton(VehicleCurrentFaultPage);
        BTNRow_2->setObjectName(QString::fromUtf8("BTNRow_2"));
        BTNRow_2->setGeometry(QRect(30, 210, 861, 41));
        BTNRow_2->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"border-top: 2px solid transparent;	\n"
"border-left: 2px solid transparent;\n"
"border-radius:8px;"));
        BTNRow_3 = new QPushButton(VehicleCurrentFaultPage);
        BTNRow_3->setObjectName(QString::fromUtf8("BTNRow_3"));
        BTNRow_3->setGeometry(QRect(30, 250, 861, 41));
        BTNRow_3->setStyleSheet(QString::fromUtf8("background-color:transparent;border-top: 2px solid transparent;	\n"
"border-left: 2px solid transparent;\n"
"border-radius:8px;"));
        BTNRow_4 = new QPushButton(VehicleCurrentFaultPage);
        BTNRow_4->setObjectName(QString::fromUtf8("BTNRow_4"));
        BTNRow_4->setGeometry(QRect(30, 290, 861, 41));
        BTNRow_4->setStyleSheet(QString::fromUtf8("background-color:transparent;border-top: 2px solid transparent;	\n"
"border-left: 2px solid transparent;\n"
"border-radius:8px;"));
        BTNRow_5 = new QPushButton(VehicleCurrentFaultPage);
        BTNRow_5->setObjectName(QString::fromUtf8("BTNRow_5"));
        BTNRow_5->setGeometry(QRect(30, 330, 861, 41));
        BTNRow_5->setStyleSheet(QString::fromUtf8("background-color:transparent;border-top: 2px solid transparent;	\n"
"border-left: 2px solid transparent;\n"
"border-radius:8px;"));
        BTNRow_6 = new QPushButton(VehicleCurrentFaultPage);
        BTNRow_6->setObjectName(QString::fromUtf8("BTNRow_6"));
        BTNRow_6->setGeometry(QRect(30, 370, 861, 41));
        BTNRow_6->setStyleSheet(QString::fromUtf8("background-color:transparent;border-top: 2px solid transparent;	\n"
"border-left: 2px solid transparent;\n"
"border-radius:8px;"));
        BTNRow_7 = new QPushButton(VehicleCurrentFaultPage);
        BTNRow_7->setObjectName(QString::fromUtf8("BTNRow_7"));
        BTNRow_7->setGeometry(QRect(30, 410, 861, 41));
        BTNRow_7->setStyleSheet(QString::fromUtf8("background-color:transparent;border-top: 2px solid transparent;	\n"
"border-left: 2px solid transparent;\n"
"border-radius:8px;"));
        BTNRow_8 = new QPushButton(VehicleCurrentFaultPage);
        BTNRow_8->setObjectName(QString::fromUtf8("BTNRow_8"));
        BTNRow_8->setGeometry(QRect(30, 450, 861, 41));
        BTNRow_8->setStyleSheet(QString::fromUtf8("border-top: 2px solid transparent;	\n"
"border-left: 2px solid transparent;\n"
"border-radius:8px;background-color:transparent;"));
        BTNRow_9 = new QPushButton(VehicleCurrentFaultPage);
        BTNRow_9->setObjectName(QString::fromUtf8("BTNRow_9"));
        BTNRow_9->setGeometry(QRect(30, 490, 861, 41));
        BTNRow_9->setStyleSheet(QString::fromUtf8("background-color:transparent;border-top: 2px solid transparent;	\n"
"border-left: 2px solid transparent;\n"
"border-radius:8px;"));
        GROUPBOXFault = new QGroupBox(VehicleCurrentFaultPage);
        GROUPBOXFault->setObjectName(QString::fromUtf8("GROUPBOXFault"));
        GROUPBOXFault->setGeometry(QRect(212, 180, 621, 321));
        Faultname = new QLabel(GROUPBOXFault);
        Faultname->setObjectName(QString::fromUtf8("Faultname"));
        Faultname->setGeometry(QRect(40, 50, 521, 31));
        Faultname->setStyleSheet(QString::fromUtf8("color:yellow"));
        lbl = new QLabel(GROUPBOXFault);
        lbl->setObjectName(QString::fromUtf8("lbl"));
        lbl->setGeometry(QRect(0, 0, 600, 300));
        lbl->setStyleSheet(QString::fromUtf8("color:yellow;\n"
"border:2px solid white;\n"
"border-radius:8px;\n"
"background-color:transparent;"));
        FaultTips = new QTextBrowser(GROUPBOXFault);
        FaultTips->setObjectName(QString::fromUtf8("FaultTips"));
        FaultTips->setGeometry(QRect(40, 90, 521, 151));
        FaultTips->setStyleSheet(QString::fromUtf8("	    font: 18px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: white;\n"
"	background-color:black;"));
        label = new QLabel(GROUPBOXFault);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(270, 10, 91, 31));
        label->setStyleSheet(QString::fromUtf8("color:red"));
        BTNClose = new QPushButton(GROUPBOXFault);
        BTNClose->setObjectName(QString::fromUtf8("BTNClose"));
        BTNClose->setGeometry(QRect(470, 250, 98, 41));
        lbl->raise();
        FaultTips->raise();
        label->raise();
        BTNClose->raise();
        Faultname->raise();
        lbl1_13->raise();
        PrePageBtn->raise();
        NextPageBtn->raise();
        lbl1_14->raise();
        lbl1_15->raise();
        lbl1_16->raise();
        lbl1_17->raise();
        lbl1_18->raise();
        lbl1_20->raise();
        metroCode_row1->raise();
        faultCode_row1->raise();
        faultLevel_row1->raise();
        faultName_row1->raise();
        faultName_row2->raise();
        metroCode_row1_2->raise();
        faultLevel_row2->raise();
        faultCode_row2->raise();
        faultName_row3->raise();
        metroCode_row1_3->raise();
        faultLevel_row3->raise();
        faultCode_row3->raise();
        faultName_row4->raise();
        metroCode_row1_4->raise();
        faultLevel_row4->raise();
        faultCode_row4->raise();
        faultName_row5->raise();
        metroCode_row1_5->raise();
        faultLevel_row5->raise();
        faultCode_row5->raise();
        faultName_row6->raise();
        metroCode_row1_6->raise();
        faultLevel_row6->raise();
        faultCode_row6->raise();
        faultName_row7->raise();
        metroCode_row1_7->raise();
        faultLevel_row7->raise();
        faultCode_row7->raise();
        faultName_row8->raise();
        metroCode_row1_8->raise();
        faultLevel_row8->raise();
        faultCode_row8->raise();
        faultName_row9->raise();
        metroCode_row1_9->raise();
        faultLevel_row9->raise();
        faultCode_row9->raise();
        faultcntlbl->raise();
        faultpagelbl->raise();
        lbl1_19->raise();
        tc1keylbl->raise();
        m2wheel2lbl->raise();
        tc2lbl->raise();
        m2wheel1lbl->raise();
        m1lbl->raise();
        mp2wheel2lbl->raise();
        mp1wheel2lbl->raise();
        tc2directionlbl->raise();
        m1wheel1lbl->raise();
        tc2wheel2lbl->raise();
        m2lbl->raise();
        mp2wheel1lbl->raise();
        tc1lbl->raise();
        tc1wheel1lbl->raise();
        tc2keylbl->raise();
        mp1wheel1lbl->raise();
        tc2wheel1lbl->raise();
        tc1wheel2lbl->raise();
        mp1lbl->raise();
        mp2lbl->raise();
        tc1directionlbl->raise();
        m1wheel2lbl->raise();
        faultStarttime_row2->raise();
        faultStarttime_row7->raise();
        faultStarttime_row1->raise();
        faultStarttime_row6->raise();
        faultStarttime_row4->raise();
        faultStarttime_row8->raise();
        faultStarttime_row3->raise();
        faultStarttime_row5->raise();
        faultStarttime_row9->raise();
        lbl1_21->raise();
        BTNRow->raise();
        BTNRow_2->raise();
        BTNRow_3->raise();
        BTNRow_4->raise();
        BTNRow_5->raise();
        BTNRow_6->raise();
        BTNRow_7->raise();
        BTNRow_8->raise();
        BTNRow_9->raise();
        GROUPBOXFault->raise();
        lbl->raise();
        lbl->raise();

        retranslateUi(VehicleCurrentFaultPage);

        QMetaObject::connectSlotsByName(VehicleCurrentFaultPage);
    } // setupUi

    void retranslateUi(QWidget *VehicleCurrentFaultPage)
    {
        VehicleCurrentFaultPage->setWindowTitle(QApplication::translate("VehicleCurrentFaultPage", "Form", 0, QApplication::UnicodeUTF8));
        lbl1_13->setText(QString());
        PrePageBtn->setText(QApplication::translate("VehicleCurrentFaultPage", "\357\270\277", 0, QApplication::UnicodeUTF8));
        NextPageBtn->setText(QApplication::translate("VehicleCurrentFaultPage", "\357\271\200", 0, QApplication::UnicodeUTF8));
        lbl1_14->setText(QString());
        lbl1_15->setText(QString());
        lbl1_16->setText(QApplication::translate("VehicleCurrentFaultPage", "\350\275\246\345\217\267", 0, QApplication::UnicodeUTF8));
        lbl1_17->setText(QApplication::translate("VehicleCurrentFaultPage", "\344\273\243\347\240\201", 0, QApplication::UnicodeUTF8));
        lbl1_18->setText(QApplication::translate("VehicleCurrentFaultPage", "\347\255\211\347\272\247", 0, QApplication::UnicodeUTF8));
        lbl1_20->setText(QApplication::translate("VehicleCurrentFaultPage", "\346\225\205\351\232\234\345\220\215\347\247\260", 0, QApplication::UnicodeUTF8));
        metroCode_row1->setText(QString());
        faultCode_row1->setText(QString());
        faultLevel_row1->setText(QString());
        faultName_row1->setText(QString());
        faultName_row2->setText(QString());
        metroCode_row1_2->setText(QString());
        faultLevel_row2->setText(QString());
        faultCode_row2->setText(QString());
        faultName_row3->setText(QString());
        metroCode_row1_3->setText(QString());
        faultLevel_row3->setText(QString());
        faultCode_row3->setText(QString());
        faultName_row4->setText(QString());
        metroCode_row1_4->setText(QString());
        faultLevel_row4->setText(QString());
        faultCode_row4->setText(QString());
        faultName_row5->setText(QString());
        metroCode_row1_5->setText(QString());
        faultLevel_row5->setText(QString());
        faultCode_row5->setText(QString());
        faultName_row6->setText(QString());
        metroCode_row1_6->setText(QString());
        faultLevel_row6->setText(QString());
        faultCode_row6->setText(QString());
        faultName_row7->setText(QString());
        metroCode_row1_7->setText(QString());
        faultLevel_row7->setText(QString());
        faultCode_row7->setText(QString());
        faultName_row8->setText(QString());
        metroCode_row1_8->setText(QString());
        faultLevel_row8->setText(QString());
        faultCode_row8->setText(QString());
        faultName_row9->setText(QString());
        metroCode_row1_9->setText(QString());
        faultLevel_row9->setText(QString());
        faultCode_row9->setText(QString());
        faultcntlbl->setText(QApplication::translate("VehicleCurrentFaultPage", "0 \346\235\241\346\225\205\351\232\234\350\256\260\345\275\225", 0, QApplication::UnicodeUTF8));
        faultpagelbl->setText(QApplication::translate("VehicleCurrentFaultPage", "\347\254\2541\351\241\265/\345\205\2611\351\241\265", 0, QApplication::UnicodeUTF8));
        lbl1_19->setText(QString());
        tc1keylbl->setText(QString());
        m2wheel2lbl->setText(QString());
        tc2lbl->setText(QApplication::translate("VehicleCurrentFaultPage", "1006", 0, QApplication::UnicodeUTF8));
        m2wheel1lbl->setText(QString());
        m1lbl->setText(QApplication::translate("VehicleCurrentFaultPage", "1003", 0, QApplication::UnicodeUTF8));
        mp2wheel2lbl->setText(QString());
        mp1wheel2lbl->setText(QString());
        tc2directionlbl->setText(QString());
        m1wheel1lbl->setText(QString());
        tc2wheel2lbl->setText(QString());
        m2lbl->setText(QApplication::translate("VehicleCurrentFaultPage", "1004", 0, QApplication::UnicodeUTF8));
        mp2wheel1lbl->setText(QString());
        tc1lbl->setText(QApplication::translate("VehicleCurrentFaultPage", "1001", 0, QApplication::UnicodeUTF8));
        tc1wheel1lbl->setText(QString());
        tc2keylbl->setText(QString());
        mp1wheel1lbl->setText(QString());
        tc2wheel1lbl->setText(QString());
        tc1wheel2lbl->setText(QString());
        mp1lbl->setText(QApplication::translate("VehicleCurrentFaultPage", "1002", 0, QApplication::UnicodeUTF8));
        mp2lbl->setText(QApplication::translate("VehicleCurrentFaultPage", "1005", 0, QApplication::UnicodeUTF8));
        tc1directionlbl->setText(QString());
        m1wheel2lbl->setText(QString());
        faultStarttime_row2->setText(QString());
        faultStarttime_row7->setText(QString());
        faultStarttime_row1->setText(QString());
        faultStarttime_row6->setText(QString());
        faultStarttime_row4->setText(QString());
        faultStarttime_row8->setText(QString());
        faultStarttime_row3->setText(QString());
        faultStarttime_row5->setText(QString());
        faultStarttime_row9->setText(QString());
        lbl1_21->setText(QApplication::translate("VehicleCurrentFaultPage", "\345\217\221\347\224\237\346\227\266\351\227\264", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        BTNRow->setWhatsThis(QApplication::translate("VehicleCurrentFaultPage", "0", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        BTNRow->setText(QString());
#ifndef QT_NO_WHATSTHIS
        BTNRow_2->setWhatsThis(QApplication::translate("VehicleCurrentFaultPage", "1", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        BTNRow_2->setText(QString());
#ifndef QT_NO_WHATSTHIS
        BTNRow_3->setWhatsThis(QApplication::translate("VehicleCurrentFaultPage", "2", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        BTNRow_3->setText(QString());
#ifndef QT_NO_WHATSTHIS
        BTNRow_4->setWhatsThis(QApplication::translate("VehicleCurrentFaultPage", "3", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        BTNRow_4->setText(QString());
#ifndef QT_NO_WHATSTHIS
        BTNRow_5->setWhatsThis(QApplication::translate("VehicleCurrentFaultPage", "4", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        BTNRow_5->setText(QString());
#ifndef QT_NO_WHATSTHIS
        BTNRow_6->setWhatsThis(QApplication::translate("VehicleCurrentFaultPage", "5", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        BTNRow_6->setText(QString());
#ifndef QT_NO_WHATSTHIS
        BTNRow_7->setWhatsThis(QApplication::translate("VehicleCurrentFaultPage", "6", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        BTNRow_7->setText(QString());
#ifndef QT_NO_WHATSTHIS
        BTNRow_8->setWhatsThis(QApplication::translate("VehicleCurrentFaultPage", "7", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        BTNRow_8->setText(QString());
#ifndef QT_NO_WHATSTHIS
        BTNRow_9->setWhatsThis(QApplication::translate("VehicleCurrentFaultPage", "8", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        BTNRow_9->setText(QString());
        GROUPBOXFault->setTitle(QApplication::translate("VehicleCurrentFaultPage", "GroupBox", 0, QApplication::UnicodeUTF8));
        Faultname->setText(QString());
        lbl->setText(QString());
        FaultTips->setHtml(QApplication::translate("VehicleCurrentFaultPage", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
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
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("VehicleCurrentFaultPage", "\346\225\205\351\232\234\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
        BTNClose->setText(QApplication::translate("VehicleCurrentFaultPage", "\345\205\263\351\227\255", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class VehicleCurrentFaultPage: public Ui_VehicleCurrentFaultPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VEHICLECURRENTFAULTPAGE_H
