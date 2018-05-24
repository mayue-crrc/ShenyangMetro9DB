/********************************************************************************
** Form generated from reading UI file 'vehiclecutoffpage.ui'
**
** Created: Thu Apr 19 11:15:44 2018
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VEHICLECUTOFFPAGE_H
#define UI_VEHICLECUTOFFPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VehicleCutoffPage
{
public:
    QLabel *label;
    QPushButton *returnBtn;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *ACMCUTTC1Btn;
    QPushButton *ACMCUTM1Btn;
    QPushButton *ACMCUTM2Btn;
    QPushButton *ACMCUTTC2Btn;
    QPushButton *EBMP1Btn;
    QPushButton *EBM1Btn;
    QPushButton *EBM2Btn;
    QPushButton *EBMP2Btn;
    QLabel *EBStateMP1lbl;
    QLabel *EBStateM1lbl;
    QLabel *EBStateM2lbl;
    QLabel *EBStateMP2lbl;
    QLabel *CabTC1lbl;
    QLabel *TrainNumTC2lbl;
    QLabel *TrainNumTC1lbl;
    QLabel *CabTC2lbl;
    QLabel *ACMStateM1lbl;
    QLabel *ACMStateTC2lbl;
    QLabel *DirectTC1lbl;
    QLabel *TrainNumM2lbl;
    QLabel *TrainNumM1lbl;
    QLabel *TrainNumMP1lbl;
    QLabel *ACMStateTC1lbl;
    QLabel *ACMStateM2lbl;
    QLabel *DirectTC2lbl;
    QLabel *TrainNumMP2lbl;

    void setupUi(QWidget *VehicleCutoffPage)
    {
        if (VehicleCutoffPage->objectName().isEmpty())
            VehicleCutoffPage->setObjectName(QString::fromUtf8("VehicleCutoffPage"));
        VehicleCutoffPage->resize(1024, 686);
        VehicleCutoffPage->setStyleSheet(QString::fromUtf8("QWidget\n"
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
"font: 20px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";color: white;background-color: rgb(0, 128, 128);border-top: 2px solid white;border-left: 2px solid white;\n"
"}"));
        label = new QLabel(VehicleCutoffPage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(3, 611, 1018, 72));
        label->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(0, 0, 0);\n"
"\n"
"	border:1px solid white;\n"
""));
        returnBtn = new QPushButton(VehicleCutoffPage);
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
"	border-radius:8px ;\n"
"}"));
        label_2 = new QLabel(VehicleCutoffPage);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 60, 841, 61));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"border:1px solid white;\n"
"border-radius:15px;\n"
"color:white;"));
        label_3 = new QLabel(VehicleCutoffPage);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(50, 481, 841, 61));
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"border:1px solid white;\n"
"border-radius:15px;\n"
"color:white;"));
        ACMCUTTC1Btn = new QPushButton(VehicleCutoffPage);
        ACMCUTTC1Btn->setObjectName(QString::fromUtf8("ACMCUTTC1Btn"));
        ACMCUTTC1Btn->setGeometry(QRect(190, 490, 91, 41));
        ACMCUTTC1Btn->setFocusPolicy(Qt::NoFocus);
        ACMCUTM1Btn = new QPushButton(VehicleCutoffPage);
        ACMCUTM1Btn->setObjectName(QString::fromUtf8("ACMCUTM1Btn"));
        ACMCUTM1Btn->setGeometry(QRect(420, 490, 91, 41));
        ACMCUTM1Btn->setFocusPolicy(Qt::NoFocus);
        ACMCUTM2Btn = new QPushButton(VehicleCutoffPage);
        ACMCUTM2Btn->setObjectName(QString::fromUtf8("ACMCUTM2Btn"));
        ACMCUTM2Btn->setGeometry(QRect(530, 490, 91, 41));
        ACMCUTM2Btn->setFocusPolicy(Qt::NoFocus);
        ACMCUTTC2Btn = new QPushButton(VehicleCutoffPage);
        ACMCUTTC2Btn->setObjectName(QString::fromUtf8("ACMCUTTC2Btn"));
        ACMCUTTC2Btn->setGeometry(QRect(750, 490, 91, 41));
        ACMCUTTC2Btn->setFocusPolicy(Qt::NoFocus);
        EBMP1Btn = new QPushButton(VehicleCutoffPage);
        EBMP1Btn->setObjectName(QString::fromUtf8("EBMP1Btn"));
        EBMP1Btn->setGeometry(QRect(300, 70, 91, 41));
        EBMP1Btn->setFocusPolicy(Qt::NoFocus);
        EBMP1Btn->setStyleSheet(QString::fromUtf8(""));
        EBM1Btn = new QPushButton(VehicleCutoffPage);
        EBM1Btn->setObjectName(QString::fromUtf8("EBM1Btn"));
        EBM1Btn->setGeometry(QRect(410, 70, 91, 41));
        EBM1Btn->setFocusPolicy(Qt::NoFocus);
        EBM2Btn = new QPushButton(VehicleCutoffPage);
        EBM2Btn->setObjectName(QString::fromUtf8("EBM2Btn"));
        EBM2Btn->setGeometry(QRect(520, 70, 91, 41));
        EBM2Btn->setFocusPolicy(Qt::NoFocus);
        EBMP2Btn = new QPushButton(VehicleCutoffPage);
        EBMP2Btn->setObjectName(QString::fromUtf8("EBMP2Btn"));
        EBMP2Btn->setGeometry(QRect(630, 70, 91, 41));
        EBMP2Btn->setFocusPolicy(Qt::NoFocus);
        EBStateMP1lbl = new QLabel(VehicleCutoffPage);
        EBStateMP1lbl->setObjectName(QString::fromUtf8("EBStateMP1lbl"));
        EBStateMP1lbl->setGeometry(QRect(295, 160, 91, 51));
        EBStateMP1lbl->setStyleSheet(QString::fromUtf8(""));
        EBStateMP1lbl->setAlignment(Qt::AlignCenter);
        EBStateM1lbl = new QLabel(VehicleCutoffPage);
        EBStateM1lbl->setObjectName(QString::fromUtf8("EBStateM1lbl"));
        EBStateM1lbl->setGeometry(QRect(405, 160, 91, 51));
        EBStateM1lbl->setStyleSheet(QString::fromUtf8(""));
        EBStateM1lbl->setAlignment(Qt::AlignCenter);
        EBStateM2lbl = new QLabel(VehicleCutoffPage);
        EBStateM2lbl->setObjectName(QString::fromUtf8("EBStateM2lbl"));
        EBStateM2lbl->setGeometry(QRect(520, 160, 91, 51));
        EBStateM2lbl->setStyleSheet(QString::fromUtf8(""));
        EBStateM2lbl->setAlignment(Qt::AlignCenter);
        EBStateMP2lbl = new QLabel(VehicleCutoffPage);
        EBStateMP2lbl->setObjectName(QString::fromUtf8("EBStateMP2lbl"));
        EBStateMP2lbl->setGeometry(QRect(630, 160, 91, 51));
        EBStateMP2lbl->setStyleSheet(QString::fromUtf8(""));
        EBStateMP2lbl->setAlignment(Qt::AlignCenter);
        CabTC1lbl = new QLabel(VehicleCutoffPage);
        CabTC1lbl->setObjectName(QString::fromUtf8("CabTC1lbl"));
        CabTC1lbl->setGeometry(QRect(140, 140, 31, 321));
        CabTC1lbl->setStyleSheet(QString::fromUtf8("border-image: url(:/images/images/TC1traingraphKeynoact.bmp);"));
        TrainNumTC2lbl = new QLabel(VehicleCutoffPage);
        TrainNumTC2lbl->setObjectName(QString::fromUtf8("TrainNumTC2lbl"));
        TrainNumTC2lbl->setGeometry(QRect(732, 140, 111, 321));
        TrainNumTC2lbl->setStyleSheet(QString::fromUtf8("border-color: rgb(255,255,153);\n"
"\n"
""));
        TrainNumTC2lbl->setAlignment(Qt::AlignCenter);
        TrainNumTC1lbl = new QLabel(VehicleCutoffPage);
        TrainNumTC1lbl->setObjectName(QString::fromUtf8("TrainNumTC1lbl"));
        TrainNumTC1lbl->setGeometry(QRect(172, 140, 111, 321));
        TrainNumTC1lbl->setStyleSheet(QString::fromUtf8("border-color: rgb(255,255,153);\n"
"\n"
"\n"
""));
        TrainNumTC1lbl->setAlignment(Qt::AlignCenter);
        CabTC2lbl = new QLabel(VehicleCutoffPage);
        CabTC2lbl->setObjectName(QString::fromUtf8("CabTC2lbl"));
        CabTC2lbl->setGeometry(QRect(844, 140, 31, 321));
        CabTC2lbl->setStyleSheet(QString::fromUtf8("border-image: url(:/images/images/TC2traingraphKeyact.bmp);\n"
""));
        ACMStateM1lbl = new QLabel(VehicleCutoffPage);
        ACMStateM1lbl->setObjectName(QString::fromUtf8("ACMStateM1lbl"));
        ACMStateM1lbl->setGeometry(QRect(410, 400, 91, 51));
        ACMStateM1lbl->setStyleSheet(QString::fromUtf8("color:white;\n"
"background-color:green;\n"
"border-left:3px solid white;\n"
"border-top:3px solid white;\n"
"\n"
"\n"
""));
        ACMStateM1lbl->setAlignment(Qt::AlignCenter);
        ACMStateTC2lbl = new QLabel(VehicleCutoffPage);
        ACMStateTC2lbl->setObjectName(QString::fromUtf8("ACMStateTC2lbl"));
        ACMStateTC2lbl->setGeometry(QRect(740, 400, 91, 51));
        ACMStateTC2lbl->setStyleSheet(QString::fromUtf8("color:white;\n"
"background-color:green;\n"
"border-left:3px solid white;\n"
"border-top:3px solid white;\n"
"\n"
"\n"
""));
        ACMStateTC2lbl->setAlignment(Qt::AlignCenter);
        DirectTC1lbl = new QLabel(VehicleCutoffPage);
        DirectTC1lbl->setObjectName(QString::fromUtf8("DirectTC1lbl"));
        DirectTC1lbl->setGeometry(QRect(80, 280, 51, 51));
        DirectTC1lbl->setStyleSheet(QString::fromUtf8("border-image: url(:/images/images/TC1traingraphDirection.bmp);"));
        TrainNumM2lbl = new QLabel(VehicleCutoffPage);
        TrainNumM2lbl->setObjectName(QString::fromUtf8("TrainNumM2lbl"));
        TrainNumM2lbl->setGeometry(QRect(508, 140, 111, 321));
        TrainNumM2lbl->setStyleSheet(QString::fromUtf8("border-color: rgb(255,255,153);\n"
""));
        TrainNumM2lbl->setAlignment(Qt::AlignCenter);
        TrainNumM1lbl = new QLabel(VehicleCutoffPage);
        TrainNumM1lbl->setObjectName(QString::fromUtf8("TrainNumM1lbl"));
        TrainNumM1lbl->setGeometry(QRect(396, 140, 111, 321));
        TrainNumM1lbl->setStyleSheet(QString::fromUtf8("border-color: rgb(255,255,153);\n"
""));
        TrainNumM1lbl->setAlignment(Qt::AlignCenter);
        TrainNumMP1lbl = new QLabel(VehicleCutoffPage);
        TrainNumMP1lbl->setObjectName(QString::fromUtf8("TrainNumMP1lbl"));
        TrainNumMP1lbl->setGeometry(QRect(284, 140, 111, 321));
        TrainNumMP1lbl->setStyleSheet(QString::fromUtf8("border-color: rgb(255,255,153);\n"
"\n"
""));
        TrainNumMP1lbl->setAlignment(Qt::AlignCenter);
        ACMStateTC1lbl = new QLabel(VehicleCutoffPage);
        ACMStateTC1lbl->setObjectName(QString::fromUtf8("ACMStateTC1lbl"));
        ACMStateTC1lbl->setGeometry(QRect(180, 400, 91, 51));
        ACMStateTC1lbl->setStyleSheet(QString::fromUtf8("color:white;\n"
"background-color:green;\n"
"border-left:3px solid white;\n"
"border-top:3px solid white;\n"
"\n"
"\n"
""));
        ACMStateTC1lbl->setAlignment(Qt::AlignCenter);
        ACMStateM2lbl = new QLabel(VehicleCutoffPage);
        ACMStateM2lbl->setObjectName(QString::fromUtf8("ACMStateM2lbl"));
        ACMStateM2lbl->setGeometry(QRect(520, 400, 91, 51));
        ACMStateM2lbl->setStyleSheet(QString::fromUtf8("color:white;\n"
"background-color:green;\n"
"border-left:3px solid white;\n"
"border-top:3px solid white;\n"
"\n"
"\n"
""));
        ACMStateM2lbl->setAlignment(Qt::AlignCenter);
        DirectTC2lbl = new QLabel(VehicleCutoffPage);
        DirectTC2lbl->setObjectName(QString::fromUtf8("DirectTC2lbl"));
        DirectTC2lbl->setGeometry(QRect(880, 280, 51, 51));
        DirectTC2lbl->setStyleSheet(QString::fromUtf8("\n"
"border-image: url(:/images/images/TC2traingraphDirection.bmp);"));
        TrainNumMP2lbl = new QLabel(VehicleCutoffPage);
        TrainNumMP2lbl->setObjectName(QString::fromUtf8("TrainNumMP2lbl"));
        TrainNumMP2lbl->setGeometry(QRect(620, 140, 111, 321));
        TrainNumMP2lbl->setStyleSheet(QString::fromUtf8("border-color: rgb(255,255,153);\n"
""));
        TrainNumMP2lbl->setAlignment(Qt::AlignCenter);
        CabTC2lbl->raise();
        DirectTC2lbl->raise();
        TrainNumMP2lbl->raise();
        TrainNumM1lbl->raise();
        TrainNumTC1lbl->raise();
        TrainNumMP1lbl->raise();
        TrainNumTC2lbl->raise();
        DirectTC1lbl->raise();
        TrainNumM2lbl->raise();
        CabTC1lbl->raise();
        label->raise();
        returnBtn->raise();
        label_2->raise();
        label_3->raise();
        ACMCUTTC1Btn->raise();
        ACMCUTM1Btn->raise();
        ACMCUTM2Btn->raise();
        ACMCUTTC2Btn->raise();
        EBMP1Btn->raise();
        EBM1Btn->raise();
        EBM2Btn->raise();
        EBMP2Btn->raise();
        EBStateMP1lbl->raise();
        EBStateM1lbl->raise();
        EBStateM2lbl->raise();
        EBStateMP2lbl->raise();
        ACMStateM1lbl->raise();
        ACMStateTC2lbl->raise();
        ACMStateTC1lbl->raise();
        ACMStateM2lbl->raise();

        retranslateUi(VehicleCutoffPage);

        QMetaObject::connectSlotsByName(VehicleCutoffPage);
    } // setupUi

    void retranslateUi(QWidget *VehicleCutoffPage)
    {
        VehicleCutoffPage->setWindowTitle(QApplication::translate("VehicleCutoffPage", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        returnBtn->setText(QApplication::translate("VehicleCutoffPage", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("VehicleCutoffPage", "\347\224\265\345\210\266\345\212\250\345\210\207\351\231\244", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("VehicleCutoffPage", "ACM\345\210\207\351\231\244", 0, QApplication::UnicodeUTF8));
        ACMCUTTC1Btn->setText(QApplication::translate("VehicleCutoffPage", "\345\210\207\351\231\244", 0, QApplication::UnicodeUTF8));
        ACMCUTM1Btn->setText(QApplication::translate("VehicleCutoffPage", "\345\210\207\351\231\244", 0, QApplication::UnicodeUTF8));
        ACMCUTM2Btn->setText(QApplication::translate("VehicleCutoffPage", "\345\210\207\351\231\244", 0, QApplication::UnicodeUTF8));
        ACMCUTTC2Btn->setText(QApplication::translate("VehicleCutoffPage", "\345\210\207\351\231\244", 0, QApplication::UnicodeUTF8));
        EBMP1Btn->setText(QApplication::translate("VehicleCutoffPage", "\345\210\207\351\231\244", 0, QApplication::UnicodeUTF8));
        EBM1Btn->setText(QApplication::translate("VehicleCutoffPage", "\345\210\207\351\231\244", 0, QApplication::UnicodeUTF8));
        EBM2Btn->setText(QApplication::translate("VehicleCutoffPage", "\345\210\207\351\231\244", 0, QApplication::UnicodeUTF8));
        EBMP2Btn->setText(QApplication::translate("VehicleCutoffPage", "\345\210\207\351\231\244", 0, QApplication::UnicodeUTF8));
        EBStateMP1lbl->setText(QApplication::translate("VehicleCutoffPage", "\347\224\265\345\210\266\345\212\250", 0, QApplication::UnicodeUTF8));
        EBStateM1lbl->setText(QApplication::translate("VehicleCutoffPage", "\347\224\265\345\210\266\345\212\250", 0, QApplication::UnicodeUTF8));
        EBStateM2lbl->setText(QApplication::translate("VehicleCutoffPage", "\347\224\265\345\210\266\345\212\250", 0, QApplication::UnicodeUTF8));
        EBStateMP2lbl->setText(QApplication::translate("VehicleCutoffPage", "\347\224\265\345\210\266\345\212\250", 0, QApplication::UnicodeUTF8));
        CabTC1lbl->setText(QString());
        TrainNumTC2lbl->setText(QApplication::translate("VehicleCutoffPage", "09016", 0, QApplication::UnicodeUTF8));
        TrainNumTC1lbl->setText(QApplication::translate("VehicleCutoffPage", "09011", 0, QApplication::UnicodeUTF8));
        CabTC2lbl->setText(QString());
        ACMStateM1lbl->setText(QApplication::translate("VehicleCutoffPage", "ACM", 0, QApplication::UnicodeUTF8));
        ACMStateTC2lbl->setText(QApplication::translate("VehicleCutoffPage", "ACM", 0, QApplication::UnicodeUTF8));
        DirectTC1lbl->setText(QString());
        TrainNumM2lbl->setText(QApplication::translate("VehicleCutoffPage", "09014", 0, QApplication::UnicodeUTF8));
        TrainNumM1lbl->setText(QApplication::translate("VehicleCutoffPage", "09013", 0, QApplication::UnicodeUTF8));
        TrainNumMP1lbl->setText(QApplication::translate("VehicleCutoffPage", "09012", 0, QApplication::UnicodeUTF8));
        ACMStateTC1lbl->setText(QApplication::translate("VehicleCutoffPage", "ACM", 0, QApplication::UnicodeUTF8));
        ACMStateM2lbl->setText(QApplication::translate("VehicleCutoffPage", "ACM", 0, QApplication::UnicodeUTF8));
        DirectTC2lbl->setText(QString());
        TrainNumMP2lbl->setText(QApplication::translate("VehicleCutoffPage", "09015", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class VehicleCutoffPage: public Ui_VehicleCutoffPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VEHICLECUTOFFPAGE_H
