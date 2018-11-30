#include "vehiclesivpage2.h"
#include "ui_vehiclesivpage2.h"

VehicleSIVPage2::VehicleSIVPage2(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::VehicleSIVPage2)
{
    ui->setupUi(this);
}

VehicleSIVPage2::~VehicleSIVPage2()
{
    delete ui;
}
void VehicleSIVPage2::updatePage()
{
    //蓄电池温度
    setlabelstates(this->ui->BCTTC1lbl,this->database->AX1CT_BatteryTempValid_B1,(float)this->database->AX1CT_BatteryTemp_I16/100,2,this->database->CTHM_ACU1On_B1);
    setlabelstates(this->ui->BCTM1lbl,this->database->AX2CT_BatteryTempValid_B1,(float)this->database->AX2CT_BatteryTemp_I16/100,2,this->database->CTHM_ACU2On_B1);
    setlabelstates(this->ui->BCTM2lbl,this->database->AX3CT_BatteryTempValid_B1,(float)this->database->AX3CT_BatteryTemp_I16/100,2,this->database->CTHM_ACU3On_B1);
    setlabelstates(this->ui->BCTTC2lbl,this->database->AX4CT_BatteryTempValid_B1,(float)this->database->AX4CT_BatteryTemp_I16/100,2,this->database->CTHM_ACU4On_B1);

    //蓄电池母线电压
    setlabelstates(this->ui->LBLBCCVoltageTC1,true,(float)this->database->AX1CT_BatteryLineVoltage_I16/10,1,this->database->CTHM_ACU1On_B1);
    setlabelstates(this->ui->LBLBCCVoltageM1,true,(float)this->database->AX2CT_BatteryLineVoltage_I16/10,1,this->database->CTHM_ACU2On_B1);
    setlabelstates(this->ui->LBLBCCVoltageM2,true,(float)this->database->AX3CT_BatteryLineVoltage_I16/10,1,this->database->CTHM_ACU3On_B1);
    setlabelstates(this->ui->LBLBCCVoltageTC2,true,(float)this->database->AX4CT_BatteryLineVoltage_I16/10,1,this->database->CTHM_ACU4On_B1);

    //蓄电池母线电流
    setlabelstates(this->ui->LBLBCCCurrentTC1,true,(float)this->database->AX1CT_BatteryLineCurrent_I16/10,1,this->database->CTHM_ACU1On_B1);
    setlabelstates(this->ui->LBLBCCCurrentM1,true,(float)this->database->AX2CT_BatteryLineCurrent_I16/10,1,this->database->CTHM_ACU2On_B1);
    setlabelstates(this->ui->LBLBCCCurrentM2,true,(float)this->database->AX3CT_BatteryLineCurrent_I16/10,1,this->database->CTHM_ACU3On_B1);
    setlabelstates(this->ui->LBLBCCCurrentTC2,true,(float)this->database->AX4CT_BatteryLineCurrent_I16/10,1,this->database->CTHM_ACU4On_B1);

    //蓄电池充电机电流
    setlabelstates(this->ui->LBLBCCChargeCurrentTC1,true,(float)this->database->AX1CT_BatteryChargingCurrent_I16/10,1,this->database->CTHM_ACU1On_B1);
    setlabelstates(this->ui->LBLBCCChargeCurrentM1,true,(float)this->database->AX2CT_BatteryChargingCurrent_I16/10,1,this->database->CTHM_ACU2On_B1);
    setlabelstates(this->ui->LBLBCCChargeCurrentM2,true,(float)this->database->AX3CT_BatteryChargingCurrent_I16/10,1,this->database->CTHM_ACU3On_B1);
    setlabelstates(this->ui->LBLBCCChargeCurrentTC2,true,(float)this->database->AX4CT_BatteryChargingCurrent_I16/10,1,this->database->CTHM_ACU4On_B1);

}
void VehicleSIVPage2::setlabelstates(QLabel* lbl,bool valid,float value,int per,bool isonline)
{
    if(!isonline)
    {
        lbl->setText("--");
        lbl->setStyleSheet(LABELWHITE);
    }
    else if(!valid)
    {
        lbl->setText("--");
        lbl->setStyleSheet(LABELBLUE);
    }else
    {
        lbl->setText(QString::number(value,10,per));
        lbl->setStyleSheet(LABELBLUE);
    }
}
void VehicleSIVPage2::on_NextPageBtn_pressed()
{
    changePage(uVehicleSIVPage);
}
