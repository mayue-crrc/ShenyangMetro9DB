#include "vehicleresethelppage.h"
#include "ui_vehicleresethelppage.h"

VehicleResetHelpPage::VehicleResetHelpPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::VehicleResetHelpPage)
{
    ui->setupUi(this);
}

VehicleResetHelpPage::~VehicleResetHelpPage()
{
    delete ui;
}


void VehicleResetHelpPage::on_pushButton_pressed()
{
    this->close();
}
