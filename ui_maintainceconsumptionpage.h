/********************************************************************************
** Form generated from reading UI file 'maintainceconsumptionpage.ui'
**
** Created: Thu Apr 19 11:15:44 2018
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINTAINCECONSUMPTIONPAGE_H
#define UI_MAINTAINCECONSUMPTIONPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MaintainceConsumptionPage
{
public:
    QPushButton *VVVFClearBtn;
    QPushButton *SIVClearBtn;
    QPushButton *returnBtn;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *Starttimelbl;
    QLabel *VVVFTCUM1lbl;
    QLabel *VVVFTCUM2lbl;
    QLabel *VVVFTCUMP2lbl;
    QLabel *VVVFTCUMP1lbl;
    QLabel *VVVFTCUTC2lbl;
    QLabel *VVVFTCUTC1lbl;
    QLabel *VVVFBCUM1lbl;
    QLabel *VVVFBCUM2lbl;
    QLabel *VVVFBCUTC2lbl;
    QLabel *VVVFBCUTC1lbl;
    QLabel *VVVFBCUMP1lbl;
    QLabel *VVVFBCUMP2lbl;
    QLabel *SIVTC1lbl;
    QLabel *SIVMP1lbl;
    QLabel *SIVM2lbl;
    QLabel *SIVTC2lbl;
    QLabel *SIVMP2bl;
    QLabel *SIVM1lbl;
    QLabel *TotalConsumptionlbl;
    QPushButton *ConfirmBtn;
    QLabel *VVVFBCUTC1lbl_2;
    QLabel *VVVFRMP1lbl;
    QLabel *VVVFRM1lbl;
    QLabel *label_8;
    QLabel *VVVFRMP2lbl;
    QLabel *VVVFRM2lbl;
    QLabel *VVVFBCUTC2lbl_2;

    void setupUi(QWidget *MaintainceConsumptionPage)
    {
        if (MaintainceConsumptionPage->objectName().isEmpty())
            MaintainceConsumptionPage->setObjectName(QString::fromUtf8("MaintainceConsumptionPage"));
        MaintainceConsumptionPage->resize(1024, 595);
        MaintainceConsumptionPage->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"	background-color:black;\n"
"}\n"
"QLabel\n"
"{\n"
"font:24px  \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color:rgb(23,176,176);\n"
"border:2px solid white;\n"
"}\n"
"QPushButton\n"
"{\n"
"	border-radius:8px;\n"
"font: 20px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";color: white;background-color: rgb(0, 128, 128);border-top: 2px solid white;border-left: 2px solid white;\n"
"}"));
        VVVFClearBtn = new QPushButton(MaintainceConsumptionPage);
        VVVFClearBtn->setObjectName(QString::fromUtf8("VVVFClearBtn"));
        VVVFClearBtn->setGeometry(QRect(60, 430, 161, 51));
        VVVFClearBtn->setFocusPolicy(Qt::NoFocus);
        SIVClearBtn = new QPushButton(MaintainceConsumptionPage);
        SIVClearBtn->setObjectName(QString::fromUtf8("SIVClearBtn"));
        SIVClearBtn->setGeometry(QRect(60, 350, 161, 51));
        SIVClearBtn->setFocusPolicy(Qt::NoFocus);
        returnBtn = new QPushButton(MaintainceConsumptionPage);
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
        label = new QLabel(MaintainceConsumptionPage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(3, 520, 1018, 72));
        label->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(0, 0, 0);\n"
"\n"
"	border:1px solid white;\n"
""));
        label_2 = new QLabel(MaintainceConsumptionPage);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 20, 181, 51));
        label_2->setStyleSheet(QString::fromUtf8("color:white;"));
        label_2->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(MaintainceConsumptionPage);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 70, 71, 151));
        label_3->setStyleSheet(QString::fromUtf8("color:white;"));
        label_3->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(MaintainceConsumptionPage);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(90, 70, 111, 51));
        label_4->setStyleSheet(QString::fromUtf8("color:white;"));
        label_4->setAlignment(Qt::AlignCenter);
        label_5 = new QLabel(MaintainceConsumptionPage);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(90, 120, 111, 51));
        label_5->setStyleSheet(QString::fromUtf8("color:white;"));
        label_5->setAlignment(Qt::AlignCenter);
        label_6 = new QLabel(MaintainceConsumptionPage);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(20, 220, 181, 51));
        label_6->setStyleSheet(QString::fromUtf8("color:white;"));
        label_6->setAlignment(Qt::AlignCenter);
        label_7 = new QLabel(MaintainceConsumptionPage);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(20, 270, 181, 51));
        label_7->setStyleSheet(QString::fromUtf8("color:white;"));
        label_7->setAlignment(Qt::AlignCenter);
        Starttimelbl = new QLabel(MaintainceConsumptionPage);
        Starttimelbl->setObjectName(QString::fromUtf8("Starttimelbl"));
        Starttimelbl->setGeometry(QRect(200, 20, 661, 51));
        Starttimelbl->setStyleSheet(QString::fromUtf8(""));
        Starttimelbl->setAlignment(Qt::AlignCenter);
        VVVFTCUM1lbl = new QLabel(MaintainceConsumptionPage);
        VVVFTCUM1lbl->setObjectName(QString::fromUtf8("VVVFTCUM1lbl"));
        VVVFTCUM1lbl->setGeometry(QRect(420, 70, 111, 51));
        VVVFTCUM1lbl->setStyleSheet(QString::fromUtf8(""));
        VVVFTCUM1lbl->setAlignment(Qt::AlignCenter);
        VVVFTCUM2lbl = new QLabel(MaintainceConsumptionPage);
        VVVFTCUM2lbl->setObjectName(QString::fromUtf8("VVVFTCUM2lbl"));
        VVVFTCUM2lbl->setGeometry(QRect(530, 70, 111, 51));
        VVVFTCUM2lbl->setStyleSheet(QString::fromUtf8(""));
        VVVFTCUM2lbl->setAlignment(Qt::AlignCenter);
        VVVFTCUMP2lbl = new QLabel(MaintainceConsumptionPage);
        VVVFTCUMP2lbl->setObjectName(QString::fromUtf8("VVVFTCUMP2lbl"));
        VVVFTCUMP2lbl->setGeometry(QRect(640, 70, 111, 51));
        VVVFTCUMP2lbl->setStyleSheet(QString::fromUtf8(""));
        VVVFTCUMP2lbl->setAlignment(Qt::AlignCenter);
        VVVFTCUMP1lbl = new QLabel(MaintainceConsumptionPage);
        VVVFTCUMP1lbl->setObjectName(QString::fromUtf8("VVVFTCUMP1lbl"));
        VVVFTCUMP1lbl->setGeometry(QRect(310, 70, 111, 51));
        VVVFTCUMP1lbl->setStyleSheet(QString::fromUtf8(""));
        VVVFTCUMP1lbl->setAlignment(Qt::AlignCenter);
        VVVFTCUTC2lbl = new QLabel(MaintainceConsumptionPage);
        VVVFTCUTC2lbl->setObjectName(QString::fromUtf8("VVVFTCUTC2lbl"));
        VVVFTCUTC2lbl->setGeometry(QRect(750, 70, 111, 51));
        VVVFTCUTC2lbl->setStyleSheet(QString::fromUtf8(""));
        VVVFTCUTC2lbl->setAlignment(Qt::AlignCenter);
        VVVFTCUTC1lbl = new QLabel(MaintainceConsumptionPage);
        VVVFTCUTC1lbl->setObjectName(QString::fromUtf8("VVVFTCUTC1lbl"));
        VVVFTCUTC1lbl->setGeometry(QRect(200, 70, 111, 51));
        VVVFTCUTC1lbl->setStyleSheet(QString::fromUtf8(""));
        VVVFTCUTC1lbl->setAlignment(Qt::AlignCenter);
        VVVFBCUM1lbl = new QLabel(MaintainceConsumptionPage);
        VVVFBCUM1lbl->setObjectName(QString::fromUtf8("VVVFBCUM1lbl"));
        VVVFBCUM1lbl->setGeometry(QRect(420, 170, 111, 51));
        VVVFBCUM1lbl->setStyleSheet(QString::fromUtf8(""));
        VVVFBCUM1lbl->setAlignment(Qt::AlignCenter);
        VVVFBCUM2lbl = new QLabel(MaintainceConsumptionPage);
        VVVFBCUM2lbl->setObjectName(QString::fromUtf8("VVVFBCUM2lbl"));
        VVVFBCUM2lbl->setGeometry(QRect(530, 170, 111, 51));
        VVVFBCUM2lbl->setStyleSheet(QString::fromUtf8(""));
        VVVFBCUM2lbl->setAlignment(Qt::AlignCenter);
        VVVFBCUTC2lbl = new QLabel(MaintainceConsumptionPage);
        VVVFBCUTC2lbl->setObjectName(QString::fromUtf8("VVVFBCUTC2lbl"));
        VVVFBCUTC2lbl->setGeometry(QRect(750, 170, 111, 51));
        VVVFBCUTC2lbl->setStyleSheet(QString::fromUtf8(""));
        VVVFBCUTC2lbl->setAlignment(Qt::AlignCenter);
        VVVFBCUTC1lbl = new QLabel(MaintainceConsumptionPage);
        VVVFBCUTC1lbl->setObjectName(QString::fromUtf8("VVVFBCUTC1lbl"));
        VVVFBCUTC1lbl->setGeometry(QRect(200, 170, 111, 51));
        VVVFBCUTC1lbl->setStyleSheet(QString::fromUtf8(""));
        VVVFBCUTC1lbl->setAlignment(Qt::AlignCenter);
        VVVFBCUMP1lbl = new QLabel(MaintainceConsumptionPage);
        VVVFBCUMP1lbl->setObjectName(QString::fromUtf8("VVVFBCUMP1lbl"));
        VVVFBCUMP1lbl->setGeometry(QRect(310, 170, 111, 51));
        VVVFBCUMP1lbl->setStyleSheet(QString::fromUtf8(""));
        VVVFBCUMP1lbl->setAlignment(Qt::AlignCenter);
        VVVFBCUMP2lbl = new QLabel(MaintainceConsumptionPage);
        VVVFBCUMP2lbl->setObjectName(QString::fromUtf8("VVVFBCUMP2lbl"));
        VVVFBCUMP2lbl->setGeometry(QRect(640, 170, 111, 51));
        VVVFBCUMP2lbl->setStyleSheet(QString::fromUtf8(""));
        VVVFBCUMP2lbl->setAlignment(Qt::AlignCenter);
        SIVTC1lbl = new QLabel(MaintainceConsumptionPage);
        SIVTC1lbl->setObjectName(QString::fromUtf8("SIVTC1lbl"));
        SIVTC1lbl->setGeometry(QRect(200, 220, 111, 51));
        SIVTC1lbl->setStyleSheet(QString::fromUtf8(""));
        SIVTC1lbl->setAlignment(Qt::AlignCenter);
        SIVMP1lbl = new QLabel(MaintainceConsumptionPage);
        SIVMP1lbl->setObjectName(QString::fromUtf8("SIVMP1lbl"));
        SIVMP1lbl->setGeometry(QRect(310, 220, 111, 51));
        SIVMP1lbl->setStyleSheet(QString::fromUtf8(""));
        SIVMP1lbl->setAlignment(Qt::AlignCenter);
        SIVM2lbl = new QLabel(MaintainceConsumptionPage);
        SIVM2lbl->setObjectName(QString::fromUtf8("SIVM2lbl"));
        SIVM2lbl->setGeometry(QRect(530, 220, 111, 51));
        SIVM2lbl->setStyleSheet(QString::fromUtf8(""));
        SIVM2lbl->setAlignment(Qt::AlignCenter);
        SIVTC2lbl = new QLabel(MaintainceConsumptionPage);
        SIVTC2lbl->setObjectName(QString::fromUtf8("SIVTC2lbl"));
        SIVTC2lbl->setGeometry(QRect(750, 220, 111, 51));
        SIVTC2lbl->setStyleSheet(QString::fromUtf8(""));
        SIVTC2lbl->setAlignment(Qt::AlignCenter);
        SIVMP2bl = new QLabel(MaintainceConsumptionPage);
        SIVMP2bl->setObjectName(QString::fromUtf8("SIVMP2bl"));
        SIVMP2bl->setGeometry(QRect(640, 220, 111, 51));
        SIVMP2bl->setStyleSheet(QString::fromUtf8(""));
        SIVMP2bl->setAlignment(Qt::AlignCenter);
        SIVM1lbl = new QLabel(MaintainceConsumptionPage);
        SIVM1lbl->setObjectName(QString::fromUtf8("SIVM1lbl"));
        SIVM1lbl->setGeometry(QRect(420, 220, 111, 51));
        SIVM1lbl->setStyleSheet(QString::fromUtf8(""));
        SIVM1lbl->setAlignment(Qt::AlignCenter);
        TotalConsumptionlbl = new QLabel(MaintainceConsumptionPage);
        TotalConsumptionlbl->setObjectName(QString::fromUtf8("TotalConsumptionlbl"));
        TotalConsumptionlbl->setGeometry(QRect(200, 270, 661, 51));
        TotalConsumptionlbl->setStyleSheet(QString::fromUtf8(""));
        TotalConsumptionlbl->setAlignment(Qt::AlignCenter);
        ConfirmBtn = new QPushButton(MaintainceConsumptionPage);
        ConfirmBtn->setObjectName(QString::fromUtf8("ConfirmBtn"));
        ConfirmBtn->setGeometry(QRect(740, 440, 101, 51));
        ConfirmBtn->setFocusPolicy(Qt::NoFocus);
        VVVFBCUTC1lbl_2 = new QLabel(MaintainceConsumptionPage);
        VVVFBCUTC1lbl_2->setObjectName(QString::fromUtf8("VVVFBCUTC1lbl_2"));
        VVVFBCUTC1lbl_2->setGeometry(QRect(200, 120, 111, 51));
        VVVFBCUTC1lbl_2->setStyleSheet(QString::fromUtf8(""));
        VVVFBCUTC1lbl_2->setAlignment(Qt::AlignCenter);
        VVVFRMP1lbl = new QLabel(MaintainceConsumptionPage);
        VVVFRMP1lbl->setObjectName(QString::fromUtf8("VVVFRMP1lbl"));
        VVVFRMP1lbl->setGeometry(QRect(310, 120, 111, 51));
        VVVFRMP1lbl->setStyleSheet(QString::fromUtf8(""));
        VVVFRMP1lbl->setAlignment(Qt::AlignCenter);
        VVVFRM1lbl = new QLabel(MaintainceConsumptionPage);
        VVVFRM1lbl->setObjectName(QString::fromUtf8("VVVFRM1lbl"));
        VVVFRM1lbl->setGeometry(QRect(420, 120, 111, 51));
        VVVFRM1lbl->setStyleSheet(QString::fromUtf8(""));
        VVVFRM1lbl->setAlignment(Qt::AlignCenter);
        label_8 = new QLabel(MaintainceConsumptionPage);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(90, 170, 111, 51));
        label_8->setStyleSheet(QString::fromUtf8("color:white;"));
        label_8->setAlignment(Qt::AlignCenter);
        VVVFRMP2lbl = new QLabel(MaintainceConsumptionPage);
        VVVFRMP2lbl->setObjectName(QString::fromUtf8("VVVFRMP2lbl"));
        VVVFRMP2lbl->setGeometry(QRect(640, 120, 111, 51));
        VVVFRMP2lbl->setStyleSheet(QString::fromUtf8(""));
        VVVFRMP2lbl->setAlignment(Qt::AlignCenter);
        VVVFRM2lbl = new QLabel(MaintainceConsumptionPage);
        VVVFRM2lbl->setObjectName(QString::fromUtf8("VVVFRM2lbl"));
        VVVFRM2lbl->setGeometry(QRect(530, 120, 111, 51));
        VVVFRM2lbl->setStyleSheet(QString::fromUtf8(""));
        VVVFRM2lbl->setAlignment(Qt::AlignCenter);
        VVVFBCUTC2lbl_2 = new QLabel(MaintainceConsumptionPage);
        VVVFBCUTC2lbl_2->setObjectName(QString::fromUtf8("VVVFBCUTC2lbl_2"));
        VVVFBCUTC2lbl_2->setGeometry(QRect(750, 120, 111, 51));
        VVVFBCUTC2lbl_2->setStyleSheet(QString::fromUtf8(""));
        VVVFBCUTC2lbl_2->setAlignment(Qt::AlignCenter);
        label->raise();
        VVVFClearBtn->raise();
        SIVClearBtn->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        label_5->raise();
        label_6->raise();
        label_7->raise();
        Starttimelbl->raise();
        VVVFTCUM1lbl->raise();
        VVVFTCUM2lbl->raise();
        VVVFTCUMP2lbl->raise();
        VVVFTCUMP1lbl->raise();
        VVVFTCUTC2lbl->raise();
        VVVFTCUTC1lbl->raise();
        VVVFBCUM1lbl->raise();
        VVVFBCUM2lbl->raise();
        VVVFBCUTC2lbl->raise();
        VVVFBCUTC1lbl->raise();
        VVVFBCUMP1lbl->raise();
        VVVFBCUMP2lbl->raise();
        SIVTC1lbl->raise();
        SIVMP1lbl->raise();
        SIVM2lbl->raise();
        SIVTC2lbl->raise();
        SIVMP2bl->raise();
        SIVM1lbl->raise();
        TotalConsumptionlbl->raise();
        ConfirmBtn->raise();
        VVVFBCUTC1lbl_2->raise();
        VVVFRMP1lbl->raise();
        VVVFRM1lbl->raise();
        label_8->raise();
        VVVFRMP2lbl->raise();
        VVVFRM2lbl->raise();
        VVVFBCUTC2lbl_2->raise();
        returnBtn->raise();

        retranslateUi(MaintainceConsumptionPage);

        QMetaObject::connectSlotsByName(MaintainceConsumptionPage);
    } // setupUi

    void retranslateUi(QWidget *MaintainceConsumptionPage)
    {
        MaintainceConsumptionPage->setWindowTitle(QApplication::translate("MaintainceConsumptionPage", "Form", 0, QApplication::UnicodeUTF8));
        VVVFClearBtn->setText(QApplication::translate("MaintainceConsumptionPage", "\347\211\265\345\274\225\350\256\241\346\225\260\345\231\250\346\270\205\351\231\244", 0, QApplication::UnicodeUTF8));
        SIVClearBtn->setText(QApplication::translate("MaintainceConsumptionPage", "\350\276\205\345\212\251\350\256\241\346\225\260\345\231\250\346\270\205\351\231\244", 0, QApplication::UnicodeUTF8));
        returnBtn->setText(QApplication::translate("MaintainceConsumptionPage", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        label_2->setText(QApplication::translate("MaintainceConsumptionPage", "\350\265\267\345\247\213\346\227\266\351\227\264", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MaintainceConsumptionPage", "VVVF\n"
"/kwh", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MaintainceConsumptionPage", "\347\211\265\345\274\225", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MaintainceConsumptionPage", "\347\224\265\351\230\273\345\210\266\345\212\250", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("MaintainceConsumptionPage", "ACM/kwh", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("MaintainceConsumptionPage", "\345\220\210\350\256\241\350\203\275\350\200\227/kwh", 0, QApplication::UnicodeUTF8));
        Starttimelbl->setText(QString());
        VVVFTCUM1lbl->setText(QString());
        VVVFTCUM2lbl->setText(QString());
        VVVFTCUMP2lbl->setText(QString());
        VVVFTCUMP1lbl->setText(QString());
        VVVFTCUTC2lbl->setText(QApplication::translate("MaintainceConsumptionPage", "\357\274\215\357\274\215", 0, QApplication::UnicodeUTF8));
        VVVFTCUTC1lbl->setText(QApplication::translate("MaintainceConsumptionPage", "\357\274\215\357\274\215", 0, QApplication::UnicodeUTF8));
        VVVFBCUM1lbl->setText(QString());
        VVVFBCUM2lbl->setText(QString());
        VVVFBCUTC2lbl->setText(QApplication::translate("MaintainceConsumptionPage", "\357\274\215\357\274\215", 0, QApplication::UnicodeUTF8));
        VVVFBCUTC1lbl->setText(QApplication::translate("MaintainceConsumptionPage", "\357\274\215\357\274\215", 0, QApplication::UnicodeUTF8));
        VVVFBCUMP1lbl->setText(QString());
        VVVFBCUMP2lbl->setText(QString());
        SIVTC1lbl->setText(QString());
        SIVMP1lbl->setText(QApplication::translate("MaintainceConsumptionPage", "\357\274\215\357\274\215", 0, QApplication::UnicodeUTF8));
        SIVM2lbl->setText(QString());
        SIVTC2lbl->setText(QString());
        SIVMP2bl->setText(QApplication::translate("MaintainceConsumptionPage", "\357\274\215\357\274\215", 0, QApplication::UnicodeUTF8));
        SIVM1lbl->setText(QString());
        TotalConsumptionlbl->setText(QString());
        ConfirmBtn->setText(QApplication::translate("MaintainceConsumptionPage", "\347\241\256\350\256\244", 0, QApplication::UnicodeUTF8));
        VVVFBCUTC1lbl_2->setText(QApplication::translate("MaintainceConsumptionPage", "\357\274\215\357\274\215", 0, QApplication::UnicodeUTF8));
        VVVFRMP1lbl->setText(QString());
        VVVFRM1lbl->setText(QString());
        label_8->setText(QApplication::translate("MaintainceConsumptionPage", "\345\206\215\347\224\237\345\210\266\345\212\250", 0, QApplication::UnicodeUTF8));
        VVVFRMP2lbl->setText(QString());
        VVVFRM2lbl->setText(QString());
        VVVFBCUTC2lbl_2->setText(QApplication::translate("MaintainceConsumptionPage", "\357\274\215\357\274\215", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MaintainceConsumptionPage: public Ui_MaintainceConsumptionPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINTAINCECONSUMPTIONPAGE_H
