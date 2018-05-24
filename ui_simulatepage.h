/********************************************************************************
** Form generated from reading UI file 'simulatepage.ui'
**
** Created: Mon Aug 7 16:17:45 2017
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIMULATEPAGE_H
#define UI_SIMULATEPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTextBrowser>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SimulatePage
{
public:
    QLineEdit *lndValue;
    QLabel *label;
    QLineEdit *lndByteOffset;
    QLineEdit *lndPort;
    QLabel *label_3;
    QLineEdit *lndBitOffset;
    QLabel *label_4;
    QPushButton *btnConfirm;
    QPushButton *btnClose;
    QComboBox *cbType;
    QLabel *label_2;
    QTextBrowser *txtMessage;

    void setupUi(QWidget *SimulatePage)
    {
        if (SimulatePage->objectName().isEmpty())
            SimulatePage->setObjectName(QString::fromUtf8("SimulatePage"));
        SimulatePage->resize(582, 240);
        SimulatePage->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	color: white;\n"
"	border: 0px groove, gray;\n"
"    border-color: gray;\n"
"	font: 18px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}\n"
"\n"
"QWidget\n"
"{\n"
"	background-color: black;\n"
"}\n"
"\n"
"QPushButton\n"
"{\n"
"	font: 18px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: black;\n"
"	background-color: rgb(113, 113, 198);\n"
"	border:1px solid white;\n"
"	border-radius: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	font: 18px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: white;\n"
"	background-color: rgb(0, 0, 255);\n"
"	border:1px solid white;\n"
"	border-radius: 5px;\n"
"}\n"
"\n"
"QLineEdit\n"
"{\n"
"	color: white;\n"
"	font: 18px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}\n"
"\n"
"QCheckBox\n"
"{\n"
"	font: 15px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	color: white;\n"
"}"));
        lndValue = new QLineEdit(SimulatePage);
        lndValue->setObjectName(QString::fromUtf8("lndValue"));
        lndValue->setGeometry(QRect(440, 50, 91, 41));
        lndValue->setStyleSheet(QString::fromUtf8("color: white;\n"
"font: 18px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lndValue->setAlignment(Qt::AlignCenter);
        label = new QLabel(SimulatePage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 20, 141, 20));
        label->setAlignment(Qt::AlignCenter);
        lndByteOffset = new QLineEdit(SimulatePage);
        lndByteOffset->setObjectName(QString::fromUtf8("lndByteOffset"));
        lndByteOffset->setGeometry(QRect(190, 50, 141, 41));
        lndByteOffset->setStyleSheet(QString::fromUtf8("color: white;\n"
"font: 18px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lndByteOffset->setAlignment(Qt::AlignCenter);
        lndPort = new QLineEdit(SimulatePage);
        lndPort->setObjectName(QString::fromUtf8("lndPort"));
        lndPort->setGeometry(QRect(40, 50, 141, 41));
        lndPort->setStyleSheet(QString::fromUtf8(""));
        lndPort->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(SimulatePage);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(340, 20, 91, 20));
        label_3->setAlignment(Qt::AlignCenter);
        lndBitOffset = new QLineEdit(SimulatePage);
        lndBitOffset->setObjectName(QString::fromUtf8("lndBitOffset"));
        lndBitOffset->setGeometry(QRect(340, 50, 91, 41));
        lndBitOffset->setStyleSheet(QString::fromUtf8("color: white;\n"
"font: 18px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lndBitOffset->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(SimulatePage);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(440, 20, 91, 20));
        label_4->setAlignment(Qt::AlignCenter);
        btnConfirm = new QPushButton(SimulatePage);
        btnConfirm->setObjectName(QString::fromUtf8("btnConfirm"));
        btnConfirm->setGeometry(QRect(440, 130, 91, 40));
        btnConfirm->setStyleSheet(QString::fromUtf8(""));
        btnClose = new QPushButton(SimulatePage);
        btnClose->setObjectName(QString::fromUtf8("btnClose"));
        btnClose->setGeometry(QRect(440, 180, 91, 40));
        cbType = new QComboBox(SimulatePage);
        cbType->setObjectName(QString::fromUtf8("cbType"));
        cbType->setGeometry(QRect(440, 97, 91, 27));
        cbType->setStyleSheet(QString::fromUtf8("color: black;\n"
"font: 18px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"background-color: white;\n"
"border-color: gray;"));
        label_2 = new QLabel(SimulatePage);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(190, 20, 141, 20));
        label_2->setAlignment(Qt::AlignCenter);
        txtMessage = new QTextBrowser(SimulatePage);
        txtMessage->setObjectName(QString::fromUtf8("txtMessage"));
        txtMessage->setGeometry(QRect(40, 100, 391, 121));
        txtMessage->setStyleSheet(QString::fromUtf8("color: white;\n"
"font: 18px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        retranslateUi(SimulatePage);

        QMetaObject::connectSlotsByName(SimulatePage);
    } // setupUi

    void retranslateUi(QWidget *SimulatePage)
    {
        SimulatePage->setWindowTitle(QApplication::translate("SimulatePage", "Form", 0, QApplication::UnicodeUTF8));
        lndValue->setText(QString());
        label->setText(QApplication::translate("SimulatePage", "Port", 0, QApplication::UnicodeUTF8));
        lndByteOffset->setText(QString());
        lndPort->setText(QString());
        label_3->setText(QApplication::translate("SimulatePage", "Bit Offset", 0, QApplication::UnicodeUTF8));
        lndBitOffset->setText(QString());
        label_4->setText(QApplication::translate("SimulatePage", "Value", 0, QApplication::UnicodeUTF8));
        btnConfirm->setText(QApplication::translate("SimulatePage", "Confirm", 0, QApplication::UnicodeUTF8));
        btnClose->setText(QApplication::translate("SimulatePage", "Close", 0, QApplication::UnicodeUTF8));
        cbType->clear();
        cbType->insertItems(0, QStringList()
         << QApplication::translate("SimulatePage", "char", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SimulatePage", "int", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SimulatePage", "uint", 0, QApplication::UnicodeUTF8)
        );
        label_2->setText(QApplication::translate("SimulatePage", "Byte Offset", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SimulatePage: public Ui_SimulatePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIMULATEPAGE_H
