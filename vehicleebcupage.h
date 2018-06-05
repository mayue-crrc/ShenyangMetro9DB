#ifndef VEHICLEEBCUPAGE_H
#define VEHICLEEBCUPAGE_H

#include "mybase.h"
#include "qlabel.h"

namespace Ui {
    class VehicleEBCUPage;
}

class VehicleEBCUPage : public MyBase
{
    Q_OBJECT

public:
    explicit VehicleEBCUPage(QWidget *parent = 0);
    ~VehicleEBCUPage();
    void updatePage();
private:
    Ui::VehicleEBCUPage *ui;

    void setlabelstates(QLabel* lbl,bool state);
    void setlabelstates(QLabel* lbl,bool state,bool isonline);
    void setlabelstates(QLabel* lbl,bool p1,bool p2,bool isonline);
    void setonlinestates(QLabel* lbl,bool state);

private slots:
    void on_NextPageBtn_pressed();
};

#endif // VEHICLEEBCUPAGE_H
