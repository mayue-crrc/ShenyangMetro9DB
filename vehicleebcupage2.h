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
    void setlabelstates(QLabel* lbl,int value);
    void setlabelstates(QLabel* lbl,bool valid,int value);
private slots:
    void on_NextPageBtn_pressed();
};

#endif // VEHICLEEBCUPAGE2_H
