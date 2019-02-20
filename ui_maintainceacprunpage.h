/********************************************************************************
** Form generated from reading UI file 'maintainceacprunpage.ui'
**
** Created: Wed Feb 20 20:36:00 2019
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINTAINCEACPRUNPAGE_H
#define UI_MAINTAINCEACPRUNPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MaintainceACPRunPage
{
public:
    QPushButton *returnBtn;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *MP1ACPTotaltimelbl;
    QLabel *MP1ACPStarttimelbl;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *MP2ACPStarttimelbl;
    QLabel *MP2ACPTotaltimelbl;
    QLabel *label_16;
    QLabel *label_18;
    QPushButton *MP1ClearBtn;
    QPushButton *MP2ClearBtn;

    void setupUi(QWidget *MaintainceACPRunPage)
    {
        if (MaintainceACPRunPage->objectName().isEmpty())
            MaintainceACPRunPage->setObjectName(QString::fromUtf8("MaintainceACPRunPage"));
        MaintainceACPRunPage->resize(1024, 595);
        MaintainceACPRunPage->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"	background-color:black;\n"
"\n"
"}\n"
"QLabel\n"
"{\n"
"font:20px  \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color:white;\n"
"border:2px solid white;\n"
"}\n"
"QPushButton\n"
"{\n"
"	border-radius:8px;\n"
"font: 20px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";color: white;background-color: rgb(0, 128, 128);border-top: 2px solid white;border-left: 2px solid white;\n"
"}"));
        returnBtn = new QPushButton(MaintainceACPRunPage);
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
        label = new QLabel(MaintainceACPRunPage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(3, 520, 1018, 72));
        label->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(0, 0, 0);\n"
"\n"
"	border:1px solid white;\n"
""));
        label_2 = new QLabel(MaintainceACPRunPage);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 50, 181, 71));
        label_2->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(MaintainceACPRunPage);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 120, 181, 71));
        label_3->setAlignment(Qt::AlignCenter);
        label_5 = new QLabel(MaintainceACPRunPage);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(340, 50, 101, 71));
        label_5->setAlignment(Qt::AlignCenter);
        label_6 = new QLabel(MaintainceACPRunPage);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(340, 120, 101, 71));
        label_6->setAlignment(Qt::AlignCenter);
        MP1ACPTotaltimelbl = new QLabel(MaintainceACPRunPage);
        MP1ACPTotaltimelbl->setObjectName(QString::fromUtf8("MP1ACPTotaltimelbl"));
        MP1ACPTotaltimelbl->setGeometry(QRect(210, 120, 131, 71));
        MP1ACPTotaltimelbl->setStyleSheet(QString::fromUtf8("background-color:blue;font:20px  \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        MP1ACPTotaltimelbl->setAlignment(Qt::AlignCenter);
        MP1ACPStarttimelbl = new QLabel(MaintainceACPRunPage);
        MP1ACPStarttimelbl->setObjectName(QString::fromUtf8("MP1ACPStarttimelbl"));
        MP1ACPStarttimelbl->setGeometry(QRect(210, 50, 131, 71));
        MP1ACPStarttimelbl->setStyleSheet(QString::fromUtf8("background-color:blue;font:20px  \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        MP1ACPStarttimelbl->setAlignment(Qt::AlignCenter);
        label_8 = new QLabel(MaintainceACPRunPage);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(440, 120, 101, 71));
        label_8->setAlignment(Qt::AlignCenter);
        label_9 = new QLabel(MaintainceACPRunPage);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(440, 50, 101, 71));
        label_9->setAlignment(Qt::AlignCenter);
        label_12 = new QLabel(MaintainceACPRunPage);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(540, 120, 101, 71));
        label_12->setAlignment(Qt::AlignCenter);
        label_13 = new QLabel(MaintainceACPRunPage);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(540, 50, 101, 71));
        label_13->setAlignment(Qt::AlignCenter);
        MP2ACPStarttimelbl = new QLabel(MaintainceACPRunPage);
        MP2ACPStarttimelbl->setObjectName(QString::fromUtf8("MP2ACPStarttimelbl"));
        MP2ACPStarttimelbl->setGeometry(QRect(734, 50, 131, 71));
        MP2ACPStarttimelbl->setStyleSheet(QString::fromUtf8("background-color:blue;font:20px  \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        MP2ACPStarttimelbl->setAlignment(Qt::AlignCenter);
        MP2ACPTotaltimelbl = new QLabel(MaintainceACPRunPage);
        MP2ACPTotaltimelbl->setObjectName(QString::fromUtf8("MP2ACPTotaltimelbl"));
        MP2ACPTotaltimelbl->setGeometry(QRect(734, 120, 131, 71));
        MP2ACPTotaltimelbl->setStyleSheet(QString::fromUtf8("background-color:blue;font:20px  \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        MP2ACPTotaltimelbl->setAlignment(Qt::AlignCenter);
        label_16 = new QLabel(MaintainceACPRunPage);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(640, 50, 101, 71));
        label_16->setAlignment(Qt::AlignCenter);
        label_18 = new QLabel(MaintainceACPRunPage);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(640, 120, 101, 71));
        label_18->setAlignment(Qt::AlignCenter);
        MP1ClearBtn = new QPushButton(MaintainceACPRunPage);
        MP1ClearBtn->setObjectName(QString::fromUtf8("MP1ClearBtn"));
        MP1ClearBtn->setGeometry(QRect(230, 210, 98, 91));
        MP1ClearBtn->setFocusPolicy(Qt::NoFocus);
        MP2ClearBtn = new QPushButton(MaintainceACPRunPage);
        MP2ClearBtn->setObjectName(QString::fromUtf8("MP2ClearBtn"));
        MP2ClearBtn->setGeometry(QRect(750, 210, 98, 91));
        MP2ClearBtn->setFocusPolicy(Qt::NoFocus);
        label->raise();
        returnBtn->raise();
        label_2->raise();
        label_3->raise();
        label_5->raise();
        label_6->raise();
        MP1ACPTotaltimelbl->raise();
        MP1ACPStarttimelbl->raise();
        label_8->raise();
        label_9->raise();
        label_12->raise();
        label_13->raise();
        MP2ACPStarttimelbl->raise();
        MP2ACPTotaltimelbl->raise();
        label_16->raise();
        label_18->raise();
        MP1ClearBtn->raise();
        MP2ClearBtn->raise();

        retranslateUi(MaintainceACPRunPage);

        QMetaObject::connectSlotsByName(MaintainceACPRunPage);
    } // setupUi

    void retranslateUi(QWidget *MaintainceACPRunPage)
    {
        MaintainceACPRunPage->setWindowTitle(QApplication::translate("MaintainceACPRunPage", "Form", 0, QApplication::UnicodeUTF8));
        returnBtn->setText(QApplication::translate("MaintainceACPRunPage", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        label_2->setText(QApplication::translate("MaintainceACPRunPage", "\350\265\267\345\247\213\346\227\266\351\227\264", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MaintainceACPRunPage", "\345\220\210\350\256\241\350\277\220\350\241\214\346\227\266\351\227\264(min)", 0, QApplication::UnicodeUTF8));
        label_5->setText(QString());
        label_6->setText(QString());
        MP1ACPTotaltimelbl->setText(QString());
        MP1ACPStarttimelbl->setText(QString());
        label_8->setText(QString());
        label_9->setText(QString());
        label_12->setText(QString());
        label_13->setText(QString());
        MP2ACPStarttimelbl->setText(QString());
        MP2ACPTotaltimelbl->setText(QString());
        label_16->setText(QString());
        label_18->setText(QString());
        MP1ClearBtn->setText(QApplication::translate("MaintainceACPRunPage", "\350\256\241\346\225\260\n"
"\346\270\205\351\233\266", 0, QApplication::UnicodeUTF8));
        MP2ClearBtn->setText(QApplication::translate("MaintainceACPRunPage", "\350\256\241\346\225\260\n"
"\346\270\205\351\233\266", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MaintainceACPRunPage: public Ui_MaintainceACPRunPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINTAINCEACPRUNPAGE_H
