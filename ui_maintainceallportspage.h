/********************************************************************************
** Form generated from reading UI file 'maintainceallportspage.ui'
**
** Created: Tue Jan 29 08:13:52 2019
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINTAINCEALLPORTSPAGE_H
#define UI_MAINTAINCEALLPORTSPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MaintainceAllPortsPage
{
public:
    QPushButton *returnBtn;
    QPushButton *CCUABtn;
    QPushButton *CCUBBtn;
    QPushButton *RIOMBtn;
    QPushButton *HMIBtn;
    QPushButton *ERMBtn;
    QPushButton *ACUBtn;
    QPushButton *EBCUBtn;
    QPushButton *PIDSBtn;
    QPushButton *EDCUBtn;
    QPushButton *CCUDBtn;
    QPushButton *SIVBtn;
    QPushButton *WMSATCBtn;
    QPushButton *DCUBtn;

    void setupUi(QWidget *MaintainceAllPortsPage)
    {
        if (MaintainceAllPortsPage->objectName().isEmpty())
            MaintainceAllPortsPage->setObjectName(QString::fromUtf8("MaintainceAllPortsPage"));
        MaintainceAllPortsPage->resize(1024, 768);
        MaintainceAllPortsPage->setMinimumSize(QSize(1024, 686));
        MaintainceAllPortsPage->setStyleSheet(QString::fromUtf8("QWidget\n"
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
"}"));
        returnBtn = new QPushButton(MaintainceAllPortsPage);
        returnBtn->setObjectName(QString::fromUtf8("returnBtn"));
        returnBtn->setGeometry(QRect(910, 703, 100, 50));
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
        CCUABtn = new QPushButton(MaintainceAllPortsPage);
        CCUABtn->setObjectName(QString::fromUtf8("CCUABtn"));
        CCUABtn->setGeometry(QRect(930, 20, 81, 41));
        CCUABtn->setFocusPolicy(Qt::NoFocus);
        CCUABtn->setStyleSheet(QString::fromUtf8(""));
        CCUBBtn = new QPushButton(MaintainceAllPortsPage);
        CCUBBtn->setObjectName(QString::fromUtf8("CCUBBtn"));
        CCUBBtn->setGeometry(QRect(930, 70, 81, 41));
        CCUBBtn->setFocusPolicy(Qt::NoFocus);
        CCUBBtn->setStyleSheet(QString::fromUtf8(""));
        RIOMBtn = new QPushButton(MaintainceAllPortsPage);
        RIOMBtn->setObjectName(QString::fromUtf8("RIOMBtn"));
        RIOMBtn->setGeometry(QRect(930, 120, 81, 41));
        RIOMBtn->setFocusPolicy(Qt::NoFocus);
        RIOMBtn->setStyleSheet(QString::fromUtf8(""));
        HMIBtn = new QPushButton(MaintainceAllPortsPage);
        HMIBtn->setObjectName(QString::fromUtf8("HMIBtn"));
        HMIBtn->setGeometry(QRect(930, 170, 81, 41));
        HMIBtn->setFocusPolicy(Qt::NoFocus);
        HMIBtn->setStyleSheet(QString::fromUtf8(""));
        ERMBtn = new QPushButton(MaintainceAllPortsPage);
        ERMBtn->setObjectName(QString::fromUtf8("ERMBtn"));
        ERMBtn->setGeometry(QRect(930, 220, 81, 41));
        ERMBtn->setFocusPolicy(Qt::NoFocus);
        ERMBtn->setStyleSheet(QString::fromUtf8(""));
        ACUBtn = new QPushButton(MaintainceAllPortsPage);
        ACUBtn->setObjectName(QString::fromUtf8("ACUBtn"));
        ACUBtn->setGeometry(QRect(930, 370, 81, 41));
        ACUBtn->setFocusPolicy(Qt::NoFocus);
        ACUBtn->setStyleSheet(QString::fromUtf8(""));
        EBCUBtn = new QPushButton(MaintainceAllPortsPage);
        EBCUBtn->setObjectName(QString::fromUtf8("EBCUBtn"));
        EBCUBtn->setGeometry(QRect(930, 420, 81, 41));
        EBCUBtn->setFocusPolicy(Qt::NoFocus);
        EBCUBtn->setStyleSheet(QString::fromUtf8(""));
        PIDSBtn = new QPushButton(MaintainceAllPortsPage);
        PIDSBtn->setObjectName(QString::fromUtf8("PIDSBtn"));
        PIDSBtn->setGeometry(QRect(930, 470, 81, 41));
        PIDSBtn->setFocusPolicy(Qt::NoFocus);
        PIDSBtn->setStyleSheet(QString::fromUtf8(""));
        EDCUBtn = new QPushButton(MaintainceAllPortsPage);
        EDCUBtn->setObjectName(QString::fromUtf8("EDCUBtn"));
        EDCUBtn->setGeometry(QRect(930, 520, 81, 41));
        EDCUBtn->setFocusPolicy(Qt::NoFocus);
        EDCUBtn->setStyleSheet(QString::fromUtf8(""));
        CCUDBtn = new QPushButton(MaintainceAllPortsPage);
        CCUDBtn->setObjectName(QString::fromUtf8("CCUDBtn"));
        CCUDBtn->setGeometry(QRect(930, 570, 81, 41));
        CCUDBtn->setFocusPolicy(Qt::NoFocus);
        CCUDBtn->setStyleSheet(QString::fromUtf8(""));
        SIVBtn = new QPushButton(MaintainceAllPortsPage);
        SIVBtn->setObjectName(QString::fromUtf8("SIVBtn"));
        SIVBtn->setGeometry(QRect(930, 270, 81, 41));
        SIVBtn->setFocusPolicy(Qt::NoFocus);
        SIVBtn->setStyleSheet(QString::fromUtf8(""));
        WMSATCBtn = new QPushButton(MaintainceAllPortsPage);
        WMSATCBtn->setObjectName(QString::fromUtf8("WMSATCBtn"));
        WMSATCBtn->setGeometry(QRect(930, 620, 81, 51));
        WMSATCBtn->setFocusPolicy(Qt::NoFocus);
        WMSATCBtn->setStyleSheet(QString::fromUtf8(""));
        DCUBtn = new QPushButton(MaintainceAllPortsPage);
        DCUBtn->setObjectName(QString::fromUtf8("DCUBtn"));
        DCUBtn->setGeometry(QRect(930, 320, 81, 41));
        DCUBtn->setFocusPolicy(Qt::NoFocus);
        DCUBtn->setStyleSheet(QString::fromUtf8(""));

        retranslateUi(MaintainceAllPortsPage);

        QMetaObject::connectSlotsByName(MaintainceAllPortsPage);
    } // setupUi

    void retranslateUi(QWidget *MaintainceAllPortsPage)
    {
        MaintainceAllPortsPage->setWindowTitle(QApplication::translate("MaintainceAllPortsPage", "Form", 0, QApplication::UnicodeUTF8));
        returnBtn->setText(QApplication::translate("MaintainceAllPortsPage", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
        CCUABtn->setText(QApplication::translate("MaintainceAllPortsPage", "CCUA", 0, QApplication::UnicodeUTF8));
        CCUBBtn->setText(QApplication::translate("MaintainceAllPortsPage", "CCUB", 0, QApplication::UnicodeUTF8));
        RIOMBtn->setText(QApplication::translate("MaintainceAllPortsPage", "RIOM", 0, QApplication::UnicodeUTF8));
        HMIBtn->setText(QApplication::translate("MaintainceAllPortsPage", "HMI", 0, QApplication::UnicodeUTF8));
        ERMBtn->setText(QApplication::translate("MaintainceAllPortsPage", "ERM", 0, QApplication::UnicodeUTF8));
        ACUBtn->setText(QApplication::translate("MaintainceAllPortsPage", "ACU", 0, QApplication::UnicodeUTF8));
        EBCUBtn->setText(QApplication::translate("MaintainceAllPortsPage", "BCU", 0, QApplication::UnicodeUTF8));
        PIDSBtn->setText(QApplication::translate("MaintainceAllPortsPage", "PIDS", 0, QApplication::UnicodeUTF8));
        EDCUBtn->setText(QApplication::translate("MaintainceAllPortsPage", "EDCU", 0, QApplication::UnicodeUTF8));
        CCUDBtn->setText(QApplication::translate("MaintainceAllPortsPage", "CCU-D", 0, QApplication::UnicodeUTF8));
        SIVBtn->setText(QApplication::translate("MaintainceAllPortsPage", "ACM", 0, QApplication::UnicodeUTF8));
        WMSATCBtn->setText(QApplication::translate("MaintainceAllPortsPage", "WMS\n"
"ATC", 0, QApplication::UnicodeUTF8));
        DCUBtn->setText(QApplication::translate("MaintainceAllPortsPage", "DCU", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MaintainceAllPortsPage: public Ui_MaintainceAllPortsPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINTAINCEALLPORTSPAGE_H
