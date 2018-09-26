#include "vehiclebcuhelppage2.h"
#include "ui_vehiclebcuhelppage2.h"

VehicleBCUHelpPage2::VehicleBCUHelpPage2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::VehicleBCUHelpPage2)
{
    ui->setupUi(this);
}

VehicleBCUHelpPage2::~VehicleBCUHelpPage2()
{
    delete ui;
}

void VehicleBCUHelpPage2::on_pushButton_pressed()
{
    this->close();
}
