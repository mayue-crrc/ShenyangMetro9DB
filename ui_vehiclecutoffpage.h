/********************************************************************************
** Form generated from reading UI file 'vehiclecutoffpage.ui'
**
** Created: Wed Jun 6 16:17:51 2018
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
#include <QtGui/QGridLayout>
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
    QPushButton *CutoffACMBtn;
    QPushButton *ResetACMBtn;
    QPushButton *CutoffEBBtn;
    QPushButton *ResetEBBtn;
    QLabel *EBStateMP1lbl;
    QLabel *EBStateM1lbl;
    QLabel *EBStateM2lbl;
    QLabel *EBStateMP2lbl;
    QLabel *CabTC1lbl;
    QLabel *CabTC2lbl;
    QLabel *ACMStateM1lbl;
    QLabel *ACMStateTC2lbl;
    QLabel *DirectTC1lbl;
    QLabel *ACMStateTC1lbl;
    QLabel *ACMStateM2lbl;
    QLabel *DirectTC2lbl;
    QLabel *HMIEBStateMP1lbl;
    QLabel *HMIEBStateM1lbl;
    QLabel *HMIEBStateM2lbl;
    QLabel *HMIEBStateMP2lbl;
    QLabel *HMIACMStateM1lbl;
    QLabel *HMIACMStateM2lbl;
    QLabel *HMIACMStateMP2lbl;
    QLabel *HMIACMStateMP1lbl;
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *Train1Btn;
    QPushButton *Train3Btn;
    QPushButton *Train4Btn;
    QPushButton *Train5Btn;
    QPushButton *Train6Btn;
    QPushButton *Train2Btn;

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
        label_2->setGeometry(QRect(120, 60, 741, 61));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"border:1px solid white;\n"
"border-radius:15px;\n"
"color:white;"));
        label_3 = new QLabel(VehicleCutoffPage);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(130, 481, 741, 61));
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"border:1px solid white;\n"
"border-radius:15px;\n"
"color:white;"));
        CutoffACMBtn = new QPushButton(VehicleCutoffPage);
        CutoffACMBtn->setObjectName(QString::fromUtf8("CutoffACMBtn"));
        CutoffACMBtn->setGeometry(QRect(340, 490, 91, 41));
        CutoffACMBtn->setFocusPolicy(Qt::NoFocus);
        ResetACMBtn = new QPushButton(VehicleCutoffPage);
        ResetACMBtn->setObjectName(QString::fromUtf8("ResetACMBtn"));
        ResetACMBtn->setGeometry(QRect(590, 490, 91, 41));
        ResetACMBtn->setFocusPolicy(Qt::NoFocus);
        CutoffEBBtn = new QPushButton(VehicleCutoffPage);
        CutoffEBBtn->setObjectName(QString::fromUtf8("CutoffEBBtn"));
        CutoffEBBtn->setGeometry(QRect(340, 70, 91, 41));
        CutoffEBBtn->setFocusPolicy(Qt::NoFocus);
        CutoffEBBtn->setStyleSheet(QString::fromUtf8(""));
        ResetEBBtn = new QPushButton(VehicleCutoffPage);
        ResetEBBtn->setObjectName(QString::fromUtf8("ResetEBBtn"));
        ResetEBBtn->setGeometry(QRect(590, 70, 91, 41));
        ResetEBBtn->setFocusPolicy(Qt::NoFocus);
        EBStateMP1lbl = new QLabel(VehicleCutoffPage);
        EBStateMP1lbl->setObjectName(QString::fromUtf8("EBStateMP1lbl"));
        EBStateMP1lbl->setGeometry(QRect(290, 160, 91, 51));
        EBStateMP1lbl->setStyleSheet(QString::fromUtf8(""));
        EBStateMP1lbl->setAlignment(Qt::AlignCenter);
        EBStateM1lbl = new QLabel(VehicleCutoffPage);
        EBStateM1lbl->setObjectName(QString::fromUtf8("EBStateM1lbl"));
        EBStateM1lbl->setGeometry(QRect(400, 160, 91, 51));
        EBStateM1lbl->setStyleSheet(QString::fromUtf8(""));
        EBStateM1lbl->setAlignment(Qt::AlignCenter);
        EBStateM2lbl = new QLabel(VehicleCutoffPage);
        EBStateM2lbl->setObjectName(QString::fromUtf8("EBStateM2lbl"));
        EBStateM2lbl->setGeometry(QRect(510, 160, 91, 51));
        EBStateM2lbl->setStyleSheet(QString::fromUtf8(""));
        EBStateM2lbl->setAlignment(Qt::AlignCenter);
        EBStateMP2lbl = new QLabel(VehicleCutoffPage);
        EBStateMP2lbl->setObjectName(QString::fromUtf8("EBStateMP2lbl"));
        EBStateMP2lbl->setGeometry(QRect(620, 160, 91, 51));
        EBStateMP2lbl->setStyleSheet(QString::fromUtf8(""));
        EBStateMP2lbl->setAlignment(Qt::AlignCenter);
        CabTC1lbl = new QLabel(VehicleCutoffPage);
        CabTC1lbl->setObjectName(QString::fromUtf8("CabTC1lbl"));
        CabTC1lbl->setGeometry(QRect(130, 140, 31, 321));
        CabTC1lbl->setStyleSheet(QString::fromUtf8("border-image: url(:/images/images/TC1traingraphKeynoact.bmp);"));
        CabTC2lbl = new QLabel(VehicleCutoffPage);
        CabTC2lbl->setObjectName(QString::fromUtf8("CabTC2lbl"));
        CabTC2lbl->setGeometry(QRect(840, 140, 31, 321));
        CabTC2lbl->setStyleSheet(QString::fromUtf8("border-image: url(:/images/images/TC2traingraphKeyact.bmp);\n"
""));
        ACMStateM1lbl = new QLabel(VehicleCutoffPage);
        ACMStateM1lbl->setObjectName(QString::fromUtf8("ACMStateM1lbl"));
        ACMStateM1lbl->setGeometry(QRect(400, 400, 91, 51));
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
        ACMStateTC2lbl->setGeometry(QRect(730, 400, 91, 51));
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
        DirectTC1lbl->setGeometry(QRect(70, 280, 51, 51));
        DirectTC1lbl->setStyleSheet(QString::fromUtf8("border-image: url(:/images/images/TC1traingraphDirection.bmp);"));
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
        ACMStateM2lbl->setGeometry(QRect(510, 400, 91, 51));
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
        HMIEBStateMP1lbl = new QLabel(VehicleCutoffPage);
        HMIEBStateMP1lbl->setObjectName(QString::fromUtf8("HMIEBStateMP1lbl"));
        HMIEBStateMP1lbl->setGeometry(QRect(290, 210, 91, 21));
        HMIEBStateMP1lbl->setStyleSheet(QString::fromUtf8(""));
        HMIEBStateMP1lbl->setAlignment(Qt::AlignCenter);
        HMIEBStateM1lbl = new QLabel(VehicleCutoffPage);
        HMIEBStateM1lbl->setObjectName(QString::fromUtf8("HMIEBStateM1lbl"));
        HMIEBStateM1lbl->setGeometry(QRect(400, 210, 91, 21));
        HMIEBStateM1lbl->setStyleSheet(QString::fromUtf8(""));
        HMIEBStateM1lbl->setAlignment(Qt::AlignCenter);
        HMIEBStateM2lbl = new QLabel(VehicleCutoffPage);
        HMIEBStateM2lbl->setObjectName(QString::fromUtf8("HMIEBStateM2lbl"));
        HMIEBStateM2lbl->setGeometry(QRect(510, 210, 91, 21));
        HMIEBStateM2lbl->setStyleSheet(QString::fromUtf8(""));
        HMIEBStateM2lbl->setAlignment(Qt::AlignCenter);
        HMIEBStateMP2lbl = new QLabel(VehicleCutoffPage);
        HMIEBStateMP2lbl->setObjectName(QString::fromUtf8("HMIEBStateMP2lbl"));
        HMIEBStateMP2lbl->setGeometry(QRect(620, 210, 91, 21));
        HMIEBStateMP2lbl->setStyleSheet(QString::fromUtf8(""));
        HMIEBStateMP2lbl->setAlignment(Qt::AlignCenter);
        HMIACMStateM1lbl = new QLabel(VehicleCutoffPage);
        HMIACMStateM1lbl->setObjectName(QString::fromUtf8("HMIACMStateM1lbl"));
        HMIACMStateM1lbl->setGeometry(QRect(400, 380, 91, 21));
        HMIACMStateM1lbl->setStyleSheet(QString::fromUtf8(""));
        HMIACMStateM1lbl->setAlignment(Qt::AlignCenter);
        HMIACMStateM2lbl = new QLabel(VehicleCutoffPage);
        HMIACMStateM2lbl->setObjectName(QString::fromUtf8("HMIACMStateM2lbl"));
        HMIACMStateM2lbl->setGeometry(QRect(510, 380, 91, 21));
        HMIACMStateM2lbl->setStyleSheet(QString::fromUtf8(""));
        HMIACMStateM2lbl->setAlignment(Qt::AlignCenter);
        HMIACMStateMP2lbl = new QLabel(VehicleCutoffPage);
        HMIACMStateMP2lbl->setObjectName(QString::fromUtf8("HMIACMStateMP2lbl"));
        HMIACMStateMP2lbl->setGeometry(QRect(730, 380, 91, 21));
        HMIACMStateMP2lbl->setStyleSheet(QString::fromUtf8(""));
        HMIACMStateMP2lbl->setAlignment(Qt::AlignCenter);
        HMIACMStateMP1lbl = new QLabel(VehicleCutoffPage);
        HMIACMStateMP1lbl->setObjectName(QString::fromUtf8("HMIACMStateMP1lbl"));
        HMIACMStateMP1lbl->setGeometry(QRect(180, 380, 91, 21));
        HMIACMStateMP1lbl->setStyleSheet(QString::fromUtf8(""));
        HMIACMStateMP1lbl->setAlignment(Qt::AlignCenter);
        widget = new QWidget(VehicleCutoffPage);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(170, 140, 661, 321));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        Train1Btn = new QPushButton(widget);
        Train1Btn->setObjectName(QString::fromUtf8("Train1Btn"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Train1Btn->sizePolicy().hasHeightForWidth());
        Train1Btn->setSizePolicy(sizePolicy);
        Train1Btn->setFocusPolicy(Qt::NoFocus);
        Train1Btn->setStyleSheet(QString::fromUtf8("font: 24px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";color: black;background-color: rgb(255,255,153);border-top: 2px solid  rgb(0, 0, 0);border-left: 2px solid  rgb(0, 0, 0);border-bottom: 2px solid white;border-right: 2px solid white;\n"
""));

        gridLayout->addWidget(Train1Btn, 0, 0, 1, 1);

        Train3Btn = new QPushButton(widget);
        Train3Btn->setObjectName(QString::fromUtf8("Train3Btn"));
        sizePolicy.setHeightForWidth(Train3Btn->sizePolicy().hasHeightForWidth());
        Train3Btn->setSizePolicy(sizePolicy);
        Train3Btn->setFocusPolicy(Qt::NoFocus);
        Train3Btn->setStyleSheet(QString::fromUtf8("font: 24px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";color: black;background-color: rgb(255,255,153);border-top: 2px solid  rgb(0, 0, 0);border-left: 2px solid  rgb(0, 0, 0);border-bottom: 2px solid white;border-right: 2px solid white;\n"
""));

        gridLayout->addWidget(Train3Btn, 0, 2, 1, 1);

        Train4Btn = new QPushButton(widget);
        Train4Btn->setObjectName(QString::fromUtf8("Train4Btn"));
        sizePolicy.setHeightForWidth(Train4Btn->sizePolicy().hasHeightForWidth());
        Train4Btn->setSizePolicy(sizePolicy);
        Train4Btn->setFocusPolicy(Qt::NoFocus);
        Train4Btn->setStyleSheet(QString::fromUtf8("font: 24px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";color: black;background-color: rgb(255,255,153);border-top: 2px solid  rgb(0, 0, 0);border-left: 2px solid  rgb(0, 0, 0);border-bottom: 2px solid white;border-right: 2px solid white;\n"
""));

        gridLayout->addWidget(Train4Btn, 0, 3, 1, 1);

        Train5Btn = new QPushButton(widget);
        Train5Btn->setObjectName(QString::fromUtf8("Train5Btn"));
        sizePolicy.setHeightForWidth(Train5Btn->sizePolicy().hasHeightForWidth());
        Train5Btn->setSizePolicy(sizePolicy);
        Train5Btn->setFocusPolicy(Qt::NoFocus);
        Train5Btn->setStyleSheet(QString::fromUtf8("font: 24px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";color: black;background-color: rgb(255,255,153);border-top: 2px solid  rgb(0, 0, 0);border-left: 2px solid  rgb(0, 0, 0);border-bottom: 2px solid white;border-right: 2px solid white;\n"
"\n"
""));

        gridLayout->addWidget(Train5Btn, 0, 4, 1, 1);

        Train6Btn = new QPushButton(widget);
        Train6Btn->setObjectName(QString::fromUtf8("Train6Btn"));
        sizePolicy.setHeightForWidth(Train6Btn->sizePolicy().hasHeightForWidth());
        Train6Btn->setSizePolicy(sizePolicy);
        Train6Btn->setFocusPolicy(Qt::NoFocus);
        Train6Btn->setStyleSheet(QString::fromUtf8("font: 24px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";color: black;background-color: rgb(255,255,153);border-top: 2px solid  rgb(0, 0, 0);border-left: 2px solid  rgb(0, 0, 0);border-bottom: 2px solid white;border-right: 2px solid white;\n"
""));

        gridLayout->addWidget(Train6Btn, 0, 5, 1, 1);

        Train2Btn = new QPushButton(widget);
        Train2Btn->setObjectName(QString::fromUtf8("Train2Btn"));
        sizePolicy.setHeightForWidth(Train2Btn->sizePolicy().hasHeightForWidth());
        Train2Btn->setSizePolicy(sizePolicy);
        Train2Btn->setFocusPolicy(Qt::NoFocus);
        Train2Btn->setStyleSheet(QString::fromUtf8("font: 24px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";color: black;background-color: rgb(255,255,153);border-top: 2px solid  rgb(0, 0, 0);border-left: 2px solid  rgb(0, 0, 0);border-bottom: 2px solid white;border-right: 2px solid white;\n"
""));

        gridLayout->addWidget(Train2Btn, 0, 1, 1, 1);

        label->raise();
        returnBtn->raise();
        label_2->raise();
        label_3->raise();
        CutoffACMBtn->raise();
        ResetACMBtn->raise();
        CutoffEBBtn->raise();
        ResetEBBtn->raise();
        CabTC1lbl->raise();
        CabTC2lbl->raise();
        DirectTC1lbl->raise();
        DirectTC2lbl->raise();
        Train6Btn->raise();
        Train4Btn->raise();
        Train3Btn->raise();
        Train1Btn->raise();
        Train5Btn->raise();
        HMIACMStateMP2lbl->raise();
        HMIACMStateM1lbl->raise();
        HMIEBStateM1lbl->raise();
        ACMStateM1lbl->raise();
        HMIEBStateM2lbl->raise();
        EBStateMP1lbl->raise();
        ACMStateTC2lbl->raise();
        EBStateM1lbl->raise();
        ACMStateM2lbl->raise();
        ACMStateTC1lbl->raise();
        HMIEBStateMP2lbl->raise();
        EBStateM2lbl->raise();
        HMIACMStateMP1lbl->raise();
        HMIACMStateM2lbl->raise();
        EBStateMP2lbl->raise();
        HMIEBStateMP1lbl->raise();

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
        CutoffACMBtn->setText(QApplication::translate("VehicleCutoffPage", "\345\210\207\351\231\244", 0, QApplication::UnicodeUTF8));
        ResetACMBtn->setText(QApplication::translate("VehicleCutoffPage", "\346\201\242\345\244\215", 0, QApplication::UnicodeUTF8));
        CutoffEBBtn->setText(QApplication::translate("VehicleCutoffPage", "\345\210\207\351\231\244", 0, QApplication::UnicodeUTF8));
        ResetEBBtn->setText(QApplication::translate("VehicleCutoffPage", "\346\201\242\345\244\215", 0, QApplication::UnicodeUTF8));
        EBStateMP1lbl->setText(QApplication::translate("VehicleCutoffPage", "\347\224\265\345\210\266\345\212\250", 0, QApplication::UnicodeUTF8));
        EBStateM1lbl->setText(QApplication::translate("VehicleCutoffPage", "\347\224\265\345\210\266\345\212\250", 0, QApplication::UnicodeUTF8));
        EBStateM2lbl->setText(QApplication::translate("VehicleCutoffPage", "\347\224\265\345\210\266\345\212\250", 0, QApplication::UnicodeUTF8));
        EBStateMP2lbl->setText(QApplication::translate("VehicleCutoffPage", "\347\224\265\345\210\266\345\212\250", 0, QApplication::UnicodeUTF8));
        CabTC1lbl->setText(QString());
        CabTC2lbl->setText(QString());
        ACMStateM1lbl->setText(QApplication::translate("VehicleCutoffPage", "ACM", 0, QApplication::UnicodeUTF8));
        ACMStateTC2lbl->setText(QApplication::translate("VehicleCutoffPage", "ACM", 0, QApplication::UnicodeUTF8));
        DirectTC1lbl->setText(QString());
        ACMStateTC1lbl->setText(QApplication::translate("VehicleCutoffPage", "ACM", 0, QApplication::UnicodeUTF8));
        ACMStateM2lbl->setText(QApplication::translate("VehicleCutoffPage", "ACM", 0, QApplication::UnicodeUTF8));
        DirectTC2lbl->setText(QString());
        HMIEBStateMP1lbl->setText(QString());
        HMIEBStateM1lbl->setText(QString());
        HMIEBStateM2lbl->setText(QString());
        HMIEBStateMP2lbl->setText(QString());
        HMIACMStateM1lbl->setText(QString());
        HMIACMStateM2lbl->setText(QString());
        HMIACMStateMP2lbl->setText(QString());
        HMIACMStateMP1lbl->setText(QString());
#ifndef QT_NO_WHATSTHIS
        Train1Btn->setWhatsThis(QApplication::translate("VehicleCutoffPage", "1", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        Train1Btn->setText(QApplication::translate("VehicleCutoffPage", "09011", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        Train3Btn->setWhatsThis(QApplication::translate("VehicleCutoffPage", "3", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        Train3Btn->setText(QApplication::translate("VehicleCutoffPage", "09013", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        Train4Btn->setWhatsThis(QApplication::translate("VehicleCutoffPage", "4", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        Train4Btn->setText(QApplication::translate("VehicleCutoffPage", "09014", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        Train5Btn->setWhatsThis(QApplication::translate("VehicleCutoffPage", "5", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        Train5Btn->setText(QApplication::translate("VehicleCutoffPage", "09015", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        Train6Btn->setWhatsThis(QApplication::translate("VehicleCutoffPage", "6", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        Train6Btn->setText(QApplication::translate("VehicleCutoffPage", "09016", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        Train2Btn->setWhatsThis(QApplication::translate("VehicleCutoffPage", "2", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        Train2Btn->setText(QApplication::translate("VehicleCutoffPage", "09012", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class VehicleCutoffPage: public Ui_VehicleCutoffPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VEHICLECUTOFFPAGE_H
