#include "vehicleacuhelppage2.h"
#include "ui_vehicleacuhelppage2.h"

VehicleACUHelpPage2::VehicleACUHelpPage2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::VehicleACUHelpPage2)
{
    ui->setupUi(this);
}

VehicleACUHelpPage2::~VehicleACUHelpPage2()
{
    delete ui;
}

void VehicleACUHelpPage2::on_pushButton_pressed()
{
    this->close();

}
