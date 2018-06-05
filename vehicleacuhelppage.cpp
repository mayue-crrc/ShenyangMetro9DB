#include "vehicleacuhelppage.h"
#include "ui_vehicleacuhelppage.h"

VehicleACUHelpPage::VehicleACUHelpPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::VehicleACUHelpPage)
{
    ui->setupUi(this);
}

VehicleACUHelpPage::~VehicleACUHelpPage()
{
    delete ui;
}

void VehicleACUHelpPage::on_pushButton_pressed()
{
    this->close();
}
