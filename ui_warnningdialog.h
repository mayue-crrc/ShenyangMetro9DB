/********************************************************************************
** Form generated from reading UI file 'warnningdialog.ui'
**
** Created: Mon May 13 10:17:24 2019
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WARNNINGDIALOG_H
#define UI_WARNNINGDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WarnningDialog
{
public:
    QLabel *WarnningDialog_Label_str;
    QPushButton *WarnningDialog_Button_close;
    QLabel *WarnningDialog_backgroundlbl;

    void setupUi(QWidget *WarnningDialog)
    {
        if (WarnningDialog->objectName().isEmpty())
            WarnningDialog->setObjectName(QString::fromUtf8("WarnningDialog"));
        WarnningDialog->resize(424, 240);
        WarnningDialog->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"	background-color:black;\n"
"}"));
        WarnningDialog_Label_str = new QLabel(WarnningDialog);
        WarnningDialog_Label_str->setObjectName(QString::fromUtf8("WarnningDialog_Label_str"));
        WarnningDialog_Label_str->setGeometry(QRect(29, 29, 360, 111));
        WarnningDialog_Label_str->setStyleSheet(QString::fromUtf8("font: 24px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color:red;\n"
"border-color: rgb(51, 153, 255);"));
        WarnningDialog_Label_str->setAlignment(Qt::AlignCenter);
        WarnningDialog_Button_close = new QPushButton(WarnningDialog);
        WarnningDialog_Button_close->setObjectName(QString::fromUtf8("WarnningDialog_Button_close"));
        WarnningDialog_Button_close->setGeometry(QRect(160, 180, 100, 40));
        WarnningDialog_Button_close->setFocusPolicy(Qt::NoFocus);
        WarnningDialog_Button_close->setStyleSheet(QString::fromUtf8("font: 20px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: white;\n"
"background-color: rgb(0, 100, 255);	\n"
"border-radius:8px;\n"
"border-top: 2px solid white;\n"
"border-left: 2px solid white;\n"
""));
        WarnningDialog_backgroundlbl = new QLabel(WarnningDialog);
        WarnningDialog_backgroundlbl->setObjectName(QString::fromUtf8("WarnningDialog_backgroundlbl"));
        WarnningDialog_backgroundlbl->setGeometry(QRect(2, 2, 420, 236));
        WarnningDialog_backgroundlbl->setStyleSheet(QString::fromUtf8("font: 20px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color:red;\n"
"border:2px solid white;"));
        WarnningDialog_backgroundlbl->setAlignment(Qt::AlignCenter);
        WarnningDialog_backgroundlbl->raise();
        WarnningDialog_Label_str->raise();
        WarnningDialog_Button_close->raise();

        retranslateUi(WarnningDialog);

        QMetaObject::connectSlotsByName(WarnningDialog);
    } // setupUi

    void retranslateUi(QWidget *WarnningDialog)
    {
        WarnningDialog->setWindowTitle(QApplication::translate("WarnningDialog", "Form", 0, QApplication::UnicodeUTF8));
        WarnningDialog_Label_str->setText(QString());
        WarnningDialog_Button_close->setText(QApplication::translate("WarnningDialog", "\347\241\256\350\256\244", 0, QApplication::UnicodeUTF8));
        WarnningDialog_backgroundlbl->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class WarnningDialog: public Ui_WarnningDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WARNNINGDIALOG_H
