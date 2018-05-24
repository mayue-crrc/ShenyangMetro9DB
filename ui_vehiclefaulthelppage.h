/********************************************************************************
** Form generated from reading UI file 'vehiclefaulthelppage.ui'
**
** Created: Thu Apr 19 11:15:44 2018
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VEHICLEFAULTHELPPAGE_H
#define UI_VEHICLEFAULTHELPPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VehicleFaultHelpPage
{
public:
    QLabel *label_98;
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QWidget *VehicleFaultHelpPage)
    {
        if (VehicleFaultHelpPage->objectName().isEmpty())
            VehicleFaultHelpPage->setObjectName(QString::fromUtf8("VehicleFaultHelpPage"));
        VehicleFaultHelpPage->resize(800, 320);
        VehicleFaultHelpPage->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"	background-color:black;\n"
"}\n"
"QPushButton\n"
"{\n"
"	font: 20px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: white;\n"
"		border-radius:8px;\n"
"	background-color: rgb(0, 128, 0);\n"
"    border-top: 2px solid white;\n"
"	border-left: 2px solid white;\n"
"\n"
"}\n"
"\n"
"QLabel\n"
"{\n"
"	font: 20px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	color:white;\n"
"	background-color:black;\n"
"}"));
        label_98 = new QLabel(VehicleFaultHelpPage);
        label_98->setObjectName(QString::fromUtf8("label_98"));
        label_98->setGeometry(QRect(0, 0, 800, 321));
        label_98->setStyleSheet(QString::fromUtf8("border:3px solid white;\n"
"border-radius:10px"));
        label_98->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(VehicleFaultHelpPage);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(690, 250, 98, 41));
        pushButton->setFocusPolicy(Qt::NoFocus);
        label = new QLabel(VehicleFaultHelpPage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 20, 711, 41));
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_2 = new QLabel(VehicleFaultHelpPage);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(70, 80, 651, 161));
        label_2->setStyleSheet(QString::fromUtf8("border-image: url(:/images/images/faulthelp.bmp);"));
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        retranslateUi(VehicleFaultHelpPage);

        QMetaObject::connectSlotsByName(VehicleFaultHelpPage);
    } // setupUi

    void retranslateUi(QWidget *VehicleFaultHelpPage)
    {
        VehicleFaultHelpPage->setWindowTitle(QApplication::translate("VehicleFaultHelpPage", "Form", 0, QApplication::UnicodeUTF8));
        label_98->setText(QString());
        pushButton->setText(QApplication::translate("VehicleFaultHelpPage", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("VehicleFaultHelpPage", "\346\225\205\351\232\234\344\273\243\347\240\201\351\207\212\344\271\211:e.g. 12345,\344\273\243\350\241\250\346\204\217\344\271\211\345\246\202\344\270\213", 0, QApplication::UnicodeUTF8));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class VehicleFaultHelpPage: public Ui_VehicleFaultHelpPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VEHICLEFAULTHELPPAGE_H
