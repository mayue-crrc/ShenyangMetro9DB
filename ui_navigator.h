/********************************************************************************
** Form generated from reading UI file 'navigator.ui'
**
** Created: Wed May 8 08:13:31 2019
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NAVIGATOR_H
#define UI_NAVIGATOR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Navigator
{
public:
    QPushButton *NButton1;
    QLabel *label;
    QPushButton *NButton2;
    QPushButton *NButton3;
    QPushButton *NButton4;
    QPushButton *NButton5;
    QPushButton *NButton6;
    QPushButton *NButton7;
    QPushButton *NButton8;

    void setupUi(QWidget *Navigator)
    {
        if (Navigator->objectName().isEmpty())
            Navigator->setObjectName(QString::fromUtf8("Navigator"));
        Navigator->resize(1024, 82);
        Navigator->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"	background-color: black;\n"
"}\n"
"QLabel\n"
"{\n"
"	border:1px solid white;\n"
"}\n"
"\n"
"QPushButton\n"
"{\n"
"	font: 20px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: white;\n"
"	background-color: rgb(0, 100, 255);\n"
"	border-radius:8px;\n"
"	\n"
"	border-top: 2px solid lightgray;	\n"
"	border-left: 2px solid lightgray;\n"
"}"));
        NButton1 = new QPushButton(Navigator);
        NButton1->setObjectName(QString::fromUtf8("NButton1"));
        NButton1->setGeometry(QRect(15, 17, 120, 50));
        NButton1->setFocusPolicy(Qt::NoFocus);
        label = new QLabel(Navigator);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(3, 7, 1018, 72));
        NButton2 = new QPushButton(Navigator);
        NButton2->setObjectName(QString::fromUtf8("NButton2"));
        NButton2->setGeometry(QRect(140, 17, 120, 50));
        NButton2->setFocusPolicy(Qt::NoFocus);
        NButton3 = new QPushButton(Navigator);
        NButton3->setObjectName(QString::fromUtf8("NButton3"));
        NButton3->setGeometry(QRect(265, 17, 120, 50));
        NButton3->setFocusPolicy(Qt::NoFocus);
        NButton4 = new QPushButton(Navigator);
        NButton4->setObjectName(QString::fromUtf8("NButton4"));
        NButton4->setGeometry(QRect(390, 17, 120, 50));
        NButton4->setFocusPolicy(Qt::NoFocus);
        NButton5 = new QPushButton(Navigator);
        NButton5->setObjectName(QString::fromUtf8("NButton5"));
        NButton5->setGeometry(QRect(515, 17, 120, 50));
        NButton5->setFocusPolicy(Qt::NoFocus);
        NButton6 = new QPushButton(Navigator);
        NButton6->setObjectName(QString::fromUtf8("NButton6"));
        NButton6->setGeometry(QRect(640, 17, 120, 50));
        NButton6->setFocusPolicy(Qt::NoFocus);
        NButton7 = new QPushButton(Navigator);
        NButton7->setObjectName(QString::fromUtf8("NButton7"));
        NButton7->setGeometry(QRect(765, 17, 120, 50));
        NButton7->setFocusPolicy(Qt::NoFocus);
        NButton8 = new QPushButton(Navigator);
        NButton8->setObjectName(QString::fromUtf8("NButton8"));
        NButton8->setGeometry(QRect(890, 17, 120, 50));
        NButton8->setFocusPolicy(Qt::NoFocus);
        label->raise();
        NButton1->raise();
        NButton2->raise();
        NButton3->raise();
        NButton4->raise();
        NButton5->raise();
        NButton6->raise();
        NButton7->raise();
        NButton8->raise();

        retranslateUi(Navigator);

        QMetaObject::connectSlotsByName(Navigator);
    } // setupUi

    void retranslateUi(QWidget *Navigator)
    {
        Navigator->setWindowTitle(QApplication::translate("Navigator", "Form", 0, QApplication::UnicodeUTF8));
        NButton1->setText(QApplication::translate("Navigator", "\344\270\200\350\210\254\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Navigator", "TextLabel", 0, QApplication::UnicodeUTF8));
        NButton2->setText(QApplication::translate("Navigator", "\345\210\266\345\212\250", 0, QApplication::UnicodeUTF8));
        NButton3->setText(QApplication::translate("Navigator", "\347\211\265\345\274\225", 0, QApplication::UnicodeUTF8));
        NButton4->setText(QApplication::translate("Navigator", "\350\276\205\345\212\251", 0, QApplication::UnicodeUTF8));
        NButton5->setText(QApplication::translate("Navigator", "\347\251\272\350\260\203", 0, QApplication::UnicodeUTF8));
        NButton6->setText(QApplication::translate("Navigator", "\346\225\205\351\232\234\345\261\245\345\216\206", 0, QApplication::UnicodeUTF8));
        NButton7->setText(QApplication::translate("Navigator", "\345\275\223\345\211\215\350\275\246\345\206\265", 0, QApplication::UnicodeUTF8));
        NButton8->setText(QApplication::translate("Navigator", "\347\273\264\344\277\256\350\217\234\345\215\225", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Navigator: public Ui_Navigator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NAVIGATOR_H
