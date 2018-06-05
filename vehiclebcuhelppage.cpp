#include "vehiclebcuhelppage.h"
#include "ui_vehiclebcuhelppage.h"

VehicleBCUHelpPage::VehicleBCUHelpPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::VehicleBCUHelpPage)
{
    ui->setupUi(this);
}

VehicleBCUHelpPage::~VehicleBCUHelpPage()
{
    delete ui;
}

void VehicleBCUHelpPage::on_pushButton_pressed()
{
    this->close();
}
