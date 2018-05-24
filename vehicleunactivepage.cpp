#include "vehicleunactivepage.h"
#include "ui_vehicleunactivepage.h"

VehicleUnactivePage::VehicleUnactivePage(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::VehicleUnactivePage)
{
    ui->setupUi(this);
}

VehicleUnactivePage::~VehicleUnactivePage()
{
    delete ui;
}
