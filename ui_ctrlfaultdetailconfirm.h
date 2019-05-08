/********************************************************************************
** Form generated from reading UI file 'ctrlfaultdetailconfirm.ui'
**
** Created: Wed May 8 08:13:32 2019
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CTRLFAULTDETAILCONFIRM_H
#define UI_CTRLFAULTDETAILCONFIRM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QTextBrowser>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CtrlFaultDetailConfirm
{
public:
    QPushButton *FaultConfirmBtn;
    QLabel *label;
    QLabel *Faultname;
    QLabel *lbl;
    QTextBrowser *FaultTips;
    QPushButton *FaultAllConfirmBtn;

    void setupUi(QWidget *CtrlFaultDetailConfirm)
    {
        if (CtrlFaultDetailConfirm->objectName().isEmpty())
            CtrlFaultDetailConfirm->setObjectName(QString::fromUtf8("CtrlFaultDetailConfirm"));
        CtrlFaultDetailConfirm->resize(600, 300);
        CtrlFaultDetailConfirm->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"	background-color: black;\n"
"}\n"
"\n"
"QPushButton\n"
"{\n"
"    font: 18px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	color: white;\n"
"	background-color: red;\n"
"	border:1px solid white;\n"
"	border-radius: 5px;\n"
"}\n"
"\n"
"QLabel\n"
"{\n"
"	    font: 18px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: white;\n"
"	background-color:black;\n"
"}\n"
""));
        FaultConfirmBtn = new QPushButton(CtrlFaultDetailConfirm);
        FaultConfirmBtn->setObjectName(QString::fromUtf8("FaultConfirmBtn"));
        FaultConfirmBtn->setGeometry(QRect(470, 250, 98, 41));
        label = new QLabel(CtrlFaultDetailConfirm);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(270, 10, 91, 31));
        label->setStyleSheet(QString::fromUtf8("color:red"));
        Faultname = new QLabel(CtrlFaultDetailConfirm);
        Faultname->setObjectName(QString::fromUtf8("Faultname"));
        Faultname->setGeometry(QRect(40, 50, 521, 31));
        Faultname->setStyleSheet(QString::fromUtf8("color:yellow"));
        lbl = new QLabel(CtrlFaultDetailConfirm);
        lbl->setObjectName(QString::fromUtf8("lbl"));
        lbl->setGeometry(QRect(0, 0, 600, 300));
        lbl->setStyleSheet(QString::fromUtf8("color:yellow;\n"
"border:2px solid white;\n"
"border-radius:8px;"));
        FaultTips = new QTextBrowser(CtrlFaultDetailConfirm);
        FaultTips->setObjectName(QString::fromUtf8("FaultTips"));
        FaultTips->setGeometry(QRect(40, 90, 521, 151));
        FaultTips->setStyleSheet(QString::fromUtf8("	    font: 18px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: white;\n"
"	background-color:black;"));
        FaultAllConfirmBtn = new QPushButton(CtrlFaultDetailConfirm);
        FaultAllConfirmBtn->setObjectName(QString::fromUtf8("FaultAllConfirmBtn"));
        FaultAllConfirmBtn->setGeometry(QRect(10, 250, 121, 41));
        FaultAllConfirmBtn->setFocusPolicy(Qt::NoFocus);
        FaultAllConfirmBtn->setStyleSheet(QString::fromUtf8("border:black;\n"
"background-color:black;"));
        lbl->raise();
        FaultConfirmBtn->raise();
        label->raise();
        Faultname->raise();
        FaultTips->raise();
        FaultAllConfirmBtn->raise();

        retranslateUi(CtrlFaultDetailConfirm);

        QMetaObject::connectSlotsByName(CtrlFaultDetailConfirm);
    } // setupUi

    void retranslateUi(QWidget *CtrlFaultDetailConfirm)
    {
        CtrlFaultDetailConfirm->setWindowTitle(QApplication::translate("CtrlFaultDetailConfirm", "Form", 0, QApplication::UnicodeUTF8));
        FaultConfirmBtn->setText(QApplication::translate("CtrlFaultDetailConfirm", "\347\241\256\350\256\244", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("CtrlFaultDetailConfirm", "\346\225\205\351\232\234\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
        Faultname->setText(QString());
        lbl->setText(QString());
        FaultTips->setHtml(QApplication::translate("CtrlFaultDetailConfirm", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\276\256\350\275\257\351\233\205\351\273\221'; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p>\n"
"<p style=\"-qt-paragraph-type:e"
                        "mpty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        FaultAllConfirmBtn->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CtrlFaultDetailConfirm: public Ui_CtrlFaultDetailConfirm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CTRLFAULTDETAILCONFIRM_H
