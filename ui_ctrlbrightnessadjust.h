/********************************************************************************
** Form generated from reading UI file 'ctrlbrightnessadjust.ui'
**
** Created: Wed Oct 24 13:51:39 2018
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CTRLBRIGHTNESSADJUST_H
#define UI_CTRLBRIGHTNESSADJUST_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CtrlBrightnessAdjust
{
public:
    QLabel *label_98;
    QPushButton *BTNMannal;
    QLabel *label;
    QPushButton *BTNAuto;
    QPushButton *BTNMinus;
    QPushButton *BTNPlus;
    QLabel *LBLValue;
    QLabel *LBLBar;
    QPushButton *BTNReturn;

    void setupUi(QWidget *CtrlBrightnessAdjust)
    {
        if (CtrlBrightnessAdjust->objectName().isEmpty())
            CtrlBrightnessAdjust->setObjectName(QString::fromUtf8("CtrlBrightnessAdjust"));
        CtrlBrightnessAdjust->resize(600, 360);
        CtrlBrightnessAdjust->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"	background-color:black;\n"
"}\n"
"QPushButton\n"
"{\n"
"	font: 20px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: white;\n"
"		border-radius:8px;\n"
"	background-color: rgb(0, 128, 128);\n"
"    border-top: 2px solid white;\n"
"	border-left: 2px solid white;\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"	font: 20px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: white;\n"
"		border-radius:8px;\n"
"	background-color: rgb(0, 255, 255);\n"
"    border-top: 2px solid white;\n"
"	border-left: 2px solid white;\n"
"}\n"
"QLabel\n"
"{\n"
"	font: 20px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	color:white;\n"
"	background-color:black;\n"
"}"));
        label_98 = new QLabel(CtrlBrightnessAdjust);
        label_98->setObjectName(QString::fromUtf8("label_98"));
        label_98->setGeometry(QRect(0, 0, 600, 360));
        label_98->setStyleSheet(QString::fromUtf8("border:3px solid white;\n"
"border-radius:10px"));
        label_98->setAlignment(Qt::AlignCenter);
        BTNMannal = new QPushButton(CtrlBrightnessAdjust);
        BTNMannal->setObjectName(QString::fromUtf8("BTNMannal"));
        BTNMannal->setGeometry(QRect(190, 90, 98, 51));
        BTNMannal->setFocusPolicy(Qt::NoFocus);
        label = new QLabel(CtrlBrightnessAdjust);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(230, 40, 141, 31));
        label->setAlignment(Qt::AlignCenter);
        BTNAuto = new QPushButton(CtrlBrightnessAdjust);
        BTNAuto->setObjectName(QString::fromUtf8("BTNAuto"));
        BTNAuto->setGeometry(QRect(330, 90, 98, 51));
        BTNAuto->setFocusPolicy(Qt::NoFocus);
        BTNMinus = new QPushButton(CtrlBrightnessAdjust);
        BTNMinus->setObjectName(QString::fromUtf8("BTNMinus"));
        BTNMinus->setGeometry(QRect(50, 170, 98, 51));
        BTNMinus->setFocusPolicy(Qt::NoFocus);
        BTNMinus->setStyleSheet(QString::fromUtf8("font:40px;"));
        BTNPlus = new QPushButton(CtrlBrightnessAdjust);
        BTNPlus->setObjectName(QString::fromUtf8("BTNPlus"));
        BTNPlus->setGeometry(QRect(470, 170, 98, 51));
        BTNPlus->setFocusPolicy(Qt::NoFocus);
        BTNPlus->setStyleSheet(QString::fromUtf8("font:40px;"));
        LBLValue = new QLabel(CtrlBrightnessAdjust);
        LBLValue->setObjectName(QString::fromUtf8("LBLValue"));
        LBLValue->setGeometry(QRect(160, 170, 300, 51));
        LBLValue->setStyleSheet(QString::fromUtf8("border-radius:12px;\n"
"background-color:transparent;\n"
"border:2px solid rgb(192,192,192);\n"
"font:26px;"));
        LBLValue->setAlignment(Qt::AlignCenter);
        LBLBar = new QLabel(CtrlBrightnessAdjust);
        LBLBar->setObjectName(QString::fromUtf8("LBLBar"));
        LBLBar->setGeometry(QRect(162, 172, 150, 47));
        LBLBar->setStyleSheet(QString::fromUtf8("border-radius:8px;\n"
"background-color: rgb(100,166,226);"));
        BTNReturn = new QPushButton(CtrlBrightnessAdjust);
        BTNReturn->setObjectName(QString::fromUtf8("BTNReturn"));
        BTNReturn->setGeometry(QRect(450, 280, 91, 41));
        BTNReturn->setFocusPolicy(Qt::NoFocus);
        BTNReturn->setStyleSheet(QString::fromUtf8(""));
        label_98->raise();
        BTNMannal->raise();
        label->raise();
        BTNAuto->raise();
        BTNMinus->raise();
        BTNPlus->raise();
        LBLBar->raise();
        BTNReturn->raise();
        LBLValue->raise();

        retranslateUi(CtrlBrightnessAdjust);

        QMetaObject::connectSlotsByName(CtrlBrightnessAdjust);
    } // setupUi

    void retranslateUi(QWidget *CtrlBrightnessAdjust)
    {
        CtrlBrightnessAdjust->setWindowTitle(QApplication::translate("CtrlBrightnessAdjust", "Form", 0, QApplication::UnicodeUTF8));
        label_98->setText(QString());
        BTNMannal->setText(QApplication::translate("CtrlBrightnessAdjust", "\346\211\213\345\212\250", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("CtrlBrightnessAdjust", "\344\272\256\345\272\246\350\260\203\350\212\202", 0, QApplication::UnicodeUTF8));
        BTNAuto->setText(QApplication::translate("CtrlBrightnessAdjust", "\350\207\252\345\212\250", 0, QApplication::UnicodeUTF8));
        BTNMinus->setText(QApplication::translate("CtrlBrightnessAdjust", "\342\210\250", 0, QApplication::UnicodeUTF8));
        BTNPlus->setText(QApplication::translate("CtrlBrightnessAdjust", "\342\210\247", 0, QApplication::UnicodeUTF8));
        LBLValue->setText(QApplication::translate("CtrlBrightnessAdjust", "10", 0, QApplication::UnicodeUTF8));
        LBLBar->setText(QString());
        BTNReturn->setText(QApplication::translate("CtrlBrightnessAdjust", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CtrlBrightnessAdjust: public Ui_CtrlBrightnessAdjust {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CTRLBRIGHTNESSADJUST_H
