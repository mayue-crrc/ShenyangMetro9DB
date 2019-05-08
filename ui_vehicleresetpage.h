/********************************************************************************
** Form generated from reading UI file 'vehicleresetpage.ui'
**
** Created: Wed May 8 08:13:31 2019
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
#include <QtGui/QGridLayout>
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
    QLabel *ACMStateM2lbl;
    QLabel *label;
    QLabel *DirectTC1lbl;
    QPushButton *returnBtn;
    QLabel *EBStateM1lbl;
    QLabel *label_2;
    QLabel *DirectTC2lbl;
    QLabel *CabTC1lbl;
    QLabel *ACMStateTC1lbl;
    QLabel *ACMStateM1lbl;
    QLabel *label_3;
    QLabel *ACMStateTC2lbl;
    QLabel *EBStateM2lbl;
    QLabel *CabTC2lbl;
    QPushButton *VVVFMP1Btn;
    QPushButton *ACMRESETTC1Btn;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QPushButton *Train1Btn;
    QPushButton *Train3Btn;
    QPushButton *Train4Btn;
    QPushButton *Train5Btn;
    QPushButton *Train6Btn;
    QPushButton *Train2Btn;

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
        EBStateMP2lbl->setGeometry(QRect(620, 150, 91, 51));
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
        EBStateMP1lbl->setGeometry(QRect(280, 150, 91, 51));
        EBStateMP1lbl->setStyleSheet(QString::fromUtf8("color:white;\n"
"background-color:RED;\n"
"border-left:3px solid white;\n"
"border-top:3px solid white;\n"
"\n"
"\n"
""));
        EBStateMP1lbl->setAlignment(Qt::AlignCenter);
        ACMStateM2lbl = new QLabel(VehicleResetPage);
        ACMStateM2lbl->setObjectName(QString::fromUtf8("ACMStateM2lbl"));
        ACMStateM2lbl->setGeometry(QRect(505, 400, 91, 51));
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
        DirectTC1lbl->setGeometry(QRect(60, 280, 51, 51));
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
        EBStateM1lbl = new QLabel(VehicleResetPage);
        EBStateM1lbl->setObjectName(QString::fromUtf8("EBStateM1lbl"));
        EBStateM1lbl->setGeometry(QRect(395, 150, 91, 51));
        EBStateM1lbl->setStyleSheet(QString::fromUtf8("color:white;\n"
"background-color:green;\n"
"border-left:3px solid white;\n"
"border-top:3px solid white;\n"
"\n"
"\n"
""));
        EBStateM1lbl->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(VehicleResetPage);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(150, 61, 691, 61));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"border:1px solid white;\n"
"border-radius:15px;\n"
"color:white;"));
        DirectTC2lbl = new QLabel(VehicleResetPage);
        DirectTC2lbl->setObjectName(QString::fromUtf8("DirectTC2lbl"));
        DirectTC2lbl->setGeometry(QRect(880, 280, 51, 51));
        DirectTC2lbl->setStyleSheet(QString::fromUtf8("\n"
"border-image: url(:/images/images/TC2traingraphDirection.bmp);"));
        CabTC1lbl = new QLabel(VehicleResetPage);
        CabTC1lbl->setObjectName(QString::fromUtf8("CabTC1lbl"));
        CabTC1lbl->setGeometry(QRect(120, 140, 31, 321));
        CabTC1lbl->setStyleSheet(QString::fromUtf8("border-image: url(:/images/images/TC1traingraphKeynoact.bmp);"));
        ACMStateTC1lbl = new QLabel(VehicleResetPage);
        ACMStateTC1lbl->setObjectName(QString::fromUtf8("ACMStateTC1lbl"));
        ACMStateTC1lbl->setGeometry(QRect(170, 400, 91, 51));
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
        ACMStateM1lbl->setGeometry(QRect(395, 400, 91, 51));
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
        label_3->setGeometry(QRect(150, 480, 691, 61));
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"border:1px solid white;\n"
"border-radius:15px;\n"
"color:white;"));
        ACMStateTC2lbl = new QLabel(VehicleResetPage);
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
        EBStateM2lbl = new QLabel(VehicleResetPage);
        EBStateM2lbl->setObjectName(QString::fromUtf8("EBStateM2lbl"));
        EBStateM2lbl->setGeometry(QRect(505, 150, 91, 51));
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
        CabTC2lbl->setGeometry(QRect(840, 140, 31, 321));
        CabTC2lbl->setStyleSheet(QString::fromUtf8("border-image: url(:/images/images/TC2traingraphKeyact.bmp);\n"
""));
        VVVFMP1Btn = new QPushButton(VehicleResetPage);
        VVVFMP1Btn->setObjectName(QString::fromUtf8("VVVFMP1Btn"));
        VVVFMP1Btn->setGeometry(QRect(450, 70, 91, 41));
        VVVFMP1Btn->setFocusPolicy(Qt::NoFocus);
        VVVFMP1Btn->setStyleSheet(QString::fromUtf8(""));
        ACMRESETTC1Btn = new QPushButton(VehicleResetPage);
        ACMRESETTC1Btn->setObjectName(QString::fromUtf8("ACMRESETTC1Btn"));
        ACMRESETTC1Btn->setGeometry(QRect(450, 490, 91, 41));
        ACMRESETTC1Btn->setFocusPolicy(Qt::NoFocus);
        layoutWidget = new QWidget(VehicleResetPage);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(160, 140, 671, 321));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        Train1Btn = new QPushButton(layoutWidget);
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

        Train3Btn = new QPushButton(layoutWidget);
        Train3Btn->setObjectName(QString::fromUtf8("Train3Btn"));
        sizePolicy.setHeightForWidth(Train3Btn->sizePolicy().hasHeightForWidth());
        Train3Btn->setSizePolicy(sizePolicy);
        Train3Btn->setFocusPolicy(Qt::NoFocus);
        Train3Btn->setStyleSheet(QString::fromUtf8("font: 24px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";color: black;background-color: rgb(255,255,153);border-top: 2px solid  rgb(0, 0, 0);border-left: 2px solid  rgb(0, 0, 0);border-bottom: 2px solid white;border-right: 2px solid white;\n"
""));

        gridLayout->addWidget(Train3Btn, 0, 2, 1, 1);

        Train4Btn = new QPushButton(layoutWidget);
        Train4Btn->setObjectName(QString::fromUtf8("Train4Btn"));
        sizePolicy.setHeightForWidth(Train4Btn->sizePolicy().hasHeightForWidth());
        Train4Btn->setSizePolicy(sizePolicy);
        Train4Btn->setFocusPolicy(Qt::NoFocus);
        Train4Btn->setStyleSheet(QString::fromUtf8("font: 24px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";color: black;background-color: rgb(255,255,153);border-top: 2px solid  rgb(0, 0, 0);border-left: 2px solid  rgb(0, 0, 0);border-bottom: 2px solid white;border-right: 2px solid white;\n"
""));

        gridLayout->addWidget(Train4Btn, 0, 3, 1, 1);

        Train5Btn = new QPushButton(layoutWidget);
        Train5Btn->setObjectName(QString::fromUtf8("Train5Btn"));
        sizePolicy.setHeightForWidth(Train5Btn->sizePolicy().hasHeightForWidth());
        Train5Btn->setSizePolicy(sizePolicy);
        Train5Btn->setFocusPolicy(Qt::NoFocus);
        Train5Btn->setStyleSheet(QString::fromUtf8("font: 24px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";color: black;background-color: rgb(255,255,153);border-top: 2px solid  rgb(0, 0, 0);border-left: 2px solid  rgb(0, 0, 0);border-bottom: 2px solid white;border-right: 2px solid white;\n"
"\n"
""));

        gridLayout->addWidget(Train5Btn, 0, 4, 1, 1);

        Train6Btn = new QPushButton(layoutWidget);
        Train6Btn->setObjectName(QString::fromUtf8("Train6Btn"));
        sizePolicy.setHeightForWidth(Train6Btn->sizePolicy().hasHeightForWidth());
        Train6Btn->setSizePolicy(sizePolicy);
        Train6Btn->setFocusPolicy(Qt::NoFocus);
        Train6Btn->setStyleSheet(QString::fromUtf8("font: 24px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";color: black;background-color: rgb(255,255,153);border-top: 2px solid  rgb(0, 0, 0);border-left: 2px solid  rgb(0, 0, 0);border-bottom: 2px solid white;border-right: 2px solid white;\n"
""));

        gridLayout->addWidget(Train6Btn, 0, 5, 1, 1);

        Train2Btn = new QPushButton(layoutWidget);
        Train2Btn->setObjectName(QString::fromUtf8("Train2Btn"));
        sizePolicy.setHeightForWidth(Train2Btn->sizePolicy().hasHeightForWidth());
        Train2Btn->setSizePolicy(sizePolicy);
        Train2Btn->setFocusPolicy(Qt::NoFocus);
        Train2Btn->setStyleSheet(QString::fromUtf8("font: 24px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";color: black;background-color: rgb(255,255,153);border-top: 2px solid  rgb(0, 0, 0);border-left: 2px solid  rgb(0, 0, 0);border-bottom: 2px solid white;border-right: 2px solid white;\n"
""));

        gridLayout->addWidget(Train2Btn, 0, 1, 1, 1);

        label->raise();
        DirectTC1lbl->raise();
        returnBtn->raise();
        label_2->raise();
        DirectTC2lbl->raise();
        CabTC1lbl->raise();
        label_3->raise();
        CabTC2lbl->raise();
        VVVFMP1Btn->raise();
        ACMRESETTC1Btn->raise();
        layoutWidget->raise();
        EBStateM2lbl->raise();
        EBStateMP2lbl->raise();
        EBStateM1lbl->raise();
        EBStateMP1lbl->raise();
        ACMStateTC2lbl->raise();
        ACMStateM1lbl->raise();
        ACMStateTC1lbl->raise();
        ACMStateM2lbl->raise();

        retranslateUi(VehicleResetPage);

        QMetaObject::connectSlotsByName(VehicleResetPage);
    } // setupUi

    void retranslateUi(QWidget *VehicleResetPage)
    {
        VehicleResetPage->setWindowTitle(QApplication::translate("VehicleResetPage", "Form", 0, QApplication::UnicodeUTF8));
        EBStateMP2lbl->setText(QApplication::translate("VehicleResetPage", "DCU", 0, QApplication::UnicodeUTF8));
        EBStateMP1lbl->setText(QApplication::translate("VehicleResetPage", "DCU", 0, QApplication::UnicodeUTF8));
        ACMStateM2lbl->setText(QApplication::translate("VehicleResetPage", "ACM", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        DirectTC1lbl->setText(QString());
        returnBtn->setText(QApplication::translate("VehicleResetPage", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
        EBStateM1lbl->setText(QApplication::translate("VehicleResetPage", "DCU", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("VehicleResetPage", "DCU\345\244\215\344\275\215", 0, QApplication::UnicodeUTF8));
        DirectTC2lbl->setText(QString());
        CabTC1lbl->setText(QString());
        ACMStateTC1lbl->setText(QApplication::translate("VehicleResetPage", "ACM", 0, QApplication::UnicodeUTF8));
        ACMStateM1lbl->setText(QApplication::translate("VehicleResetPage", "ACM", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("VehicleResetPage", " ACM\345\244\215\344\275\215", 0, QApplication::UnicodeUTF8));
        ACMStateTC2lbl->setText(QApplication::translate("VehicleResetPage", "ACM", 0, QApplication::UnicodeUTF8));
        EBStateM2lbl->setText(QApplication::translate("VehicleResetPage", "DCU", 0, QApplication::UnicodeUTF8));
        CabTC2lbl->setText(QString());
        VVVFMP1Btn->setText(QApplication::translate("VehicleResetPage", "\345\244\215\344\275\215", 0, QApplication::UnicodeUTF8));
        ACMRESETTC1Btn->setText(QApplication::translate("VehicleResetPage", "\345\244\215\344\275\215", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        Train1Btn->setWhatsThis(QApplication::translate("VehicleResetPage", "1", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        Train1Btn->setText(QApplication::translate("VehicleResetPage", "09011", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        Train3Btn->setWhatsThis(QApplication::translate("VehicleResetPage", "3", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        Train3Btn->setText(QApplication::translate("VehicleResetPage", "09013", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        Train4Btn->setWhatsThis(QApplication::translate("VehicleResetPage", "4", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        Train4Btn->setText(QApplication::translate("VehicleResetPage", "09014", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        Train5Btn->setWhatsThis(QApplication::translate("VehicleResetPage", "5", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        Train5Btn->setText(QApplication::translate("VehicleResetPage", "09015", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        Train6Btn->setWhatsThis(QApplication::translate("VehicleResetPage", "6", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        Train6Btn->setText(QApplication::translate("VehicleResetPage", "09016", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        Train2Btn->setWhatsThis(QApplication::translate("VehicleResetPage", "2", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        Train2Btn->setText(QApplication::translate("VehicleResetPage", "09012", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class VehicleResetPage: public Ui_VehicleResetPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VEHICLERESETPAGE_H
