/********************************************************************************
** Form generated from reading UI file 'maintainceriomdetailpage.ui'
**
** Created: Wed Oct 24 13:51:39 2018
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINTAINCERIOMDETAILPAGE_H
#define UI_MAINTAINCERIOMDETAILPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MaintainceRIOMDetailPage
{
public:
    QPushButton *TCDI1Btn;
    QPushButton *TCDI2Btn;
    QPushButton *TCDI3Btn;
    QPushButton *TCDI4Btn;
    QPushButton *TCDI5Btn;
    QPushButton *TCAIMBtn;
    QPushButton *MPDIBtn;
    QPushButton *MDIBtn;
    QPushButton *TCDOBtn;
    QPushButton *MPDOBtn;
    QPushButton *MDOBtn;
    QPushButton *returnBtn;
    QLabel *label;

    void setupUi(QWidget *MaintainceRIOMDetailPage)
    {
        if (MaintainceRIOMDetailPage->objectName().isEmpty())
            MaintainceRIOMDetailPage->setObjectName(QString::fromUtf8("MaintainceRIOMDetailPage"));
        MaintainceRIOMDetailPage->resize(1024, 686);
        MaintainceRIOMDetailPage->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"	background-color:black;\n"
"}\n"
"QPushButton\n"
"{\n"
"	font: 20px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: white;\n"
"	background-color: rgb(0, 128, 128);\n"
"	border-radius:8px;\n"
"	border-top: 2px solid white;	\n"
"	border-left: 2px solid white;\n"
"}"));
        TCDI1Btn = new QPushButton(MaintainceRIOMDetailPage);
        TCDI1Btn->setObjectName(QString::fromUtf8("TCDI1Btn"));
        TCDI1Btn->setGeometry(QRect(920, 20, 90, 41));
        TCDI1Btn->setFocusPolicy(Qt::NoFocus);
        TCDI1Btn->setStyleSheet(QString::fromUtf8(""));
        TCDI2Btn = new QPushButton(MaintainceRIOMDetailPage);
        TCDI2Btn->setObjectName(QString::fromUtf8("TCDI2Btn"));
        TCDI2Btn->setGeometry(QRect(920, 70, 90, 41));
        TCDI2Btn->setFocusPolicy(Qt::NoFocus);
        TCDI2Btn->setStyleSheet(QString::fromUtf8(""));
        TCDI3Btn = new QPushButton(MaintainceRIOMDetailPage);
        TCDI3Btn->setObjectName(QString::fromUtf8("TCDI3Btn"));
        TCDI3Btn->setGeometry(QRect(920, 120, 90, 41));
        TCDI3Btn->setFocusPolicy(Qt::NoFocus);
        TCDI3Btn->setStyleSheet(QString::fromUtf8(""));
        TCDI4Btn = new QPushButton(MaintainceRIOMDetailPage);
        TCDI4Btn->setObjectName(QString::fromUtf8("TCDI4Btn"));
        TCDI4Btn->setGeometry(QRect(920, 170, 90, 41));
        TCDI4Btn->setFocusPolicy(Qt::NoFocus);
        TCDI4Btn->setStyleSheet(QString::fromUtf8(""));
        TCDI5Btn = new QPushButton(MaintainceRIOMDetailPage);
        TCDI5Btn->setObjectName(QString::fromUtf8("TCDI5Btn"));
        TCDI5Btn->setGeometry(QRect(920, 220, 90, 41));
        TCDI5Btn->setFocusPolicy(Qt::NoFocus);
        TCDI5Btn->setStyleSheet(QString::fromUtf8(""));
        TCAIMBtn = new QPushButton(MaintainceRIOMDetailPage);
        TCAIMBtn->setObjectName(QString::fromUtf8("TCAIMBtn"));
        TCAIMBtn->setGeometry(QRect(920, 320, 90, 41));
        TCAIMBtn->setFocusPolicy(Qt::NoFocus);
        TCAIMBtn->setStyleSheet(QString::fromUtf8(""));
        MPDIBtn = new QPushButton(MaintainceRIOMDetailPage);
        MPDIBtn->setObjectName(QString::fromUtf8("MPDIBtn"));
        MPDIBtn->setGeometry(QRect(920, 370, 90, 41));
        MPDIBtn->setFocusPolicy(Qt::NoFocus);
        MPDIBtn->setStyleSheet(QString::fromUtf8(""));
        MDIBtn = new QPushButton(MaintainceRIOMDetailPage);
        MDIBtn->setObjectName(QString::fromUtf8("MDIBtn"));
        MDIBtn->setGeometry(QRect(920, 470, 90, 41));
        MDIBtn->setFocusPolicy(Qt::NoFocus);
        MDIBtn->setStyleSheet(QString::fromUtf8(""));
        TCDOBtn = new QPushButton(MaintainceRIOMDetailPage);
        TCDOBtn->setObjectName(QString::fromUtf8("TCDOBtn"));
        TCDOBtn->setGeometry(QRect(920, 270, 90, 41));
        TCDOBtn->setFocusPolicy(Qt::NoFocus);
        TCDOBtn->setStyleSheet(QString::fromUtf8(""));
        MPDOBtn = new QPushButton(MaintainceRIOMDetailPage);
        MPDOBtn->setObjectName(QString::fromUtf8("MPDOBtn"));
        MPDOBtn->setGeometry(QRect(920, 420, 90, 41));
        MPDOBtn->setFocusPolicy(Qt::NoFocus);
        MPDOBtn->setStyleSheet(QString::fromUtf8(""));
        MDOBtn = new QPushButton(MaintainceRIOMDetailPage);
        MDOBtn->setObjectName(QString::fromUtf8("MDOBtn"));
        MDOBtn->setGeometry(QRect(920, 520, 90, 41));
        MDOBtn->setFocusPolicy(Qt::NoFocus);
        MDOBtn->setStyleSheet(QString::fromUtf8(""));
        returnBtn = new QPushButton(MaintainceRIOMDetailPage);
        returnBtn->setObjectName(QString::fromUtf8("returnBtn"));
        returnBtn->setGeometry(QRect(910, 620, 100, 50));
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
        label = new QLabel(MaintainceRIOMDetailPage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(3, 610, 1018, 72));
        label->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(0, 0, 0);\n"
"\n"
"	border:1px solid white;\n"
""));
        label->raise();
        TCDI1Btn->raise();
        TCDI2Btn->raise();
        TCDI3Btn->raise();
        TCDI4Btn->raise();
        TCDI5Btn->raise();
        TCAIMBtn->raise();
        MPDIBtn->raise();
        MDIBtn->raise();
        TCDOBtn->raise();
        MPDOBtn->raise();
        MDOBtn->raise();
        returnBtn->raise();

        retranslateUi(MaintainceRIOMDetailPage);

        QMetaObject::connectSlotsByName(MaintainceRIOMDetailPage);
    } // setupUi

    void retranslateUi(QWidget *MaintainceRIOMDetailPage)
    {
        MaintainceRIOMDetailPage->setWindowTitle(QApplication::translate("MaintainceRIOMDetailPage", "Form", 0, QApplication::UnicodeUTF8));
        TCDI1Btn->setText(QApplication::translate("MaintainceRIOMDetailPage", "TC-DI1", 0, QApplication::UnicodeUTF8));
        TCDI2Btn->setText(QApplication::translate("MaintainceRIOMDetailPage", "TC-DI2", 0, QApplication::UnicodeUTF8));
        TCDI3Btn->setText(QApplication::translate("MaintainceRIOMDetailPage", "TC-DI3", 0, QApplication::UnicodeUTF8));
        TCDI4Btn->setText(QApplication::translate("MaintainceRIOMDetailPage", "TC-DI4", 0, QApplication::UnicodeUTF8));
        TCDI5Btn->setText(QApplication::translate("MaintainceRIOMDetailPage", "TC-DI5", 0, QApplication::UnicodeUTF8));
        TCAIMBtn->setText(QApplication::translate("MaintainceRIOMDetailPage", "TC-AIM", 0, QApplication::UnicodeUTF8));
        MPDIBtn->setText(QApplication::translate("MaintainceRIOMDetailPage", "MP-DI", 0, QApplication::UnicodeUTF8));
        MDIBtn->setText(QApplication::translate("MaintainceRIOMDetailPage", "M-DI", 0, QApplication::UnicodeUTF8));
        TCDOBtn->setText(QApplication::translate("MaintainceRIOMDetailPage", "TC-DO", 0, QApplication::UnicodeUTF8));
        MPDOBtn->setText(QApplication::translate("MaintainceRIOMDetailPage", "MP-DO", 0, QApplication::UnicodeUTF8));
        MDOBtn->setText(QApplication::translate("MaintainceRIOMDetailPage", "M-DO", 0, QApplication::UnicodeUTF8));
        returnBtn->setText(QApplication::translate("MaintainceRIOMDetailPage", "\351\200\200\345\207\272", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MaintainceRIOMDetailPage: public Ui_MaintainceRIOMDetailPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINTAINCERIOMDETAILPAGE_H
