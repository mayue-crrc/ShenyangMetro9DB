#include "vehiclepowerresethelppage.h"
#include "ui_vehiclepowerresethelppage.h"

VehiclePowerResetHelpPage::VehiclePowerResetHelpPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::VehiclePowerResetHelpPage)
{
    ui->setupUi(this);
}

VehiclePowerResetHelpPage::~VehiclePowerResetHelpPage()
{
    delete ui;
}

void VehiclePowerResetHelpPage::on_pushButton_pressed()
{
    this->close();
}
