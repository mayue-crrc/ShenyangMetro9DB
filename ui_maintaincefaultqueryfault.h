/********************************************************************************
** Form generated from reading UI file 'maintaincefaultqueryfault.ui'
**
** Created: Mon Apr 16 11:55:46 2018
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINTAINCEFAULTQUERYFAULT_H
#define UI_MAINTAINCEFAULTQUERYFAULT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MaintainceFaultQueryFault
{
public:
    QLabel *label_2;
    QPushButton *returnBtn;

    void setupUi(QWidget *MaintainceFaultQueryFault)
    {
        if (MaintainceFaultQueryFault->objectName().isEmpty())
            MaintainceFaultQueryFault->setObjectName(QString::fromUtf8("MaintainceFaultQueryFault"));
        MaintainceFaultQueryFault->resize(1024, 595);
        MaintainceFaultQueryFault->setStyleSheet(QString::fromUtf8("QWidget\n"
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
        label_2 = new QLabel(MaintainceFaultQueryFault);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(3, 520, 1018, 72));
        label_2->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(0, 0, 0);\n"
"\n"
"	border:1px solid white;\n"
""));
        returnBtn = new QPushButton(MaintainceFaultQueryFault);
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

        retranslateUi(MaintainceFaultQueryFault);

        QMetaObject::connectSlotsByName(MaintainceFaultQueryFault);
    } // setupUi

    void retranslateUi(QWidget *MaintainceFaultQueryFault)
    {
        MaintainceFaultQueryFault->setWindowTitle(QApplication::translate("MaintainceFaultQueryFault", "Form", 0, QApplication::UnicodeUTF8));
        label_2->setText(QString());
        returnBtn->setText(QApplication::translate("MaintainceFaultQueryFault", "\351\200\200\345\207\272", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MaintainceFaultQueryFault: public Ui_MaintainceFaultQueryFault {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINTAINCEFAULTQUERYFAULT_H
