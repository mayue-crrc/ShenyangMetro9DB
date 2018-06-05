#include "vehiclehvachelppage.h"
#include "ui_vehiclehvachelppage.h"

VehicleHVACHelpPage::VehicleHVACHelpPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::VehicleHVACHelpPage)
{
    ui->setupUi(this);
}

VehicleHVACHelpPage::~VehicleHVACHelpPage()
{
    delete ui;
}

void VehicleHVACHelpPage::on_pushButton_pressed()
{
    this->close();
}
