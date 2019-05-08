/********************************************************************************
** Form generated from reading UI file 'header.ui'
**
** Created: Wed May 8 08:13:31 2019
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HEADER_H
#define UI_HEADER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Header
{
public:
    QLabel *PageName;
    QLabel *Label1;
    QLabel *DrivingMode;
    QLabel *Label2;
    QLabel *NetVoltage;
    QLabel *Label3;
    QLabel *Speed;
    QLabel *Label4;
    QLabel *Level;
    QLabel *Label5;
    QLabel *CurrentStation;
    QLabel *Label6;
    QLabel *NextStation;
    QLabel *DateTime;
    QPushButton *HelpItemBtn;
    QPushButton *CurrentFaultBtn;
    QPushButton *LogoBtn;

    void setupUi(QWidget *Header)
    {
        if (Header->objectName().isEmpty())
            Header->setObjectName(QString::fromUtf8("Header"));
        Header->resize(1024, 82);
        Header->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"	background-color: black;\n"
"}\n"
"\n"
"QLabel\n"
"{\n"
"	color: white;\n"
"	font: 20px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}"));
        PageName = new QLabel(Header);
        PageName->setObjectName(QString::fromUtf8("PageName"));
        PageName->setGeometry(QRect(73, 1, 72, 80));
        PageName->setStyleSheet(QString::fromUtf8("border: 2px solid rgb(255, 255, 255);\n"
"font: 22px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        PageName->setAlignment(Qt::AlignCenter);
        PageName->setWordWrap(true);
        Label1 = new QLabel(Header);
        Label1->setObjectName(QString::fromUtf8("Label1"));
        Label1->setGeometry(QRect(144, 1, 90, 40));
        Label1->setStyleSheet(QString::fromUtf8("border: 2px solid rgb(255, 255, 255);\n"
""));
        Label1->setAlignment(Qt::AlignCenter);
        DrivingMode = new QLabel(Header);
        DrivingMode->setObjectName(QString::fromUtf8("DrivingMode"));
        DrivingMode->setGeometry(QRect(144, 41, 90, 40));
        DrivingMode->setStyleSheet(QString::fromUtf8("border: 2px solid rgb(255, 255, 255);\n"
"	font: 16px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color:yellow;"));
        DrivingMode->setAlignment(Qt::AlignCenter);
        Label2 = new QLabel(Header);
        Label2->setObjectName(QString::fromUtf8("Label2"));
        Label2->setGeometry(QRect(234, 1, 72, 40));
        Label2->setStyleSheet(QString::fromUtf8("border: 2px solid rgb(255, 255, 255);\n"
""));
        Label2->setAlignment(Qt::AlignCenter);
        NetVoltage = new QLabel(Header);
        NetVoltage->setObjectName(QString::fromUtf8("NetVoltage"));
        NetVoltage->setGeometry(QRect(234, 41, 72, 40));
        NetVoltage->setStyleSheet(QString::fromUtf8("border: 2px solid rgb(255, 255, 255);\n"
"	font: 16px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color:yellow;"));
        NetVoltage->setAlignment(Qt::AlignCenter);
        Label3 = new QLabel(Header);
        Label3->setObjectName(QString::fromUtf8("Label3"));
        Label3->setGeometry(QRect(306, 1, 84, 40));
        Label3->setStyleSheet(QString::fromUtf8("border: 2px solid rgb(255, 255, 255);\n"
""));
        Label3->setAlignment(Qt::AlignCenter);
        Speed = new QLabel(Header);
        Speed->setObjectName(QString::fromUtf8("Speed"));
        Speed->setGeometry(QRect(306, 41, 84, 40));
        Speed->setStyleSheet(QString::fromUtf8("border: 2px solid rgb(255, 255, 255);\n"
"	font: 16px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color:yellow;"));
        Speed->setAlignment(Qt::AlignCenter);
        Label4 = new QLabel(Header);
        Label4->setObjectName(QString::fromUtf8("Label4"));
        Label4->setGeometry(QRect(390, 1, 90, 40));
        Label4->setStyleSheet(QString::fromUtf8("border: 2px solid rgb(255, 255, 255);\n"
""));
        Label4->setAlignment(Qt::AlignCenter);
        Level = new QLabel(Header);
        Level->setObjectName(QString::fromUtf8("Level"));
        Level->setGeometry(QRect(390, 41, 90, 40));
        Level->setStyleSheet(QString::fromUtf8("border: 2px solid rgb(255, 255, 255);\n"
"	font: 16px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
""));
        Level->setAlignment(Qt::AlignCenter);
        Label5 = new QLabel(Header);
        Label5->setObjectName(QString::fromUtf8("Label5"));
        Label5->setGeometry(QRect(480, 1, 121, 40));
        Label5->setStyleSheet(QString::fromUtf8("border: 2px solid rgb(255, 255, 255);\n"
""));
        Label5->setAlignment(Qt::AlignCenter);
        CurrentStation = new QLabel(Header);
        CurrentStation->setObjectName(QString::fromUtf8("CurrentStation"));
        CurrentStation->setGeometry(QRect(480, 41, 121, 40));
        CurrentStation->setStyleSheet(QString::fromUtf8("	font: 16px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color:yellow;\n"
"border: 2px solid rgb(255, 255, 255);\n"
""));
        CurrentStation->setAlignment(Qt::AlignCenter);
        Label6 = new QLabel(Header);
        Label6->setObjectName(QString::fromUtf8("Label6"));
        Label6->setGeometry(QRect(601, 1, 121, 40));
        Label6->setStyleSheet(QString::fromUtf8("border: 2px solid rgb(255, 255, 255);\n"
""));
        Label6->setAlignment(Qt::AlignCenter);
        NextStation = new QLabel(Header);
        NextStation->setObjectName(QString::fromUtf8("NextStation"));
        NextStation->setGeometry(QRect(601, 41, 121, 40));
        NextStation->setStyleSheet(QString::fromUtf8("	font: 16px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color:yellow;border: 2px solid rgb(255, 255, 255);\n"
""));
        NextStation->setAlignment(Qt::AlignCenter);
        DateTime = new QLabel(Header);
        DateTime->setObjectName(QString::fromUtf8("DateTime"));
        DateTime->setGeometry(QRect(722, 1, 134, 80));
        DateTime->setStyleSheet(QString::fromUtf8("border: 2px solid rgb(255, 255, 255);\n"
""));
        DateTime->setAlignment(Qt::AlignCenter);
        HelpItemBtn = new QPushButton(Header);
        HelpItemBtn->setObjectName(QString::fromUtf8("HelpItemBtn"));
        HelpItemBtn->setGeometry(QRect(856, 1, 78, 80));
        HelpItemBtn->setFocusPolicy(Qt::NoFocus);
        HelpItemBtn->setStyleSheet(QString::fromUtf8("border-image: url(:/images/images/helpitem.bmp);\n"
"color:white;"));
        CurrentFaultBtn = new QPushButton(Header);
        CurrentFaultBtn->setObjectName(QString::fromUtf8("CurrentFaultBtn"));
        CurrentFaultBtn->setGeometry(QRect(934, 1, 90, 80));
        CurrentFaultBtn->setFocusPolicy(Qt::NoFocus);
        CurrentFaultBtn->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"border:2px solid black;\n"
"color: rgb(255, 0, 0);\n"
"font: 24px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        LogoBtn = new QPushButton(Header);
        LogoBtn->setObjectName(QString::fromUtf8("LogoBtn"));
        LogoBtn->setGeometry(QRect(0, 5, 71, 70));
        LogoBtn->setFocusPolicy(Qt::NoFocus);
        LogoBtn->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"border-image: url(:/images/images/logo.bmp);\n"
"border:2px solid black;\n"
"color: rgb(255, 0, 0);\n"
"font: 24px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        retranslateUi(Header);

        QMetaObject::connectSlotsByName(Header);
    } // setupUi

    void retranslateUi(QWidget *Header)
    {
        Header->setWindowTitle(QApplication::translate("Header", "Form", 0, QApplication::UnicodeUTF8));
        PageName->setText(QString());
        Label1->setText(QApplication::translate("Header", "\346\223\215\344\275\234\346\250\241\345\274\217", 0, QApplication::UnicodeUTF8));
        DrivingMode->setText(QApplication::translate("Header", "\344\272\272\345\267\245\351\251\276\351\251\266", 0, QApplication::UnicodeUTF8));
        Label2->setText(QApplication::translate("Header", "\347\275\221\345\216\213", 0, QApplication::UnicodeUTF8));
        NetVoltage->setText(QString());
        Label3->setText(QApplication::translate("Header", "\351\200\237\345\272\246", 0, QApplication::UnicodeUTF8));
        Speed->setText(QString());
        Label4->setText(QApplication::translate("Header", "\347\272\247\344\275\215", 0, QApplication::UnicodeUTF8));
        Level->setText(QString());
        Label5->setText(QApplication::translate("Header", "\345\275\223\345\211\215\347\253\231", 0, QApplication::UnicodeUTF8));
        CurrentStation->setText(QString());
        Label6->setText(QApplication::translate("Header", "\344\270\213\344\270\200\347\253\231", 0, QApplication::UnicodeUTF8));
        NextStation->setText(QString());
        DateTime->setText(QString());
        HelpItemBtn->setText(QString());
        CurrentFaultBtn->setText(QString());
        LogoBtn->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Header: public Ui_Header {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HEADER_H
