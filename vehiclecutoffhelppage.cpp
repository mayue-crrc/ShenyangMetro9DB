#include "vehiclecutoffhelppage.h"
#include "ui_vehiclecutoffhelppage.h"

VehicleCutOffHelpPage::VehicleCutOffHelpPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::VehicleCutOffHelpPage)
{
    ui->setupUi(this);
}

VehicleCutOffHelpPage::~VehicleCutOffHelpPage()
{
    delete ui;
}

void VehicleCutOffHelpPage::on_pushButton_pressed()
{
    this->close();
}
