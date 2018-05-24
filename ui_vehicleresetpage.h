/********************************************************************************
** Form generated from reading UI file 'vehicleresetpage.ui'
**
** Created: Thu Apr 19 11:15:44 2018
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VEHICLERESETPAGE_H
#define UI_VEHICLERESETPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VehicleResetPage
{
public:
    QLabel *EBStateMP2lbl;
    QLabel *EBStateMP1lbl;
    QLabel *TrainNumM1lbl;
    QLabel *ACMStateM2lbl;
    QLabel *label;
    QLabel *DirectTC1lbl;
    QPushButton *returnBtn;
    QLabel *TrainNumMP2lbl;
    QLabel *TrainNumTC2lbl;
    QLabel *EBStateM1lbl;
    QLabel *TrainNumMP1lbl;
    QLabel *label_2;
    QLabel *DirectTC2lbl;
    QLabel *CabTC1lbl;
    QLabel *TrainNumTC1lbl;
    QLabel *ACMStateTC1lbl;
    QLabel *ACMStateM1lbl;
    QLabel *label_3;
    QLabel *ACMStateTC2lbl;
    QLabel *TrainNumM2lbl;
    QLabel *EBStateM2lbl;
    QLabel *CabTC2lbl;
    QPushButton *VVVFMP1Btn;
    QPushButton *VVVFMP2Btn;
    QPushButton *VVVFM1Btn;
    QPushButton *VVVFM2Btn;
    QPushButton *ACMRESETTC1Btn;
    QPushButton *ACMRESETM1Btn;
    QPushButton *ACMRESETTC2Btn;
    QPushButton *ACMRESETM2Btn;

    void setupUi(QWidget *VehicleResetPage)
    {
        if (VehicleResetPage->objectName().isEmpty())
            VehicleResetPage->setObjectName(QString::fromUtf8("VehicleResetPage"));
        VehicleResetPage->resize(1024, 686);
        VehicleResetPage->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"	background-color:black;\n"
"}\n"
"QLabel\n"
"{\n"
"font:24px  \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color:black;\n"
"border:2px solid white;\n"
"background-color:rgb(255,255,153);\n"
"}\n"
"QPushButton\n"
"{\n"
"	border-radius:8px;\n"
"font: 20px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";color: white;background-color: rgb(0, 128, 128);border-top: 2px solid white;border-left: 2px solid white;\n"
"}"));
        EBStateMP2lbl = new QLabel(VehicleResetPage);
        EBStateMP2lbl->setObjectName(QString::fromUtf8("EBStateMP2lbl"));
        EBStateMP2lbl->setGeometry(QRect(645, 150, 91, 51));
        EBStateMP2lbl->setStyleSheet(QString::fromUtf8("color:white;\n"
"background-color:green;\n"
"border-left:3px solid white;\n"
"border-top:3px solid white;\n"
"\n"
"\n"
""));
        EBStateMP2lbl->setAlignment(Qt::AlignCenter);
        EBStateMP1lbl = new QLabel(VehicleResetPage);
        EBStateMP1lbl->setObjectName(QString::fromUtf8("EBStateMP1lbl"));
        EBStateMP1lbl->setGeometry(QRect(300, 150, 91, 51));
        EBStateMP1lbl->setStyleSheet(QString::fromUtf8("color:white;\n"
"background-color:RED;\n"
"border-left:3px solid white;\n"
"border-top:3px solid white;\n"
"\n"
"\n"
""));
        EBStateMP1lbl->setAlignment(Qt::AlignCenter);
        TrainNumM1lbl = new QLabel(VehicleResetPage);
        TrainNumM1lbl->setObjectName(QString::fromUtf8("TrainNumM1lbl"));
        TrainNumM1lbl->setGeometry(QRect(406, 140, 111, 321));
        TrainNumM1lbl->setStyleSheet(QString::fromUtf8("border-color: rgb(255,255,153);\n"
""));
        TrainNumM1lbl->setAlignment(Qt::AlignCenter);
        ACMStateM2lbl = new QLabel(VehicleResetPage);
        ACMStateM2lbl->setObjectName(QString::fromUtf8("ACMStateM2lbl"));
        ACMStateM2lbl->setGeometry(QRect(530, 400, 91, 51));
        ACMStateM2lbl->setStyleSheet(QString::fromUtf8("color:white;\n"
"background-color:green;\n"
"border-left:3px solid white;\n"
"border-top:3px solid white;\n"
"\n"
"\n"
""));
        ACMStateM2lbl->setAlignment(Qt::AlignCenter);
        label = new QLabel(VehicleResetPage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(3, 611, 1018, 72));
        label->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(0, 0, 0);\n"
"\n"
"	border:1px solid white;\n"
""));
        DirectTC1lbl = new QLabel(VehicleResetPage);
        DirectTC1lbl->setObjectName(QString::fromUtf8("DirectTC1lbl"));
        DirectTC1lbl->setGeometry(QRect(90, 280, 51, 51));
        DirectTC1lbl->setStyleSheet(QString::fromUtf8("border-image: url(:/images/images/TC1traingraphDirection.bmp);"));
        returnBtn = new QPushButton(VehicleResetPage);
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
        TrainNumMP2lbl = new QLabel(VehicleResetPage);
        TrainNumMP2lbl->setObjectName(QString::fromUtf8("TrainNumMP2lbl"));
        TrainNumMP2lbl->setGeometry(QRect(630, 140, 111, 321));
        TrainNumMP2lbl->setStyleSheet(QString::fromUtf8("border-color: rgb(255,255,153);\n"
""));
        TrainNumMP2lbl->setAlignment(Qt::AlignCenter);
        TrainNumTC2lbl = new QLabel(VehicleResetPage);
        TrainNumTC2lbl->setObjectName(QString::fromUtf8("TrainNumTC2lbl"));
        TrainNumTC2lbl->setGeometry(QRect(742, 140, 111, 321));
        TrainNumTC2lbl->setStyleSheet(QString::fromUtf8("border-color: rgb(255,255,153);\n"
"\n"
""));
        TrainNumTC2lbl->setAlignment(Qt::AlignCenter);
        EBStateM1lbl = new QLabel(VehicleResetPage);
        EBStateM1lbl->setObjectName(QString::fromUtf8("EBStateM1lbl"));
        EBStateM1lbl->setGeometry(QRect(415, 150, 91, 51));
        EBStateM1lbl->setStyleSheet(QString::fromUtf8("color:white;\n"
"background-color:green;\n"
"border-left:3px solid white;\n"
"border-top:3px solid white;\n"
"\n"
"\n"
""));
        EBStateM1lbl->setAlignment(Qt::AlignCenter);
        TrainNumMP1lbl = new QLabel(VehicleResetPage);
        TrainNumMP1lbl->setObjectName(QString::fromUtf8("TrainNumMP1lbl"));
        TrainNumMP1lbl->setGeometry(QRect(294, 140, 111, 321));
        TrainNumMP1lbl->setStyleSheet(QString::fromUtf8("border-color: rgb(255,255,153);\n"
"\n"
""));
        TrainNumMP1lbl->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(VehicleResetPage);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 61, 841, 61));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"border:1px solid white;\n"
"border-radius:15px;\n"
"color:white;"));
        DirectTC2lbl = new QLabel(VehicleResetPage);
        DirectTC2lbl->setObjectName(QString::fromUtf8("DirectTC2lbl"));
        DirectTC2lbl->setGeometry(QRect(890, 280, 51, 51));
        DirectTC2lbl->setStyleSheet(QString::fromUtf8("\n"
"border-image: url(:/images/images/TC2traingraphDirection.bmp);"));
        CabTC1lbl = new QLabel(VehicleResetPage);
        CabTC1lbl->setObjectName(QString::fromUtf8("CabTC1lbl"));
        CabTC1lbl->setGeometry(QRect(150, 140, 31, 321));
        CabTC1lbl->setStyleSheet(QString::fromUtf8("border-image: url(:/images/images/TC1traingraphKeynoact.bmp);"));
        TrainNumTC1lbl = new QLabel(VehicleResetPage);
        TrainNumTC1lbl->setObjectName(QString::fromUtf8("TrainNumTC1lbl"));
        TrainNumTC1lbl->setGeometry(QRect(182, 140, 111, 321));
        TrainNumTC1lbl->setStyleSheet(QString::fromUtf8("border-color: rgb(255,255,153);\n"
"\n"
"\n"
""));
        TrainNumTC1lbl->setAlignment(Qt::AlignCenter);
        ACMStateTC1lbl = new QLabel(VehicleResetPage);
        ACMStateTC1lbl->setObjectName(QString::fromUtf8("ACMStateTC1lbl"));
        ACMStateTC1lbl->setGeometry(QRect(190, 400, 91, 51));
        ACMStateTC1lbl->setStyleSheet(QString::fromUtf8("color:white;\n"
"background-color:green;\n"
"border-left:3px solid white;\n"
"border-top:3px solid white;\n"
"\n"
"\n"
""));
        ACMStateTC1lbl->setAlignment(Qt::AlignCenter);
        ACMStateM1lbl = new QLabel(VehicleResetPage);
        ACMStateM1lbl->setObjectName(QString::fromUtf8("ACMStateM1lbl"));
        ACMStateM1lbl->setGeometry(QRect(420, 400, 91, 51));
        ACMStateM1lbl->setStyleSheet(QString::fromUtf8("color:white;\n"
"background-color:green;\n"
"border-left:3px solid white;\n"
"border-top:3px solid white;\n"
"\n"
"\n"
""));
        ACMStateM1lbl->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(VehicleResetPage);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(50, 480, 841, 61));
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"border:1px solid white;\n"
"border-radius:15px;\n"
"color:white;"));
        ACMStateTC2lbl = new QLabel(VehicleResetPage);
        ACMStateTC2lbl->setObjectName(QString::fromUtf8("ACMStateTC2lbl"));
        ACMStateTC2lbl->setGeometry(QRect(750, 400, 91, 51));
        ACMStateTC2lbl->setStyleSheet(QString::fromUtf8("color:white;\n"
"background-color:green;\n"
"border-left:3px solid white;\n"
"border-top:3px solid white;\n"
"\n"
"\n"
""));
        ACMStateTC2lbl->setAlignment(Qt::AlignCenter);
        TrainNumM2lbl = new QLabel(VehicleResetPage);
        TrainNumM2lbl->setObjectName(QString::fromUtf8("TrainNumM2lbl"));
        TrainNumM2lbl->setGeometry(QRect(518, 140, 111, 321));
        TrainNumM2lbl->setStyleSheet(QString::fromUtf8("border-color: rgb(255,255,153);\n"
""));
        TrainNumM2lbl->setAlignment(Qt::AlignCenter);
        EBStateM2lbl = new QLabel(VehicleResetPage);
        EBStateM2lbl->setObjectName(QString::fromUtf8("EBStateM2lbl"));
        EBStateM2lbl->setGeometry(QRect(530, 150, 91, 51));
        EBStateM2lbl->setStyleSheet(QString::fromUtf8("color:white;\n"
"background-color:green;\n"
"border-left:3px solid white;\n"
"border-top:3px solid white;\n"
"\n"
"\n"
""));
        EBStateM2lbl->setAlignment(Qt::AlignCenter);
        CabTC2lbl = new QLabel(VehicleResetPage);
        CabTC2lbl->setObjectName(QString::fromUtf8("CabTC2lbl"));
        CabTC2lbl->setGeometry(QRect(854, 140, 31, 321));
        CabTC2lbl->setStyleSheet(QString::fromUtf8("border-image: url(:/images/images/TC2traingraphKeyact.bmp);\n"
""));
        VVVFMP1Btn = new QPushButton(VehicleResetPage);
        VVVFMP1Btn->setObjectName(QString::fromUtf8("VVVFMP1Btn"));
        VVVFMP1Btn->setGeometry(QRect(310, 70, 91, 41));
        VVVFMP1Btn->setFocusPolicy(Qt::NoFocus);
        VVVFMP1Btn->setStyleSheet(QString::fromUtf8(""));
        VVVFMP2Btn = new QPushButton(VehicleResetPage);
        VVVFMP2Btn->setObjectName(QString::fromUtf8("VVVFMP2Btn"));
        VVVFMP2Btn->setGeometry(QRect(640, 70, 91, 41));
        VVVFMP2Btn->setFocusPolicy(Qt::NoFocus);
        VVVFM1Btn = new QPushButton(VehicleResetPage);
        VVVFM1Btn->setObjectName(QString::fromUtf8("VVVFM1Btn"));
        VVVFM1Btn->setGeometry(QRect(420, 70, 91, 41));
        VVVFM1Btn->setFocusPolicy(Qt::NoFocus);
        VVVFM2Btn = new QPushButton(VehicleResetPage);
        VVVFM2Btn->setObjectName(QString::fromUtf8("VVVFM2Btn"));
        VVVFM2Btn->setGeometry(QRect(530, 70, 91, 41));
        VVVFM2Btn->setFocusPolicy(Qt::NoFocus);
        ACMRESETTC1Btn = new QPushButton(VehicleResetPage);
        ACMRESETTC1Btn->setObjectName(QString::fromUtf8("ACMRESETTC1Btn"));
        ACMRESETTC1Btn->setGeometry(QRect(190, 490, 91, 41));
        ACMRESETTC1Btn->setFocusPolicy(Qt::NoFocus);
        ACMRESETM1Btn = new QPushButton(VehicleResetPage);
        ACMRESETM1Btn->setObjectName(QString::fromUtf8("ACMRESETM1Btn"));
        ACMRESETM1Btn->setGeometry(QRect(420, 490, 91, 41));
        ACMRESETM1Btn->setFocusPolicy(Qt::NoFocus);
        ACMRESETTC2Btn = new QPushButton(VehicleResetPage);
        ACMRESETTC2Btn->setObjectName(QString::fromUtf8("ACMRESETTC2Btn"));
        ACMRESETTC2Btn->setGeometry(QRect(750, 490, 91, 41));
        ACMRESETTC2Btn->setFocusPolicy(Qt::NoFocus);
        ACMRESETM2Btn = new QPushButton(VehicleResetPage);
        ACMRESETM2Btn->setObjectName(QString::fromUtf8("ACMRESETM2Btn"));
        ACMRESETM2Btn->setGeometry(QRect(530, 490, 91, 41));
        ACMRESETM2Btn->setFocusPolicy(Qt::NoFocus);
        TrainNumM1lbl->raise();
        label->raise();
        DirectTC1lbl->raise();
        returnBtn->raise();
        TrainNumMP2lbl->raise();
        TrainNumTC2lbl->raise();
        TrainNumMP1lbl->raise();
        label_2->raise();
        DirectTC2lbl->raise();
        CabTC1lbl->raise();
        TrainNumTC1lbl->raise();
        label_3->raise();
        TrainNumM2lbl->raise();
        CabTC2lbl->raise();
        VVVFMP1Btn->raise();
        VVVFMP2Btn->raise();
        VVVFM1Btn->raise();
        VVVFM2Btn->raise();
        ACMRESETTC1Btn->raise();
        ACMRESETM1Btn->raise();
        ACMRESETTC2Btn->raise();
        ACMRESETM2Btn->raise();
        ACMStateM2lbl->raise();
        EBStateM1lbl->raise();
        EBStateMP2lbl->raise();
        ACMStateTC2lbl->raise();
        EBStateMP1lbl->raise();
        ACMStateTC1lbl->raise();
        ACMStateM1lbl->raise();
        EBStateM2lbl->raise();

        retranslateUi(VehicleResetPage);

        QMetaObject::connectSlotsByName(VehicleResetPage);
    } // setupUi

    void retranslateUi(QWidget *VehicleResetPage)
    {
        VehicleResetPage->setWindowTitle(QApplication::translate("VehicleResetPage", "Form", 0, QApplication::UnicodeUTF8));
        EBStateMP2lbl->setText(QApplication::translate("VehicleResetPage", "DCU", 0, QApplication::UnicodeUTF8));
        EBStateMP1lbl->setText(QApplication::translate("VehicleResetPage", "DCU", 0, QApplication::UnicodeUTF8));
        TrainNumM1lbl->setText(QApplication::translate("VehicleResetPage", "09013", 0, QApplication::UnicodeUTF8));
        ACMStateM2lbl->setText(QApplication::translate("VehicleResetPage", "ACM", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        DirectTC1lbl->setText(QString());
        returnBtn->setText(QApplication::translate("VehicleResetPage", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
        TrainNumMP2lbl->setText(QApplication::translate("VehicleResetPage", "09015", 0, QApplication::UnicodeUTF8));
        TrainNumTC2lbl->setText(QApplication::translate("VehicleResetPage", "09016", 0, QApplication::UnicodeUTF8));
        EBStateM1lbl->setText(QApplication::translate("VehicleResetPage", "DCU", 0, QApplication::UnicodeUTF8));
        TrainNumMP1lbl->setText(QApplication::translate("VehicleResetPage", "09012", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("VehicleResetPage", "DCU\345\244\215\344\275\215", 0, QApplication::UnicodeUTF8));
        DirectTC2lbl->setText(QString());
        CabTC1lbl->setText(QString());
        TrainNumTC1lbl->setText(QApplication::translate("VehicleResetPage", "09011", 0, QApplication::UnicodeUTF8));
        ACMStateTC1lbl->setText(QApplication::translate("VehicleResetPage", "ACM", 0, QApplication::UnicodeUTF8));
        ACMStateM1lbl->setText(QApplication::translate("VehicleResetPage", "ACM", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("VehicleResetPage", " ACM\345\244\215\344\275\215", 0, QApplication::UnicodeUTF8));
        ACMStateTC2lbl->setText(QApplication::translate("VehicleResetPage", "ACM", 0, QApplication::UnicodeUTF8));
        TrainNumM2lbl->setText(QApplication::translate("VehicleResetPage", "09014", 0, QApplication::UnicodeUTF8));
        EBStateM2lbl->setText(QApplication::translate("VehicleResetPage", "DCU", 0, QApplication::UnicodeUTF8));
        CabTC2lbl->setText(QString());
        VVVFMP1Btn->setText(QApplication::translate("VehicleResetPage", "\345\244\215\344\275\215", 0, QApplication::UnicodeUTF8));
        VVVFMP2Btn->setText(QApplication::translate("VehicleResetPage", "\345\244\215\344\275\215", 0, QApplication::UnicodeUTF8));
        VVVFM1Btn->setText(QApplication::translate("VehicleResetPage", "\345\244\215\344\275\215", 0, QApplication::UnicodeUTF8));
        VVVFM2Btn->setText(QApplication::translate("VehicleResetPage", "\345\244\215\344\275\215", 0, QApplication::UnicodeUTF8));
        ACMRESETTC1Btn->setText(QApplication::translate("VehicleResetPage", "\345\244\215\344\275\215", 0, QApplication::UnicodeUTF8));
        ACMRESETM1Btn->setText(QApplication::translate("VehicleResetPage", "\345\244\215\344\275\215", 0, QApplication::UnicodeUTF8));
        ACMRESETTC2Btn->setText(QApplication::translate("VehicleResetPage", "\345\244\215\344\275\215", 0, QApplication::UnicodeUTF8));
        ACMRESETM2Btn->setText(QApplication::translate("VehicleResetPage", "\345\244\215\344\275\215", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class VehicleResetPage: public Ui_VehicleResetPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VEHICLERESETPAGE_H
