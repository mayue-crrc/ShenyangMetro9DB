#ifndef VEHICLEUNACTIVEPAGE_H
#define VEHICLEUNACTIVEPAGE_H

#include <mybase.h>

namespace Ui {
    class VehicleUnactivePage;
}

class VehicleUnactivePage : public MyBase
{
    Q_OBJECT

public:
    explicit VehicleUnactivePage(QWidget *parent = 0);
    ~VehicleUnactivePage();

private:
    Ui::VehicleUnactivePage *ui;


};

#endif // VEHICLEUNACTIVEPAGE_H
