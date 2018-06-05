#include "vehiclebypasspage.h"
#include "ui_vehiclebypasspage.h"

#define NOTBYPASS "font: 20px  \"微软雅黑\";color: white;background-color: green;border:2px  solid black;border-radius:8px;"
#define BYPASS "font: 20px  \"微软雅黑\";color: black;background-color: yellow;border:2px  solid black;border-radius:8px;"
#define NOTBYPASSB "font: 20px  \"微软雅黑\";color: white;background-color: green;border-radius:8px;"
#define BYPASSB "font: 20px  \"微软雅黑\";color: black;background-color: yellow;border-radius:8px;"

VehicleBypassPage::VehicleBypassPage(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::VehicleBypassPage)
{
    ui->setupUi(this);
}

VehicleBypassPage::~VehicleBypassPage()
{
    delete ui;
}
void VehicleBypassPage::updatePage()
{
    setSignalBypass(this->ui->BrakeNOTReleaseTC1lbl,this->ui->BrakeNOTReleaseTC1lbl_2,this->database->DICT_TC1DI3CH14BrkRlsByPass_B1);
    setSignalBypass(this->ui->BrakeNOTReleaseTC2lbl,this->ui->BrakeNOTReleaseTC2lbl_2,this->database->DICT_TC2DI3CH14BrkRlsByPass_B1);
    setSignalBypass(this->ui->StopBrakeTC1lbl,this->ui->StopBrakeTC1lbl_2,this->database->DICT_TC1DI3CH11ParkingBrkByPass_B1);
    setSignalBypass(this->ui->StopBrakeTC2lbl,this->ui->StopBrakeTC2lbl_2,this->database->DICT_TC2DI3CH11ParkingBrkByPass_B1);
    setSignalBypass(this->ui->ALLTrainCloseTC1lbl,this->ui->ALLTrainCloseTC1lbl_2,this->database->DICT_TC1DI4CH12CarDoorSafeLoopByPass_B1);
    setSignalBypass(this->ui->ALLTrainCloseTC2lbl,this->ui->ALLTrainCloseTC2lbl_2,this->database->DICT_TC2DI4CH12CarDoorSafeLoopByPass_B1);
    setSignalBypass(this->ui->AlarmTC1lbl,this->ui->AlarmTC1lbl_2,this->database->DICT_TC1DI1CH7CabActive_B1);
    setSignalBypass(this->ui->AlarmTC2lbl,this->ui->AlarmTC2lbl_2,this->database->DICT_TC2DI1CH7CabActive_B1);
    setSignalBypass(this->ui->EmloopTC1lbl,this->ui->EmloopTC1lbl_2,this->database->DICT_TC1DI1CH13EmLoopByPass1_B1);
    setSignalBypass(this->ui->EmloopTC2lbl,this->ui->EmloopTC2lbl_2,this->database->DICT_TC2DI1CH13EmLoopByPass1_B1);
    setSignalBypass(this->ui->ZeroSpeedTC1lbl,this->ui->ZeroSpeedTC1lbl_2,this->database->DICT_TC1DI2CH23ZeroSpeedTL_B1);
    setSignalBypass(this->ui->ZeroSpeedTC2lbl,this->ui->ZeroSpeedTC2lbl_2,this->database->DICT_TC2DI2CH23ZeroSpeedTL_B1);
    setSignalBypass(this->ui->Emloop2TC1lbl,this->ui->Emloop2TC1lbl_2,this->database->DICT_TC1DI1CH14EmLoopByPass2_B1);
    setSignalBypass(this->ui->Emloop2TC2lbl,this->ui->Emloop2TC2lbl_2,this->database->DICT_TC2DI1CH14EmLoopByPass2_B1);
}

void VehicleBypassPage::on_returnBtn_pressed()
{
    changePage(uVehicleRunStatePage);
}
void VehicleBypassPage::setSignalBypass(QLabel* lbl1,QLabel* lbl2,bool status)
{
    if(status)
    {
        lbl1->setStyleSheet(BYPASS);
        lbl2->setStyleSheet(BYPASSB);
    }else
    {
        lbl1->setStyleSheet(NOTBYPASS);
        lbl2->setStyleSheet(NOTBYPASSB);
    }
}
