#include "vehicleebcupage2.h"
#include "ui_vehicleebcupage2.h"


VehicleEBCUPage2::VehicleEBCUPage2(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::VehicleEBCUPage2)
{
    ui->setupUi(this);
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
    setlabelstates(ui->ASPTC1_1lbl,this->database->BR1CT_TC1Bg1AirPresureValid_B1,(this->database->BR1CT_TC1Bg1ASP1AirPressure_U16+this->database->BR1CT_TC1Bg1ASP2AirPressure_U16)/2);
    setlabelstates(ui->ASPTC1_2lbl,this->database->BR1CT_TC1Bg2AirPresureValid_B1,(this->database->BR1CT_TC1Bg2ASP1AirPressure_U16+this->database->BR1CT_TC1Bg2ASP2AirPressure_U16)/2);
    setlabelstates(ui->ASPTC2_1lbl,this->database->BR2CT_TC2Bg1AirPresureValid_B1,(this->database->BR2CT_TC2Bg1ASP1AirPressure_U16+this->database->BR2CT_TC2Bg1ASP2AirPressure_U16)/2);
    setlabelstates(ui->ASPTC2_2lbl,this->database->BR2CT_TC2Bg2AirPresureValid_B1,(this->database->BR2CT_TC2Bg2ASP1AirPressure_U16+this->database->BR2CT_TC2Bg2ASP2AirPressure_U16)/2);
    setlabelstates(ui->ASPMP1_1lbl,this->database->BR1CT_MP1Bg1AirPresureValid_B1,(this->database->BR1CT_MP1Bg1ASP1AirPressure_U16+this->database->BR1CT_MP1Bg1ASP2AirPressure_U16)/2);
    setlabelstates(ui->ASPMP1_2lbl,this->database->BR1CT_MP1Bg2AirPresureValid_B1,(this->database->BR1CT_MP1Bg2ASP1AirPressure_U16+this->database->BR1CT_MP1Bg2ASP2AirPressure_U16)/2);
    setlabelstates(ui->ASPMP2_1lbl,this->database->BR2CT_MP2Bg1AirPresureValid_B1,(this->database->BR2CT_MP2Bg1ASP1AirPressure_U16+this->database->BR2CT_MP2Bg1ASP2AirPressure_U16)/2);
    setlabelstates(ui->ASPMP2_2lbl,this->database->BR2CT_MP2Bg2AirPresureValid_B1,(this->database->BR2CT_MP2Bg2ASP1AirPressure_U16+this->database->BR2CT_MP2Bg2ASP2AirPressure_U16)/2);
    setlabelstates(ui->ASPM1_1lbl,this->database->BR1CT_M1Bg1AirPresureValid_B1,(this->database->BR1CT_M1Bg1ASP1AirPressure_U16+this->database->BR1CT_M1Bg1ASP2AirPressure_U16)/2);
    setlabelstates(ui->ASPM1_2lbl,this->database->BR1CT_M1Bg2AirPresureValid_B1,(this->database->BR1CT_M1Bg2ASP1AirPressure_U16+this->database->BR1CT_M1Bg2ASP2AirPressure_U16)/2);
    setlabelstates(ui->ASPM2_1lbl,this->database->BR2CT_M2Bg1AirPresureValid_B1,(this->database->BR2CT_M2Bg1ASP1AirPressure_U16+this->database->BR2CT_M2Bg1ASP2AirPressure_U16)/2);
    setlabelstates(ui->ASPM2_2lbl,this->database->BR2CT_M2Bg2AirPresureValid_B1,(this->database->BR2CT_M2Bg2ASP1AirPressure_U16+this->database->BR2CT_M2Bg2ASP2AirPressure_U16)/2);

    //BC压力 取架1压力值
    setlabelstates(ui->BCPTC1_1lbl,this->database->BR1CT_TC1Bg1BrkAirPresureValid_B1,this->database->BR1CT_TC1Bg1BCP1Pressure_U16);
    setlabelstates(ui->BCPTC1_2lbl,this->database->BR1CT_TC1Bg2BrkAirPresureValid_B1,this->database->BR1CT_TC1Bg2BCP1Pressure_U16);
    setlabelstates(ui->BCPTC2_1lbl,this->database->BR2CT_TC2Bg1BrkAirPresureValid_B1,this->database->BR2CT_TC2Bg1BCP1Pressure_U16);
    setlabelstates(ui->BCPTC2_2lbl,this->database->BR2CT_TC2Bg2BrkAirPresureValid_B1,this->database->BR2CT_TC2Bg2BCP1Pressure_U16);
    setlabelstates(ui->BCPMP1_1lbl,this->database->BR1CT_MP1Bg1BrkAirPresureValid_B1,this->database->BR1CT_MP1Bg1BCP1Pressure_U16);
    setlabelstates(ui->BCPMP1_2lbl,this->database->BR1CT_MP1Bg2BrkAirPresureValid_B1,this->database->BR1CT_MP1Bg2BCP1Pressure_U16);
    setlabelstates(ui->BCPMP2_1lbl,this->database->BR2CT_MP2Bg1BrkAirPresureValid_B1,this->database->BR2CT_MP2Bg1BCP1Pressure_U16);
    setlabelstates(ui->BCPMP2_2lbl,this->database->BR2CT_MP2Bg2BrkAirPresureValid_B1,this->database->BR2CT_MP2Bg2BCP1Pressure_U16);
    setlabelstates(ui->BCPM1_1lbl,this->database->BR1CT_M1Bg1BrkAirPresureValid_B1,this->database->BR1CT_M1Bg1BCP1Pressure_U16);
    setlabelstates(ui->BCPM1_2lbl,this->database->BR1CT_M1Bg2BrkAirPresureValid_B1,this->database->BR1CT_M1Bg2BCP1Pressure_U16);
    setlabelstates(ui->BCPM2_1lbl,this->database->BR2CT_M2Bg1BrkAirPresureValid_B1,this->database->BR2CT_M2Bg1BCP1Pressure_U16);
    setlabelstates(ui->BCPM2_2lbl,this->database->BR2CT_M2Bg2BrkAirPresureValid_B1,this->database->BR2CT_M2Bg2BCP1Pressure_U16);

    //载荷 取架1＋2数值
    setlabelstates(ui->LoadTC1lbl,this->database->BR1CT_TC1Bg1BoogieLoad_U16+this->database->BR1CT_TC1Bg2BoogieLoad_U16);
    setlabelstates(ui->LoadTC2lbl,this->database->BR2CT_TC2Bg1BoogieLoad_U16+this->database->BR2CT_TC2Bg2BoogieLoad_U16);
    setlabelstates(ui->LoadMP1lbl,this->database->BR1CT_MP1Bg1BoogieLoad_U16+this->database->BR1CT_MP1Bg2BoogieLoad_U16);
    setlabelstates(ui->LoadMP2lbl,this->database->BR2CT_MP2Bg1BoogieLoad_U16+this->database->BR2CT_MP2Bg2BoogieLoad_U16);
    setlabelstates(ui->LoadM1lbl,this->database->BR1CT_M1Bg1BoogieLoad_U16+this->database->BR1CT_M1Bg2BoogieLoad_U16);
    setlabelstates(ui->LoadM2lbl,this->database->BR2CT_M2Bg1BoogieLoad_U16+this->database->BR2CT_M2Bg2BoogieLoad_U16);

    //乘车率 取CCU

    //空压机状态
    if(this->database->DICT_TC1DI2CH19CompressorOperition_B1)
    {
        this->ui->ACPTC1_1lbl->setStyleSheet(LABELGREEN);
    }else
    {
        this->ui->ACPTC1_1lbl->setStyleSheet(LABELGRAY);
    }
    if(this->database->DICT_TC2DI2CH19CompressorOperition_B1)
    {
        this->ui->ACPTC2_1lbl->setStyleSheet(LABELGREEN);
    }else
    {
        this->ui->ACPTC2_1lbl->setStyleSheet(LABELGRAY);
    }

    //停放制动缸 压力
    setlabelstates(ui->MRPTC1lbl,this->database->BR1CT_TC1Bg2TotalPresureValid_B1,this->database->BR1CT_TC1Bg2TotalPressure_U16);
    setlabelstates(ui->MRPTC2lbl,this->database->BR2CT_TC2Bg2TotalPresureValid_B1,this->database->BR2CT_TC2Bg2TotalPressure_U16);
    setlabelstates(ui->MRPM1lbl,this->database->BR1CT_M1Bg2TotalPresureValid_B1,this->database->BR1CT_M1Bg2TotalPressure_U16);
    setlabelstates(ui->MRPM2lbl,this->database->BR2CT_M2Bg2TotalPresureValid_B1,this->database->BR2CT_M2Bg2TotalPressure_U16);
    setlabelstates(ui->MRPMP1lbl,this->database->BR1CT_MP1Bg2TotalPresureValid_B1,this->database->BR1CT_MP1Bg2TotalPressure_U16);
    setlabelstates(ui->MRPMP2lbl,this->database->BR2CT_MP2Bg2TotalPresureValid_B1,this->database->BR2CT_MP2Bg2TotalPressure_U16);

    //MR 压力
    setlabelstates(ui->MRPTC1bg1lbl,this->database->BR1CT_TC1Bg1TotalPresureValid_B1,this->database->BR1CT_TC1Bg1TotalPressure_U16);
    setlabelstates(ui->MRPTC2bg1lbl,this->database->BR2CT_TC2Bg1TotalPresureValid_B1,this->database->BR2CT_TC2Bg1TotalPressure_U16);

}
void VehicleEBCUPage2::setlabelstates(QLabel* lbl,int value)
{
    lbl->setText(QString::number((float)(value)/100,10,2));
}
void VehicleEBCUPage2::setlabelstates(QLabel* lbl,bool valid,int value)
{
    if(!valid)
    {
        lbl->setText("--");
    }else
    {
        lbl->setText(QString::number((float)(value)/100,10,2));
    }

}
