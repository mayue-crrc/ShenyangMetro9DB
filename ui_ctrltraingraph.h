/********************************************************************************
** Form generated from reading UI file 'ctrltraingraph.ui'
**
** Created: Wed May 8 08:13:31 2019
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CTRLTRAINGRAPH_H
#define UI_CTRLTRAINGRAPH_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CtrlTraingraph
{
public:
    QLabel *tc1lbl;
    QLabel *mp1lbl;
    QLabel *m1lbl;
    QLabel *m2lbl;
    QLabel *mp2lbl;
    QLabel *tc2lbl;
    QLabel *tc1keylbl;
    QLabel *tc2keylbl;
    QLabel *tc1directionlbl;
    QLabel *tc2directionlbl;
    QLabel *tc1wheel1lbl;
    QLabel *tc1wheel2lbl;
    QLabel *tc2wheel1lbl;
    QLabel *tc2wheel2lbl;
    QLabel *mp1wheel2lbl;
    QLabel *mp1wheel1lbl;
    QLabel *m1wheel1lbl;
    QLabel *m1wheel2lbl;
    QLabel *m2wheel2lbl;
    QLabel *m2wheel1lbl;
    QLabel *mp2wheel1lbl;
    QLabel *mp2wheel2lbl;

    void setupUi(QWidget *CtrlTraingraph)
    {
        if (CtrlTraingraph->objectName().isEmpty())
            CtrlTraingraph->setObjectName(QString::fromUtf8("CtrlTraingraph"));
        CtrlTraingraph->resize(837, 91);
        CtrlTraingraph->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"	background-color:black;\n"
"}\n"
"QLabel\n"
"{\n"
"	font:20px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	border:2px solid white;\n"
"	background-color: rgb(255,255,153);\n"
"\n"
"}"));
        tc1lbl = new QLabel(CtrlTraingraph);
        tc1lbl->setObjectName(QString::fromUtf8("tc1lbl"));
        tc1lbl->setGeometry(QRect(111, 20, 100, 45));
        tc1lbl->setAlignment(Qt::AlignCenter);
        mp1lbl = new QLabel(CtrlTraingraph);
        mp1lbl->setObjectName(QString::fromUtf8("mp1lbl"));
        mp1lbl->setGeometry(QRect(214, 20, 100, 45));
        mp1lbl->setAlignment(Qt::AlignCenter);
        m1lbl = new QLabel(CtrlTraingraph);
        m1lbl->setObjectName(QString::fromUtf8("m1lbl"));
        m1lbl->setGeometry(QRect(317, 20, 100, 45));
        m1lbl->setAlignment(Qt::AlignCenter);
        m2lbl = new QLabel(CtrlTraingraph);
        m2lbl->setObjectName(QString::fromUtf8("m2lbl"));
        m2lbl->setGeometry(QRect(420, 20, 100, 45));
        m2lbl->setAlignment(Qt::AlignCenter);
        mp2lbl = new QLabel(CtrlTraingraph);
        mp2lbl->setObjectName(QString::fromUtf8("mp2lbl"));
        mp2lbl->setGeometry(QRect(523, 20, 100, 45));
        mp2lbl->setAlignment(Qt::AlignCenter);
        tc2lbl = new QLabel(CtrlTraingraph);
        tc2lbl->setObjectName(QString::fromUtf8("tc2lbl"));
        tc2lbl->setGeometry(QRect(626, 20, 100, 45));
        tc2lbl->setAlignment(Qt::AlignCenter);
        tc1keylbl = new QLabel(CtrlTraingraph);
        tc1keylbl->setObjectName(QString::fromUtf8("tc1keylbl"));
        tc1keylbl->setGeometry(QRect(90, 20, 31, 45));
        tc1keylbl->setStyleSheet(QString::fromUtf8("border-image: url(:/images/images/TC1traingraphKeynoact.bmp);"));
        tc1keylbl->setAlignment(Qt::AlignCenter);
        tc2keylbl = new QLabel(CtrlTraingraph);
        tc2keylbl->setObjectName(QString::fromUtf8("tc2keylbl"));
        tc2keylbl->setGeometry(QRect(725, 20, 31, 45));
        tc2keylbl->setStyleSheet(QString::fromUtf8("border-image: url(:/images/images/TC2traingraphKeynoact.bmp);"));
        tc2keylbl->setAlignment(Qt::AlignCenter);
        tc1directionlbl = new QLabel(CtrlTraingraph);
        tc1directionlbl->setObjectName(QString::fromUtf8("tc1directionlbl"));
        tc1directionlbl->setGeometry(QRect(40, 20, 51, 51));
        tc1directionlbl->setStyleSheet(QString::fromUtf8("border-image: url(:/images/images/TC1traingraphDirection.bmp);"));
        tc1directionlbl->setAlignment(Qt::AlignCenter);
        tc2directionlbl = new QLabel(CtrlTraingraph);
        tc2directionlbl->setObjectName(QString::fromUtf8("tc2directionlbl"));
        tc2directionlbl->setGeometry(QRect(755, 20, 51, 51));
        tc2directionlbl->setStyleSheet(QString::fromUtf8("border-image: url(:/images/images/TC2traingraphDirection.bmp);"));
        tc2directionlbl->setAlignment(Qt::AlignCenter);
        tc1wheel1lbl = new QLabel(CtrlTraingraph);
        tc1wheel1lbl->setObjectName(QString::fromUtf8("tc1wheel1lbl"));
        tc1wheel1lbl->setGeometry(QRect(130, 65, 14, 14));
        tc1wheel1lbl->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"border-radius:7px;\n"
""));
        tc1wheel1lbl->setAlignment(Qt::AlignCenter);
        tc1wheel2lbl = new QLabel(CtrlTraingraph);
        tc1wheel2lbl->setObjectName(QString::fromUtf8("tc1wheel2lbl"));
        tc1wheel2lbl->setGeometry(QRect(180, 65, 14, 14));
        tc1wheel2lbl->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"border-radius:7px;\n"
""));
        tc1wheel2lbl->setAlignment(Qt::AlignCenter);
        tc2wheel1lbl = new QLabel(CtrlTraingraph);
        tc2wheel1lbl->setObjectName(QString::fromUtf8("tc2wheel1lbl"));
        tc2wheel1lbl->setGeometry(QRect(690, 65, 14, 14));
        tc2wheel1lbl->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"border-radius:7px;\n"
""));
        tc2wheel1lbl->setAlignment(Qt::AlignCenter);
        tc2wheel2lbl = new QLabel(CtrlTraingraph);
        tc2wheel2lbl->setObjectName(QString::fromUtf8("tc2wheel2lbl"));
        tc2wheel2lbl->setGeometry(QRect(640, 65, 14, 14));
        tc2wheel2lbl->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"border-radius:7px;\n"
""));
        tc2wheel2lbl->setAlignment(Qt::AlignCenter);
        mp1wheel2lbl = new QLabel(CtrlTraingraph);
        mp1wheel2lbl->setObjectName(QString::fromUtf8("mp1wheel2lbl"));
        mp1wheel2lbl->setGeometry(QRect(280, 65, 14, 14));
        mp1wheel2lbl->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"border-radius:7px;\n"
""));
        mp1wheel2lbl->setAlignment(Qt::AlignCenter);
        mp1wheel1lbl = new QLabel(CtrlTraingraph);
        mp1wheel1lbl->setObjectName(QString::fromUtf8("mp1wheel1lbl"));
        mp1wheel1lbl->setGeometry(QRect(230, 65, 14, 14));
        mp1wheel1lbl->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"border-radius:7px;\n"
""));
        mp1wheel1lbl->setAlignment(Qt::AlignCenter);
        m1wheel1lbl = new QLabel(CtrlTraingraph);
        m1wheel1lbl->setObjectName(QString::fromUtf8("m1wheel1lbl"));
        m1wheel1lbl->setGeometry(QRect(330, 65, 14, 14));
        m1wheel1lbl->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"border-radius:7px;\n"
""));
        m1wheel1lbl->setAlignment(Qt::AlignCenter);
        m1wheel2lbl = new QLabel(CtrlTraingraph);
        m1wheel2lbl->setObjectName(QString::fromUtf8("m1wheel2lbl"));
        m1wheel2lbl->setGeometry(QRect(380, 65, 14, 14));
        m1wheel2lbl->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"border-radius:7px;\n"
""));
        m1wheel2lbl->setAlignment(Qt::AlignCenter);
        m2wheel2lbl = new QLabel(CtrlTraingraph);
        m2wheel2lbl->setObjectName(QString::fromUtf8("m2wheel2lbl"));
        m2wheel2lbl->setGeometry(QRect(440, 65, 14, 14));
        m2wheel2lbl->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"border-radius:7px;\n"
""));
        m2wheel2lbl->setAlignment(Qt::AlignCenter);
        m2wheel1lbl = new QLabel(CtrlTraingraph);
        m2wheel1lbl->setObjectName(QString::fromUtf8("m2wheel1lbl"));
        m2wheel1lbl->setGeometry(QRect(490, 65, 14, 14));
        m2wheel1lbl->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"border-radius:7px;\n"
""));
        m2wheel1lbl->setAlignment(Qt::AlignCenter);
        mp2wheel1lbl = new QLabel(CtrlTraingraph);
        mp2wheel1lbl->setObjectName(QString::fromUtf8("mp2wheel1lbl"));
        mp2wheel1lbl->setGeometry(QRect(590, 65, 14, 14));
        mp2wheel1lbl->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"border-radius:7px;\n"
""));
        mp2wheel1lbl->setAlignment(Qt::AlignCenter);
        mp2wheel2lbl = new QLabel(CtrlTraingraph);
        mp2wheel2lbl->setObjectName(QString::fromUtf8("mp2wheel2lbl"));
        mp2wheel2lbl->setGeometry(QRect(540, 65, 14, 14));
        mp2wheel2lbl->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"border-radius:7px;\n"
""));
        mp2wheel2lbl->setAlignment(Qt::AlignCenter);

        retranslateUi(CtrlTraingraph);

        QMetaObject::connectSlotsByName(CtrlTraingraph);
    } // setupUi

    void retranslateUi(QWidget *CtrlTraingraph)
    {
        CtrlTraingraph->setWindowTitle(QApplication::translate("CtrlTraingraph", "Form", 0, QApplication::UnicodeUTF8));
        tc1lbl->setText(QApplication::translate("CtrlTraingraph", "1001", 0, QApplication::UnicodeUTF8));
        mp1lbl->setText(QApplication::translate("CtrlTraingraph", "1002", 0, QApplication::UnicodeUTF8));
        m1lbl->setText(QApplication::translate("CtrlTraingraph", "1003", 0, QApplication::UnicodeUTF8));
        m2lbl->setText(QApplication::translate("CtrlTraingraph", "1004", 0, QApplication::UnicodeUTF8));
        mp2lbl->setText(QApplication::translate("CtrlTraingraph", "1005", 0, QApplication::UnicodeUTF8));
        tc2lbl->setText(QApplication::translate("CtrlTraingraph", "1006", 0, QApplication::UnicodeUTF8));
        tc1keylbl->setText(QString());
        tc2keylbl->setText(QString());
        tc1directionlbl->setText(QString());
        tc2directionlbl->setText(QString());
        tc1wheel1lbl->setText(QString());
        tc1wheel2lbl->setText(QString());
        tc2wheel1lbl->setText(QString());
        tc2wheel2lbl->setText(QString());
        mp1wheel2lbl->setText(QString());
        mp1wheel1lbl->setText(QString());
        m1wheel1lbl->setText(QString());
        m1wheel2lbl->setText(QString());
        m2wheel2lbl->setText(QString());
        m2wheel1lbl->setText(QString());
        mp2wheel1lbl->setText(QString());
        mp2wheel2lbl->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CtrlTraingraph: public Ui_CtrlTraingraph {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CTRLTRAINGRAPH_H
