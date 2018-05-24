#include "vehiclemaintiancepage.h"


VehicleMaintiancePage::VehicleMaintiancePage(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::VehicleMaintiancePage)
{
    ui->setupUi(this);

}

VehicleMaintiancePage::~VehicleRunStatePage()
{
    delete ui;
}


void VehicleMaintiancePage::showEvent(QShowEvent *)
{

}
