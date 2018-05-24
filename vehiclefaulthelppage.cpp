#include "vehiclefaulthelppage.h"
#include "ui_vehiclefaulthelppage.h"

VehicleFaultHelpPage::VehicleFaultHelpPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::VehicleFaultHelpPage)
{
    ui->setupUi(this);
}

VehicleFaultHelpPage::~VehicleFaultHelpPage()
{
    delete ui;
}

void VehicleFaultHelpPage::on_pushButton_pressed()
{
    this->close();
}
