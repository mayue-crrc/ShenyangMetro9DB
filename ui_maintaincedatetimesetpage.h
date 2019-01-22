/********************************************************************************
** Form generated from reading UI file 'maintaincedatetimesetpage.ui'
**
** Created: Tue Jan 22 13:13:55 2019
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINTAINCEDATETIMESETPAGE_H
#define UI_MAINTAINCEDATETIMESETPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MaintainceDatetimesetPage
{
public:
    QPushButton *returnBtn;
    QLabel *label;
    QPushButton *YearBtn;
    QPushButton *MonthBtn;
    QPushButton *DayBtn;
    QPushButton *HourBtn;
    QPushButton *SecondBtn;
    QPushButton *MinuteBtn;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QPushButton *ConfirmBtn;

    void setupUi(QWidget *MaintainceDatetimesetPage)
    {
        if (MaintainceDatetimesetPage->objectName().isEmpty())
            MaintainceDatetimesetPage->setObjectName(QString::fromUtf8("MaintainceDatetimesetPage"));
        MaintainceDatetimesetPage->resize(1024, 686);
        MaintainceDatetimesetPage->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"	background-color:black;\n"
"}\n"
"\n"
"QLabel\n"
"{\n"
"	color:white;\n"
"	font:28px \"\345\276\256\350\275\257\351\233\205\351\273\221\"\n"
"}\n"
"QPushButton\n"
"{\n"
"	color:white;\n"
"	font:28px \"\345\276\256\350\275\257\351\233\205\351\273\221\"\n"
"}"));
        returnBtn = new QPushButton(MaintainceDatetimesetPage);
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
        label = new QLabel(MaintainceDatetimesetPage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(3, 611, 1018, 72));
        label->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(0, 0, 0);\n"
"\n"
"	border:1px solid white;\n"
""));
        YearBtn = new QPushButton(MaintainceDatetimesetPage);
        YearBtn->setObjectName(QString::fromUtf8("YearBtn"));
        YearBtn->setGeometry(QRect(200, 80, 151, 61));
        YearBtn->setFocusPolicy(Qt::NoFocus);
        YearBtn->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"color:rgb(30,200,200);\n"
"border:2px  solid white;\n"
""));
        MonthBtn = new QPushButton(MaintainceDatetimesetPage);
        MonthBtn->setObjectName(QString::fromUtf8("MonthBtn"));
        MonthBtn->setGeometry(QRect(430, 80, 151, 61));
        MonthBtn->setFocusPolicy(Qt::NoFocus);
        MonthBtn->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"color:rgb(30,200,200);\n"
"border:2px  solid white"));
        DayBtn = new QPushButton(MaintainceDatetimesetPage);
        DayBtn->setObjectName(QString::fromUtf8("DayBtn"));
        DayBtn->setGeometry(QRect(660, 80, 151, 61));
        DayBtn->setFocusPolicy(Qt::NoFocus);
        DayBtn->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"color:rgb(30,200,200);\n"
"border:2px  solid white"));
        HourBtn = new QPushButton(MaintainceDatetimesetPage);
        HourBtn->setObjectName(QString::fromUtf8("HourBtn"));
        HourBtn->setGeometry(QRect(200, 180, 151, 61));
        HourBtn->setFocusPolicy(Qt::NoFocus);
        HourBtn->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"color:rgb(30,200,200);\n"
"border:2px  solid white"));
        SecondBtn = new QPushButton(MaintainceDatetimesetPage);
        SecondBtn->setObjectName(QString::fromUtf8("SecondBtn"));
        SecondBtn->setGeometry(QRect(660, 180, 151, 61));
        SecondBtn->setFocusPolicy(Qt::NoFocus);
        SecondBtn->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"color:rgb(30,200,200);\n"
"border:2px  solid white"));
        MinuteBtn = new QPushButton(MaintainceDatetimesetPage);
        MinuteBtn->setObjectName(QString::fromUtf8("MinuteBtn"));
        MinuteBtn->setGeometry(QRect(430, 180, 151, 61));
        MinuteBtn->setFocusPolicy(Qt::NoFocus);
        MinuteBtn->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"color:rgb(30,200,200);\n"
"border:2px  solid white"));
        label_2 = new QLabel(MaintainceDatetimesetPage);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(130, 90, 51, 41));
        label_2->setStyleSheet(QString::fromUtf8(""));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_3 = new QLabel(MaintainceDatetimesetPage);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(380, 90, 31, 41));
        label_3->setStyleSheet(QString::fromUtf8(""));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_4 = new QLabel(MaintainceDatetimesetPage);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(610, 90, 31, 41));
        label_4->setStyleSheet(QString::fromUtf8(""));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_5 = new QLabel(MaintainceDatetimesetPage);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(840, 90, 31, 41));
        label_5->setStyleSheet(QString::fromUtf8(""));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_6 = new QLabel(MaintainceDatetimesetPage);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(380, 190, 31, 41));
        label_6->setStyleSheet(QString::fromUtf8(""));
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_7 = new QLabel(MaintainceDatetimesetPage);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(610, 190, 31, 41));
        label_7->setStyleSheet(QString::fromUtf8(""));
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_8 = new QLabel(MaintainceDatetimesetPage);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(840, 190, 31, 41));
        label_8->setStyleSheet(QString::fromUtf8(""));
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        ConfirmBtn = new QPushButton(MaintainceDatetimesetPage);
        ConfirmBtn->setObjectName(QString::fromUtf8("ConfirmBtn"));
        ConfirmBtn->setGeometry(QRect(370, 511, 270, 50));
        ConfirmBtn->setFocusPolicy(Qt::NoFocus);
        ConfirmBtn->setStyleSheet(QString::fromUtf8("font: 20px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";color: white;background-color: rgb(0, 128, 128);	border-radius:8px;border-top: 2px solid white;border-left: 2px solid white;"));
        label->raise();
        returnBtn->raise();
        YearBtn->raise();
        MonthBtn->raise();
        DayBtn->raise();
        HourBtn->raise();
        SecondBtn->raise();
        MinuteBtn->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        label_5->raise();
        label_6->raise();
        label_7->raise();
        label_8->raise();
        ConfirmBtn->raise();

        retranslateUi(MaintainceDatetimesetPage);

        QMetaObject::connectSlotsByName(MaintainceDatetimesetPage);
    } // setupUi

    void retranslateUi(QWidget *MaintainceDatetimesetPage)
    {
        MaintainceDatetimesetPage->setWindowTitle(QApplication::translate("MaintainceDatetimesetPage", "Form", 0, QApplication::UnicodeUTF8));
        returnBtn->setText(QApplication::translate("MaintainceDatetimesetPage", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        YearBtn->setText(QApplication::translate("MaintainceDatetimesetPage", "123", 0, QApplication::UnicodeUTF8));
        MonthBtn->setText(QString());
        DayBtn->setText(QString());
        HourBtn->setText(QString());
        SecondBtn->setText(QString());
        MinuteBtn->setText(QString());
        label_2->setText(QApplication::translate("MaintainceDatetimesetPage", "20", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MaintainceDatetimesetPage", "\345\271\264", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MaintainceDatetimesetPage", "\346\234\210", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MaintainceDatetimesetPage", "\346\227\245", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("MaintainceDatetimesetPage", "\346\227\266", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("MaintainceDatetimesetPage", "\345\210\206", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("MaintainceDatetimesetPage", "\347\247\222", 0, QApplication::UnicodeUTF8));
        ConfirmBtn->setText(QApplication::translate("MaintainceDatetimesetPage", "\347\241\256\345\256\232", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MaintainceDatetimesetPage: public Ui_MaintainceDatetimesetPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINTAINCEDATETIMESETPAGE_H
