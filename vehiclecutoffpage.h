#ifndef VEHICLECUTOFFPAGE_H
#define VEHICLECUTOFFPAGE_H

#include "mybase.h"
#include "qlabel.h"

namespace Ui {
    class VehicleCutoffPage;
}

class VehicleCutoffPage : public MyBase
{
    Q_OBJECT

public:
    explicit VehicleCutoffPage(QWidget *parent = 0);
    ~VehicleCutoffPage();

private:
    Ui::VehicleCutoffPage *ui;
    void updatePage();
    void setlabelstates(QLabel* lbl,int states);
    void setlabelstates(QLabel* lbl,bool state,bool state2);

private slots:


    void on_ACMCUTTC2Btn_pressed();
    void on_ACMCUTM2Btn_pressed();
    void on_ACMCUTM1Btn_pressed();
    void on_ACMCUTTC1Btn_pressed();
    void on_EBMP2Btn_pressed();
    void on_EBM2Btn_pressed();
    void on_EBM1Btn_pressed();
    void on_EBMP1Btn_pressed();
    void on_returnBtn_pressed();
};

#endif // VEHICLECUTOFFPAGE_H
