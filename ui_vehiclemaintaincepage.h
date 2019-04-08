/********************************************************************************
** Form generated from reading UI file 'vehiclemaintaincepage.ui'
**
** Created: Wed Apr 3 16:45:58 2019
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VEHICLEMAINTAINCEPAGE_H
#define UI_VEHICLEMAINTAINCEPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VehicleMaintaincePage
{
public:
    QLabel *label;
    QLabel *label2;
    QLabel *label4;
    QLabel *label3;
    QLabel *label5;
    QLabel *label6;
    QPushButton *FaultRecordBtn;
    QPushButton *APRunningTimeBtn;
    QPushButton *Consumption;
    QPushButton *DistainceBtn;
    QPushButton *TCMSVisionBtn;
    QPushButton *PortsDataBtn;
    QPushButton *RIOMIOBtn;
    QPushButton *HMICheckBtn;
    QPushButton *WheelSetBtn;
    QPushButton *SystimeSetBtn;
    QPushButton *LoadBtn;
    QLabel *label7;
    QLabel *label8;
    QPushButton *BrakeTestBtn;
    QPushButton *RuntestBtn;
    QPushButton *TCMSStateBtn;
    QPushButton *HMIInitBtn;
    QPushButton *DataManagementBtn;
    QPushButton *AllDataBtn;
    QPushButton *TrainNumBtn;
    QPushButton *TestPageBtn;

    void setupUi(QWidget *VehicleMaintaincePage)
    {
        if (VehicleMaintaincePage->objectName().isEmpty())
            VehicleMaintaincePage->setObjectName(QString::fromUtf8("VehicleMaintaincePage"));
        VehicleMaintaincePage->resize(1024, 604);
        VehicleMaintaincePage->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"	background-color: black;\n"
"}\n"
"\n"
"QPushButton\n"
"{\n"
"	font: 20px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: white;\n"
"	background-color: rgb(0, 128, 128);\n"
"	border-radius:8px;border-top: 2px solid white;	\n"
"	border-left: 2px solid white;\n"
"}"));
        label = new QLabel(VehicleMaintaincePage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(65, 10, 51, 30));
        label->setStyleSheet(QString::fromUtf8("color: white;\n"
"font: 20px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
""));
        label->setTextFormat(Qt::AutoText);
        label->setAlignment(Qt::AlignCenter);
        label2 = new QLabel(VehicleMaintaincePage);
        label2->setObjectName(QString::fromUtf8("label2"));
        label2->setGeometry(QRect(65, 50, 521, 161));
        label2->setStyleSheet(QString::fromUtf8("color: white;\n"
"border: 2px solid  white;\n"
"border-radius: 12px;\n"
""));
        label2->setTextFormat(Qt::AutoText);
        label2->setAlignment(Qt::AlignCenter);
        label4 = new QLabel(VehicleMaintaincePage);
        label4->setObjectName(QString::fromUtf8("label4"));
        label4->setGeometry(QRect(65, 270, 521, 161));
        label4->setStyleSheet(QString::fromUtf8("color: white;\n"
"border: 2px solid  white;\n"
"border-radius: 12px;\n"
""));
        label4->setTextFormat(Qt::AutoText);
        label4->setAlignment(Qt::AlignCenter);
        label3 = new QLabel(VehicleMaintaincePage);
        label3->setObjectName(QString::fromUtf8("label3"));
        label3->setGeometry(QRect(65, 230, 51, 30));
        label3->setStyleSheet(QString::fromUtf8("color: white;\n"
"font: 20px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
""));
        label3->setTextFormat(Qt::AutoText);
        label3->setAlignment(Qt::AlignCenter);
        label5 = new QLabel(VehicleMaintaincePage);
        label5->setObjectName(QString::fromUtf8("label5"));
        label5->setGeometry(QRect(65, 450, 141, 30));
        label5->setStyleSheet(QString::fromUtf8("color: white;\n"
"font: 20px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
""));
        label5->setTextFormat(Qt::AutoText);
        label5->setAlignment(Qt::AlignCenter);
        label6 = new QLabel(VehicleMaintaincePage);
        label6->setObjectName(QString::fromUtf8("label6"));
        label6->setGeometry(QRect(65, 490, 521, 80));
        label6->setStyleSheet(QString::fromUtf8("color: white;\n"
"border: 2px solid  white;\n"
"border-radius: 12px;\n"
""));
        label6->setTextFormat(Qt::AutoText);
        label6->setAlignment(Qt::AlignCenter);
        FaultRecordBtn = new QPushButton(VehicleMaintaincePage);
        FaultRecordBtn->setObjectName(QString::fromUtf8("FaultRecordBtn"));
        FaultRecordBtn->setGeometry(QRect(90, 65, 150, 60));
        FaultRecordBtn->setFocusPolicy(Qt::NoFocus);
        APRunningTimeBtn = new QPushButton(VehicleMaintaincePage);
        APRunningTimeBtn->setObjectName(QString::fromUtf8("APRunningTimeBtn"));
        APRunningTimeBtn->setGeometry(QRect(250, 65, 150, 60));
        APRunningTimeBtn->setFocusPolicy(Qt::NoFocus);
        Consumption = new QPushButton(VehicleMaintaincePage);
        Consumption->setObjectName(QString::fromUtf8("Consumption"));
        Consumption->setGeometry(QRect(410, 65, 150, 60));
        Consumption->setFocusPolicy(Qt::NoFocus);
        DistainceBtn = new QPushButton(VehicleMaintaincePage);
        DistainceBtn->setObjectName(QString::fromUtf8("DistainceBtn"));
        DistainceBtn->setGeometry(QRect(90, 135, 151, 60));
        DistainceBtn->setFocusPolicy(Qt::NoFocus);
        TCMSVisionBtn = new QPushButton(VehicleMaintaincePage);
        TCMSVisionBtn->setObjectName(QString::fromUtf8("TCMSVisionBtn"));
        TCMSVisionBtn->setGeometry(QRect(90, 285, 150, 60));
        TCMSVisionBtn->setFocusPolicy(Qt::NoFocus);
        PortsDataBtn = new QPushButton(VehicleMaintaincePage);
        PortsDataBtn->setObjectName(QString::fromUtf8("PortsDataBtn"));
        PortsDataBtn->setGeometry(QRect(410, 285, 150, 60));
        PortsDataBtn->setFocusPolicy(Qt::NoFocus);
        RIOMIOBtn = new QPushButton(VehicleMaintaincePage);
        RIOMIOBtn->setObjectName(QString::fromUtf8("RIOMIOBtn"));
        RIOMIOBtn->setGeometry(QRect(90, 360, 150, 60));
        RIOMIOBtn->setFocusPolicy(Qt::NoFocus);
        HMICheckBtn = new QPushButton(VehicleMaintaincePage);
        HMICheckBtn->setObjectName(QString::fromUtf8("HMICheckBtn"));
        HMICheckBtn->setGeometry(QRect(250, 360, 150, 60));
        HMICheckBtn->setFocusPolicy(Qt::NoFocus);
        WheelSetBtn = new QPushButton(VehicleMaintaincePage);
        WheelSetBtn->setObjectName(QString::fromUtf8("WheelSetBtn"));
        WheelSetBtn->setGeometry(QRect(90, 500, 150, 60));
        WheelSetBtn->setFocusPolicy(Qt::NoFocus);
        SystimeSetBtn = new QPushButton(VehicleMaintaincePage);
        SystimeSetBtn->setObjectName(QString::fromUtf8("SystimeSetBtn"));
        SystimeSetBtn->setGeometry(QRect(250, 500, 150, 60));
        SystimeSetBtn->setFocusPolicy(Qt::NoFocus);
        LoadBtn = new QPushButton(VehicleMaintaincePage);
        LoadBtn->setObjectName(QString::fromUtf8("LoadBtn"));
        LoadBtn->setGeometry(QRect(410, 360, 150, 60));
        LoadBtn->setFocusPolicy(Qt::NoFocus);
        label7 = new QLabel(VehicleMaintaincePage);
        label7->setObjectName(QString::fromUtf8("label7"));
        label7->setGeometry(QRect(650, 50, 211, 161));
        label7->setStyleSheet(QString::fromUtf8("color: white;\n"
"border: 2px solid  white;\n"
"border-radius: 12px;\n"
""));
        label7->setTextFormat(Qt::AutoText);
        label7->setAlignment(Qt::AlignCenter);
        label8 = new QLabel(VehicleMaintaincePage);
        label8->setObjectName(QString::fromUtf8("label8"));
        label8->setGeometry(QRect(650, 10, 51, 30));
        label8->setStyleSheet(QString::fromUtf8("color: white;\n"
"font: 20px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
""));
        label8->setTextFormat(Qt::AutoText);
        label8->setAlignment(Qt::AlignCenter);
        BrakeTestBtn = new QPushButton(VehicleMaintaincePage);
        BrakeTestBtn->setObjectName(QString::fromUtf8("BrakeTestBtn"));
        BrakeTestBtn->setGeometry(QRect(680, 65, 150, 60));
        BrakeTestBtn->setFocusPolicy(Qt::NoFocus);
        RuntestBtn = new QPushButton(VehicleMaintaincePage);
        RuntestBtn->setObjectName(QString::fromUtf8("RuntestBtn"));
        RuntestBtn->setGeometry(QRect(990, 210, 21, 21));
        RuntestBtn->setFocusPolicy(Qt::NoFocus);
        RuntestBtn->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"color:black;\n"
"border:black solid;"));
        TCMSStateBtn = new QPushButton(VehicleMaintaincePage);
        TCMSStateBtn->setObjectName(QString::fromUtf8("TCMSStateBtn"));
        TCMSStateBtn->setGeometry(QRect(250, 285, 150, 60));
        TCMSStateBtn->setFocusPolicy(Qt::NoFocus);
        HMIInitBtn = new QPushButton(VehicleMaintaincePage);
        HMIInitBtn->setObjectName(QString::fromUtf8("HMIInitBtn"));
        HMIInitBtn->setGeometry(QRect(890, 550, 100, 30));
        HMIInitBtn->setFocusPolicy(Qt::NoFocus);
        HMIInitBtn->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"color:black;\n"
"border:black solid;"));
        DataManagementBtn = new QPushButton(VehicleMaintaincePage);
        DataManagementBtn->setObjectName(QString::fromUtf8("DataManagementBtn"));
        DataManagementBtn->setGeometry(QRect(250, 135, 151, 60));
        DataManagementBtn->setFocusPolicy(Qt::NoFocus);
        AllDataBtn = new QPushButton(VehicleMaintaincePage);
        AllDataBtn->setObjectName(QString::fromUtf8("AllDataBtn"));
        AllDataBtn->setGeometry(QRect(765, 550, 100, 30));
        AllDataBtn->setFocusPolicy(Qt::NoFocus);
        AllDataBtn->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"color:black;\n"
"border:black solid;"));
        TrainNumBtn = new QPushButton(VehicleMaintaincePage);
        TrainNumBtn->setObjectName(QString::fromUtf8("TrainNumBtn"));
        TrainNumBtn->setGeometry(QRect(410, 500, 150, 60));
        TrainNumBtn->setFocusPolicy(Qt::NoFocus);
        TrainNumBtn->setStyleSheet(QString::fromUtf8(""));
        TestPageBtn = new QPushButton(VehicleMaintaincePage);
        TestPageBtn->setObjectName(QString::fromUtf8("TestPageBtn"));
        TestPageBtn->setGeometry(QRect(680, 135, 150, 60));
        TestPageBtn->setFocusPolicy(Qt::NoFocus);

        retranslateUi(VehicleMaintaincePage);

        QMetaObject::connectSlotsByName(VehicleMaintaincePage);
    } // setupUi

    void retranslateUi(QWidget *VehicleMaintaincePage)
    {
        VehicleMaintaincePage->setWindowTitle(QApplication::translate("VehicleMaintaincePage", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("VehicleMaintaincePage", "\350\256\260\345\275\225", 0, QApplication::UnicodeUTF8));
        label2->setText(QString());
        label4->setText(QString());
        label3->setText(QApplication::translate("VehicleMaintaincePage", "\346\243\200\346\237\245", 0, QApplication::UnicodeUTF8));
        label5->setText(QApplication::translate("VehicleMaintaincePage", "\345\217\202\346\225\260\350\256\276\345\256\232\345\222\214\346\243\200\346\237\245", 0, QApplication::UnicodeUTF8));
        label6->setText(QString());
        FaultRecordBtn->setText(QApplication::translate("VehicleMaintaincePage", "\346\225\205\351\232\234\350\256\260\345\275\225", 0, QApplication::UnicodeUTF8));
        APRunningTimeBtn->setText(QApplication::translate("VehicleMaintaincePage", "\347\251\272\345\216\213\346\234\272\n"
"\350\277\220\350\241\214\346\227\266\351\227\264", 0, QApplication::UnicodeUTF8));
        Consumption->setText(QApplication::translate("VehicleMaintaincePage", "\350\203\275\350\200\227", 0, QApplication::UnicodeUTF8));
        DistainceBtn->setText(QApplication::translate("VehicleMaintaincePage", "\350\241\214\351\251\266\350\267\235\347\246\273", 0, QApplication::UnicodeUTF8));
        TCMSVisionBtn->setText(QApplication::translate("VehicleMaintaincePage", "\350\275\257\344\273\266\347\211\210\346\234\254", 0, QApplication::UnicodeUTF8));
        PortsDataBtn->setText(QApplication::translate("VehicleMaintaincePage", "\344\274\240\350\276\223\346\225\260\346\215\256\346\243\200\346\237\245", 0, QApplication::UnicodeUTF8));
        RIOMIOBtn->setText(QApplication::translate("VehicleMaintaincePage", "\346\216\245\345\217\243\346\225\260\346\215\256\346\243\200\346\237\245", 0, QApplication::UnicodeUTF8));
        HMICheckBtn->setText(QApplication::translate("VehicleMaintaincePage", "\346\230\276\347\244\272\346\243\200\346\237\245", 0, QApplication::UnicodeUTF8));
        WheelSetBtn->setText(QApplication::translate("VehicleMaintaincePage", "\350\275\256\345\276\204\350\256\276\345\256\232", 0, QApplication::UnicodeUTF8));
        SystimeSetBtn->setText(QApplication::translate("VehicleMaintaincePage", "\346\227\266\351\222\237\350\256\276\345\256\232", 0, QApplication::UnicodeUTF8));
        LoadBtn->setText(QApplication::translate("VehicleMaintaincePage", "\350\275\275\350\215\267", 0, QApplication::UnicodeUTF8));
        label7->setText(QString());
        label8->setText(QApplication::translate("VehicleMaintaincePage", "\346\265\213\350\257\225", 0, QApplication::UnicodeUTF8));
        BrakeTestBtn->setText(QApplication::translate("VehicleMaintaincePage", "\345\210\266\345\212\250\350\207\252\346\243\200", 0, QApplication::UnicodeUTF8));
        RuntestBtn->setText(QApplication::translate("VehicleMaintaincePage", "\350\257\225\350\277\220\350\241\214", 0, QApplication::UnicodeUTF8));
        TCMSStateBtn->setText(QApplication::translate("VehicleMaintaincePage", "\344\274\240\350\276\223\346\243\200\346\237\245", 0, QApplication::UnicodeUTF8));
        HMIInitBtn->setText(QApplication::translate("VehicleMaintaincePage", "\345\210\235\345\247\213\350\256\276\345\256\232", 0, QApplication::UnicodeUTF8));
        DataManagementBtn->setText(QApplication::translate("VehicleMaintaincePage", "\350\256\260\345\275\225\346\225\260\346\215\256\347\256\241\347\220\206", 0, QApplication::UnicodeUTF8));
        AllDataBtn->setText(QApplication::translate("VehicleMaintaincePage", "\344\274\240\350\276\223\346\243\200\346\237\245", 0, QApplication::UnicodeUTF8));
        TrainNumBtn->setText(QApplication::translate("VehicleMaintaincePage", "\350\275\246\345\217\267\350\256\276\345\256\232", 0, QApplication::UnicodeUTF8));
        TestPageBtn->setText(QApplication::translate("VehicleMaintaincePage", "\350\257\225\350\277\220\350\241\214", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class VehicleMaintaincePage: public Ui_VehicleMaintaincePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VEHICLEMAINTAINCEPAGE_H
