#ifndef VEHICLERESETPAGE_H
#define VEHICLERESETPAGE_H

#include "mybase.h"
#include "qlabel.h"
#include "qpushbutton.h"
namespace Ui {
    class VehicleResetPage;
}

class VehicleResetPage : public MyBase
{
    Q_OBJECT

public:
    explicit VehicleResetPage(QWidget *parent = 0);
    ~VehicleResetPage();
    void updatePage();
private:
    Ui::VehicleResetPage *ui;
    int DCU2sTimer,ACM2sTimer;
    void setlabelstates(QLabel* lbl,int states,bool isonline);

    QList<QPushButton *> buttons;
    bool Buttonstatus[6];
    int m_BtnID;

private slots:

    void on_VVVFMP1Btn_pressed();
    void on_ACMRESETTC1Btn_pressed();

    void ButtonsPressEvent();

    void on_returnBtn_pressed();
};

#endif // VEHICLERESETPAGE_H
