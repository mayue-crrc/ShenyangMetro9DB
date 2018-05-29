#include "vehiclerunstatepage.h"
#include "ui_vehiclerunstatepage.h"

#define DOORCLOSE "background-color: rgb(0,192,0);border:2px solid rgb(255,255,153);font: 20px  \"微软雅黑\";color:rgba(0,0,0,255);"
#define DOOROPEN "background-color: rgb(224,160,192);border:2px solid rgb(255,255,153);font: 20px  \"微软雅黑\";color:rgba(0,0,0,255);"
#define DOORFANGJIA "border-image: url(:/images/images/DOORfangjia.bmp);color:rgba(0,0,0,0);"
#define DOORFAULT "background-color: rgb(255,0,0);border:2px solid rgb(255,255,153);font: 20px  \"微软雅黑\";color:rgba(0,0,0,255);"
#define DOOREMLOCK "border-image: url(:/images/images/DOORemlock.bmp);color:rgba(0,0,0,0);"
#define DOORBYPASS "border-image: url(:/images/images/DOORbypass.bmp);color:rgba(0,0,0,0);"
#define DOORUNKNOW "background-color: rgb(255,255,255);border:2px solid rgb(255,255,153);font: 20px  \"微软雅黑\";color:rgba(0,0,0,255);"


#define TCUFAULT "border-image: url(:/images/images/MotorFault.png);"
#define TCURUN "border-image: url(:/images/images/MotorRun.png);"
#define TCUSTOP "border-image: url(:/images/images/MotorStop.png);"
#define TCUUNKNOW "border-image: url(:/images/images/MotorUnknow.png);"

#define PANTODOWNMP1 "border-image: url(:/images/images/PantoDownMP1.bmp);"
#define PANTOUPMP1 "border-image: url(:/images/images/PantoUpMP1.bmp);"
#define PANTODOWNMP2 "border-image: url(:/images/images/PantoDownMP2.bmp);"
#define PANTOUPMP2 "border-image: url(:/images/images/PantoUpMP2.bmp);"

#define PBAPPLY "background-color:transparent;border-image: url(:/images/images/PBapply.png);"
#define PBBYPASS "background-color:transparent;border-image: url(:/images/images/PBbypass.png);"
#define PBFAULT "background-color:transparent;border-image: url(:/images/images/PBFault.png);"
#define PBRELEASE "background-color:transparent;border-image: url(:/images/images/PBRelease.png);"
#define PBUNKNOWN "background-color:transparent;border-image: url(:/images/images/PBunknown.png);" // BCU offline

#define BAPPLY "background-color:transparent;border-image: url(:/images/images/BApply.png);"
#define BBYPASS "background-color:transparent;border-image: url(:/images/images/Bbypass.png);"
#define BFAULT "background-color:transparent;border-image: url(:/images/images/Bfault.png);"
#define BRELEASE "background-color:transparent;border-image: url(:/images/images/Brelease.png);"
#define BUNKNOWN "background-color:transparent;border-image: url(:/images/images/Bunknown.png);"   // BCU offline or no vaild status

#define ACPFAULT "border-image: url(:/images/images/ACPFault.png);"
#define ACPRUN "border-image: url(:/images/images/ACPRun.png);"
#define ACPSTOP "border-image: url(:/images/images/ACPStop.png);"
#define ACPUNKNOWN "border-image: url(:/images/images/ACPUnknow.png);"

#define DCDCFAULT "border-image: url(:/images/images/DCDCFault.bmp);"
#define DCDCRUN "border-image: url(:/images/images/DCDCRun.bmp);"
#define DCDCSTOP "border-image: url(:/images/images/DCDCStop.bmp);"
#define DCDCUNKONWN "border-image: url(:/images/images/DCDCUnknow.bmp);"

#define HSCBCLOSE "border-image: url(:/images/images/HSCBclose.bmp);"
#define HSCBOPEN "border-image: url(:/images/images/HSCBopen.bmp);"
#define HSCBUNKNOWN "border-image: url(:/images/images/HSCBunknown.bmp);"

#define SIVFAULT "border-image: url(:/images/images/SIVFault.bmp);"
#define SIVRUN "border-image: url(:/images/images/SIVRun.bmp);"
#define SIVSTOP "border-image: url(:/images/images/SIVStop.bmp);"
#define SIVUNKONWN "border-image: url(:/images/images/SIVUnknow.bmp);"

#define BCMFAULT "border-image: url(:/images/images/BCMfault.bmp);"
#define BCMRUN "border-image: url(:/images/images/BCMrun.bmp);"
#define BCMSTOP "border-image: url(:/images/images/BCMstop.bmp);"
#define BCMUNKONWN "border-image: url(:/images/images/BCMunknown.bmp);"

#define SUPPLYON "border-image: url(:/images/images/supply.bmp);"
#define SUPPLYOFF "border-image: url(:/images/images/unsupply.bmp);"

#define FIREALARM "border-image: url(:/images/images/FireAlarm.png);"
#define FIREOFFLINE LABELWHITE
#define FIREFAULT LABELRED
#define FIRENOALARM "background-color:rgb(0,192,0);"


#define RUNPAGEBUTTONUP "font: 18px  \"微软雅黑\";color: black;border:2px solid white;background-color: yellow;border-radius: 15px;"
#define RUNPAGEBUTTONDOWN "font: 18px  \"微软雅黑\";color: black;border:2px solid white;background-color: orange;border-radius: 15px;"

VehicleRunStatePage::VehicleRunStatePage(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::VehicleRunStatePage)
{
    ui->setupUi(this);

    this->ctrlFaultDetailConfirm = new CtrlFaultDetailConfirm(this);
    this->ctrlFaultDetailConfirm->setGeometry(212,120,ctrlFaultDetailConfirm->width(),ctrlFaultDetailConfirm->height());
    this->ctrlFaultDetailConfirm->hide();
}

VehicleRunStatePage::~VehicleRunStatePage()
{
    delete ui;
}


void VehicleRunStatePage::updatePage()
{

    updateTrainStatus();

    updateRunStatus();

    if(CrrcFault::getCrrcFault() == NULL)
    {

    }else
    {
        if(CrrcFault::getCrrcFault()->NewFaultOccur && CrrcFault::getCrrcFault()->isRunning())
        {
            this->ctrlFaultDetailConfirm->showFaultDetail();
            CrrcFault::getCrrcFault()->NewFaultOccur = false;
        }
    }

}
void VehicleRunStatePage::showEvent(QShowEvent *)
{

}

void VehicleRunStatePage::on_LMResetPageBtn_pressed()
{
    changePage(uVehiclePowerResetPage);
}

void VehicleRunStatePage::on_ByPassPageBtn_pressed()
{
    changePage(uVehicleBypassPage);
}

void VehicleRunStatePage::on_ResetPageBtn_pressed()
{
    changePage(uVehicleResetPage);

}


void VehicleRunStatePage::on_CutPageBtn_pressed()
{
    emit changePWPage(uVehicleCutoffPage);
    changePage(uVehiclePasswordPage);
}

void VehicleRunStatePage::on_FirePageBtn_pressed()
{
    changePage(uVehicleWMSPage);
}
void VehicleRunStatePage::updateRunStatus()
{
    //限速
    this->ui->SpeedLimitlbl->setText("限速\n"+QString::number(this->database->CTHM_TrainLimitSpeed_U16/10)+" km/h");
    //紧急停车
    if(this->database->DICT_TC1DI1CH12EmBrkButton_B1 == true || this->database->DICT_TC2DI1CH12EmBrkButton_B1 == true)
    {
        this->ui->EBBtnlbl->show();
    }else
    {
        this->ui->EBBtnlbl->hide();
    }

    //空转 滑行
    if(this->database->TR1CT_Slide_B1 == true &&this->database->TR2CT_Slide_B1 == true &&
       this->database->TR3CT_Slide_B1 == true &&this->database->TR4CT_Slide_B1 == true )
    {
        this->ui->Idlelbl->show();
    }else
    {
        this->ui->Idlelbl->hide();
    }
    //保持制动切除
    if(this->database->DICT_TC1DI3CH18HoldingBrkCutOff_B1 || this->database->DICT_TC2DI3CH18HoldingBrkCutOff_B1)
    {
        this->ui->HoldbrakeCutlbl->show();
    }else
    {
        this->ui->HoldbrakeCutlbl->hide();
    }

    //蓄电池电压低
    if(this->database->CTHM_BatteryLow_B1)
    {
        this->ui->DC24VLowlbl->show();
    }else
    {
        this->ui->DC24VLowlbl->hide();
    }

    //警惕动作
    if((this->database->HMIPosition == 1 && this->database->DICT_TC1DI1CH8Alert6s_B1 == true) ||
       (this->database->HMIPosition == 2 && this->database->DICT_TC2DI1CH8Alert6s_B1 == true))
    {
        this->ui->Deadmanlbl->show();
    }else
    {
        this->ui->Deadmanlbl->hide();
    }
    //紧急运行
    if(this->database->DICT_TC1DI1CH17EmOperition_B1 == true || this->database->DICT_TC2DI1CH17EmOperition_B1 == true)
    {
        this->ui->EmergencyRunlbl->show();
    }else
    {
        this->ui->EmergencyRunlbl->hide();
    }

    //洗车模式
    if(this->database->DICT_TC1DI1CH16WashingMode_B1 == true || this->database->DICT_TC2DI1CH16WashingMode_B1 == true)
    {
        this->ui->WashModelbl->show();
    }else
    {
        this->ui->WashModelbl->hide();
    }
    //母线接触器断开
    if(this->database->DICT_M1DI1CH16LineContacterClosed_B1 == true)
    {
        this->ui->MainKMlbl->hide();
    }else
    {
        this->ui->MainKMlbl->show();
    }
    //牵引安全未建立

    //间壁门蜂鸣器按键
    if((this->database->HMIPosition == 1 && this->database->DICT_TC2DI4CH17BarrielDoorStutas_B1 == false) ||
       (this->database->HMIPosition == 2 && this->database->DICT_TC1DI4CH17BarrielDoorStutas_B1 == false))
    {
        this->ui->BuzzerBtn->show();
        if(this->database->HMiCT_PWDoorAlarmStop_B1)
        {
            this->ui->BuzzerBtn->setStyleSheet(RUNPAGEBUTTONDOWN);
        }else
        {
            this->ui->BuzzerBtn->setStyleSheet(RUNPAGEBUTTONUP);
        }
    }else
    {
        this->ui->BuzzerBtn->hide();
        this->database->HMiCT_PWDoorAlarmStop_B1 = false;
    }
}

void VehicleRunStatePage::updateTrainStatus()
{
    //PB Status
    QList<bool> PBstatus;
    PBstatus<<database->DICT_TC1DI3CH10ParkingBrkCutOff_B1<<!(database->CTHM_BCU1On_B1||database->CTHM_BCU2On_B1)<<database->BR1CT_TC1Bg2ParkingBrkRlsed_B1;
    setPBStatus(this->ui->Tc1BCUlbl,PBstatus);

    PBstatus.clear();
    PBstatus<<database->DICT_MP1DI1CH10ParkingBrkCutOff_B1<<!(database->CTHM_BCU1On_B1||database->CTHM_BCU2On_B1)<<database->BR1CT_MP1Bg2ParkingBrkRlsed_B1;
    setPBStatus(this->ui->Mp1BCUlbl,PBstatus);

    PBstatus.clear();
    PBstatus<<database->DICT_M1DI1CH5ParkingBrkCutOff_B1<<!(database->CTHM_BCU1On_B1||database->CTHM_BCU2On_B1)<<database->BR1CT_M1Bg2ParkingBrkRlsed_B1;
    setPBStatus(this->ui->M1BCUlbl,PBstatus);

    PBstatus.clear();
    PBstatus<<database->DICT_TC2DI3CH10ParkingBrkCutOff_B1<<!(database->CTHM_BCU3On_B1||database->CTHM_BCU4On_B1)<<database->BR2CT_TC2Bg2ParkingBrkRlsed_B1;
    setPBStatus(this->ui->Tc2BCUlbl,PBstatus);

    PBstatus.clear();
    PBstatus<<database->DICT_MP2DI1CH10ParkingBrkCutOff_B1<<!(database->CTHM_BCU3On_B1||database->CTHM_BCU4On_B1)<<database->BR2CT_MP2Bg2ParkingBrkRlsed_B1;
    setPBStatus(this->ui->Mp2BCUlbl,PBstatus);

    PBstatus.clear();
    PBstatus<<database->DICT_M2DI1CH5ParkingBrkCutOff_B1<<!(database->CTHM_BCU3On_B1||database->CTHM_BCU4On_B1)<<database->BR2CT_M2Bg2ParkingBrkRlsed_B1;
    setPBStatus(this->ui->M2BCUlbl,PBstatus);


    // B Status
    QList<bool> Bstatus;
    Bstatus<<database->DICT_TC1DI3CH1Bg1CutOff_B1<<!(database->CTHM_BCU1On_B1||database->CTHM_BCU2On_B1)<<(bool)(database->BR1CT_TC1Bg1Fault_U32&0xff7fffff)
            <<database->BR1CT_TC1Bg1AirBrkApplied_B1<<database->BR1CT_TC1Bg1AirBrkRlsed_B1;
    setBStatus(this->ui->Tc1bg1lbl,Bstatus);

    Bstatus.clear();
    Bstatus<<database->DICT_TC1DI3CH2Bg2CutOff_B1<<!(database->CTHM_BCU1On_B1||database->CTHM_BCU2On_B1)<<(bool)(database->BR1CT_TC1Bg2Fault_U32&0xff7fffff)
            <<database->BR1CT_TC1Bg2AirBrkApplied_B1<<database->BR1CT_TC1Bg2AirBrkRlsed_B1;
    setBStatus(this->ui->Tc1bg2lbl,Bstatus);

    Bstatus.clear();
    Bstatus<<database->DICT_MP1DI1CH6Bg1CutOff_B1<<!(database->CTHM_BCU1On_B1||database->CTHM_BCU2On_B1)<<(bool)(database->BR1CT_MP1Bg1Fault_U32&0xff7fffff)
            <<database->BR1CT_MP1Bg1AirBrkApplied_B1<<database->BR1CT_MP1Bg1AirBrkRlsed_B1;
    setBStatus(this->ui->Mp1bg1lbl,Bstatus);

    Bstatus.clear();
    Bstatus<<database->DICT_MP1DI1CH7Bg2CutOff_B1<<!(database->CTHM_BCU1On_B1||database->CTHM_BCU2On_B1)<<(bool)(database->BR1CT_MP1Bg2Fault_U32&0xff7fffff)
            <<database->BR1CT_MP1Bg2AirBrkApplied_B1<<database->BR1CT_MP1Bg2AirBrkRlsed_B1;
    setBStatus(this->ui->Mp1bg2lbl,Bstatus);

    Bstatus.clear();
    Bstatus<<database->DICT_M1DI1CH1Bg1CutOff_B1<<!(database->CTHM_BCU1On_B1||database->CTHM_BCU2On_B1)<<(bool)(database->BR1CT_M1Bg1Fault_U32&0xff7fffff)
            <<database->BR1CT_M1Bg1AirBrkApplied_B1<<database->BR1CT_M1Bg1AirBrkRlsed_B1;
    setBStatus(this->ui->M1bg1lbl,Bstatus);

    Bstatus.clear();
    Bstatus<<database->DICT_M1DI1CH2Bg2CutOff_B1<<!(database->CTHM_BCU1On_B1||database->CTHM_BCU2On_B1)<<(bool)(database->BR1CT_M1Bg2Fault_U32&0xff7fffff)
            <<database->BR1CT_M1Bg2AirBrkApplied_B1<<database->BR1CT_M1Bg2AirBrkRlsed_B1;
    setBStatus(this->ui->M1bg2lbl,Bstatus);

    Bstatus.clear();
    Bstatus<<database->DICT_M2DI1CH1Bg1CutOff_B1<<!(database->CTHM_BCU3On_B1||database->CTHM_BCU4On_B1)<<(bool)(database->BR2CT_M2Bg1Fault_U32&0xff7fffff)
            <<database->BR2CT_M2Bg1AirBrkApplied_B1<<database->BR2CT_M2Bg1AirBrkRlsed_B1;
    setBStatus(this->ui->M2bg1lbl,Bstatus);

    Bstatus.clear();
    Bstatus<<database->DICT_M2DI1CH2Bg2CutOff_B1<<!(database->CTHM_BCU3On_B1||database->CTHM_BCU4On_B1)<<(bool)(database->BR2CT_M2Bg2Fault_U32&0xff7fffff)
            <<database->BR2CT_M2Bg2AirBrkApplied_B1<<database->BR2CT_M2Bg2AirBrkRlsed_B1;
    setBStatus(this->ui->M2bg2lbl,Bstatus);

    Bstatus.clear();
    Bstatus<<database->DICT_MP2DI1CH6Bg1CutOff_B1<<!(database->CTHM_BCU3On_B1||database->CTHM_BCU4On_B1)<<(bool)(database->BR2CT_MP2Bg1Fault_U32&0xff7fffff)
            <<database->BR2CT_MP2Bg1AirBrkApplied_B1<<database->BR2CT_MP2Bg1AirBrkRlsed_B1;
    setBStatus(this->ui->Mp2bg1lbl,Bstatus);

    Bstatus.clear();
    Bstatus<<database->DICT_MP2DI1CH7Bg2CutOff_B1<<!(database->CTHM_BCU3On_B1||database->CTHM_BCU4On_B1)<<(bool)(database->BR2CT_MP2Bg2Fault_U32&0xff7fffff)
            <<database->BR2CT_MP2Bg2AirBrkApplied_B1<<database->BR2CT_MP2Bg2AirBrkRlsed_B1;
    setBStatus(this->ui->Mp2bg2lbl,Bstatus);

    Bstatus.clear();
    Bstatus<<database->DICT_TC2DI3CH1Bg1CutOff_B1<<!(database->CTHM_BCU3On_B1||database->CTHM_BCU4On_B1)<<(bool)(database->BR2CT_TC2Bg1Fault_U32&0xff7fffff)
            <<database->BR2CT_TC2Bg1AirBrkApplied_B1<<database->BR2CT_TC2Bg1AirBrkRlsed_B1;
    setBStatus(this->ui->Tc2bg1lbl,Bstatus);

    Bstatus.clear();
    Bstatus<<database->DICT_TC2DI3CH2Bg2CutOff_B1<<!(database->CTHM_BCU3On_B1||database->CTHM_BCU4On_B1)<<(bool)(database->BR2CT_TC2Bg2Fault_U32&0xff7fffff)
            <<database->BR2CT_TC2Bg2AirBrkApplied_B1<<database->BR2CT_TC2Bg2AirBrkRlsed_B1;
    setBStatus(this->ui->Tc2bg2lbl,Bstatus);

    // panto status
    if(database->DICT_MP1DI1CH3PanUpStatus_B1)
    {
        this->ui->Mp1Pantolbl->setStyleSheet(PANTOUPMP1);
    }else if(database->DICT_MP1DI1CH4PanDownStatus_B1)
    {
        this->ui->Mp1Pantolbl->setStyleSheet(PANTODOWNMP1);
    }
    if(database->DICT_MP2DI1CH3PanUpStatus_B1)
    {
        this->ui->Mp2Pantolbl->setStyleSheet(PANTOUPMP2);
    }else if(database->DICT_MP2DI1CH4PanDownStatus_B1)
    {
        this->ui->Mp2Pantolbl->setStyleSheet(PANTODOWNMP2);
    }

    //Motor status
    setMotorStatus(this->ui->Mp1Motor1lbl,database->CTHM_DCUM1On_B1,database->TR1CT_TractionStatus_I16);
    setMotorStatus(this->ui->M1Motor1lbl,database->CTHM_DCUM2On_B1,database->TR2CT_TractionStatus_I16);
    setMotorStatus(this->ui->M2Motor1lbl,database->CTHM_DCUM3On_B1,database->TR3CT_TractionStatus_I16);
    setMotorStatus(this->ui->Mp2Motor1lbl,database->CTHM_DCUM4On_B1,database->TR4CT_TractionStatus_I16);

    // HSCB status
    setHSCBStatus(this->ui->Mp1Breakerlbl,database->CTHM_DCUM1On_B1,database->TR1CT_HSCBClose_B1);
    setHSCBStatus(this->ui->M1Breakerlbl,database->CTHM_DCUM2On_B1,database->TR2CT_HSCBClose_B1);
    setHSCBStatus(this->ui->M2Breakerlbl,database->CTHM_DCUM3On_B1,database->TR3CT_HSCBClose_B1);
    setHSCBStatus(this->ui->Mp2Breakerlbl,database->CTHM_DCUM4On_B1,database->TR4CT_HSCBClose_B1);

    //ACP status
    QList<bool> ACPstatus;
    ACPstatus<<database->CTHM_TC1RIOMGWOn_B1<<(database->DICT_TC1DI2CH22ComSupplyFlt_B1||database->DICT_TC1DI2CH20ComOverflow_B1)
            <<database->DICT_TC1DI2CH19CompressorOperition_B1;
    setACPStatus(this->ui->Tc1Acplbl,ACPstatus);

    ACPstatus.clear();
    ACPstatus<<database->CTHM_TC2RIOMGWOn_B1<<(database->DICT_TC2DI2CH22ComSupplyFlt_B1||database->DICT_TC2DI2CH20ComOverflow_B1)
            <<database->DICT_TC2DI2CH19CompressorOperition_B1;
    setACPStatus(this->ui->Tc2Acplbl,ACPstatus);

    //SIV status
    setSIVStatus(this->ui->Tc1SIVlbl,database->CTHM_ACU1On_B1,database->AX1CT_AuxInvStatus_I16);
    setSIVStatus(this->ui->M1SIVlbl,database->CTHM_ACU2On_B1,database->AX2CT_AuxInvStatus_I16);
    setSIVStatus(this->ui->M2SIVlbl,database->CTHM_ACU3On_B1,database->AX3CT_AuxInvStatus_I16);
    setSIVStatus(this->ui->Tc2SIVlbl,database->CTHM_ACU4On_B1,database->AX4CT_AuxInvStatus_I16);
    //BCM status
    QList<bool> BCMstatus;
    BCMstatus<<database->CTHM_ACU1On_B1<<database->AX1CT_BCMFlt_B1<<database->AX1CT_BCMCharging_B1;
    setBCMStatus(this->ui->Tc1BCMlbl,BCMstatus);

//    BCMstatus.clear();
//    BCMstatus<<database->CTHM_ACU2On_B1<<database->AX2CT_BCMFlt_B1<<database->AX2CT_BCMCharging_B1;
//    setBCMStatus(this->ui->M1BCMlbl,BCMstatus);

//    BCMstatus.clear();
//    BCMstatus<<database->CTHM_ACU3On_B1<<database->AX3CT_BCMFlt_B1<<database->AX3CT_BCMCharging_B1;
//    setBCMStatus(this->ui->M2BCMlbl,BCMstatus);

    BCMstatus.clear();
    BCMstatus<<database->CTHM_ACU4On_B1<<database->AX4CT_BCMFlt_B1<<database->AX4CT_BCMCharging_B1;
    setBCMStatus(this->ui->Tc2BCMlbl,BCMstatus);

    //DOOR status
    QList<bool> DOORstatus;
    //tc1
    DOORstatus<<database->DR1_2CT_DCU1Isolate_B1<<database->DR1_2CT_DCU1Fault_U8<<database->DR1_2CT_DCU1EmUnlock_B1
            <<database->DR1_2CT_DCU1ObstacleDetcted_B1<<database->DR1_2CT_DCU1TotallyOpen_B1<<database->DR1_2CT_DCU1TotallyClose_B1;
    setDOORStatus(this->ui->Tc1Door1lbl,DOORstatus);
    DOORstatus.clear();

    DOORstatus<<database->DR1_2CT_DCU2Isolate_B1<<database->DR1_2CT_DCU2Fault_U8<<database->DR1_2CT_DCU2EmUnlock_B1
            <<database->DR1_2CT_DCU2ObstacleDetcted_B1<<database->DR1_2CT_DCU2TotallyOpen_B1<<database->DR1_2CT_DCU2TotallyClose_B1;
    setDOORStatus(this->ui->Tc1Door2lbl,DOORstatus);
    DOORstatus.clear();

    DOORstatus<<database->DR1_2CT_DCU3Isolate_B1<<database->DR1_2CT_DCU3Fault_U8<<database->DR1_2CT_DCU3EmUnlock_B1
            <<database->DR1_2CT_DCU3ObstacleDetcted_B1<<database->DR1_2CT_DCU3TotallyOpen_B1<<database->DR1_2CT_DCU3TotallyClose_B1;
    setDOORStatus(this->ui->Tc1Door3lbl,DOORstatus);
    DOORstatus.clear();

    DOORstatus<<database->DR1_2CT_DCU4Isolate_B1<<database->DR1_2CT_DCU4Fault_U8<<database->DR1_2CT_DCU4EmUnlock_B1
            <<database->DR1_2CT_DCU4ObstacleDetcted_B1<<database->DR1_2CT_DCU4TotallyOpen_B1<<database->DR1_2CT_DCU4TotallyClose_B1;
    setDOORStatus(this->ui->Tc1Door4lbl,DOORstatus);
    DOORstatus.clear();

    DOORstatus<<database->DR1_2CT_DCU5Isolate_B1<<database->DR1_2CT_DCU5Fault_U8<<database->DR1_2CT_DCU5EmUnlock_B1
            <<database->DR1_2CT_DCU5ObstacleDetcted_B1<<database->DR1_2CT_DCU5TotallyOpen_B1<<database->DR1_2CT_DCU5TotallyClose_B1;
    setDOORStatus(this->ui->Tc1Door5lbl,DOORstatus);
    DOORstatus.clear();

    DOORstatus<<database->DR1_2CT_DCU6Isolate_B1<<database->DR1_2CT_DCU6Fault_U8<<database->DR1_2CT_DCU6EmUnlock_B1
            <<database->DR1_2CT_DCU6ObstacleDetcted_B1<<database->DR1_2CT_DCU6TotallyOpen_B1<<database->DR1_2CT_DCU6TotallyClose_B1;
    setDOORStatus(this->ui->Tc1Door6lbl,DOORstatus);
    DOORstatus.clear();

    DOORstatus<<database->DR1_2CT_DCU7Isolate_B1<<database->DR1_2CT_DCU7Fault_U8<<database->DR1_2CT_DCU7EmUnlock_B1
            <<database->DR1_2CT_DCU7ObstacleDetcted_B1<<database->DR1_2CT_DCU7TotallyOpen_B1<<database->DR1_2CT_DCU7TotallyClose_B1;
    setDOORStatus(this->ui->Tc1Door7lbl,DOORstatus);
    DOORstatus.clear();

    DOORstatus<<database->DR1_2CT_DCU8Isolate_B1<<database->DR1_2CT_DCU8Fault_U8<<database->DR1_2CT_DCU8EmUnlock_B1
            <<database->DR1_2CT_DCU8ObstacleDetcted_B1<<database->DR1_2CT_DCU8TotallyOpen_B1<<database->DR1_2CT_DCU8TotallyClose_B1;
    setDOORStatus(this->ui->Tc1Door8lbl,DOORstatus);
    DOORstatus.clear();

    this->setDOORsubStatus(this->ui->Tc1Door1lbl_sub,this->database->DR1_2CT_DCU1GreenOutputFeedback_B1);
    this->setDOORsubStatus(this->ui->Tc1Door2lbl_sub,this->database->DR1_2CT_DCU2GreenOutputFeedback_B1);
    this->setDOORsubStatus(this->ui->Tc1Door3lbl_sub,this->database->DR1_2CT_DCU3GreenOutputFeedback_B1);
    this->setDOORsubStatus(this->ui->Tc1Door4lbl_sub,this->database->DR1_2CT_DCU4GreenOutputFeedback_B1);
    this->setDOORsubStatus(this->ui->Tc1Door5lbl_sub,this->database->DR1_2CT_DCU5GreenOutputFeedback_B1);
    this->setDOORsubStatus(this->ui->Tc1Door6lbl_sub,this->database->DR1_2CT_DCU6GreenOutputFeedback_B1);
    this->setDOORsubStatus(this->ui->Tc1Door7lbl_sub,this->database->DR1_2CT_DCU7GreenOutputFeedback_B1);
    this->setDOORsubStatus(this->ui->Tc1Door8lbl_sub,this->database->DR1_2CT_DCU8GreenOutputFeedback_B1);

    //mp1
    DOORstatus<<database->DR3_4CT_DCU1Isolate_B1<<database->DR3_4CT_DCU1Fault_U8<<database->DR3_4CT_DCU1EmUnlock_B1
            <<database->DR3_4CT_DCU1ObstacleDetcted_B1<<database->DR3_4CT_DCU1TotallyOpen_B1<<database->DR3_4CT_DCU1TotallyClose_B1;
    setDOORStatus(this->ui->Mp1Door1lbl,DOORstatus);
    DOORstatus.clear();

    DOORstatus<<database->DR3_4CT_DCU2Isolate_B1<<database->DR3_4CT_DCU2Fault_U8<<database->DR3_4CT_DCU2EmUnlock_B1
            <<database->DR3_4CT_DCU2ObstacleDetcted_B1<<database->DR3_4CT_DCU2TotallyOpen_B1<<database->DR3_4CT_DCU2TotallyClose_B1;
    setDOORStatus(this->ui->Mp1Door2lbl,DOORstatus);
    DOORstatus.clear();

    DOORstatus<<database->DR3_4CT_DCU3Isolate_B1<<database->DR3_4CT_DCU3Fault_U8<<database->DR3_4CT_DCU3EmUnlock_B1
            <<database->DR3_4CT_DCU3ObstacleDetcted_B1<<database->DR3_4CT_DCU3TotallyOpen_B1<<database->DR3_4CT_DCU3TotallyClose_B1;
    setDOORStatus(this->ui->Mp1Door3lbl,DOORstatus);
    DOORstatus.clear();

    DOORstatus<<database->DR3_4CT_DCU4Isolate_B1<<database->DR3_4CT_DCU4Fault_U8<<database->DR3_4CT_DCU4EmUnlock_B1
            <<database->DR3_4CT_DCU4ObstacleDetcted_B1<<database->DR3_4CT_DCU4TotallyOpen_B1<<database->DR3_4CT_DCU4TotallyClose_B1;
    setDOORStatus(this->ui->Mp1Door4lbl,DOORstatus);
    DOORstatus.clear();

    DOORstatus<<database->DR3_4CT_DCU5Isolate_B1<<database->DR3_4CT_DCU5Fault_U8<<database->DR3_4CT_DCU5EmUnlock_B1
            <<database->DR3_4CT_DCU5ObstacleDetcted_B1<<database->DR3_4CT_DCU5TotallyOpen_B1<<database->DR3_4CT_DCU5TotallyClose_B1;
    setDOORStatus(this->ui->Mp1Door5lbl,DOORstatus);
    DOORstatus.clear();

    DOORstatus<<database->DR3_4CT_DCU6Isolate_B1<<database->DR3_4CT_DCU6Fault_U8<<database->DR3_4CT_DCU6EmUnlock_B1
            <<database->DR3_4CT_DCU6ObstacleDetcted_B1<<database->DR3_4CT_DCU6TotallyOpen_B1<<database->DR3_4CT_DCU6TotallyClose_B1;
    setDOORStatus(this->ui->Mp1Door6lbl,DOORstatus);
    DOORstatus.clear();

    DOORstatus<<database->DR3_4CT_DCU7Isolate_B1<<database->DR3_4CT_DCU7Fault_U8<<database->DR3_4CT_DCU7EmUnlock_B1
            <<database->DR3_4CT_DCU7ObstacleDetcted_B1<<database->DR3_4CT_DCU7TotallyOpen_B1<<database->DR3_4CT_DCU7TotallyClose_B1;
    setDOORStatus(this->ui->Mp1Door7lbl,DOORstatus);
    DOORstatus.clear();

    DOORstatus<<database->DR3_4CT_DCU8Isolate_B1<<database->DR3_4CT_DCU8Fault_U8<<database->DR3_4CT_DCU8EmUnlock_B1
            <<database->DR3_4CT_DCU8ObstacleDetcted_B1<<database->DR3_4CT_DCU8TotallyOpen_B1<<database->DR3_4CT_DCU8TotallyClose_B1;
    setDOORStatus(this->ui->Mp1Door8lbl,DOORstatus);
    DOORstatus.clear();

    this->setDOORsubStatus(this->ui->Mp1Door1lbl_sub,this->database->DR3_4CT_DCU1GreenOutputFeedback_B1);
    this->setDOORsubStatus(this->ui->Mp1Door2lbl_sub,this->database->DR3_4CT_DCU2GreenOutputFeedback_B1);
    this->setDOORsubStatus(this->ui->Mp1Door3lbl_sub,this->database->DR3_4CT_DCU3GreenOutputFeedback_B1);
    this->setDOORsubStatus(this->ui->Mp1Door4lbl_sub,this->database->DR3_4CT_DCU4GreenOutputFeedback_B1);
    this->setDOORsubStatus(this->ui->Mp1Door5lbl_sub,this->database->DR3_4CT_DCU5GreenOutputFeedback_B1);
    this->setDOORsubStatus(this->ui->Mp1Door6lbl_sub,this->database->DR3_4CT_DCU6GreenOutputFeedback_B1);
    this->setDOORsubStatus(this->ui->Mp1Door7lbl_sub,this->database->DR3_4CT_DCU7GreenOutputFeedback_B1);
    this->setDOORsubStatus(this->ui->Mp1Door8lbl_sub,this->database->DR3_4CT_DCU8GreenOutputFeedback_B1);
    //m1
    DOORstatus<<database->DR5_6CT_DCU1Isolate_B1<<database->DR5_6CT_DCU1Fault_U8<<database->DR5_6CT_DCU1EmUnlock_B1
            <<database->DR5_6CT_DCU1ObstacleDetcted_B1<<database->DR5_6CT_DCU1TotallyOpen_B1<<database->DR5_6CT_DCU1TotallyClose_B1;
    setDOORStatus(this->ui->M1Door1lbl,DOORstatus);
    DOORstatus.clear();

    DOORstatus<<database->DR5_6CT_DCU2Isolate_B1<<database->DR5_6CT_DCU2Fault_U8<<database->DR5_6CT_DCU2EmUnlock_B1
            <<database->DR5_6CT_DCU2ObstacleDetcted_B1<<database->DR5_6CT_DCU2TotallyOpen_B1<<database->DR5_6CT_DCU2TotallyClose_B1;
    setDOORStatus(this->ui->M1Door2lbl,DOORstatus);
    DOORstatus.clear();

    DOORstatus<<database->DR5_6CT_DCU3Isolate_B1<<database->DR5_6CT_DCU3Fault_U8<<database->DR5_6CT_DCU3EmUnlock_B1
            <<database->DR5_6CT_DCU3ObstacleDetcted_B1<<database->DR5_6CT_DCU3TotallyOpen_B1<<database->DR5_6CT_DCU3TotallyClose_B1;
    setDOORStatus(this->ui->M1Door3lbl,DOORstatus);
    DOORstatus.clear();

    DOORstatus<<database->DR5_6CT_DCU4Isolate_B1<<database->DR5_6CT_DCU4Fault_U8<<database->DR5_6CT_DCU4EmUnlock_B1
            <<database->DR5_6CT_DCU4ObstacleDetcted_B1<<database->DR5_6CT_DCU4TotallyOpen_B1<<database->DR5_6CT_DCU4TotallyClose_B1;
    setDOORStatus(this->ui->M1Door4lbl,DOORstatus);
    DOORstatus.clear();

    DOORstatus<<database->DR5_6CT_DCU5Isolate_B1<<database->DR5_6CT_DCU5Fault_U8<<database->DR5_6CT_DCU5EmUnlock_B1
            <<database->DR5_6CT_DCU5ObstacleDetcted_B1<<database->DR5_6CT_DCU5TotallyOpen_B1<<database->DR5_6CT_DCU5TotallyClose_B1;
    setDOORStatus(this->ui->M1Door5lbl,DOORstatus);
    DOORstatus.clear();

    DOORstatus<<database->DR5_6CT_DCU6Isolate_B1<<database->DR5_6CT_DCU6Fault_U8<<database->DR5_6CT_DCU6EmUnlock_B1
            <<database->DR5_6CT_DCU6ObstacleDetcted_B1<<database->DR5_6CT_DCU6TotallyOpen_B1<<database->DR5_6CT_DCU6TotallyClose_B1;
    setDOORStatus(this->ui->M1Door6lbl,DOORstatus);
    DOORstatus.clear();

    DOORstatus<<database->DR5_6CT_DCU7Isolate_B1<<database->DR5_6CT_DCU7Fault_U8<<database->DR5_6CT_DCU7EmUnlock_B1
            <<database->DR5_6CT_DCU7ObstacleDetcted_B1<<database->DR5_6CT_DCU7TotallyOpen_B1<<database->DR5_6CT_DCU7TotallyClose_B1;
    setDOORStatus(this->ui->M1Door7lbl,DOORstatus);
    DOORstatus.clear();

    DOORstatus<<database->DR5_6CT_DCU8Isolate_B1<<database->DR5_6CT_DCU8Fault_U8<<database->DR5_6CT_DCU8EmUnlock_B1
            <<database->DR5_6CT_DCU8ObstacleDetcted_B1<<database->DR5_6CT_DCU8TotallyOpen_B1<<database->DR5_6CT_DCU8TotallyClose_B1;
    setDOORStatus(this->ui->M1Door8lbl,DOORstatus);
    DOORstatus.clear();
    this->setDOORsubStatus(this->ui->M1Door1lbl_sub,this->database->DR5_6CT_DCU1GreenOutputFeedback_B1);
    this->setDOORsubStatus(this->ui->M1Door2lbl_sub,this->database->DR5_6CT_DCU2GreenOutputFeedback_B1);
    this->setDOORsubStatus(this->ui->M1Door3lbl_sub,this->database->DR5_6CT_DCU3GreenOutputFeedback_B1);
    this->setDOORsubStatus(this->ui->M1Door4lbl_sub,this->database->DR5_6CT_DCU4GreenOutputFeedback_B1);
    this->setDOORsubStatus(this->ui->M1Door5lbl_sub,this->database->DR5_6CT_DCU5GreenOutputFeedback_B1);
    this->setDOORsubStatus(this->ui->M1Door6lbl_sub,this->database->DR5_6CT_DCU6GreenOutputFeedback_B1);
    this->setDOORsubStatus(this->ui->M1Door7lbl_sub,this->database->DR5_6CT_DCU7GreenOutputFeedback_B1);
    this->setDOORsubStatus(this->ui->M1Door8lbl_sub,this->database->DR5_6CT_DCU8GreenOutputFeedback_B1);
    //m2
    DOORstatus<<database->DR7_8CT_DCU1Isolate_B1<<database->DR7_8CT_DCU1Fault_U8<<database->DR7_8CT_DCU1EmUnlock_B1
            <<database->DR7_8CT_DCU1ObstacleDetcted_B1<<database->DR7_8CT_DCU1TotallyOpen_B1<<database->DR7_8CT_DCU1TotallyClose_B1;
    setDOORStatus(this->ui->M2Door1lbl,DOORstatus);
    DOORstatus.clear();

    DOORstatus<<database->DR7_8CT_DCU2Isolate_B1<<database->DR7_8CT_DCU2Fault_U8<<database->DR7_8CT_DCU2EmUnlock_B1
            <<database->DR7_8CT_DCU2ObstacleDetcted_B1<<database->DR7_8CT_DCU2TotallyOpen_B1<<database->DR7_8CT_DCU2TotallyClose_B1;
    setDOORStatus(this->ui->M2Door2lbl,DOORstatus);
    DOORstatus.clear();

    DOORstatus<<database->DR7_8CT_DCU3Isolate_B1<<database->DR7_8CT_DCU3Fault_U8<<database->DR7_8CT_DCU3EmUnlock_B1
            <<database->DR7_8CT_DCU3ObstacleDetcted_B1<<database->DR7_8CT_DCU3TotallyOpen_B1<<database->DR7_8CT_DCU3TotallyClose_B1;
    setDOORStatus(this->ui->M2Door3lbl,DOORstatus);
    DOORstatus.clear();

    DOORstatus<<database->DR7_8CT_DCU4Isolate_B1<<database->DR7_8CT_DCU4Fault_U8<<database->DR7_8CT_DCU4EmUnlock_B1
            <<database->DR7_8CT_DCU4ObstacleDetcted_B1<<database->DR7_8CT_DCU4TotallyOpen_B1<<database->DR7_8CT_DCU4TotallyClose_B1;
    setDOORStatus(this->ui->M2Door4lbl,DOORstatus);
    DOORstatus.clear();

    DOORstatus<<database->DR7_8CT_DCU5Isolate_B1<<database->DR7_8CT_DCU5Fault_U8<<database->DR7_8CT_DCU5EmUnlock_B1
            <<database->DR7_8CT_DCU5ObstacleDetcted_B1<<database->DR7_8CT_DCU5TotallyOpen_B1<<database->DR7_8CT_DCU5TotallyClose_B1;
    setDOORStatus(this->ui->M2Door5lbl,DOORstatus);
    DOORstatus.clear();

    DOORstatus<<database->DR7_8CT_DCU6Isolate_B1<<database->DR7_8CT_DCU6Fault_U8<<database->DR7_8CT_DCU6EmUnlock_B1
            <<database->DR7_8CT_DCU6ObstacleDetcted_B1<<database->DR7_8CT_DCU6TotallyOpen_B1<<database->DR7_8CT_DCU6TotallyClose_B1;
    setDOORStatus(this->ui->M2Door6lbl,DOORstatus);
    DOORstatus.clear();

    DOORstatus<<database->DR7_8CT_DCU7Isolate_B1<<database->DR7_8CT_DCU7Fault_U8<<database->DR7_8CT_DCU7EmUnlock_B1
            <<database->DR7_8CT_DCU7ObstacleDetcted_B1<<database->DR7_8CT_DCU7TotallyOpen_B1<<database->DR7_8CT_DCU7TotallyClose_B1;
    setDOORStatus(this->ui->M2Door7lbl,DOORstatus);
    DOORstatus.clear();

    DOORstatus<<database->DR7_8CT_DCU8Isolate_B1<<database->DR7_8CT_DCU8Fault_U8<<database->DR7_8CT_DCU8EmUnlock_B1
            <<database->DR7_8CT_DCU8ObstacleDetcted_B1<<database->DR7_8CT_DCU8TotallyOpen_B1<<database->DR7_8CT_DCU8TotallyClose_B1;
    setDOORStatus(this->ui->M2Door8lbl,DOORstatus);
    DOORstatus.clear();
    this->setDOORsubStatus(this->ui->M2Door1lbl_sub,this->database->DR7_8CT_DCU1GreenOutputFeedback_B1);
    this->setDOORsubStatus(this->ui->M2Door2lbl_sub,this->database->DR7_8CT_DCU2GreenOutputFeedback_B1);
    this->setDOORsubStatus(this->ui->M2Door3lbl_sub,this->database->DR7_8CT_DCU3GreenOutputFeedback_B1);
    this->setDOORsubStatus(this->ui->M2Door4lbl_sub,this->database->DR7_8CT_DCU4GreenOutputFeedback_B1);
    this->setDOORsubStatus(this->ui->M2Door5lbl_sub,this->database->DR7_8CT_DCU5GreenOutputFeedback_B1);
    this->setDOORsubStatus(this->ui->M2Door6lbl_sub,this->database->DR7_8CT_DCU6GreenOutputFeedback_B1);
    this->setDOORsubStatus(this->ui->M2Door7lbl_sub,this->database->DR7_8CT_DCU7GreenOutputFeedback_B1);
    this->setDOORsubStatus(this->ui->M2Door8lbl_sub,this->database->DR7_8CT_DCU8GreenOutputFeedback_B1);
    //mp2
    DOORstatus<<database->DR9_10CT_DCU1Isolate_B1<<database->DR9_10CT_DCU1Fault_U8<<database->DR9_10CT_DCU1EmUnlock_B1
            <<database->DR9_10CT_DCU1ObstacleDetcted_B1<<database->DR9_10CT_DCU1TotallyOpen_B1<<database->DR9_10CT_DCU1TotallyClose_B1;
    setDOORStatus(this->ui->Mp2Door1lbl,DOORstatus);
    DOORstatus.clear();

    DOORstatus<<database->DR9_10CT_DCU2Isolate_B1<<database->DR9_10CT_DCU2Fault_U8<<database->DR9_10CT_DCU2EmUnlock_B1
            <<database->DR9_10CT_DCU2ObstacleDetcted_B1<<database->DR9_10CT_DCU2TotallyOpen_B1<<database->DR9_10CT_DCU2TotallyClose_B1;
    setDOORStatus(this->ui->Mp2Door2lbl,DOORstatus);
    DOORstatus.clear();

    DOORstatus<<database->DR9_10CT_DCU3Isolate_B1<<database->DR9_10CT_DCU3Fault_U8<<database->DR9_10CT_DCU3EmUnlock_B1
            <<database->DR9_10CT_DCU3ObstacleDetcted_B1<<database->DR9_10CT_DCU3TotallyOpen_B1<<database->DR9_10CT_DCU3TotallyClose_B1;
    setDOORStatus(this->ui->Mp2Door3lbl,DOORstatus);
    DOORstatus.clear();

    DOORstatus<<database->DR9_10CT_DCU4Isolate_B1<<database->DR9_10CT_DCU4Fault_U8<<database->DR9_10CT_DCU4EmUnlock_B1
            <<database->DR9_10CT_DCU4ObstacleDetcted_B1<<database->DR9_10CT_DCU4TotallyOpen_B1<<database->DR9_10CT_DCU4TotallyClose_B1;
    setDOORStatus(this->ui->Mp2Door4lbl,DOORstatus);
    DOORstatus.clear();

    DOORstatus<<database->DR9_10CT_DCU5Isolate_B1<<database->DR9_10CT_DCU5Fault_U8<<database->DR9_10CT_DCU5EmUnlock_B1
            <<database->DR9_10CT_DCU5ObstacleDetcted_B1<<database->DR9_10CT_DCU5TotallyOpen_B1<<database->DR9_10CT_DCU5TotallyClose_B1;
    setDOORStatus(this->ui->Mp2Door5lbl,DOORstatus);
    DOORstatus.clear();

    DOORstatus<<database->DR9_10CT_DCU6Isolate_B1<<database->DR9_10CT_DCU6Fault_U8<<database->DR9_10CT_DCU6EmUnlock_B1
            <<database->DR9_10CT_DCU6ObstacleDetcted_B1<<database->DR9_10CT_DCU6TotallyOpen_B1<<database->DR9_10CT_DCU6TotallyClose_B1;
    setDOORStatus(this->ui->Mp2Door6lbl,DOORstatus);
    DOORstatus.clear();

    DOORstatus<<database->DR9_10CT_DCU7Isolate_B1<<database->DR9_10CT_DCU7Fault_U8<<database->DR9_10CT_DCU7EmUnlock_B1
            <<database->DR9_10CT_DCU7ObstacleDetcted_B1<<database->DR9_10CT_DCU7TotallyOpen_B1<<database->DR9_10CT_DCU7TotallyClose_B1;
    setDOORStatus(this->ui->Mp2Door7lbl,DOORstatus);
    DOORstatus.clear();

    DOORstatus<<database->DR9_10CT_DCU8Isolate_B1<<database->DR9_10CT_DCU8Fault_U8<<database->DR9_10CT_DCU8EmUnlock_B1
            <<database->DR9_10CT_DCU8ObstacleDetcted_B1<<database->DR9_10CT_DCU8TotallyOpen_B1<<database->DR9_10CT_DCU8TotallyClose_B1;
    setDOORStatus(this->ui->Mp2Door8lbl,DOORstatus);
    DOORstatus.clear();
    this->setDOORsubStatus(this->ui->Mp2Door1lbl_sub,this->database->DR9_10CT_DCU1GreenOutputFeedback_B1);
    this->setDOORsubStatus(this->ui->Mp2Door2lbl_sub,this->database->DR9_10CT_DCU2GreenOutputFeedback_B1);
    this->setDOORsubStatus(this->ui->Mp2Door3lbl_sub,this->database->DR9_10CT_DCU3GreenOutputFeedback_B1);
    this->setDOORsubStatus(this->ui->Mp2Door4lbl_sub,this->database->DR9_10CT_DCU4GreenOutputFeedback_B1);
    this->setDOORsubStatus(this->ui->Mp2Door5lbl_sub,this->database->DR9_10CT_DCU5GreenOutputFeedback_B1);
    this->setDOORsubStatus(this->ui->Mp2Door6lbl_sub,this->database->DR9_10CT_DCU6GreenOutputFeedback_B1);
    this->setDOORsubStatus(this->ui->Mp2Door7lbl_sub,this->database->DR9_10CT_DCU7GreenOutputFeedback_B1);
    this->setDOORsubStatus(this->ui->Mp2Door8lbl_sub,this->database->DR9_10CT_DCU8GreenOutputFeedback_B1);
    //Tc2
    DOORstatus<<database->DR11_12CT_DCU1Isolate_B1<<database->DR11_12CT_DCU1Fault_U8<<database->DR11_12CT_DCU1EmUnlock_B1
            <<database->DR11_12CT_DCU1ObstacleDetcted_B1<<database->DR11_12CT_DCU1TotallyOpen_B1<<database->DR11_12CT_DCU1TotallyClose_B1;
    setDOORStatus(this->ui->Tc2Door1lbl,DOORstatus);
    DOORstatus.clear();

    DOORstatus<<database->DR11_12CT_DCU2Isolate_B1<<database->DR11_12CT_DCU2Fault_U8<<database->DR11_12CT_DCU2EmUnlock_B1
            <<database->DR11_12CT_DCU2ObstacleDetcted_B1<<database->DR11_12CT_DCU2TotallyOpen_B1<<database->DR11_12CT_DCU2TotallyClose_B1;
    setDOORStatus(this->ui->Tc2Door2lbl,DOORstatus);
    DOORstatus.clear();

    DOORstatus<<database->DR11_12CT_DCU3Isolate_B1<<database->DR11_12CT_DCU3Fault_U8<<database->DR11_12CT_DCU3EmUnlock_B1
            <<database->DR11_12CT_DCU3ObstacleDetcted_B1<<database->DR11_12CT_DCU3TotallyOpen_B1<<database->DR11_12CT_DCU3TotallyClose_B1;
    setDOORStatus(this->ui->Tc2Door3lbl,DOORstatus);
    DOORstatus.clear();

    DOORstatus<<database->DR11_12CT_DCU4Isolate_B1<<database->DR11_12CT_DCU4Fault_U8<<database->DR11_12CT_DCU4EmUnlock_B1
            <<database->DR11_12CT_DCU4ObstacleDetcted_B1<<database->DR11_12CT_DCU4TotallyOpen_B1<<database->DR11_12CT_DCU4TotallyClose_B1;
    setDOORStatus(this->ui->Tc2Door4lbl,DOORstatus);
    DOORstatus.clear();

    DOORstatus<<database->DR11_12CT_DCU5Isolate_B1<<database->DR11_12CT_DCU5Fault_U8<<database->DR11_12CT_DCU5EmUnlock_B1
            <<database->DR11_12CT_DCU5ObstacleDetcted_B1<<database->DR11_12CT_DCU5TotallyOpen_B1<<database->DR11_12CT_DCU5TotallyClose_B1;
    setDOORStatus(this->ui->Tc2Door5lbl,DOORstatus);
    DOORstatus.clear();

    DOORstatus<<database->DR11_12CT_DCU6Isolate_B1<<database->DR11_12CT_DCU6Fault_U8<<database->DR11_12CT_DCU6EmUnlock_B1
            <<database->DR11_12CT_DCU6ObstacleDetcted_B1<<database->DR11_12CT_DCU6TotallyOpen_B1<<database->DR11_12CT_DCU6TotallyClose_B1;
    setDOORStatus(this->ui->Tc2Door6lbl,DOORstatus);
    DOORstatus.clear();

    DOORstatus<<database->DR11_12CT_DCU7Isolate_B1<<database->DR11_12CT_DCU7Fault_U8<<database->DR11_12CT_DCU7EmUnlock_B1
            <<database->DR11_12CT_DCU7ObstacleDetcted_B1<<database->DR11_12CT_DCU7TotallyOpen_B1<<database->DR11_12CT_DCU7TotallyClose_B1;
    setDOORStatus(this->ui->Tc2Door7lbl,DOORstatus);
    DOORstatus.clear();

    DOORstatus<<database->DR11_12CT_DCU8Isolate_B1<<database->DR11_12CT_DCU8Fault_U8<<database->DR11_12CT_DCU8EmUnlock_B1
            <<database->DR11_12CT_DCU8ObstacleDetcted_B1<<database->DR11_12CT_DCU8TotallyOpen_B1<<database->DR11_12CT_DCU8TotallyClose_B1;
    setDOORStatus(this->ui->Tc2Door8lbl,DOORstatus);
    DOORstatus.clear();
    this->setDOORsubStatus(this->ui->Tc2Door1lbl_sub,this->database->DR11_12CT_DCU1GreenOutputFeedback_B1);
    this->setDOORsubStatus(this->ui->Tc2Door2lbl_sub,this->database->DR11_12CT_DCU2GreenOutputFeedback_B1);
    this->setDOORsubStatus(this->ui->Tc2Door3lbl_sub,this->database->DR11_12CT_DCU3GreenOutputFeedback_B1);
    this->setDOORsubStatus(this->ui->Tc2Door4lbl_sub,this->database->DR11_12CT_DCU4GreenOutputFeedback_B1);
    this->setDOORsubStatus(this->ui->Tc2Door5lbl_sub,this->database->DR11_12CT_DCU5GreenOutputFeedback_B1);
    this->setDOORsubStatus(this->ui->Tc2Door6lbl_sub,this->database->DR11_12CT_DCU6GreenOutputFeedback_B1);
    this->setDOORsubStatus(this->ui->Tc2Door7lbl_sub,this->database->DR11_12CT_DCU7GreenOutputFeedback_B1);
    this->setDOORsubStatus(this->ui->Tc2Door8lbl_sub,this->database->DR11_12CT_DCU8GreenOutputFeedback_B1);
    //方向
    if(this->database->CTHM_Forward_B1)
    {
        this->ui->Tc1Directionlbl->show();
        this->ui->Tc2Directionlbl->hide();
    }else if(this->database->CTHM_Backward_B1)
    {
        this->ui->Tc2Directionlbl->show();
        this->ui->Tc1Directionlbl->hide();
    }else
    {
        this->ui->Tc2Directionlbl->hide();
        this->ui->Tc1Directionlbl->hide();
    }

    //车号
    QString tmp;
    tmp.sprintf("%02d",this->database->CTHM_TrainNum_U8);
    this->ui->Tc1TrainCodelbl->setText("09"+tmp+"1");
    this->ui->Mp1TrainCodelbl->setText("09"+tmp+"2");
    this->ui->M1TrainCodelbl->setText("09"+tmp+"3");
    this->ui->M2TrainCodelbl->setText("09"+tmp+"4");
    this->ui->Mp2TrainCodelbl->setText("09"+tmp+"5");
    this->ui->Tc2TrainCodelbl->setText("09"+tmp+"6");

    //司机室门 相对的左右
    if(this->database->DICT_TC1DI4CH13CabLtDoorStatus_B1)
    {
        this->ui->Tc1CabLeftDoorlbl->setStyleSheet(DOORCLOSE);
    }else
    {
        this->ui->Tc1CabLeftDoorlbl->setStyleSheet(DOOROPEN);
    }
    if(this->database->DICT_TC1DI4CH14CabRtDoorStatus_B1)
    {
        this->ui->Tc1CabRightDoorlbl->setStyleSheet(DOORCLOSE);
    }else
    {
        this->ui->Tc1CabRightDoorlbl->setStyleSheet(DOOROPEN);
    }

    if(this->database->DICT_TC2DI4CH13CabLtDoorStatus_B1)
    {
        this->ui->Tc2CabLeftDoorlbl->setStyleSheet(DOORCLOSE);
    }else
    {
        this->ui->Tc2CabLeftDoorlbl->setStyleSheet(DOOROPEN);
    }
    if(this->database->DICT_TC2DI4CH14CabRtDoorStatus_B1)
    {
        this->ui->Tc2CabRightDoorlbl->setStyleSheet(DOORCLOSE);
    }else
    {
        this->ui->Tc2CabRightDoorlbl->setStyleSheet(DOOROPEN);
    }
    if(this->database->DICT_TC1DI4CH17BarrielDoorStutas_B1)
    {
        this->ui->Tc1Cabdoorlbl->setStyleSheet(DOORCLOSE);
    }else
    {
        this->ui->Tc1Cabdoorlbl->setStyleSheet(DOOROPEN);
    }
    if(this->database->DICT_TC2DI4CH17BarrielDoorStutas_B1)
    {
        this->ui->Tc2Cabdoorlbl->setStyleSheet(DOORCLOSE);
    }else
    {
        this->ui->Tc2Cabdoorlbl->setStyleSheet(DOOROPEN);
    }
    //钥匙激活
    if(this->database->CTHM_TC1Active_B1)
    {
        this->ui->Tc1Cablbl->setStyleSheet(KEYACTIVE);
    }else
    {
        this->ui->Tc1Cablbl->setStyleSheet(KEYNOACTIVE);
    }

    if(this->database->CTHM_TC2Active_B1)
    {
        this->ui->Tc2Cablbl->setStyleSheet(KEYACTIVE);
    }else
    {
        this->ui->Tc2Cablbl->setStyleSheet(KEYNOACTIVE);
    }

    //新风温度
    this->ui->OutTempTC1lbl->setText(QString::number(this->database->AC1CT_FreshAirTemp_U8-30)+"℃");
    this->ui->OutTempMP1lbl->setText(QString::number(this->database->AC2CT_FreshAirTemp_U8-30)+"℃");
    this->ui->OutTempM1lbl->setText(QString::number(this->database->AC3CT_FreshAirTemp_U8-30)+"℃");
    this->ui->OutTempM2lbl->setText(QString::number(this->database->AC4CT_FreshAirTemp_U8-30)+"℃");
    this->ui->OutTempMP2lbl->setText(QString::number(this->database->AC5CT_FreshAirTemp_U8-30)+"℃");
    this->ui->OutTempTC2lbl->setText(QString::number(this->database->AC6CT_FreshAirTemp_U8-30)+"℃");

    //车间电源
    if(this->database->CTHM_WorkshopPowerSupply_B1)
    {
        this->ui->Mp1supplylbl->show();
        //this->ui->Mp2supplylbl->show();
    }else
    {
        this->ui->Mp1supplylbl->hide();
        //this->ui->Mp2supplylbl->hide();
    }
    //火灾
    bool Firestatus;
    Firestatus = this->database->WSCT_Car1DFire_B1&&this->database->WSCT_Car1FFire_B1&&this->database->WSCT_Car1HFire_B1&&
                 this->database->WSCT_Car1RFire_B1&&this->database->WSCT_Car1CabFire_B1&&
                 this->database->WSCT_Car1Zone1HeavyFire_B1&&this->database->WSCT_Car1Zone2HeavyFire_B1&&
                 this->database->WSCT_Car1Zone1LightFire_B1&&this->database->WSCT_Car1Zone2LightFire_B1;
    setFireStatus(this->ui->Tc1FireAlarmlbl,Firestatus,(bool)this->database->WSCT_TC1Fault);
    Firestatus = false;

    Firestatus = this->database->WSCT_Car6DFire_B1&&this->database->WSCT_Car6FFire_B1&&this->database->WSCT_Car6HFire_B1&&
                 this->database->WSCT_Car6RFire_B1&&this->database->WSCT_Car6CabFire_B1&&
                 this->database->WSCT_Car6Zone1HeavyFire_B1&&this->database->WSCT_Car6Zone2HeavyFire_B1&&
                 this->database->WSCT_Car6Zone1LightFire_B1&&this->database->WSCT_Car6Zone2LightFire_B1;
    setFireStatus(this->ui->Tc2FireAlarmlbl,Firestatus,(bool)this->database->WSCT_TC2Fault);
    Firestatus = false;

    Firestatus = this->database->WSCT_Car2FFire_B1&&this->database->WSCT_Car2RFire_B1&&
                 this->database->WSCT_Car2Zone1HeavyFire_B1&&this->database->WSCT_Car2Zone2HeavyFire_B1&&
                 this->database->WSCT_Car2Zone1LightFire_B1&&this->database->WSCT_Car2Zone2LightFire_B1;
    setFireStatus(this->ui->Mp1FireAlarmlbl,Firestatus,(bool)this->database->WSCT_MP1Fault);
    Firestatus = false;

    Firestatus = this->database->WSCT_Car5FFire_B1&&this->database->WSCT_Car5RFire_B1&&
                 this->database->WSCT_Car5Zone1HeavyFire_B1&&this->database->WSCT_Car5Zone2HeavyFire_B1&&
                 this->database->WSCT_Car5Zone1LightFire_B1&&this->database->WSCT_Car5Zone2LightFire_B1;
    setFireStatus(this->ui->Mp2FireAlarmlbl,Firestatus,(bool)this->database->WSCT_MP2Fault);
    Firestatus = false;

    Firestatus = this->database->WSCT_Car3FFire_B1&&this->database->WSCT_Car3RFire_B1&&
                 this->database->WSCT_Car3Zone1HeavyFire_B1&&this->database->WSCT_Car3Zone2HeavyFire_B1&&
                 this->database->WSCT_Car3Zone1LightFire_B1&&this->database->WSCT_Car3Zone2LightFire_B1;
    setFireStatus(this->ui->M1FireAlarmlbl,Firestatus,(bool)this->database->WSCT_M1Fault);
    Firestatus = false;

    Firestatus = this->database->WSCT_Car4FFire_B1&&this->database->WSCT_Car4RFire_B1&&
                 this->database->WSCT_Car4Zone1HeavyFire_B1&&this->database->WSCT_Car4Zone2HeavyFire_B1&&
                 this->database->WSCT_Car4Zone1LightFire_B1&&this->database->WSCT_Car4Zone2LightFire_B1;
    setFireStatus(this->ui->M2FireAlarmlbl,Firestatus,(bool)this->database->WSCT_M2Fault);
    Firestatus = false;
}

void VehicleRunStatePage::setPBStatus(QLabel* lbl,QList<bool> status)
{
    // cutoff >> online >> release
    if(status.at(0))
    {
        lbl->setStyleSheet(PBBYPASS);
    }else if(status.at(1))
    {
        lbl->setStyleSheet(PBUNKNOWN);
    }else if(status.at(2))
    {
        lbl->setStyleSheet(PBRELEASE);
    }else
    {
        lbl->setStyleSheet(PBAPPLY);
    }
}
void VehicleRunStatePage::setBStatus(QLabel* lbl,QList<bool> status)
{
    // cutoff >> online >> fault >> apply >> release
    if(status.at(0))
    {
        lbl->setStyleSheet(BBYPASS);
    }else if(status.at(1))
    {
        lbl->setStyleSheet(BUNKNOWN);
    }else if(status.at(2))
    {
        lbl->setStyleSheet(BFAULT);
    }else if(status.at(3))
    {
        lbl->setStyleSheet(BAPPLY);
    }else if(status.at(4))
    {
        lbl->setStyleSheet(BRELEASE);
    }else
    {
        lbl->setStyleSheet(BUNKNOWN);
    }
}
void VehicleRunStatePage::setMotorStatus(QLabel *lbl, bool isunknown, signed short int status)
{
    // unknown >> fault >> run >> stop
    if(!isunknown)
    {
        lbl->setStyleSheet(TCUUNKNOW);
    }else if(status >= 20 )
    {
        lbl->setStyleSheet(TCUFAULT);
    }else if(status == 9)
    {
        lbl->setStyleSheet(TCURUN);
    }else if(status >= 4 && status <= 12)
    {
        lbl->setStyleSheet(TCUSTOP);
    }else
    {
        lbl->setStyleSheet(TCUUNKNOW);
    }
}
void VehicleRunStatePage::setHSCBStatus(QLabel *lbl,bool isunknown,bool status)
{
    // unknown >> close >> open
    if(!isunknown)
    {
        lbl->setStyleSheet(HSCBUNKNOWN);
    }else if(status)
    {
        lbl->setStyleSheet(HSCBCLOSE);
    }else
    {
        lbl->setStyleSheet(HSCBOPEN);
    }
}

void VehicleRunStatePage::setACPStatus(QLabel* lbl,QList<bool> status)
{
    // unknown >> fault >> run>> stop
    if(!status.at(0))
    {
        lbl->setStyleSheet(ACPUNKNOWN);
    }else if(status.at(1))
    {
        lbl->setStyleSheet(ACPFAULT);
    }else if(status.at(2))
    {
        lbl->setStyleSheet(ACPRUN);
    }else
    {
        lbl->setStyleSheet(ACPSTOP);
    }
}
void VehicleRunStatePage::setSIVStatus(QLabel *lbl, bool isunknown, signed short int status)
{
    // unknown >> fault >> run >> stop
    if(!isunknown)
    {
        lbl->setStyleSheet(SIVUNKONWN);
    }else if(status >= 20 )
    {
        lbl->setStyleSheet(SIVFAULT);
    }else if(status == 9)
    {
        lbl->setStyleSheet(SIVRUN);
    }else if(status >= 4 && status <= 12)
    {
        lbl->setStyleSheet(SIVSTOP);
    }else
    {
        lbl->setStyleSheet(SIVUNKONWN);
    }
}
void VehicleRunStatePage::setBCMStatus(QLabel* lbl,QList<bool> status)
{
    // unknow >> fault >> running >> stop
    if(!status.at(0))
    {
        lbl->setStyleSheet(DCDCUNKONWN);
    }else if(status.at(1))
    {
        lbl->setStyleSheet(DCDCFAULT);
    }else if(status.at(2))
    {
        lbl->setStyleSheet(DCDCRUN);
    }else
    {
        lbl->setStyleSheet(DCDCSTOP);
    }
}
void VehicleRunStatePage::setDOORStatus(QLabel* lbl,QList<bool> status)
{
    //  cutoff >>fault >> emlock >> fangjia >> open >> close >> unknown
    if(status.at(0))
    {
        lbl->setStyleSheet(DOORBYPASS);
    }else if(status.at(1))
    {
        lbl->setStyleSheet(DOORFAULT);
    }else if(status.at(2))
    {
        lbl->setStyleSheet(DOOREMLOCK);
    }else if(status.at(3))
    {
        lbl->setStyleSheet(DOORFANGJIA);
    }else if(status.at(4))
    {
        lbl->setStyleSheet(DOOROPEN);
    }else if(status.at(5))
    {
        lbl->setStyleSheet(DOORCLOSE);
    }else
    {
        lbl->setStyleSheet(DOORUNKNOW);
    }
}
void VehicleRunStatePage::setDOORsubStatus(QLabel* lbl,bool status)
{
    if(status)
    {
        lbl->setStyleSheet(LABELGREEN);
    }else
    {
        lbl->setStyleSheet(LABELYELLOW);

    }
}
void VehicleRunStatePage::setFireStatus(QLabel* lbl,bool status,bool fault)
{
    //online > fault>fire status>normal
    if(this->database->CTHM_WMS2On_B1 == false)
    {
        lbl->setStyleSheet(FIREOFFLINE);
    }
    else if(fault)
    {
        lbl->setStyleSheet(FIREFAULT);
    }else if(status)
    {
        lbl->setStyleSheet(FIREALARM);
    }else
    {
        lbl->setStyleSheet(FIRENOALARM);

    }

}
void VehicleRunStatePage::on_BuzzerBtn_pressed()
{
    if(this->database->HMiCT_PWDoorAlarmStop_B1)
    {
        this->database->HMiCT_PWDoorAlarmStop_B1 = false;
        this->ui->BuzzerBtn->setStyleSheet(RUNPAGEBUTTONUP);
    }else
    {
        this->database->HMiCT_PWDoorAlarmStop_B1 = true;
        this->ui->BuzzerBtn->setStyleSheet(RUNPAGEBUTTONDOWN);
    }
}
