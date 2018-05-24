#ifndef VEHICLERESETPAGE_H
#define VEHICLERESETPAGE_H

#include "mybase.h"
#include "qlabel.h"

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
    int DCU2sTimer[4],ACM2sTimer[4];
    void setlabelstates(QLabel* lbl,int states);

private slots:
    void on_VVVFMP2Btn_pressed();
    void on_VVVFM2Btn_pressed();
    void on_VVVFM1Btn_pressed();
    void on_VVVFMP1Btn_pressed();
    void on_ACMRESETTC2Btn_pressed();
    void on_ACMRESETM2Btn_pressed();
    void on_ACMRESETM1Btn_pressed();
    void on_ACMRESETTC1Btn_pressed();
    void on_returnBtn_pressed();
};

#endif // VEHICLERESETPAGE_H
