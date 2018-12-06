#include "vehicleebcupage2.h"
#include "ui_vehicleebcupage2.h"
#include "MainGetDefaultPara.h"

VehicleEBCUPage2::VehicleEBCUPage2(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::VehicleEBCUPage2)
{
    ui->setupUi(this);

    DefaultLoadTC1 = MainGetDefaultPara::getString("/DefaultLoad/load_TC1");
    DefaultLoadMP1 = MainGetDefaultPara::getString("/DefaultLoad/load_MP1");
    DefaultLoadM1 = MainGetDefaultPara::getString("/DefaultLoad/load_M1");
    DefaultLoadM2 = MainGetDefaultPara::getString("/DefaultLoad/load_M2");
    DefaultLoadMP2 = MainGetDefaultPara::getString("/DefaultLoad/load_MP2");
    DefaultLoadTC2 = MainGetDefaultPara::getString("/DefaultLoad/load_TC2");

    DefaultFullLoadTC1 = MainGetDefaultPara::getString("/DefaultLoad/fullload_TC1");
    DefaultFullLoadMP1 = MainGetDefaultPara::getString("/DefaultLoad/fullload_MP1");
    DefaultFullLoadM1 = MainGetDefaultPara::getString("/DefaultLoad/fullload_M1");
    DefaultFullLoadM2 = MainGetDefaultPara::getString("/DefaultLoad/fullload_M2");
    DefaultFullLoadMP2 = MainGetDefaultPara::getString("/DefaultLoad/fullload_MP2");
    DefaultFullLoadTC2 = MainGetDefaultPara::getString("/DefaultLoad/fullload_TC2");
}

VehicleEBCUPage2::~VehicleEBCUPage2()
{
    delete ui;
}

void VehicleEBCUPage2::on_NextPageBtn_pressed()
{
    changePage(uVehicleEBCUPage);

}
void VehicleEBCUPage2::updatePage()
{
    //空簧压力 取架1＋2数值
    setlabelstates(ui->ASPTC1_1lbl,this->database->BR1CT_TC1Bg1AirPresureValid_B1,(this->database->BR1CT_TC1Bg1ASP1AirPressure_U16+this->database->BR1CT_TC1Bg1ASP2AirPressure_U16)/2,this->database->BCU1_3Online);
    setlabelstates(ui->ASPTC1_2lbl,this->database->BR1CT_TC1Bg2AirPresureValid_B1,(this->database->BR1CT_TC1Bg2ASP1AirPressure_U16+this->database->BR1CT_TC1Bg2ASP2AirPressure_U16)/2,this->database->BCU1_3Online);
    setlabelstates(ui->ASPTC2_1lbl,this->database->BR2CT_TC2Bg1AirPresureValid_B1,(this->database->BR2CT_TC2Bg1ASP1AirPressure_U16+this->database->BR2CT_TC2Bg1ASP2AirPressure_U16)/2,this->database->BCU4_6Online);
    setlabelstates(ui->ASPTC2_2lbl,this->database->BR2CT_TC2Bg2AirPresureValid_B1,(this->database->BR2CT_TC2Bg2ASP1AirPressure_U16+this->database->BR2CT_TC2Bg2ASP2AirPressure_U16)/2,this->database->BCU4_6Online);
    setlabelstates(ui->ASPMP1_1lbl,this->database->BR1CT_MP1Bg1AirPresureValid_B1,(this->database->BR1CT_MP1Bg1ASP1AirPressure_U16+this->database->BR1CT_MP1Bg1ASP2AirPressure_U16)/2,this->database->BCU1_3Online);
    setlabelstates(ui->ASPMP1_2lbl,this->database->BR1CT_MP1Bg2AirPresureValid_B1,(this->database->BR1CT_MP1Bg2ASP1AirPressure_U16+this->database->BR1CT_MP1Bg2ASP2AirPressure_U16)/2,this->database->BCU1_3Online);
    setlabelstates(ui->ASPMP2_1lbl,this->database->BR2CT_MP2Bg1AirPresureValid_B1,(this->database->BR2CT_MP2Bg1ASP1AirPressure_U16+this->database->BR2CT_MP2Bg1ASP2AirPressure_U16)/2,this->database->BCU4_6Online);
    setlabelstates(ui->ASPMP2_2lbl,this->database->BR2CT_MP2Bg2AirPresureValid_B1,(this->database->BR2CT_MP2Bg2ASP1AirPressure_U16+this->database->BR2CT_MP2Bg2ASP2AirPressure_U16)/2,this->database->BCU4_6Online);
    setlabelstates(ui->ASPM1_1lbl,this->database->BR1CT_M1Bg1AirPresureValid_B1,(this->database->BR1CT_M1Bg1ASP1AirPressure_U16+this->database->BR1CT_M1Bg1ASP2AirPressure_U16)/2,this->database->BCU1_3Online);
    setlabelstates(ui->ASPM1_2lbl,this->database->BR1CT_M1Bg2AirPresureValid_B1,(this->database->BR1CT_M1Bg2ASP1AirPressure_U16+this->database->BR1CT_M1Bg2ASP2AirPressure_U16)/2,this->database->BCU1_3Online);
    setlabelstates(ui->ASPM2_1lbl,this->database->BR2CT_M2Bg1AirPresureValid_B1,(this->database->BR2CT_M2Bg1ASP1AirPressure_U16+this->database->BR2CT_M2Bg1ASP2AirPressure_U16)/2,this->database->BCU4_6Online);
    setlabelstates(ui->ASPM2_2lbl,this->database->BR2CT_M2Bg2AirPresureValid_B1,(this->database->BR2CT_M2Bg2ASP1AirPressure_U16+this->database->BR2CT_M2Bg2ASP2AirPressure_U16)/2,this->database->BCU4_6Online);

    //BC压力 取架1压力值
    setlabelstates(ui->BCPTC1_1lbl,this->database->BR1CT_TC1Bg1BrkAirPresureValid_B1,this->database->BR1CT_TC1Bg1BCP1Pressure_U16,this->database->BCU1_3Online);
    setlabelstates(ui->BCPTC1_2lbl,this->database->BR1CT_TC1Bg2BrkAirPresureValid_B1,this->database->BR1CT_TC1Bg2BCP1Pressure_U16,this->database->BCU1_3Online);
    setlabelstates(ui->BCPTC2_1lbl,this->database->BR2CT_TC2Bg1BrkAirPresureValid_B1,this->database->BR2CT_TC2Bg1BCP1Pressure_U16,this->database->BCU4_6Online);
    setlabelstates(ui->BCPTC2_2lbl,this->database->BR2CT_TC2Bg2BrkAirPresureValid_B1,this->database->BR2CT_TC2Bg2BCP1Pressure_U16,this->database->BCU4_6Online);
    setlabelstates(ui->BCPMP1_1lbl,this->database->BR1CT_MP1Bg1BrkAirPresureValid_B1,this->database->BR1CT_MP1Bg1BCP1Pressure_U16,this->database->BCU1_3Online);
    setlabelstates(ui->BCPMP1_2lbl,this->database->BR1CT_MP1Bg2BrkAirPresureValid_B1,this->database->BR1CT_MP1Bg2BCP1Pressure_U16,this->database->BCU1_3Online);
    setlabelstates(ui->BCPMP2_1lbl,this->database->BR2CT_MP2Bg1BrkAirPresureValid_B1,this->database->BR2CT_MP2Bg1BCP1Pressure_U16,this->database->BCU4_6Online);
    setlabelstates(ui->BCPMP2_2lbl,this->database->BR2CT_MP2Bg2BrkAirPresureValid_B1,this->database->BR2CT_MP2Bg2BCP1Pressure_U16,this->database->BCU4_6Online);
    setlabelstates(ui->BCPM1_1lbl,this->database->BR1CT_M1Bg1BrkAirPresureValid_B1,this->database->BR1CT_M1Bg1BCP1Pressure_U16,this->database->BCU1_3Online);
    setlabelstates(ui->BCPM1_2lbl,this->database->BR1CT_M1Bg2BrkAirPresureValid_B1,this->database->BR1CT_M1Bg2BCP1Pressure_U16,this->database->BCU1_3Online);
    setlabelstates(ui->BCPM2_1lbl,this->database->BR2CT_M2Bg1BrkAirPresureValid_B1,this->database->BR2CT_M2Bg1BCP1Pressure_U16,this->database->BCU4_6Online);
    setlabelstates(ui->BCPM2_2lbl,this->database->BR2CT_M2Bg2BrkAirPresureValid_B1,this->database->BR2CT_M2Bg2BCP1Pressure_U16,this->database->BCU4_6Online);

    //载荷 取架1＋2数值
    setlabelstates(ui->LoadTC1lbl,this->database->BR1CT_TC1Bg1BoogieLoad_U16+this->database->BR1CT_TC1Bg2BoogieLoad_U16,this->database->BCU1_3Online);
    setlabelstates(ui->LoadTC2lbl,this->database->BR2CT_TC2Bg1BoogieLoad_U16+this->database->BR2CT_TC2Bg2BoogieLoad_U16,this->database->BCU4_6Online);
    setlabelstates(ui->LoadMP1lbl,this->database->BR1CT_MP1Bg1BoogieLoad_U16+this->database->BR1CT_MP1Bg2BoogieLoad_U16,this->database->BCU1_3Online);
    setlabelstates(ui->LoadMP2lbl,this->database->BR2CT_MP2Bg1BoogieLoad_U16+this->database->BR2CT_MP2Bg2BoogieLoad_U16,this->database->BCU4_6Online);
    setlabelstates(ui->LoadM1lbl,this->database->BR1CT_M1Bg1BoogieLoad_U16+this->database->BR1CT_M1Bg2BoogieLoad_U16,this->database->BCU1_3Online);
    setlabelstates(ui->LoadM2lbl,this->database->BR2CT_M2Bg1BoogieLoad_U16+this->database->BR2CT_M2Bg2BoogieLoad_U16,this->database->BCU4_6Online);

    //乘车率

    this->ui->PLoadTC1lbl->setText(this->database->PLoad_TC1);
    this->ui->PLoadMP1lbl->setText(this->database->PLoad_MP1);
    this->ui->PLoadM1lbl->setText(this->database->PLoad_M1);
    this->ui->PLoadM2lbl->setText(this->database->PLoad_M2);
    this->ui->PLoadMP2lbl->setText(this->database->PLoad_MP2);
    this->ui->PLoadTC2lbl->setText(this->database->PLoad_TC2);

    //空压机状态
    setACPlabelstates(ui->ACPTC1_1lbl,this->database->DICT_TC1DI2CH19CompressorOperition_B1,this->database->DICT_TC1DI2CH22ComSupplyFlt_B1);
    setACPlabelstates(ui->ACPTC2_1lbl,this->database->DICT_TC2DI2CH19CompressorOperition_B1,this->database->DICT_TC2DI2CH22ComSupplyFlt_B1);


    //停放制动缸 压力
    setlabelstates(ui->MRPTC1lbl,this->database->BR1CT_TC1Bg2TotalPresureValid_B1,this->database->BR1CT_TC1Bg2TotalPressure_U16,this->database->BCU1_3Online);
    setlabelstates(ui->MRPTC2lbl,this->database->BR2CT_TC2Bg2TotalPresureValid_B1,this->database->BR2CT_TC2Bg2TotalPressure_U16,this->database->BCU4_6Online);
    setlabelstates(ui->MRPM1lbl,this->database->BR1CT_M1Bg2TotalPresureValid_B1,this->database->BR1CT_M1Bg2TotalPressure_U16,this->database->BCU1_3Online);
    setlabelstates(ui->MRPM2lbl,this->database->BR2CT_M2Bg2TotalPresureValid_B1,this->database->BR2CT_M2Bg2TotalPressure_U16,this->database->BCU4_6Online);
    setlabelstates(ui->MRPMP1lbl,this->database->BR1CT_MP1Bg2TotalPresureValid_B1,this->database->BR1CT_MP1Bg2TotalPressure_U16,this->database->BCU1_3Online);
    setlabelstates(ui->MRPMP2lbl,this->database->BR2CT_MP2Bg2TotalPresureValid_B1,this->database->BR2CT_MP2Bg2TotalPressure_U16,this->database->BCU4_6Online);

    //MR 压力
    setlabelstates(ui->MRPTC1bg1lbl,this->database->BR1CT_TC1Bg1TotalPresureValid_B1,this->database->BR1CT_TC1Bg1TotalPressure_U16,this->database->BCU1_3Online);
    setlabelstates(ui->MRPMP1bg1lbl,this->database->BR1CT_MP1Bg1TotalPresureValid_B1,this->database->BR1CT_MP1Bg1TotalPressure_U16,this->database->BCU1_3Online);
    setlabelstates(ui->MRPM1bg1lbl,this->database->BR1CT_M1Bg1TotalPresureValid_B1,this->database->BR1CT_M1Bg1TotalPressure_U16,this->database->BCU1_3Online);
    setlabelstates(ui->MRPM2bg1lbl,this->database->BR2CT_M2Bg1TotalPresureValid_B1,this->database->BR2CT_M2Bg1TotalPressure_U16,this->database->BCU4_6Online);
    setlabelstates(ui->MRPMP2bg1lbl,this->database->BR2CT_MP2Bg1TotalPresureValid_B1,this->database->BR2CT_MP2Bg1TotalPressure_U16,this->database->BCU4_6Online);
    setlabelstates(ui->MRPTC2bg1lbl,this->database->BR2CT_TC2Bg1TotalPresureValid_B1,this->database->BR2CT_TC2Bg1TotalPressure_U16,this->database->BCU4_6Online);

}
void VehicleEBCUPage2::setlabelstates(QLabel* lbl,int value,bool isonline)
{
    if(!isonline)
    {
        lbl->setText("--");
        //lbl->setStyleSheet("background-color:white;color:black");
    }else
    {
        lbl->setText(QString::number((float)(value)/100,10,0));
        //lbl->setStyleSheet("background-color:blue;color:white");
    }
}
void VehicleEBCUPage2::setlabelstates(QLabel* lbl,bool valid,int value,bool isonline)
{
    if(!isonline)
    {
        lbl->setText("--");
        //lbl->setStyleSheet("background-color:white;color:black");
    }else if(!valid)
    {
        lbl->setText("--");
        //lbl->setStyleSheet("background-color:blue;color:white");
    }else
    {
        lbl->setText(QString::number((float)(value)/100,10,2));
        //lbl->setStyleSheet("background-color:blue;color:white");
    }

}
void VehicleEBCUPage2::setlabelstates(QLabel* lbl,bool state,bool isonline)
{
    if(!isonline)
    {
        lbl->setStyleSheet(LABELWHITE);
    }
    else if(state)
    {
        lbl->setStyleSheet(LABELLIGHTGREEN);
    }else
    {
        lbl->setStyleSheet(LABELGRAY);
    }
}
void VehicleEBCUPage2::setACPlabelstates(QLabel* lbl,bool state,bool state2)
{
    if(state2)
    {
        lbl->setStyleSheet(LABELRED);
    }else if(state)
    {
        lbl->setStyleSheet(LABELLIGHTGREEN);
    }else
    {
        lbl->setStyleSheet(LABELGRAY);
    }
}
