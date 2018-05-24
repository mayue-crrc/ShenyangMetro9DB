/********************************************************************************
** Form generated from reading UI file 'maintaincerundistancepage.ui'
**
** Created: Thu Apr 19 11:15:44 2018
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINTAINCERUNDISTANCEPAGE_H
#define UI_MAINTAINCERUNDISTANCEPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MaintainceRunDistancePage
{
public:
    QPushButton *returnBtn;
    QLabel *label;
    QLabel *StartTImelbl;
    QLabel *RundistanceADaylbl;
    QLabel *RuntimeADaylbl;
    QLabel *RundistanceAcclbl;
    QLabel *lbl;
    QLabel *lbl2;
    QLabel *lbl2_2;
    QLabel *lbl2_3;

    void setupUi(QWidget *MaintainceRunDistancePage)
    {
        if (MaintainceRunDistancePage->objectName().isEmpty())
            MaintainceRunDistancePage->setObjectName(QString::fromUtf8("MaintainceRunDistancePage"));
        MaintainceRunDistancePage->resize(1024, 595);
        MaintainceRunDistancePage->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"	background-color:black;\n"
"}\n"
"QLabel\n"
"{\n"
"	color:rgb(23,176,176);\n"
"	border:2px solid white;\n"
"font: 28px \"\345\276\256\350\275\257\351\233\205\351\273\221\"\n"
"}"));
        returnBtn = new QPushButton(MaintainceRunDistancePage);
        returnBtn->setObjectName(QString::fromUtf8("returnBtn"));
        returnBtn->setGeometry(QRect(910, 530, 100, 50));
        returnBtn->setFocusPolicy(Qt::NoFocus);
        returnBtn->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	font: 20px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: white;\n"
"		border-radius:8px;\n"
"background-color: rgb(0, 128, 0);\n"
"    border-top: 2px solid white;\n"
"	border-left: 2px solid white;\n"
"\n"
"}"));
        label = new QLabel(MaintainceRunDistancePage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(3, 520, 1018, 72));
        label->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(0, 0, 0);\n"
"\n"
"	border:1px solid white;\n"
""));
        StartTImelbl = new QLabel(MaintainceRunDistancePage);
        StartTImelbl->setObjectName(QString::fromUtf8("StartTImelbl"));
        StartTImelbl->setGeometry(QRect(410, 80, 400, 60));
        StartTImelbl->setAlignment(Qt::AlignCenter);
        RundistanceADaylbl = new QLabel(MaintainceRunDistancePage);
        RundistanceADaylbl->setObjectName(QString::fromUtf8("RundistanceADaylbl"));
        RundistanceADaylbl->setGeometry(QRect(410, 138, 400, 60));
        RundistanceADaylbl->setAlignment(Qt::AlignCenter);
        RuntimeADaylbl = new QLabel(MaintainceRunDistancePage);
        RuntimeADaylbl->setObjectName(QString::fromUtf8("RuntimeADaylbl"));
        RuntimeADaylbl->setGeometry(QRect(410, 196, 400, 60));
        RuntimeADaylbl->setAlignment(Qt::AlignCenter);
        RundistanceAcclbl = new QLabel(MaintainceRunDistancePage);
        RundistanceAcclbl->setObjectName(QString::fromUtf8("RundistanceAcclbl"));
        RundistanceAcclbl->setGeometry(QRect(410, 254, 400, 60));
        RundistanceAcclbl->setAlignment(Qt::AlignCenter);
        lbl = new QLabel(MaintainceRunDistancePage);
        lbl->setObjectName(QString::fromUtf8("lbl"));
        lbl->setGeometry(QRect(220, 80, 191, 60));
        lbl->setStyleSheet(QString::fromUtf8("color:white;\n"
"font:22px;\n"
""));
        lbl->setAlignment(Qt::AlignCenter);
        lbl2 = new QLabel(MaintainceRunDistancePage);
        lbl2->setObjectName(QString::fromUtf8("lbl2"));
        lbl2->setGeometry(QRect(220, 138, 191, 60));
        lbl2->setStyleSheet(QString::fromUtf8("color:white;\n"
"font:22px\n"
"\n"
""));
        lbl2->setAlignment(Qt::AlignCenter);
        lbl2_2 = new QLabel(MaintainceRunDistancePage);
        lbl2_2->setObjectName(QString::fromUtf8("lbl2_2"));
        lbl2_2->setGeometry(QRect(220, 196, 191, 60));
        lbl2_2->setStyleSheet(QString::fromUtf8("color:white;\n"
"font:22px\n"
"\n"
""));
        lbl2_2->setAlignment(Qt::AlignCenter);
        lbl2_3 = new QLabel(MaintainceRunDistancePage);
        lbl2_3->setObjectName(QString::fromUtf8("lbl2_3"));
        lbl2_3->setGeometry(QRect(220, 254, 191, 60));
        lbl2_3->setStyleSheet(QString::fromUtf8("color:white;\n"
"font:22px\n"
"\n"
""));
        lbl2_3->setAlignment(Qt::AlignCenter);
        label->raise();
        returnBtn->raise();
        StartTImelbl->raise();
        RundistanceADaylbl->raise();
        RuntimeADaylbl->raise();
        RundistanceAcclbl->raise();
        lbl->raise();
        lbl2->raise();
        lbl2_2->raise();
        lbl2_3->raise();

        retranslateUi(MaintainceRunDistancePage);

        QMetaObject::connectSlotsByName(MaintainceRunDistancePage);
    } // setupUi

    void retranslateUi(QWidget *MaintainceRunDistancePage)
    {
        MaintainceRunDistancePage->setWindowTitle(QApplication::translate("MaintainceRunDistancePage", "Form", 0, QApplication::UnicodeUTF8));
        returnBtn->setText(QApplication::translate("MaintainceRunDistancePage", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        StartTImelbl->setText(QString());
        RundistanceADaylbl->setText(QString());
        RuntimeADaylbl->setText(QString());
        RundistanceAcclbl->setText(QString());
        lbl->setText(QApplication::translate("MaintainceRunDistancePage", "\350\265\267\345\247\213\346\227\266\351\227\264", 0, QApplication::UnicodeUTF8));
        lbl2->setText(QApplication::translate("MaintainceRunDistancePage", "\346\227\245\350\241\214\351\251\266\350\267\235\347\246\273\n"
"\357\274\210\345\215\203\347\261\263/\345\244\251\357\274\211", 0, QApplication::UnicodeUTF8));
        lbl2_2->setText(QApplication::translate("MaintainceRunDistancePage", "\346\227\245\350\241\214\351\251\266\346\227\266\351\227\264\n"
"\357\274\210\345\210\206/\345\244\251\357\274\211", 0, QApplication::UnicodeUTF8));
        lbl2_3->setText(QApplication::translate("MaintainceRunDistancePage", "\345\220\210\350\256\241\350\241\214\351\251\266\350\267\235\347\246\273\n"
"\357\274\210\345\215\203\347\261\263\357\274\211", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MaintainceRunDistancePage: public Ui_MaintainceRunDistancePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINTAINCERUNDISTANCEPAGE_H
