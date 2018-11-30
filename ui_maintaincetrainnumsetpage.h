/********************************************************************************
** Form generated from reading UI file 'maintaincetrainnumsetpage.ui'
**
** Created: Wed Oct 24 13:51:39 2018
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINTAINCETRAINNUMSETPAGE_H
#define UI_MAINTAINCETRAINNUMSETPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MaintainceTrainNumSetPage
{
public:
    QPushButton *returnBtn;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *CurrentNumlbl;
    QLabel *SettingNumlbl;
    QPushButton *ConfirmBtn;

    void setupUi(QWidget *MaintainceTrainNumSetPage)
    {
        if (MaintainceTrainNumSetPage->objectName().isEmpty())
            MaintainceTrainNumSetPage->setObjectName(QString::fromUtf8("MaintainceTrainNumSetPage"));
        MaintainceTrainNumSetPage->resize(1024, 595);
        MaintainceTrainNumSetPage->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"	background-color:black;\n"
"}\n"
"QPushButton\n"
"{\n"
"	border-radius:8px;\n"
"background:qlineargradient(spread:pad,x1:0,y1:0,x2:0,y2:0.4,stop:0 rgba(150,215,230,255),stop:0.4 rgba(100,170,200,255)\n"
"spread:pad,x1:0,y1:0.4,x2:0,y2:1,stop:0.4 rgba(52,136,159,255),stop:1 rgba(94,188,216,255));\n"
"color:rgb(23,176,176);\n"
"font:28px,\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"border: 1px solid transparent;\n"
"}\n"
"QLabel\n"
"{\n"
"	color:white;\n"
"	font:28px \"\345\276\256\350\275\257\351\233\205\351\273\221\"\n"
"}"));
        returnBtn = new QPushButton(MaintainceTrainNumSetPage);
        returnBtn->setObjectName(QString::fromUtf8("returnBtn"));
        returnBtn->setGeometry(QRect(907, 530, 100, 50));
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
        label = new QLabel(MaintainceTrainNumSetPage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(3, 520, 1018, 72));
        label->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(0, 0, 0);\n"
"\n"
"	border:1px solid white;\n"
""));
        label_2 = new QLabel(MaintainceTrainNumSetPage);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(350, 30, 111, 61));
        label_3 = new QLabel(MaintainceTrainNumSetPage);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(350, 130, 111, 61));
        CurrentNumlbl = new QLabel(MaintainceTrainNumSetPage);
        CurrentNumlbl->setObjectName(QString::fromUtf8("CurrentNumlbl"));
        CurrentNumlbl->setGeometry(QRect(490, 30, 151, 61));
        CurrentNumlbl->setStyleSheet(QString::fromUtf8("border:2px solid white;\n"
""));
        CurrentNumlbl->setAlignment(Qt::AlignCenter);
        SettingNumlbl = new QLabel(MaintainceTrainNumSetPage);
        SettingNumlbl->setObjectName(QString::fromUtf8("SettingNumlbl"));
        SettingNumlbl->setGeometry(QRect(490, 130, 151, 61));
        SettingNumlbl->setStyleSheet(QString::fromUtf8("border:2px solid white;\n"
"background-color:blue;\n"
""));
        SettingNumlbl->setAlignment(Qt::AlignCenter);
        ConfirmBtn = new QPushButton(MaintainceTrainNumSetPage);
        ConfirmBtn->setObjectName(QString::fromUtf8("ConfirmBtn"));
        ConfirmBtn->setGeometry(QRect(370, 420, 270, 50));
        ConfirmBtn->setFocusPolicy(Qt::NoFocus);
        ConfirmBtn->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
" color:white;font:18px,\"\345\276\256\350\275\257\351\233\205\351\273\221\";border-top:2px solid  white;border-left: 2px solid white;border-bottom:2px solid transparent;border-right: 2px solid transparent;background:qlineargradient(spread:pad,x1:0,y1:0,x2:0,y2:1,stop:0 rgba(150,228,250,255),stop:0.7 rgba(20,108,140,255) ,stop:1 rgba(100,238,240,255));\n"
"}"));
        label->raise();
        returnBtn->raise();
        label_2->raise();
        label_3->raise();
        CurrentNumlbl->raise();
        SettingNumlbl->raise();
        ConfirmBtn->raise();

        retranslateUi(MaintainceTrainNumSetPage);

        QMetaObject::connectSlotsByName(MaintainceTrainNumSetPage);
    } // setupUi

    void retranslateUi(QWidget *MaintainceTrainNumSetPage)
    {
        MaintainceTrainNumSetPage->setWindowTitle(QApplication::translate("MaintainceTrainNumSetPage", "Form", 0, QApplication::UnicodeUTF8));
        returnBtn->setText(QApplication::translate("MaintainceTrainNumSetPage", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        label_2->setText(QApplication::translate("MaintainceTrainNumSetPage", "\345\216\237\350\275\246\345\217\267\357\274\232", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MaintainceTrainNumSetPage", "\346\226\260\350\275\246\345\217\267\357\274\232", 0, QApplication::UnicodeUTF8));
        CurrentNumlbl->setText(QString());
        SettingNumlbl->setText(QString());
        ConfirmBtn->setText(QApplication::translate("MaintainceTrainNumSetPage", "\347\241\256\350\256\244", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MaintainceTrainNumSetPage: public Ui_MaintainceTrainNumSetPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINTAINCETRAINNUMSETPAGE_H
