/********************************************************************************
** Form generated from reading UI file 'maintaincediom1page.ui'
**
** Created: Fri Sep 29 10:50:58 2017
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINTAINCEDIOM1PAGE_H
#define UI_MAINTAINCEDIOM1PAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MaintainceDIOM1Page
{
public:
    QLabel *label_3;
    QPushButton *returnBtn;
    QPushButton *DIBtn;
    QPushButton *MP2DIOBtn;
    QLabel *label_4;
    QPushButton *M1DIOBtn;
    QLabel *label;
    QPushButton *MP1DIOBtn;
    QPushButton *DOBtn;
    QPushButton *TC1DIOBtn;
    QPushButton *TC2DIOBtn;
    QLabel *label_2;
    QPushButton *M2DIOBtn;

    void setupUi(QWidget *MaintainceDIOM1Page)
    {
        if (MaintainceDIOM1Page->objectName().isEmpty())
            MaintainceDIOM1Page->setObjectName(QString::fromUtf8("MaintainceDIOM1Page"));
        MaintainceDIOM1Page->resize(1024, 686);
        MaintainceDIOM1Page->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"	background-color:black;\n"
"}"));
        label_3 = new QLabel(MaintainceDIOM1Page);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 530, 24, 24));
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 0);	\n"
"border-radius: 12px;\n"
"border: 1px groove yellow;\n"
""));
        label_3->setAlignment(Qt::AlignCenter);
        returnBtn = new QPushButton(MaintainceDIOM1Page);
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
        DIBtn = new QPushButton(MaintainceDIOM1Page);
        DIBtn->setObjectName(QString::fromUtf8("DIBtn"));
        DIBtn->setGeometry(QRect(310, 540, 110, 50));
        DIBtn->setFocusPolicy(Qt::NoFocus);
        DIBtn->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	font: 20px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: white;\n"
"	background-color: rgb(0, 128, 128);\n"
"	border-top: 2px solid white;	\n"
"	border-left: 2px solid white;\n"
"}"));
        MP2DIOBtn = new QPushButton(MaintainceDIOM1Page);
        MP2DIOBtn->setObjectName(QString::fromUtf8("MP2DIOBtn"));
        MP2DIOBtn->setGeometry(QRect(630, 620, 110, 50));
        MP2DIOBtn->setFocusPolicy(Qt::NoFocus);
        MP2DIOBtn->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	font: 20px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: white;\n"
"	background-color: rgb(0, 100, 255);\n"
"	\n"
"	border-top: 2px solid white;	\n"
"	border-left: 2px solid white;\n"
"}"));
        label_4 = new QLabel(MaintainceDIOM1Page);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 560, 24, 24));
        label_4->setStyleSheet(QString::fromUtf8("border-radius: 12px;\n"
"border: 1px groove yellow;\n"
"background-color: gray;"));
        label_4->setAlignment(Qt::AlignCenter);
        M1DIOBtn = new QPushButton(MaintainceDIOM1Page);
        M1DIOBtn->setObjectName(QString::fromUtf8("M1DIOBtn"));
        M1DIOBtn->setGeometry(QRect(390, 620, 110, 50));
        M1DIOBtn->setFocusPolicy(Qt::NoFocus);
        M1DIOBtn->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	font: 20px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: white;\n"
"	background-color: rgb(0, 100, 255);\n"
"	\n"
"	border-top: 2px solid white;	\n"
"	border-left: 2px solid white;\n"
"}"));
        label = new QLabel(MaintainceDIOM1Page);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(3, 611, 1018, 72));
        label->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(0, 0, 0);\n"
"\n"
"	border:1px solid white;\n"
""));
        MP1DIOBtn = new QPushButton(MaintainceDIOM1Page);
        MP1DIOBtn->setObjectName(QString::fromUtf8("MP1DIOBtn"));
        MP1DIOBtn->setGeometry(QRect(270, 620, 110, 50));
        MP1DIOBtn->setFocusPolicy(Qt::NoFocus);
        MP1DIOBtn->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	font: 20px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: white;\n"
"	background-color: rgb(0, 100, 255);\n"
"	\n"
"	border-top: 2px solid white;	\n"
"	border-left: 2px solid white;\n"
"}"));
        DOBtn = new QPushButton(MaintainceDIOM1Page);
        DOBtn->setObjectName(QString::fromUtf8("DOBtn"));
        DOBtn->setGeometry(QRect(450, 540, 110, 50));
        DOBtn->setFocusPolicy(Qt::NoFocus);
        DOBtn->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	font: 20px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: white;\n"
"	background-color: rgb(0, 128, 128);\n"
"	border-top: 2px solid white;	\n"
"	border-left: 2px solid white;\n"
"}"));
        TC1DIOBtn = new QPushButton(MaintainceDIOM1Page);
        TC1DIOBtn->setObjectName(QString::fromUtf8("TC1DIOBtn"));
        TC1DIOBtn->setGeometry(QRect(150, 620, 110, 50));
        TC1DIOBtn->setFocusPolicy(Qt::NoFocus);
        TC1DIOBtn->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	font: 20px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: white;\n"
"	background-color: rgb(0, 100, 255);\n"
"	\n"
"	border-top: 2px solid white;	\n"
"	border-left: 2px solid white;\n"
"}"));
        TC2DIOBtn = new QPushButton(MaintainceDIOM1Page);
        TC2DIOBtn->setObjectName(QString::fromUtf8("TC2DIOBtn"));
        TC2DIOBtn->setGeometry(QRect(750, 620, 110, 50));
        TC2DIOBtn->setFocusPolicy(Qt::NoFocus);
        TC2DIOBtn->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	font: 20px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: white;\n"
"	background-color: rgb(0, 100, 255);\n"
"	\n"
"	border-top: 2px solid white;	\n"
"	border-left: 2px solid white;\n"
"}"));
        label_2 = new QLabel(MaintainceDIOM1Page);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 510, 111, 91));
        label_2->setStyleSheet(QString::fromUtf8("border:1px solid white;\n"
"border-radius:11px;\n"
"background-color: rgb(0, 0, 0);\n"
"color:white;\n"
"font: 20px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
""));
        M2DIOBtn = new QPushButton(MaintainceDIOM1Page);
        M2DIOBtn->setObjectName(QString::fromUtf8("M2DIOBtn"));
        M2DIOBtn->setGeometry(QRect(510, 620, 110, 50));
        M2DIOBtn->setFocusPolicy(Qt::NoFocus);
        M2DIOBtn->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	font: 20px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: white;\n"
"	background-color: rgb(0, 100, 255);\n"
"	\n"
"	border-top: 2px solid white;	\n"
"	border-left: 2px solid white;\n"
"}"));
        label->raise();
        label_2->raise();
        label_3->raise();
        returnBtn->raise();
        DIBtn->raise();
        MP2DIOBtn->raise();
        label_4->raise();
        M1DIOBtn->raise();
        MP1DIOBtn->raise();
        DOBtn->raise();
        TC1DIOBtn->raise();
        TC2DIOBtn->raise();
        M2DIOBtn->raise();

        retranslateUi(MaintainceDIOM1Page);

        QMetaObject::connectSlotsByName(MaintainceDIOM1Page);
    } // setupUi

    void retranslateUi(QWidget *MaintainceDIOM1Page)
    {
        MaintainceDIOM1Page->setWindowTitle(QApplication::translate("MaintainceDIOM1Page", "Form", 0, QApplication::UnicodeUTF8));
        label_3->setText(QString());
        returnBtn->setText(QApplication::translate("MaintainceDIOM1Page", "\351\200\200\345\207\272", 0, QApplication::UnicodeUTF8));
        DIBtn->setText(QApplication::translate("MaintainceDIOM1Page", "\346\225\260\345\255\227\350\276\223\345\205\245", 0, QApplication::UnicodeUTF8));
        MP2DIOBtn->setText(QApplication::translate("MaintainceDIOM1Page", "MP2", 0, QApplication::UnicodeUTF8));
        label_4->setText(QString());
        M1DIOBtn->setText(QApplication::translate("MaintainceDIOM1Page", "M1", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MaintainceDIOM1Page", "TextLabel", 0, QApplication::UnicodeUTF8));
        MP1DIOBtn->setText(QApplication::translate("MaintainceDIOM1Page", "MP1", 0, QApplication::UnicodeUTF8));
        DOBtn->setText(QApplication::translate("MaintainceDIOM1Page", "\346\225\260\345\255\227\350\276\223\345\207\272", 0, QApplication::UnicodeUTF8));
        TC1DIOBtn->setText(QApplication::translate("MaintainceDIOM1Page", "TC1", 0, QApplication::UnicodeUTF8));
        TC2DIOBtn->setText(QApplication::translate("MaintainceDIOM1Page", "TC2", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MaintainceDIOM1Page", "      \346\234\211\344\277\241\345\217\267\n"
"      \346\227\240\344\277\241\345\217\267", 0, QApplication::UnicodeUTF8));
        M2DIOBtn->setText(QApplication::translate("MaintainceDIOM1Page", "M2", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MaintainceDIOM1Page: public Ui_MaintainceDIOM1Page {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINTAINCEDIOM1PAGE_H
