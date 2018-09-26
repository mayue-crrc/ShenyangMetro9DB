#ifndef VEHICLEEBCUPAGE2_H
#define VEHICLEEBCUPAGE2_H

#include "mybase.h"
#include "qlabel.h"

namespace Ui {
    class VehicleEBCUPage2;
}

class VehicleEBCUPage2 : public MyBase
{
    Q_OBJECT

public:
    explicit VehicleEBCUPage2(QWidget *parent = 0);
    ~VehicleEBCUPage2();
    void updatePage();

private:
    Ui::VehicleEBCUPage2 *ui;
    void setlabelstates(QLabel* lbl,int value,bool isonline);
    void setlabelstates(QLabel* lbl,bool valid,int value,bool isonline);
    void setlabelstates(QLabel* lbl,bool state,bool isonline);
    void setACPlabelstates(QLabel* lbl,bool state,bool state2);
    QString DefaultLoadTC1,DefaultLoadMP1,DefaultLoadM1,DefaultLoadM2,DefaultLoadMP2,DefaultLoadTC2;
    QString DefaultFullLoadTC1,DefaultFullLoadMP1,DefaultFullLoadM1,DefaultFullLoadM2,DefaultFullLoadMP2,DefaultFullLoadTC2;
private slots:
    void on_NextPageBtn_pressed();
};

#endif // VEHICLEEBCUPAGE2_H
