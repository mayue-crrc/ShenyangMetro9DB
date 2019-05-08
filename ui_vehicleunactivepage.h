/********************************************************************************
** Form generated from reading UI file 'vehicleunactivepage.ui'
**
** Created: Wed May 8 08:13:32 2019
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VEHICLEUNACTIVEPAGE_H
#define UI_VEHICLEUNACTIVEPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VehicleUnactivePage
{
public:
    QLabel *label;

    void setupUi(QWidget *VehicleUnactivePage)
    {
        if (VehicleUnactivePage->objectName().isEmpty())
            VehicleUnactivePage->setObjectName(QString::fromUtf8("VehicleUnactivePage"));
        VehicleUnactivePage->resize(1024, 768);
        label = new QLabel(VehicleUnactivePage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 1024, 768));
        label->setStyleSheet(QString::fromUtf8("background-color:black;"));

        retranslateUi(VehicleUnactivePage);

        QMetaObject::connectSlotsByName(VehicleUnactivePage);
    } // setupUi

    void retranslateUi(QWidget *VehicleUnactivePage)
    {
        VehicleUnactivePage->setWindowTitle(QApplication::translate("VehicleUnactivePage", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("VehicleUnactivePage", "TextLabel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class VehicleUnactivePage: public Ui_VehicleUnactivePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VEHICLEUNACTIVEPAGE_H
