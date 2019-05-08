/********************************************************************************
** Form generated from reading UI file 'maintaincehmiinitsetpage.ui'
**
** Created: Wed May 8 08:13:31 2019
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINTAINCEHMIINITSETPAGE_H
#define UI_MAINTAINCEHMIINITSETPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MaintainceHMIInitsetPage
{
public:
    QPushButton *TC1Btn;
    QPushButton *TC2Btn;
    QLabel *backgroundlbl;
    QLabel *label;
    QPushButton *returnBtn;
    QPushButton *HMIReboot;
    QLabel *TC1HMIDBVlbl;
    QLabel *TC2HMIDBVlbl;

    void setupUi(QWidget *MaintainceHMIInitsetPage)
    {
        if (MaintainceHMIInitsetPage->objectName().isEmpty())
            MaintainceHMIInitsetPage->setObjectName(QString::fromUtf8("MaintainceHMIInitsetPage"));
        MaintainceHMIInitsetPage->resize(1024, 686);
        MaintainceHMIInitsetPage->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"	background-color:black;\n"
"}\n"
"QPushButton\n"
"{\n"
"		border-radius:8px;\n"
"\n"
"}"));
        TC1Btn = new QPushButton(MaintainceHMIInitsetPage);
        TC1Btn->setObjectName(QString::fromUtf8("TC1Btn"));
        TC1Btn->setGeometry(QRect(140, 200, 101, 51));
        TC1Btn->setFocusPolicy(Qt::NoFocus);
        TC1Btn->setStyleSheet(QString::fromUtf8("font: 24px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: white;background-color: rgb(0, 128, 128);\n"
"border: 2px solid white;\n"
""));
        TC2Btn = new QPushButton(MaintainceHMIInitsetPage);
        TC2Btn->setObjectName(QString::fromUtf8("TC2Btn"));
        TC2Btn->setGeometry(QRect(790, 200, 101, 51));
        TC2Btn->setFocusPolicy(Qt::NoFocus);
        TC2Btn->setStyleSheet(QString::fromUtf8("font: 20px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: white;background-color: rgb(0, 128, 128);\n"
"border: 2px solid white;\n"
""));
        backgroundlbl = new QLabel(MaintainceHMIInitsetPage);
        backgroundlbl->setObjectName(QString::fromUtf8("backgroundlbl"));
        backgroundlbl->setGeometry(QRect(112, 180, 800, 161));
        backgroundlbl->setStyleSheet(QString::fromUtf8("color: white;\n"
"border: 2px solid  white;\n"
"border-radius: 12px;\n"
"font:36px ;\n"
""));
        backgroundlbl->setTextFormat(Qt::AutoText);
        backgroundlbl->setAlignment(Qt::AlignCenter);
        label = new QLabel(MaintainceHMIInitsetPage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(3, 610, 1018, 72));
        label->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(0, 0, 0);\n"
"\n"
"	border:1px solid white;\n"
""));
        returnBtn = new QPushButton(MaintainceHMIInitsetPage);
        returnBtn->setObjectName(QString::fromUtf8("returnBtn"));
        returnBtn->setGeometry(QRect(915, 620, 100, 50));
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
        HMIReboot = new QPushButton(MaintainceHMIInitsetPage);
        HMIReboot->setObjectName(QString::fromUtf8("HMIReboot"));
        HMIReboot->setGeometry(QRect(450, 480, 161, 51));
        HMIReboot->setFocusPolicy(Qt::NoFocus);
        HMIReboot->setStyleSheet(QString::fromUtf8("font: 24px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: white;background-color: rgb(0, 128, 128);\n"
"border: 2px solid white;\n"
""));
        TC1HMIDBVlbl = new QLabel(MaintainceHMIInitsetPage);
        TC1HMIDBVlbl->setObjectName(QString::fromUtf8("TC1HMIDBVlbl"));
        TC1HMIDBVlbl->setGeometry(QRect(100, 140, 221, 31));
        TC1HMIDBVlbl->setStyleSheet(QString::fromUtf8("color: white;\n"
"font:16px ;\n"
""));
        TC1HMIDBVlbl->setTextFormat(Qt::AutoText);
        TC1HMIDBVlbl->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        TC2HMIDBVlbl = new QLabel(MaintainceHMIInitsetPage);
        TC2HMIDBVlbl->setObjectName(QString::fromUtf8("TC2HMIDBVlbl"));
        TC2HMIDBVlbl->setGeometry(QRect(740, 140, 221, 31));
        TC2HMIDBVlbl->setStyleSheet(QString::fromUtf8("color: white;\n"
"font:16px ;\n"
""));
        TC2HMIDBVlbl->setTextFormat(Qt::AutoText);
        TC2HMIDBVlbl->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        backgroundlbl->raise();
        TC1Btn->raise();
        TC2Btn->raise();
        label->raise();
        returnBtn->raise();
        HMIReboot->raise();
        TC1HMIDBVlbl->raise();
        TC2HMIDBVlbl->raise();

        retranslateUi(MaintainceHMIInitsetPage);

        QMetaObject::connectSlotsByName(MaintainceHMIInitsetPage);
    } // setupUi

    void retranslateUi(QWidget *MaintainceHMIInitsetPage)
    {
        MaintainceHMIInitsetPage->setWindowTitle(QApplication::translate("MaintainceHMIInitsetPage", "Form", 0, QApplication::UnicodeUTF8));
        TC1Btn->setText(QApplication::translate("MaintainceHMIInitsetPage", "TC1", 0, QApplication::UnicodeUTF8));
        TC2Btn->setText(QApplication::translate("MaintainceHMIInitsetPage", "TC2", 0, QApplication::UnicodeUTF8));
        backgroundlbl->setText(QString());
        label->setText(QApplication::translate("MaintainceHMIInitsetPage", "TextLabel", 0, QApplication::UnicodeUTF8));
        returnBtn->setText(QApplication::translate("MaintainceHMIInitsetPage", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
        HMIReboot->setText(QApplication::translate("MaintainceHMIInitsetPage", "\351\207\215\345\220\257HMI", 0, QApplication::UnicodeUTF8));
        TC1HMIDBVlbl->setText(QApplication::translate("MaintainceHMIInitsetPage", "TC1 HMI DBVersion:", 0, QApplication::UnicodeUTF8));
        TC2HMIDBVlbl->setText(QApplication::translate("MaintainceHMIInitsetPage", "TC2 HMI DBVersion:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MaintainceHMIInitsetPage: public Ui_MaintainceHMIInitsetPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINTAINCEHMIINITSETPAGE_H
