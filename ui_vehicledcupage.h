/********************************************************************************
** Form generated from reading UI file 'vehicledcupage.ui'
**
** Created: Thu Apr 19 11:15:44 2018
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VEHICLEDCUPAGE_H
#define UI_VEHICLEDCUPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VehicleDCUPage
{
public:
    QLabel *MOTORIM2lbl;
    QLabel *KMM2lbl;
    QLabel *lbl1_9;
    QLabel *PANTOMP1_1lbl;
    QLabel *lbl1_6;
    QLabel *lbl1_5;
    QLabel *VDCM2lbl;
    QLabel *HSBCM2lbl;
    QLabel *VDCMP2lbl;
    QLabel *VDCM1lbl;
    QLabel *KMMP1lbl;
    QLabel *MOTORIMP1lbl;
    QLabel *lbl1;
    QLabel *KMM1lbl;
    QLabel *lbl1_8;
    QLabel *HSBCMP2lbl;
    QLabel *MOTORIMP2lbl;
    QLabel *VDCMP1lbl;
    QLabel *lbl1_4;
    QLabel *KMMP2lbl;
    QLabel *MOTORIM1lbl;
    QLabel *PANTOMP2_1lbl;
    QLabel *HSBCMP1lbl;
    QLabel *lbl1_3;
    QLabel *HSBCM1lbl;
    QLabel *lbl1_2;
    QLabel *lbl1_14;
    QLabel *lbl1_15;
    QLabel *lbl1_10;
    QLabel *lbl1_11;
    QLabel *lbl1_12;
    QLabel *TCUEBMP1lbl;
    QLabel *TCUEBM2lbl;
    QLabel *TCUEBMP2lbl;
    QLabel *TCUEBM1lbl;
    QLabel *TCUIVM2lbl;
    QLabel *TCUIVM1lbl;
    QLabel *TCUIVMP2lbl;
    QLabel *TCUIVMP1lbl;

    void setupUi(QWidget *VehicleDCUPage)
    {
        if (VehicleDCUPage->objectName().isEmpty())
            VehicleDCUPage->setObjectName(QString::fromUtf8("VehicleDCUPage"));
        VehicleDCUPage->resize(1024, 513);
        VehicleDCUPage->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"	background-color:black;\n"
"}\n"
"QLabel\n"
"{\n"
"	font: 20px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	color:white;\n"
"background-color:blue;\n"
"}\n"
"QPushButton\n"
"{\n"
"	background-color:brown ;\n"
"	border-top: 2px solid white;	\n"
"	border-left: 2px solid white;\n"
"}"));
        MOTORIM2lbl = new QLabel(VehicleDCUPage);
        MOTORIM2lbl->setObjectName(QString::fromUtf8("MOTORIM2lbl"));
        MOTORIM2lbl->setGeometry(QRect(540, 390, 81, 31));
        MOTORIM2lbl->setAlignment(Qt::AlignCenter);
        KMM2lbl = new QLabel(VehicleDCUPage);
        KMM2lbl->setObjectName(QString::fromUtf8("KMM2lbl"));
        KMM2lbl->setGeometry(QRect(560, 250, 41, 31));
        KMM2lbl->setAlignment(Qt::AlignCenter);
        lbl1_9 = new QLabel(VehicleDCUPage);
        lbl1_9->setObjectName(QString::fromUtf8("lbl1_9"));
        lbl1_9->setGeometry(QRect(320, 125, 120, 2));
        lbl1_9->setStyleSheet(QString::fromUtf8("background-color:white;"));
        lbl1_9->setAlignment(Qt::AlignCenter);
        PANTOMP1_1lbl = new QLabel(VehicleDCUPage);
        PANTOMP1_1lbl->setObjectName(QString::fromUtf8("PANTOMP1_1lbl"));
        PANTOMP1_1lbl->setGeometry(QRect(310, 40, 41, 31));
        PANTOMP1_1lbl->setAlignment(Qt::AlignCenter);
        lbl1_6 = new QLabel(VehicleDCUPage);
        lbl1_6->setObjectName(QString::fromUtf8("lbl1_6"));
        lbl1_6->setGeometry(QRect(20, 390, 131, 31));
        lbl1_6->setStyleSheet(QString::fromUtf8("background-color:black;"));
        lbl1_6->setAlignment(Qt::AlignCenter);
        lbl1_5 = new QLabel(VehicleDCUPage);
        lbl1_5->setObjectName(QString::fromUtf8("lbl1_5"));
        lbl1_5->setGeometry(QRect(20, 320, 131, 31));
        lbl1_5->setStyleSheet(QString::fromUtf8("background-color:black;"));
        lbl1_5->setAlignment(Qt::AlignCenter);
        VDCM2lbl = new QLabel(VehicleDCUPage);
        VDCM2lbl->setObjectName(QString::fromUtf8("VDCM2lbl"));
        VDCM2lbl->setGeometry(QRect(540, 180, 81, 31));
        VDCM2lbl->setAlignment(Qt::AlignCenter);
        HSBCM2lbl = new QLabel(VehicleDCUPage);
        HSBCM2lbl->setObjectName(QString::fromUtf8("HSBCM2lbl"));
        HSBCM2lbl->setGeometry(QRect(560, 110, 41, 31));
        HSBCM2lbl->setAlignment(Qt::AlignCenter);
        VDCMP2lbl = new QLabel(VehicleDCUPage);
        VDCMP2lbl->setObjectName(QString::fromUtf8("VDCMP2lbl"));
        VDCMP2lbl->setGeometry(QRect(660, 180, 81, 31));
        VDCMP2lbl->setAlignment(Qt::AlignCenter);
        VDCM1lbl = new QLabel(VehicleDCUPage);
        VDCM1lbl->setObjectName(QString::fromUtf8("VDCM1lbl"));
        VDCM1lbl->setGeometry(QRect(410, 180, 81, 31));
        VDCM1lbl->setAlignment(Qt::AlignCenter);
        KMMP1lbl = new QLabel(VehicleDCUPage);
        KMMP1lbl->setObjectName(QString::fromUtf8("KMMP1lbl"));
        KMMP1lbl->setGeometry(QRect(310, 250, 41, 31));
        KMMP1lbl->setAlignment(Qt::AlignCenter);
        MOTORIMP1lbl = new QLabel(VehicleDCUPage);
        MOTORIMP1lbl->setObjectName(QString::fromUtf8("MOTORIMP1lbl"));
        MOTORIMP1lbl->setGeometry(QRect(290, 390, 81, 31));
        MOTORIMP1lbl->setAlignment(Qt::AlignCenter);
        lbl1 = new QLabel(VehicleDCUPage);
        lbl1->setObjectName(QString::fromUtf8("lbl1"));
        lbl1->setGeometry(QRect(20, 30, 131, 51));
        lbl1->setStyleSheet(QString::fromUtf8("background-color:black;"));
        lbl1->setAlignment(Qt::AlignCenter);
        KMM1lbl = new QLabel(VehicleDCUPage);
        KMM1lbl->setObjectName(QString::fromUtf8("KMM1lbl"));
        KMM1lbl->setGeometry(QRect(430, 250, 41, 31));
        KMM1lbl->setAlignment(Qt::AlignCenter);
        lbl1_8 = new QLabel(VehicleDCUPage);
        lbl1_8->setObjectName(QString::fromUtf8("lbl1_8"));
        lbl1_8->setGeometry(QRect(330, 70, 2, 400));
        lbl1_8->setStyleSheet(QString::fromUtf8("background-color:white;"));
        lbl1_8->setAlignment(Qt::AlignCenter);
        HSBCMP2lbl = new QLabel(VehicleDCUPage);
        HSBCMP2lbl->setObjectName(QString::fromUtf8("HSBCMP2lbl"));
        HSBCMP2lbl->setGeometry(QRect(680, 110, 41, 31));
        HSBCMP2lbl->setAlignment(Qt::AlignCenter);
        MOTORIMP2lbl = new QLabel(VehicleDCUPage);
        MOTORIMP2lbl->setObjectName(QString::fromUtf8("MOTORIMP2lbl"));
        MOTORIMP2lbl->setGeometry(QRect(660, 390, 81, 31));
        MOTORIMP2lbl->setAlignment(Qt::AlignCenter);
        VDCMP1lbl = new QLabel(VehicleDCUPage);
        VDCMP1lbl->setObjectName(QString::fromUtf8("VDCMP1lbl"));
        VDCMP1lbl->setGeometry(QRect(290, 180, 81, 31));
        VDCMP1lbl->setAlignment(Qt::AlignCenter);
        lbl1_4 = new QLabel(VehicleDCUPage);
        lbl1_4->setObjectName(QString::fromUtf8("lbl1_4"));
        lbl1_4->setGeometry(QRect(20, 250, 131, 31));
        lbl1_4->setStyleSheet(QString::fromUtf8("background-color:black;"));
        lbl1_4->setAlignment(Qt::AlignCenter);
        KMMP2lbl = new QLabel(VehicleDCUPage);
        KMMP2lbl->setObjectName(QString::fromUtf8("KMMP2lbl"));
        KMMP2lbl->setGeometry(QRect(680, 250, 41, 31));
        KMMP2lbl->setAlignment(Qt::AlignCenter);
        MOTORIM1lbl = new QLabel(VehicleDCUPage);
        MOTORIM1lbl->setObjectName(QString::fromUtf8("MOTORIM1lbl"));
        MOTORIM1lbl->setGeometry(QRect(410, 390, 81, 31));
        MOTORIM1lbl->setAlignment(Qt::AlignCenter);
        PANTOMP2_1lbl = new QLabel(VehicleDCUPage);
        PANTOMP2_1lbl->setObjectName(QString::fromUtf8("PANTOMP2_1lbl"));
        PANTOMP2_1lbl->setGeometry(QRect(680, 40, 41, 31));
        PANTOMP2_1lbl->setAlignment(Qt::AlignCenter);
        HSBCMP1lbl = new QLabel(VehicleDCUPage);
        HSBCMP1lbl->setObjectName(QString::fromUtf8("HSBCMP1lbl"));
        HSBCMP1lbl->setGeometry(QRect(310, 110, 41, 31));
        HSBCMP1lbl->setAlignment(Qt::AlignCenter);
        lbl1_3 = new QLabel(VehicleDCUPage);
        lbl1_3->setObjectName(QString::fromUtf8("lbl1_3"));
        lbl1_3->setGeometry(QRect(20, 180, 131, 31));
        lbl1_3->setStyleSheet(QString::fromUtf8("background-color:black;"));
        lbl1_3->setAlignment(Qt::AlignCenter);
        HSBCM1lbl = new QLabel(VehicleDCUPage);
        HSBCM1lbl->setObjectName(QString::fromUtf8("HSBCM1lbl"));
        HSBCM1lbl->setGeometry(QRect(430, 110, 41, 31));
        HSBCM1lbl->setAlignment(Qt::AlignCenter);
        lbl1_2 = new QLabel(VehicleDCUPage);
        lbl1_2->setObjectName(QString::fromUtf8("lbl1_2"));
        lbl1_2->setGeometry(QRect(20, 110, 131, 31));
        lbl1_2->setStyleSheet(QString::fromUtf8("background-color:black;"));
        lbl1_2->setAlignment(Qt::AlignCenter);
        lbl1_14 = new QLabel(VehicleDCUPage);
        lbl1_14->setObjectName(QString::fromUtf8("lbl1_14"));
        lbl1_14->setGeometry(QRect(20, 460, 191, 31));
        lbl1_14->setStyleSheet(QString::fromUtf8("background-color:black;"));
        lbl1_14->setAlignment(Qt::AlignCenter);
        lbl1_15 = new QLabel(VehicleDCUPage);
        lbl1_15->setObjectName(QString::fromUtf8("lbl1_15"));
        lbl1_15->setGeometry(QRect(700, 70, 2, 400));
        lbl1_15->setStyleSheet(QString::fromUtf8("background-color:white;"));
        lbl1_15->setAlignment(Qt::AlignCenter);
        lbl1_10 = new QLabel(VehicleDCUPage);
        lbl1_10->setObjectName(QString::fromUtf8("lbl1_10"));
        lbl1_10->setGeometry(QRect(450, 120, 2, 350));
        lbl1_10->setStyleSheet(QString::fromUtf8("background-color:white;"));
        lbl1_10->setAlignment(Qt::AlignCenter);
        lbl1_11 = new QLabel(VehicleDCUPage);
        lbl1_11->setObjectName(QString::fromUtf8("lbl1_11"));
        lbl1_11->setGeometry(QRect(580, 120, 2, 350));
        lbl1_11->setStyleSheet(QString::fromUtf8("background-color:white;"));
        lbl1_11->setAlignment(Qt::AlignCenter);
        lbl1_12 = new QLabel(VehicleDCUPage);
        lbl1_12->setObjectName(QString::fromUtf8("lbl1_12"));
        lbl1_12->setGeometry(QRect(580, 125, 120, 2));
        lbl1_12->setStyleSheet(QString::fromUtf8("background-color:white;"));
        lbl1_12->setAlignment(Qt::AlignCenter);
        TCUEBMP1lbl = new QLabel(VehicleDCUPage);
        TCUEBMP1lbl->setObjectName(QString::fromUtf8("TCUEBMP1lbl"));
        TCUEBMP1lbl->setGeometry(QRect(290, 460, 81, 31));
        TCUEBMP1lbl->setAlignment(Qt::AlignCenter);
        TCUEBM2lbl = new QLabel(VehicleDCUPage);
        TCUEBM2lbl->setObjectName(QString::fromUtf8("TCUEBM2lbl"));
        TCUEBM2lbl->setGeometry(QRect(540, 460, 81, 31));
        TCUEBM2lbl->setAlignment(Qt::AlignCenter);
        TCUEBMP2lbl = new QLabel(VehicleDCUPage);
        TCUEBMP2lbl->setObjectName(QString::fromUtf8("TCUEBMP2lbl"));
        TCUEBMP2lbl->setGeometry(QRect(660, 460, 81, 31));
        TCUEBMP2lbl->setAlignment(Qt::AlignCenter);
        TCUEBM1lbl = new QLabel(VehicleDCUPage);
        TCUEBM1lbl->setObjectName(QString::fromUtf8("TCUEBM1lbl"));
        TCUEBM1lbl->setGeometry(QRect(410, 460, 81, 31));
        TCUEBM1lbl->setAlignment(Qt::AlignCenter);
        TCUIVM2lbl = new QLabel(VehicleDCUPage);
        TCUIVM2lbl->setObjectName(QString::fromUtf8("TCUIVM2lbl"));
        TCUIVM2lbl->setGeometry(QRect(560, 320, 41, 31));
        TCUIVM2lbl->setAlignment(Qt::AlignCenter);
        TCUIVM1lbl = new QLabel(VehicleDCUPage);
        TCUIVM1lbl->setObjectName(QString::fromUtf8("TCUIVM1lbl"));
        TCUIVM1lbl->setGeometry(QRect(430, 320, 41, 31));
        TCUIVM1lbl->setAlignment(Qt::AlignCenter);
        TCUIVMP2lbl = new QLabel(VehicleDCUPage);
        TCUIVMP2lbl->setObjectName(QString::fromUtf8("TCUIVMP2lbl"));
        TCUIVMP2lbl->setGeometry(QRect(680, 320, 41, 31));
        TCUIVMP2lbl->setAlignment(Qt::AlignCenter);
        TCUIVMP1lbl = new QLabel(VehicleDCUPage);
        TCUIVMP1lbl->setObjectName(QString::fromUtf8("TCUIVMP1lbl"));
        TCUIVMP1lbl->setGeometry(QRect(310, 320, 41, 31));
        TCUIVMP1lbl->setAlignment(Qt::AlignCenter);
        lbl1_14->raise();
        lbl1_11->raise();
        lbl1_8->raise();
        lbl1_10->raise();
        lbl1_15->raise();
        lbl1_12->raise();
        lbl1_9->raise();
        MOTORIM2lbl->raise();
        KMM2lbl->raise();
        PANTOMP1_1lbl->raise();
        lbl1_6->raise();
        lbl1_5->raise();
        VDCM2lbl->raise();
        HSBCM2lbl->raise();
        VDCMP2lbl->raise();
        VDCM1lbl->raise();
        KMMP1lbl->raise();
        MOTORIMP1lbl->raise();
        lbl1->raise();
        KMM1lbl->raise();
        HSBCMP2lbl->raise();
        MOTORIMP2lbl->raise();
        VDCMP1lbl->raise();
        lbl1_4->raise();
        KMMP2lbl->raise();
        MOTORIM1lbl->raise();
        PANTOMP2_1lbl->raise();
        HSBCMP1lbl->raise();
        lbl1_3->raise();
        HSBCM1lbl->raise();
        lbl1_2->raise();
        TCUEBMP1lbl->raise();
        TCUEBM2lbl->raise();
        TCUEBMP2lbl->raise();
        TCUEBM1lbl->raise();
        TCUIVM2lbl->raise();
        TCUIVM1lbl->raise();
        TCUIVMP2lbl->raise();
        TCUIVMP1lbl->raise();

        retranslateUi(VehicleDCUPage);

        QMetaObject::connectSlotsByName(VehicleDCUPage);
    } // setupUi

    void retranslateUi(QWidget *VehicleDCUPage)
    {
        VehicleDCUPage->setWindowTitle(QApplication::translate("VehicleDCUPage", "Form", 0, QApplication::UnicodeUTF8));
        MOTORIM2lbl->setText(QString());
        KMM2lbl->setText(QString());
        lbl1_9->setText(QString());
        PANTOMP1_1lbl->setText(QString());
        lbl1_6->setText(QApplication::translate("VehicleDCUPage", "\347\224\265\346\234\272\347\224\265\346\265\201(A)", 0, QApplication::UnicodeUTF8));
        lbl1_5->setText(QApplication::translate("VehicleDCUPage", "\347\211\265\345\274\225\351\200\206\345\217\230\345\231\250", 0, QApplication::UnicodeUTF8));
        VDCM2lbl->setText(QString());
        HSBCM2lbl->setText(QString());
        VDCMP2lbl->setText(QString());
        VDCM1lbl->setText(QString());
        KMMP1lbl->setText(QString());
        MOTORIMP1lbl->setText(QString());
        lbl1->setText(QApplication::translate("VehicleDCUPage", "\350\207\252\345\212\250\351\231\215\345\274\223", 0, QApplication::UnicodeUTF8));
        KMM1lbl->setText(QString());
        lbl1_8->setText(QString());
        HSBCMP2lbl->setText(QString());
        MOTORIMP2lbl->setText(QString());
        VDCMP1lbl->setText(QString());
        lbl1_4->setText(QApplication::translate("VehicleDCUPage", "\345\210\206\347\246\273\346\216\245\350\247\246\345\231\250", 0, QApplication::UnicodeUTF8));
        KMMP2lbl->setText(QString());
        MOTORIM1lbl->setText(QString());
        PANTOMP2_1lbl->setText(QString());
        HSBCMP1lbl->setText(QString());
        lbl1_3->setText(QApplication::translate("VehicleDCUPage", "\347\224\265\345\216\213(Vdc)", 0, QApplication::UnicodeUTF8));
        HSBCM1lbl->setText(QString());
        lbl1_2->setText(QApplication::translate("VehicleDCUPage", "\351\253\230\351\200\237\346\226\255\350\267\257\345\231\250", 0, QApplication::UnicodeUTF8));
        lbl1_14->setText(QApplication::translate("VehicleDCUPage", "\347\211\265\345\274\225/\347\224\265\345\210\266\345\212\250\345\212\233(KN)", 0, QApplication::UnicodeUTF8));
        lbl1_15->setText(QString());
        lbl1_10->setText(QString());
        lbl1_11->setText(QString());
        lbl1_12->setText(QString());
        TCUEBMP1lbl->setText(QString());
        TCUEBM2lbl->setText(QString());
        TCUEBMP2lbl->setText(QString());
        TCUEBM1lbl->setText(QString());
        TCUIVM2lbl->setText(QString());
        TCUIVM1lbl->setText(QString());
        TCUIVMP2lbl->setText(QString());
        TCUIVMP1lbl->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class VehicleDCUPage: public Ui_VehicleDCUPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VEHICLEDCUPAGE_H
