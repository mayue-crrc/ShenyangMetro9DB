#include "vehicledcuhelppage.h"
#include "ui_vehicledcuhelppage.h"

VehicleDCUHelpPage::VehicleDCUHelpPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::VehicleDCUHelpPage)
{
    ui->setupUi(this);
}

VehicleDCUHelpPage::~VehicleDCUHelpPage()
{
    delete ui;
}

void VehicleDCUHelpPage::on_pushButton_pressed()
{
    this->close();
}
