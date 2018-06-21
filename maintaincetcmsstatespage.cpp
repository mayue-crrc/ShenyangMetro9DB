#include "maintaincetcmsstatespage.h"
#include "ui_maintaincetcmsstatespage.h"

#define DEVICEONLINEM "background-color:rgb(0,255,0)"
#define DEVICEONLINES "background-color:yellow"
#define DEVICEOFFLINE "background-color:white"
#define DEVICEPARTMASTER "background-color:rgb(0,255,255)"


MaintainceTCMSStatesPage::MaintainceTCMSStatesPage(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::MaintainceTCMSStatesPage)
{
    ui->setupUi(this);
}

MaintainceTCMSStatesPage::~MaintainceTCMSStatesPage()
{
    delete ui;
}
void MaintainceTCMSStatesPage::updatePage()
{
    setlabelstates(ui->SIVLbl_tc1,this->database->CTHM_ACU1On_B1);
    setlabelstates(ui->SIVLbl_m1,this->database->CTHM_ACU2On_B1);
    setlabelstates(ui->SIVLbl_m2,this->database->CTHM_ACU3On_B1);
    setlabelstates(ui->SIVLbl_tc2,this->database->CTHM_ACU4On_B1);

    setlabelstates(ui->DCULbl_mp1,this->database->CTHM_DCUM1On_B1);
    setlabelstates(ui->DCULbl_m1,this->database->CTHM_DCUM2On_B1);
    setlabelstates(ui->DCULbl_m2,this->database->CTHM_DCUM3On_B1);
    setlabelstates(ui->DCULbl_mp2,this->database->CTHM_DCUM4On_B1);

    setlabelstates(ui->ACULbl_tc1,this->database->CTHM_HVAC1On_B1);
    setlabelstates(ui->ACULbl_mp1,this->database->CTHM_HVAC2On_B1);
    setlabelstates(ui->ACULbl_m1,this->database->CTHM_HVAC3On_B1);
    setlabelstates(ui->ACULbl_m2,this->database->CTHM_HVAC4On_B1);
    setlabelstates(ui->ACULbl_mp2,this->database->CTHM_HVAC5On_B1);
    setlabelstates(ui->ACULbl_tc2,this->database->CTHM_HVAC6On_B1);

    setlabelstates(ui->HMILbl_tc1,this->database->CTHM_HMI1On_B1);
    setlabelstates(ui->HMILbl_tc2,this->database->CTHM_HMI2On_B1);

    setlabelstates(ui->CCULbl_tc1,this->database->CTHM_CCU1On_B1,(int)this->database->CTHM_CCU1Active_B1);
    setlabelstates(ui->CCULbl_tc2,this->database->CTHM_CCU2On_B1,(int)this->database->CTHM_CCU2Active_B1);

    setlabelstates(ui->ERMLbl_tc1,this->database->CTHM_ERM1On_B1);
    setlabelstates(ui->ERMLbl_tc2,this->database->CTHM_ERM2On_B1);

    setlabelstates(ui->EDCU1Lbl_tc1,this->database->CTHM_EDCU1On_B1,this->database->DR1CT_MDCUStatus_U8);
    setlabelstates(ui->EDCU2Lbl_tc1,this->database->CTHM_EDCU2On_B1,this->database->DR2CT_MDCUStatus_U8);
    setlabelstates(ui->EDCU3Lbl_mp1,this->database->CTHM_EDCU3On_B1,this->database->DR3CT_MDCUStatus_U8);
    setlabelstates(ui->EDCU4Lbl_mp1,this->database->CTHM_EDCU4On_B1,this->database->DR4CT_MDCUStatus_U8);
    setlabelstates(ui->EDCU5Lbl_m1,this->database->CTHM_EDCU5On_B1,this->database->DR5CT_MDCUStatus_U8);
    setlabelstates(ui->EDCU6Lbl_m1,this->database->CTHM_EDCU6On_B1,this->database->DR6CT_MDCUStatus_U8);
    setlabelstates(ui->EDCU7Lbl_m2,this->database->CTHM_EDCU7On_B1,this->database->DR7CT_MDCUStatus_U8);
    setlabelstates(ui->EDCU8Lbl_m2,this->database->CTHM_EDCU8On_B1,this->database->DR8CT_MDCUStatus_U8);
    setlabelstates(ui->EDCU9Lbl_mp2,this->database->CTHM_EDCU9On_B1,this->database->DR9CT_MDCUStatus_U8);
    setlabelstates(ui->EDCU10Lbl_mp2,this->database->CTHM_EDCU10On_B1,this->database->DR10CT_MDCUStatus_U8);
    setlabelstates(ui->EDCU11Lbl_tc2,this->database->CTHM_EDCU11On_B1,this->database->DR11CT_MDCUStatus_U8);
    setlabelstates(ui->EDCU12Lbl_tc2,this->database->CTHM_EDCU12On_B1,this->database->DR12CT_MDCUStatus_U8);

    setlabelstates(ui->EBCULbl_tc1,this->database->CTHM_BCU1On_B1,this->database->BR1CT_BCU1Master_B1);
    setlabelstates(ui->EBCULbl_mp1,this->database->CTHM_BCU2On_B1,this->database->BR1CT_BCU2Master_B1);
    setlabelstates(ui->EBCULbl_mp2,this->database->CTHM_BCU3On_B1,this->database->BR2CT_BCU3Master_B1);
    setlabelstates(ui->EBCULbl_tc2,this->database->CTHM_BCU4On_B1,this->database->BR2CT_BCU4Master_B1);

    setlabelstates(ui->WMSLbl_tc2,this->database->CTHM_WMS2On_B1);

    setlabelstates(ui->PIDSLbl_tc1,this->database->CTHM_PIS1On_B1,this->database->CTHM_PIS1Active_B1);
    setlabelstates(ui->PIDSLbl_tc2,this->database->CTHM_PIS2On_B1,this->database->CTHM_PIS2Active_B1);

    setlabelstates(ui->CCUDLbl_tc1,this->database->CTHM_CCUD1On_B1);
    setlabelstates(ui->CCUDLbl_tc2,this->database->CTHM_CCUD2On_B1);

    setlabelstates(ui->ATCLbl_tc1,this->database->CTHM_ATC1On_B1);

    QList<bool> tmp_riom;
    tmp_riom<<this->database->CTHM_TC1RIOMGWOn_B1<<this->database->CTHM_TC1DI1On_B1<<this->database->CTHM_TC1DI2On_B1<<
            this->database->CTHM_TC1DI3On_B1<<this->database->CTHM_TC1DI4On_B1<<this->database->CTHM_TC1DI5On_B1<<
            this->database->CTHM_TC1DO1On_B1<<this->database->CTHM_TC1AX1On_B1;
    setlabelstates(ui->RIOMLbl_tc1,tmp_riom);
    tmp_riom.clear();

    tmp_riom<<this->database->CTHM_Mp1RIOMGWOn_B1<<this->database->CTHM_MP1DI1On_B1<<this->database->CTHM_MP1DO1On_B1;
    setlabelstates(ui->RIOMLbl_mp1,tmp_riom);
    tmp_riom.clear();

    tmp_riom<<this->database->CTHM_M1RIOMGWOn_B1<<this->database->CTHM_M1DI1On_B1<<this->database->CTHM_M1DO1On_B1;
    setlabelstates(ui->RIOMLbl_m1,tmp_riom);
    tmp_riom.clear();

    tmp_riom<<this->database->CTHM_M2RIOMGWOn_B1<<this->database->CTHM_M2DI1On_B1<<this->database->CTHM_M2DO1On_B1;
    setlabelstates(ui->RIOMLbl_m2,tmp_riom);
    tmp_riom.clear();

    tmp_riom<<this->database->CTHM_Mp2RIOMGWOn_B1<<this->database->CTHM_MP2DI1On_B1<<this->database->CTHM_MP2DO1On_B1;
    setlabelstates(ui->RIOMLbl_mp2,tmp_riom);
    tmp_riom.clear();

    tmp_riom<<this->database->CTHM_TC2RIOMGWOn_B1<<this->database->CTHM_TC2DI1On_B1<<this->database->CTHM_TC2DI2On_B1<<
            this->database->CTHM_TC2DI3On_B1<<this->database->CTHM_TC2DI4On_B1<<this->database->CTHM_TC2DI5On_B1<<
            this->database->CTHM_TC2DO1On_B1<<this->database->CTHM_TC2AX1On_B1;
    setlabelstates(ui->RIOMLbl_tc2,tmp_riom);
    tmp_riom.clear();

//    setlabelstates(ui->DOOR1Lbl_tc1,this->database->DR1CT_DCU1Valid_B1);
//    setlabelstates(ui->DOOR2Lbl_tc1,this->database->DR1CT_DCU2Valid_B1);
//    setlabelstates(ui->DOOR3Lbl_tc1,this->database->DR1CT_DCU3Valid_B1);
//    setlabelstates(ui->DOOR4Lbl_tc1,this->database->DR1CT_DCU4Valid_B1);
//    setlabelstates(ui->DOOR5Lbl_tc1,this->database->DR1CT_DCU5Valid_B1);
//    setlabelstates(ui->DOOR6Lbl_tc1,this->database->DR1CT_DCU6Valid_B1);
//    setlabelstates(ui->DOOR7Lbl_tc1,this->database->DR1CT_DCU7Valid_B1);
//    setlabelstates(ui->DOOR8Lbl_tc1,this->database->DR1CT_DCU8Valid_B1);

//    setlabelstates(ui->DOOR1Lbl_mp1,this->database->DR2CT_DCU1Valid_B1);
//    setlabelstates(ui->DOOR2Lbl_mp1,this->database->DR2CT_DCU2Valid_B1);
//    setlabelstates(ui->DOOR3Lbl_mp1,this->database->DR2CT_DCU3Valid_B1);
//    setlabelstates(ui->DOOR4Lbl_mp1,this->database->DR2CT_DCU4Valid_B1);
//    setlabelstates(ui->DOOR5Lbl_mp1,this->database->DR2CT_DCU5Valid_B1);
//    setlabelstates(ui->DOOR6Lbl_mp1,this->database->DR2CT_DCU6Valid_B1);
//    setlabelstates(ui->DOOR7Lbl_mp1,this->database->DR2CT_DCU7Valid_B1);
//    setlabelstates(ui->DOOR8Lbl_mp1,this->database->DR2CT_DCU8Valid_B1);

//    setlabelstates(ui->DOOR1Lbl_m1,this->database->DR3CT_DCU1Valid_B1);
//    setlabelstates(ui->DOOR2Lbl_m1,this->database->DR3CT_DCU2Valid_B1);
//    setlabelstates(ui->DOOR3Lbl_m1,this->database->DR3CT_DCU3Valid_B1);
//    setlabelstates(ui->DOOR4Lbl_m1,this->database->DR3CT_DCU4Valid_B1);
//    setlabelstates(ui->DOOR5Lbl_m1,this->database->DR3CT_DCU5Valid_B1);
//    setlabelstates(ui->DOOR6Lbl_m1,this->database->DR3CT_DCU6Valid_B1);
//    setlabelstates(ui->DOOR7Lbl_m1,this->database->DR3CT_DCU7Valid_B1);
//    setlabelstates(ui->DOOR8Lbl_m1,this->database->DR3CT_DCU8Valid_B1);

//    setlabelstates(ui->DOOR1Lbl_m2,this->database->DR4CT_DCU1Valid_B1);
//    setlabelstates(ui->DOOR2Lbl_m2,this->database->DR4CT_DCU2Valid_B1);
//    setlabelstates(ui->DOOR3Lbl_m2,this->database->DR4CT_DCU3Valid_B1);
//    setlabelstates(ui->DOOR4Lbl_m2,this->database->DR4CT_DCU4Valid_B1);
//    setlabelstates(ui->DOOR5Lbl_m2,this->database->DR4CT_DCU5Valid_B1);
//    setlabelstates(ui->DOOR6Lbl_m2,this->database->DR4CT_DCU6Valid_B1);
//    setlabelstates(ui->DOOR7Lbl_m2,this->database->DR4CT_DCU7Valid_B1);
//    setlabelstates(ui->DOOR8Lbl_m2,this->database->DR4CT_DCU8Valid_B1);

//    setlabelstates(ui->DOOR1Lbl_mp2,this->database->DR5CT_DCU1Valid_B1);
//    setlabelstates(ui->DOOR2Lbl_mp2,this->database->DR5CT_DCU2Valid_B1);
//    setlabelstates(ui->DOOR3Lbl_mp2,this->database->DR5CT_DCU3Valid_B1);
//    setlabelstates(ui->DOOR4Lbl_mp2,this->database->DR5CT_DCU4Valid_B1);
//    setlabelstates(ui->DOOR5Lbl_mp2,this->database->DR5CT_DCU5Valid_B1);
//    setlabelstates(ui->DOOR6Lbl_mp2,this->database->DR5CT_DCU6Valid_B1);
//    setlabelstates(ui->DOOR7Lbl_mp2,this->database->DR5CT_DCU7Valid_B1);
//    setlabelstates(ui->DOOR8Lbl_mp2,this->database->DR5CT_DCU8Valid_B1);

//    setlabelstates(ui->DOOR1Lbl_tc2,this->database->DR6CT_DCU1Valid_B1);
//    setlabelstates(ui->DOOR2Lbl_tc2,this->database->DR6CT_DCU2Valid_B1);
//    setlabelstates(ui->DOOR3Lbl_tc2,this->database->DR6CT_DCU3Valid_B1);
//    setlabelstates(ui->DOOR4Lbl_tc2,this->database->DR6CT_DCU4Valid_B1);
//    setlabelstates(ui->DOOR5Lbl_tc2,this->database->DR6CT_DCU5Valid_B1);
//    setlabelstates(ui->DOOR6Lbl_tc2,this->database->DR6CT_DCU6Valid_B1);
//    setlabelstates(ui->DOOR7Lbl_tc2,this->database->DR6CT_DCU7Valid_B1);
//    setlabelstates(ui->DOOR8Lbl_tc2,this->database->DR6CT_DCU8Valid_B1);
}

void MaintainceTCMSStatesPage::on_returnBtn_pressed()
{
    changePage(uVehicleMaintaincePage);
}
void MaintainceTCMSStatesPage::setlabelstates(QLabel* lbl,bool state)
{
    if(state)
    {
        lbl->setStyleSheet(DEVICEONLINEM);
    }else
    {
        lbl->setStyleSheet(DEVICEOFFLINE);
    }
}
//riom
void MaintainceTCMSStatesPage::setlabelstates(QLabel* lbl,QList<bool> state)
{
    for(int i = 0; i<state.size();i++)
    {
        if(!state.at(i))
        {
            lbl->setStyleSheet(DEVICEOFFLINE);
            return;
        }else
        {
            lbl->setStyleSheet(DEVICEONLINEM);
        }
    }

}
//door
void MaintainceTCMSStatesPage::setlabelstates(QLabel* lbl,bool state,int runstate)
{
    if(state)
    {
        if(runstate == 1)
        {
            lbl->setStyleSheet(DEVICEONLINEM);

        }else if(runstate == 3)
        {
            lbl->setStyleSheet(DEVICEPARTMASTER);

        }else
        {
            lbl->setStyleSheet(DEVICEONLINES);
        }
    }else
    {
        lbl->setStyleSheet(DEVICEOFFLINE);
    }
}
//bcu
void MaintainceTCMSStatesPage::setlabelstates(QLabel* lbl,bool state1,bool state2)
{
    if(state1)
    {
        if(state2)
        {
            lbl->setStyleSheet(DEVICEONLINEM);
        }else
        {
            lbl->setStyleSheet(DEVICEONLINES);
        }
    }else
    {
        lbl->setStyleSheet(DEVICEOFFLINE);
    }
}
