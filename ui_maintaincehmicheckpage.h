/********************************************************************************
** Form generated from reading UI file 'maintaincehmicheckpage.ui'
**
** Created: Wed Oct 24 13:51:38 2018
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINTAINCEHMICHECKPAGE_H
#define UI_MAINTAINCEHMICHECKPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MaintainceHMICheckPage
{
public:
    QPushButton *ColorCheckBtn;

    void setupUi(QWidget *MaintainceHMICheckPage)
    {
        if (MaintainceHMICheckPage->objectName().isEmpty())
            MaintainceHMICheckPage->setObjectName(QString::fromUtf8("MaintainceHMICheckPage"));
        MaintainceHMICheckPage->resize(1024, 768);
        ColorCheckBtn = new QPushButton(MaintainceHMICheckPage);
        ColorCheckBtn->setObjectName(QString::fromUtf8("ColorCheckBtn"));
        ColorCheckBtn->setGeometry(QRect(0, 0, 1024, 768));
        ColorCheckBtn->setFocusPolicy(Qt::NoFocus);
        ColorCheckBtn->setStyleSheet(QString::fromUtf8("border-image: url(:/images/images/colorCheck1.png);"));

        retranslateUi(MaintainceHMICheckPage);

        QMetaObject::connectSlotsByName(MaintainceHMICheckPage);
    } // setupUi

    void retranslateUi(QWidget *MaintainceHMICheckPage)
    {
        MaintainceHMICheckPage->setWindowTitle(QApplication::translate("MaintainceHMICheckPage", "Form", 0, QApplication::UnicodeUTF8));
        ColorCheckBtn->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MaintainceHMICheckPage: public Ui_MaintainceHMICheckPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINTAINCEHMICHECKPAGE_H
