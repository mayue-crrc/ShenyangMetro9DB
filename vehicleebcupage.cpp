#include "vehicleebcupage.h"
#include "ui_vehicleebcupage.h"


VehicleEBCUPage::VehicleEBCUPage(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::VehicleEBCUPage)
{
    ui->setupUi(this);
}

VehicleEBCUPage::~VehicleEBCUPage()
{
    delete ui;
}

void VehicleEBCUPage::on_NextPageBtn_pressed()
{
    changePage(uVehicleEBCUPage2);
}
void VehicleEBCUPage::updatePage()
{
    // 架号 1－2－3－4－5－6－8－7－10－9－12－11
    //常用制动施加
    setlabelstates(ui->BRKApplyTC1_1lbl,this->database->BR1CT_TC1Bg1AirBrkRlsed_B1,this->database->BR1CT_TC1Bg1AirBrkApplied_B1);
    setlabelstates(ui->BRKApplyTC1_2lbl,this->database->BR1CT_TC1Bg2AirBrkRlsed_B1,this->database->BR1CT_TC1Bg2AirBrkApplied_B1);
    setlabelstates(ui->BRKApplyTC2_1lbl,this->database->BR2CT_TC2Bg1AirBrkRlsed_B1,this->database->BR2CT_TC2Bg1AirBrkApplied_B1);
    setlabelstates(ui->BRKApplyTC2_2lbl,this->database->BR2CT_TC2Bg2AirBrkRlsed_B1,this->database->BR2CT_TC2Bg2AirBrkApplied_B1);
    setlabelstates(ui->BRKApplyMP1_1lbl,this->database->BR1CT_MP1Bg1AirBrkRlsed_B1,this->database->BR1CT_MP1Bg1AirBrkApplied_B1);
    setlabelstates(ui->BRKApplyMP1_2lbl,this->database->BR1CT_MP1Bg2AirBrkRlsed_B1,this->database->BR1CT_MP1Bg2AirBrkApplied_B1);
    setlabelstates(ui->BRKApplyMP2_1lbl,this->database->BR2CT_MP2Bg1AirBrkRlsed_B1,this->database->BR2CT_MP2Bg1AirBrkApplied_B1);
    setlabelstates(ui->BRKApplyMP2_2lbl,this->database->BR2CT_MP2Bg2AirBrkRlsed_B1,this->database->BR2CT_MP2Bg2AirBrkApplied_B1);
    setlabelstates(ui->BRKApplyM1_1lbl,this->database->BR1CT_M1Bg1AirBrkRlsed_B1,this->database->BR1CT_M1Bg1AirBrkApplied_B1);
    setlabelstates(ui->BRKApplyM1_2lbl,this->database->BR1CT_M1Bg2AirBrkRlsed_B1,this->database->BR1CT_M1Bg2AirBrkApplied_B1);
    setlabelstates(ui->BRKApplyM2_1lbl,this->database->BR2CT_M2Bg1AirBrkRlsed_B1,this->database->BR2CT_M2Bg1AirBrkApplied_B1);
    setlabelstates(ui->BRKApplyM2_2lbl,this->database->BR2CT_M2Bg2AirBrkRlsed_B1,this->database->BR2CT_M2Bg2AirBrkApplied_B1);

    //制动隔离开关 灰色=隔离
    setlabelstates(ui->BRKBypassTC1_1lbl,!this->database->DICT_TC1DI3CH1Bg1CutOff_B1);
    setlabelstates(ui->BRKBypassTC1_2lbl,!this->database->DICT_TC1DI3CH2Bg2CutOff_B1);
    setlabelstates(ui->BRKBypassTC2_1lbl,!this->database->DICT_TC2DI3CH1Bg1CutOff_B1);
    setlabelstates(ui->BRKBypassTC2_2lbl,!this->database->DICT_TC2DI3CH2Bg2CutOff_B1);
    setlabelstates(ui->BRKBypassMP1_1lbl,!this->database->DICT_MP1DI1CH6Bg1CutOff_B1);
    setlabelstates(ui->BRKBypassMP1_2lbl,!this->database->DICT_MP1DI1CH7Bg2CutOff_B1);
    setlabelstates(ui->BRKBypassMP2_1lbl,!this->database->DICT_MP2DI1CH6Bg1CutOff_B1);
    setlabelstates(ui->BRKBypassMP2_2lbl,!this->database->DICT_MP2DI1CH7Bg2CutOff_B1);
    setlabelstates(ui->BRKBypassM1_1lbl,!this->database->DICT_M1DI1CH1Bg1CutOff_B1);
    setlabelstates(ui->BRKBypassM1_2lbl,!this->database->DICT_M1DI1CH2Bg2CutOff_B1);
    setlabelstates(ui->BRKBypassM2_1lbl,!this->database->DICT_M2DI1CH1Bg1CutOff_B1);
    setlabelstates(ui->BRKBypassM2_2lbl,!this->database->DICT_M2DI1CH2Bg2CutOff_B1);

    //停放制动施加 绿色＝施加 灰色＝缓解
    setlabelstates(ui->StopBRKTC1lbl,!this->database->BR1CT_TC1Bg2ParkingBrkRlsed_B1);
    setlabelstates(ui->StopBRKTC2lbl,!this->database->BR2CT_TC2Bg2ParkingBrkRlsed_B1);
    setlabelstates(ui->StopBRKMP1lbl,!this->database->BR1CT_MP1Bg2ParkingBrkRlsed_B1);
    setlabelstates(ui->StopBRKMP2lbl,!this->database->BR2CT_MP2Bg2ParkingBrkRlsed_B1);
    setlabelstates(ui->StopBRKM1lbl,!this->database->BR1CT_M1Bg2ParkingBrkRlsed_B1);
    setlabelstates(ui->StopBRKM2lbl,!this->database->BR2CT_M2Bg2ParkingBrkRlsed_B1);

    //停放制动隔离 绿色＝正常 灰色＝隔离
    setlabelstates(ui->StopBypassTC1lbl,!this->database->DICT_TC1DI3CH10ParkingBrkCutOff_B1);
    setlabelstates(ui->StopBypassTC2lbl,!this->database->DICT_TC2DI3CH10ParkingBrkCutOff_B1);
    setlabelstates(ui->StopBypassMP1lbl,!this->database->DICT_MP1DI1CH10ParkingBrkCutOff_B1);
    setlabelstates(ui->StopBypassMP2lbl,!this->database->DICT_MP2DI1CH10ParkingBrkCutOff_B1);
    setlabelstates(ui->StopBypassM1lbl,!this->database->DICT_M1DI1CH5ParkingBrkCutOff_B1);
    setlabelstates(ui->StopBypassM2lbl,!this->database->DICT_M2DI1CH5ParkingBrkCutOff_B1);

    //G S 阀状态显示 绿色＝在线 灰色＝离线
    setlabelstates(ui->GTC1_1lbl,this->database->CTHM_BCU1On_B1);
    setlabelstates(ui->GM1_2lbl,this->database->CTHM_BCU2On_B1);
    setlabelstates(ui->GM2_1lbl,this->database->CTHM_BCU3On_B1);
    setlabelstates(ui->GTC2_2lbl,this->database->CTHM_BCU4On_B1);

    setlabelstates(ui->STC1_2lbl,this->database->BR1CT_TC1Bg2BoogieDataValid_B1);
    setlabelstates(ui->SMP1_1lbl,this->database->BR1CT_MP1Bg1BoogieDataValid_B1);
    setlabelstates(ui->SMP1_2lbl,this->database->BR1CT_MP1Bg2BoogieDataValid_B1);
    setlabelstates(ui->SM1_1lbl,this->database->BR1CT_M1Bg1BoogieDataValid_B1);

    setlabelstates(ui->SM2_2lbl,this->database->BR2CT_M2Bg2BoogieDataValid_B1);
    setlabelstates(ui->SMP2_1lbl,this->database->BR2CT_MP2Bg1BoogieDataValid_B1);
    setlabelstates(ui->SMP2_2lbl,this->database->BR2CT_MP2Bg2BoogieDataValid_B1);
    setlabelstates(ui->STC2_1lbl,this->database->BR2CT_TC2Bg1BoogieDataValid_B1);

    //保持制动 6模块采集RIOM整车保持制动信号 绿色＝正常 灰色＝apply
    setlabelstates(ui->HoldBRKTC1lbl_1,!this->database->BR1CT_TC1Bg1HoldingBrkApplied_B1);
    setlabelstates(ui->HoldBRKTC1lbl_2,!this->database->BR1CT_TC1Bg2HoldingBrkApplied_B1);
    setlabelstates(ui->HoldBRKMP1lbl_1,!this->database->BR1CT_MP1Bg1HoldingBrkApplied_B1);
    setlabelstates(ui->HoldBRKMP1lbl_2,!this->database->BR1CT_MP1Bg2HoldingBrkApplied_B1);
    setlabelstates(ui->HoldBRKM1lbl_1,!this->database->BR1CT_M1Bg1HoldingBrkApplied_B1);
    setlabelstates(ui->HoldBRKM1lbl_2,!this->database->BR1CT_M1Bg2HoldingBrkApplied_B1);
    setlabelstates(ui->HoldBRKM2lbl_1,!this->database->BR2CT_M2Bg1HoldingBrkApplied_B1);
    setlabelstates(ui->HoldBRKM2lbl_2,!this->database->BR2CT_M2Bg2HoldingBrkApplied_B1);
    setlabelstates(ui->HoldBRKMP2lbl_1,!this->database->BR2CT_MP2Bg1HoldingBrkApplied_B1);
    setlabelstates(ui->HoldBRKMP2lbl_2,!this->database->BR2CT_MP2Bg2HoldingBrkApplied_B1);
    setlabelstates(ui->HoldBRKTC2lbl_1,!this->database->BR2CT_TC2Bg1HoldingBrkApplied_B1);
    setlabelstates(ui->HoldBRKTC2lbl_2,!this->database->BR2CT_TC2Bg2HoldingBrkApplied_B1);

    //整车制动隔离 6模块采集RIOM整车整车制动隔离信号 绿色＝正常 灰色＝隔离

    setlabelstates(ui->AllBRKBypassTC1lbl,!this->database->DICT_TC1DI3CH3EBCUCutOff_B1);
    setlabelstates(ui->AllBRKBypassMP1lbl,!this->database->DICT_MP1DI1CH8BrkAllCutOff_B1);
    setlabelstates(ui->AllBRKBypassM1lbl,!this->database->DICT_M1DI1CH3BrkAllCutOff_B1);
    setlabelstates(ui->AllBRKBypassM2lbl,!this->database->DICT_M2DI1CH3BrkAllCutOff_B1);
    setlabelstates(ui->AllBRKBypassMP2lbl,!this->database->DICT_MP2DI1CH8BrkAllCutOff_B1);
    setlabelstates(ui->AllBRKBypassTC2lbl,!this->database->DICT_TC2DI3CH3EBCUCutOff_B1);


}
void VehicleEBCUPage::setlabelstates(QLabel* lbl,bool state)
{
    if(state)
    {
        lbl->setStyleSheet(LABELGREEN);
    }else
    {
        lbl->setStyleSheet(LABELGRAY);
    }
}
void VehicleEBCUPage::setlabelstates(QLabel* lbl,bool p1,bool p2)
{
    if(p1)
    {
        lbl->setStyleSheet(LABELGRAY);
    }else if(p2)
    {
        lbl->setStyleSheet(LABELGREEN);

    }else
    {
        lbl->setStyleSheet(LABELWHITE);
    }
}