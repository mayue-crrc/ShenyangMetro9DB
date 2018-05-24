#ifndef VEHICLEBYPASSPAGE_H
#define VEHICLEBYPASSPAGE_H

#include "mybase.h"
#include "qlabel.h"
namespace Ui {
    class VehicleBypassPage;
}

class VehicleBypassPage : public MyBase
{
    Q_OBJECT

public:
    explicit VehicleBypassPage(QWidget *parent = 0);
    ~VehicleBypassPage();
    void updatePage();

private:
    Ui::VehicleBypassPage *ui;
    void setSignalBypass(QLabel* lbl1,QLabel* lbl2,bool status);
private slots:
    void on_returnBtn_pressed();
};

#endif // VEHICLEBYPASSPAGE_H
