#include "maintaincerundistancepage.h"
#include "ui_maintaincerundistancepage.h"

MaintainceRunDistancePage::MaintainceRunDistancePage(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::MaintainceRunDistancePage)
{
    ui->setupUi(this);
}

MaintainceRunDistancePage::~MaintainceRunDistancePage()
{
    delete ui;
}
void MaintainceRunDistancePage::updatePage()
{
    this->ui->StartTImelbl->setText(QString::number(this->database->DT1CT_DistanceTimeYear_U8+2000)+"/"+
                                    QString::number(this->database->DT1CT_DistanceTimeMonth_U8)+"/"+
                                    QString::number(this->database->DT1CT_DistanceTimeDay_U8));
    this->ui->RundistanceAcclbl->setText(QString::number(this->database->DT1CT_RunKilometers_U32/1000));
    this->ui->RundistanceADaylbl->setText(QString::number(this->database->DT1CT_TCMSDistanceToday_U16));
    this->ui->RuntimeADaylbl->setText(QString::number(this->database->DT1CT_TCMSRunTimeToday_U16));

}
void MaintainceRunDistancePage::on_returnBtn_pressed()
{
    changePage(uVehicleMaintaincePage);
}
