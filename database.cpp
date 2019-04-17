#include "database.h"


Database::Database()
{
    //mydefaultpara = new MainGetDefaultPara();
    this->HMIPosition = MainGetDefaultPara::getInt("/Position/HMI");

    //init HMI-CCU

    HMiCT_SetFlagChecker_U8 = 0x55;
    HMiCT_Year_U8 = 0;
    HMiCT_Month_U8 = 0;
    HMiCT_Day_U8 = 0;
    HMiCT_Hour_U8 = 0;
    HMiCT_Minute_U8 = 0;
    HMiCT_Second_U8 = 0;
    HMiCT_TrainNum_U8 = 0;
    HMiCT_LineNum_U8 = 0;
    HMiCT_StationIDFirst_U8 = 0;
    HMiCT_StationIDLast_U8 = 0;
    HMiCT_SAVETime_B1 = false;
    HMiCT_SAVETrainNum_B1 = false;
    HMiCT_SAVELineNum_B1 = false;
    HMiCT_SAVEFirstStation_B1 = false;
    HMiCT_SAVELastStation_B1 = false;

    HMiCT_WheelDia1_U8 = 0;
    HMiCT_WheelDia2_U8 = 0;
    HMiCT_WheelDia3_U8 = 0;
    HMiCT_WheelDia4_U8 = 0;
    HMiCT_WheelDia5_U8 = 0;
    HMiCT_WheelDia6_U8 = 0;
    HMiCT_SAVEWheelDig1_B1 = false;
    HMiCT_SAVEWheelDig2_B1 = false;
    HMiCT_SAVEWheelDig3_B1 = false;
    HMiCT_SAVEWheelDig4_B1 = false;
    HMiCT_SAVEWheelDig5_B1 = false;
    HMiCT_SAVEWheelDig6_B1 = false;

    HMiCT_Mp1DCUFaultReset_B1 = false;
    HMiCT_M1DCUFaultReset_B1 = false;
    HMiCT_M2DCUFaultReset_B1 = false;
    HMiCT_Mp2DCUFaultReset_B1 = false;
    HMiCT_Mp1DynamicBrkCut_B1 = false;
    HMiCT_M1DynamicBrkCut_B1 = false;
    HMiCT_M2DynamicBrkCut_B1 = false;
    HMiCT_Mp2DynamicBrkCut_B1 = false;
    HMiCT_ACU1Cutoff_B1 = false;
    HMiCT_ACU2Cutoff_B1 = false;
    HMiCT_ACU3Cutoff_B1 = false;
    HMiCT_ACU4Cutoff_B1 = false;
    HMiCT_ACU1Reset_B1 = false;
    HMiCT_ACU2Reset_B1 = false;
    HMiCT_ACU3Reset_B1 = false;
    HMiCT_ACU4Reset_B1 = false;
    HMiCT_PWDoorAlarmStop_B1 = false;

    HMiCT_HVACFireMode_B1 = false;
    HMiCT_HVACPreOff_B1 = false;
    HMiCT_HVACEmgcyVenti_B1 = false;
    HMiCT_HVACVenti_B1 = false;
    HMiCT_HVACAutoCold_B1 = false;
    HMiCT_HVACAutoWarm_B1 = false;
    HMiCT_HVACMannualMode_B1 = false;
    HMiCT_HVACStop_B1 = false;
    HMiCT_HVACStart_B1 = false;
    HMiCT_Reduce2_B1 = false;
    HMiCT_Reduce1_B1 = false;
    HMiCT_Add1_B1 = false;
    HMiCT_Add2_B1 = false;
    HMiCT_UICMode_B1 = false;
    HMiCT_SAVEHVACMode1_B1 = false;
    HMiCT_SAVEHVACTemp1_B1 = false;
    HMiCT_SAVEHVACPosition_U8 = 7;
    HMiCT_SetTemp_U8 = 22;
    HMiCT_BCUSelfTestReq_B1 = false;
    HMiCT_RunStatSetFlag_B1 = false;
    HMiCT_RunStatSetType_U8 = 0;
    HMiCT_RunStatSetData_U32 = 0;
    HMiCT_ACDETestStopFlag_B1 = false;
    HMiCT_ACDETestStartFlag_B1 = false;

    HMiCT_HMISWVerH_U8 = 2;
    HMiCT_HMISWVerL_U8 = 60;

    for(int i =0; i< 12;i++)
    {
        HMiCT_PowerOFF_B1[i] = false;
        HMiCT_PowerON_B1[i] = false;
    }

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

//    DefaultLoadTC1=QString::number(31.151);
//    DefaultLoadMP1=QString::number(33.77);
//    DefaultLoadM1=QString::number(34.16);
//    DefaultLoadM2=QString::number(34.307);
//    DefaultLoadMP2=QString::number(34.31);
//    DefaultLoadTC2=QString::number(31.068);

//    DefaultFullLoadTC1=QString::number(17.4);
//    DefaultFullLoadMP1=QString::number(19.5);
//    DefaultFullLoadM1=QString::number(19.5);
//    DefaultFullLoadM2=QString::number(19.5);
//    DefaultFullLoadMP2=QString::number(19.5);
//    DefaultFullLoadTC2=QString::number(17.4);


}

void Database::copyPort(unsigned short int sink, unsigned short int source)
{
    for (int i = 0; i < 32; i ++)
    {
        this->crrcMvb->setUnsignedChar(sink, i, this->crrcMvb->getUnsignedChar(source, i));
    }
}
bool Database::CheckLifesignal(unsigned char lifeSignal)
{
    static unsigned short int temp = 0;
    static int counter = 0;

    if (temp == lifeSignal)
    {
        counter --;
    }
    else if (temp != lifeSignal)
    {
        counter ++;
    }

    temp = lifeSignal;

    if (counter >= 10)
    {
        counter = 10;

        return true;
    }
    else if (counter <= 0)
    {
        counter = 0;

        return false;
    }
    else
    {
        return false;
    }

}

void Database::updateDatabse(CrrcMvb* crrcMvb)
{
    this->crrcMvb = crrcMvb;
    //0xfff null port
    for (int i = 0; i < 32; i ++)
    {
        this->crrcMvb->setUnsignedChar(0xfff, i, 0);
    }



    //0x0FF CCU-ALL
    this->PUBPORT_CCULfSign_U8 = crrcMvb->getUnsignedChar(0x0FF,0);
    this->PUBPORT_SettingTimeEnable_B1 = crrcMvb->getBool(0x0FF,1,0);
    this->PUBPORT_SysTimeYear_U8 = crrcMvb->getUnsignedChar(0x0FF,2);
    this->PUBPORT_SysTimeMonth_U8 = crrcMvb->getUnsignedChar(0x0FF,3);
    this->PUBPORT_SysTimeDay_U8 = crrcMvb->getUnsignedChar(0x0FF,4);
    this->PUBPORT_SysTimeHour_U8 = crrcMvb->getUnsignedChar(0x0FF,5);
    this->PUBPORT_SysTimeMinute_U8 = crrcMvb->getUnsignedChar(0x0FF,6);
    this->PUBPORT_SysTimeSecond_U8 = crrcMvb->getUnsignedChar(0x0FF,7);

    this->PUBPORT_CCUOnline_B1 = this->CheckLifesignal(this->PUBPORT_CCULfSign_U8);

    //0XFi CCU-ALL
    this->PUBPORTF1_LineNumber_U8 = crrcMvb->getUnsignedChar(0x0f1,0);
    this->PUBPORTF1_TrainNumber_U8 = crrcMvb->getUnsignedChar(0x0f1,1);
    this->PUBPORTF1_CarNumber_U8 = crrcMvb->getUnsignedChar(0x0f1,2);

    this->PUBPORTF2_LineNumber_U8 = crrcMvb->getUnsignedChar(0x0f2,0);
    this->PUBPORTF2_TrainNumber_U8 = crrcMvb->getUnsignedChar(0x0f2,1);
    this->PUBPORTF2_CarNumber_U8 = crrcMvb->getUnsignedChar(0x0f2,2);

    this->PUBPORTF3_LineNumber_U8 = crrcMvb->getUnsignedChar(0x0f3,0);
    this->PUBPORTF3_TrainNumber_U8 = crrcMvb->getUnsignedChar(0x0f3,1);
    this->PUBPORTF3_CarNumber_U8 = crrcMvb->getUnsignedChar(0x0f3,2);

    this->PUBPORTF4_LineNumber_U8 = crrcMvb->getUnsignedChar(0x0f4,0);
    this->PUBPORTF4_TrainNumber_U8 = crrcMvb->getUnsignedChar(0x0f4,1);
    this->PUBPORTF4_CarNumber_U8 = crrcMvb->getUnsignedChar(0x0f4,2);

    this->PUBPORTF5_LineNumber_U8 = crrcMvb->getUnsignedChar(0x0f5,0);
    this->PUBPORTF5_TrainNumber_U8 = crrcMvb->getUnsignedChar(0x0f5,1);
    this->PUBPORTF5_CarNumber_U8 = crrcMvb->getUnsignedChar(0x0f5,2);

    this->PUBPORTF6_LineNumber_U8 = crrcMvb->getUnsignedChar(0x0f6,0);
    this->PUBPORTF6_TrainNumber_U8 = crrcMvb->getUnsignedChar(0x0f6,1);
    this->PUBPORTF6_CarNumber_U8 = crrcMvb->getUnsignedChar(0x0f6,2);

    //0x800 CCU-ALL
    this->CCUToAllYear_Port800_U8 = crrcMvb->getUnsignedChar(0x800,0);
    this->CCUToAllMonth_Port800_U8 = crrcMvb->getUnsignedChar(0x800,1);
    this->CCUToAllDay_Port800_U8 = crrcMvb->getUnsignedChar(0x800,2);
    this->CCUToAllHour_Port800_U8 = crrcMvb->getUnsignedChar(0x800,3);
    this->CCUToAllMinute_Port800_U8 = crrcMvb->getUnsignedChar(0x800,4);
    this->CCUToAllSecond_Port800_U8 = crrcMvb->getUnsignedChar(0x800,5);

    /////*******RIOM -- CCU**********///////
    {
        //0x110,111,112 RIOM-CCU
        this->GWCT_TC1GWLifeSign1_U8 = crrcMvb->getUnsignedChar(0x110,0);
        this->GWCT_TC1GWVersion_U8 = crrcMvb->getUnsignedChar(0x110,1);
        this->DICT_TC1DIVersion_U8 = crrcMvb->getUnsignedChar(0x110,2);
        this->DOCT_TC1DOVersion_U8 = crrcMvb->getUnsignedChar(0x110,3);
        this->AICT_TC1AXVersion_U8 = crrcMvb->getUnsignedChar(0x110,4);
        this->DICT_TC1DI1LifeSign_U8 = crrcMvb->getUnsignedChar(0x110,6);
        this->DICT_TC1DI2LifeSign_U8 = crrcMvb->getUnsignedChar(0x110,7);
        this->DICT_TC1DI3LifeSign_U8 = crrcMvb->getUnsignedChar(0x110,8);
        this->DICT_TC1DI4LifeSign_U8 = crrcMvb->getUnsignedChar(0x110,9);
        this->DICT_TC1DI5LifeSign_U8 = crrcMvb->getUnsignedChar(0x110,10);
        this->DOCT_TC1DO1LifeSign_U8 = crrcMvb->getUnsignedChar(0x110,14);
        this->DOCT_TC1DO2LifeSign_U8 = crrcMvb->getUnsignedChar(0x110,15);
        this->AICT_TC1AX1LifeSign_U8 = crrcMvb->getUnsignedChar(0x110,18);

        this->DICT_TC1DI1Online_B1 = crrcMvb->getBool(0x110,24,0);
        this->DICT_TC1DI2Online_B1 = crrcMvb->getBool(0x110,24,1);
        this->DICT_TC1DI3Online_B1 = crrcMvb->getBool(0x110,24,2);
        this->DICT_TC1DI4Online_B1 = crrcMvb->getBool(0x110,24,3);
        this->DICT_TC1DI5Online_B1 = crrcMvb->getBool(0x110,24,4);
        this->DOCT_TC1DO1Online_B1 = crrcMvb->getBool(0x110,25,0);
        this->AICT_TC1AX1Online_B1 = crrcMvb->getBool(0x110,25,4);
        this->GWCT_TC1LAT_B1 = crrcMvb->getBool(0x110,30,0);
        this->GWCT_TC1RLD_B1 = crrcMvb->getBool(0x110,30,1);
        this->AICT_TC1AX1AI7Grade_U16 = crrcMvb->getUnsignedInt(0x111,12);
        this->AICT_TC1AX1AI1 = crrcMvb->getUnsignedInt(0x111,0);
        this->AICT_TC1AX1AI2 = crrcMvb->getUnsignedInt(0x111,2);
        this->AICT_TC1AX1AI3 = crrcMvb->getUnsignedInt(0x111,4);
        this->AICT_TC1AX1AI4 = crrcMvb->getUnsignedInt(0x111,6);
        this->AICT_TC1AX1AI5 = crrcMvb->getUnsignedInt(0x111,8);
        this->AICT_TC1AX1AI6 = crrcMvb->getUnsignedInt(0x111,10);
        this->AICT_TC1AX1AI8 = crrcMvb->getUnsignedInt(0x111,14);

        this->DICT_TC1DI1CH24Tractionsafe_B1 = crrcMvb->getBool(0x111,20,0);
        this->DICT_TC1DI1CH23HalfBrake_B1 = crrcMvb->getBool(0x111,20,1);
        this->DICT_TC1DI1CH22HalfTraction_B1 = crrcMvb->getBool(0x111,20,2);
        this->DICT_TC1DI1CH21ZeroSpeed_B1 = crrcMvb->getBool(0x111,20,3);
        this->DICT_TC1DI1CH20TailActived_B1 = crrcMvb->getBool(0x111,20,4);
        this->DICT_TC1DI1CH19HeadActived_B1 = crrcMvb->getBool(0x111,20,5);
        this->DICT_TC1DI1CH18TowingMode_B1 = crrcMvb->getBool(0x111,20,6);
        this->DICT_TC1DI1CH17EmOperition_B1 = crrcMvb->getBool(0x111,20,7);
        this->DICT_TC1DI1CH16WashingMode_B1 = crrcMvb->getBool(0x111,21,0);
        this->DICT_TC1DI1CH15EmBrake_B1 = crrcMvb->getBool(0x111,21,1);
        this->DICT_TC1DI1CH14EmLoopByPass2_B1 = crrcMvb->getBool(0x111,21,2);
        this->DICT_TC1DI1CH13EmLoopByPass1_B1 = crrcMvb->getBool(0x111,21,3);
        this->DICT_TC1DI1CH12EmBrkButton_B1 = crrcMvb->getBool(0x111,21,4);
        this->DICT_TC1DI1CH11AlertTestButton_B1 = crrcMvb->getBool(0x111,21,5);
        this->DICT_TC1DI1CH10AlertButton_B1 = crrcMvb->getBool(0x111,21,6);
        this->DICT_TC1DI1CH9Alert3s_B1 = crrcMvb->getBool(0x111,21,7);
        this->DICT_TC1DI1CH8Alert6s_B1 = crrcMvb->getBool(0x111,22,0);
        this->DICT_TC1DI1CH7CabActive_B1 = crrcMvb->getBool(0x111,22,1);
        this->DICT_TC1DI1CH6abActive_B1 = crrcMvb->getBool(0x111,22,2);
        this->DICT_TC1DI1CH5QuickBrk_B1 = crrcMvb->getBool(0x111,22,3);
        this->DICT_TC1DI1CH4Brake_B1 = crrcMvb->getBool(0x111,22,4);
        this->DICT_TC1DI1CH3Traction_B1 = crrcMvb->getBool(0x111,22,5);
        this->DICT_TC1DI1CH2Backward_B1 = crrcMvb->getBool(0x111,22,6);
        this->DICT_TC1DI1CH1Forward_B1 = crrcMvb->getBool(0x111,22,7);

        this->DICT_TC1DI2CH24CabKey_B1 = crrcMvb->getBool(0x111,23,0);
        this->DICT_TC1DI2CH23ZeroSpeedTL_B1 = crrcMvb->getBool(0x111,23,1);
        this->DICT_TC1DI2CH22ComSupplyFlt_B1 = crrcMvb->getBool(0x111,23,2);
        this->DICT_TC1DI2CH21ComHeating_B1 = crrcMvb->getBool(0x111,23,3);
        this->DICT_TC1DI2CH20ComOverflow_B1 = crrcMvb->getBool(0x111,23,4);
        this->DICT_TC1DI2CH19CompressorOperition_B1 = crrcMvb->getBool(0x111,23,5);
        this->DICT_TC1DI2CH18ATCBrake_B1 = crrcMvb->getBool(0x111,23,6);
        this->DICT_TC1DI2CH17ATCTraction_B1 = crrcMvb->getBool(0x111,23,7);
        this->DICT_TC1DI2CH16ATCReset_B1 = crrcMvb->getBool(0x111,24,0);
        this->DICT_TC1DI2CH15RMMode_B1 = crrcMvb->getBool(0x111,24,1);
        this->DICT_TC1DI2CH14BMMode_B1 = crrcMvb->getBool(0x111,24,2);
        this->DICT_TC1DI2CH13ATOButton_B1 = crrcMvb->getBool(0x111,24,3);
        this->DICT_TC1DI2CH12ATBButton_B1 = crrcMvb->getBool(0x111,24,4);
        this->DICT_TC1DI2CH11RMButton_B1 = crrcMvb->getBool(0x111,24,5);
        this->DICT_TC1DI2CH10BMButton_B1 = crrcMvb->getBool(0x111,24,6);
        this->DICT_TC1DI2CH9FRD1_B1 = crrcMvb->getBool(0x111,24,7);
        this->DICT_TC1DI2CH8ZVRD_B1 = crrcMvb->getBool(0x111,25,0);
        this->DICT_TC1DI2CH7ATCCutOff_B1 = crrcMvb->getBool(0x111,25,1);
        this->DICT_TC1DI2CH6CabActive_B1 = crrcMvb->getBool(0x111,25,2);
        this->DICT_TC1DI2CH5QuickBrk_B1 = crrcMvb->getBool(0x111,25,3);
        this->DICT_TC1DI2CH4Brake_B1 = crrcMvb->getBool(0x111,25,4);
        this->DICT_TC1DI2CH3Traction_B1 = crrcMvb->getBool(0x111,25,5);
        this->DICT_TC1DI2CH2Backward_B1 = crrcMvb->getBool(0x111,25,6);
        this->DICT_TC1DI2CH1Forward_B1 = crrcMvb->getBool(0x111,25,7);

        this->DICT_TC1DI3CH24ValveReset_B1 = crrcMvb->getBool(0x111,26,0);
        this->DICT_TC1DI3CH23ValveTest_B1 = crrcMvb->getBool(0x111,26,1);
        this->DICT_TC1DI3CH22SprayStart_B1 = crrcMvb->getBool(0x111,26,2);
        this->DICT_TC1DI3CH21DC110On_B1 = crrcMvb->getBool(0x111,26,3);
        this->DICT_TC1DI3CH20BatteryCtrlContacter_B1 = crrcMvb->getBool(0x111,26,4);
        this->DICT_TC1DI3CH19BatteryPowerContacter_B1 = crrcMvb->getBool(0x111,26,5);
        this->DICT_TC1DI3CH18HoldingBrkCutOff_B1 = crrcMvb->getBool(0x111,26,6);
        this->DICT_TC1DI3CH17HoldingBrkApplied_B1 = crrcMvb->getBool(0x111,26,7);
        this->DICT_TC1DI3CH16BrkRlsByPass_B1 = crrcMvb->getBool(0x111,27,0);
        this->DICT_TC1DI3CH15BrkReleased_B1 = crrcMvb->getBool(0x111,27,1);
        this->DICT_TC1DI3CH14BrkRlsByPass_B1 = crrcMvb->getBool(0x111,27,2);
        this->DICT_TC1DI3CH13BrkRlsFlt_B1 = crrcMvb->getBool(0x111,27,3);
        this->DICT_TC1DI3CH12ForceRlsBtn_B1 = crrcMvb->getBool(0x111,27,4);
        this->DICT_TC1DI3CH11ParkingBrkByPass_B1 = crrcMvb->getBool(0x111,27,5);
        this->DICT_TC1DI3CH10ParkingBrkCutOff_B1 = crrcMvb->getBool(0x111,27,6);
        this->DICT_TC1DI3CH9ParkBrkStatus_B1 = crrcMvb->getBool(0x111,27,7);
        this->DICT_TC1DI3CH8ParkingBrkRlsBtn_B1 = crrcMvb->getBool(0x111,28,0);
        this->DICT_TC1DI3CH7ParkingBrkBtn_B1 = crrcMvb->getBool(0x111,28,1);
        this->DICT_TC1DI3CH6TotalAirPreLow_B1 = crrcMvb->getBool(0x111,28,2);
        this->DICT_TC1DI3CH5Spd88_B1 = crrcMvb->getBool(0x111,28,3);
        this->DICT_TC1DI3CH4NotZeroSpeed_B1 = crrcMvb->getBool(0x111,28,4);
        this->DICT_TC1DI3CH3EBCUCutOff_B1 = crrcMvb->getBool(0x111,28,5);
        this->DICT_TC1DI3CH2Bg2CutOff_B1 = crrcMvb->getBool(0x111,28,6);
        this->DICT_TC1DI3CH1Bg1CutOff_B1 = crrcMvb->getBool(0x111,28,7);

        this->DICT_TC1DI4CH23ADDCutOff_B1 = crrcMvb->getBool(0x112,20,1);
        this->DICT_TC1DI4CH22PanCutOffOtherSide_B1 = crrcMvb->getBool(0x112,20,2);
        this->DICT_TC1DI4CH21PanCutOffThisSide_B1 = crrcMvb->getBool(0x112,20,3);
        this->DICT_TC1DI4CH20PanDownOrder_B1 = crrcMvb->getBool(0x112,20,4);
        this->DICT_TC1DI4CH19PanUpOrder_B1 = crrcMvb->getBool(0x112,20,5);
        this->DICT_TC1DI4CH18DoorElection_B1 = crrcMvb->getBool(0x112,20,6);
        this->DICT_TC1DI4CH17BarrielDoorStutas_B1 = crrcMvb->getBool(0x112,20,7);
        this->DICT_TC1DI4CH16CabDoorLoopByPass_B1 = crrcMvb->getBool(0x112,21,0);
        this->DICT_TC1DI4CH15CabDoorClosed_B1 = crrcMvb->getBool(0x112,21,1);
        this->DICT_TC1DI4CH14CabRtDoorStatus_B1 = crrcMvb->getBool(0x112,21,2);
        this->DICT_TC1DI4CH13CabLtDoorStatus_B1 = crrcMvb->getBool(0x112,21,3);
        this->DICT_TC1DI4CH12CarDoorSafeLoopByPass_B1 = crrcMvb->getBool(0x112,21,4);
        this->DICT_TC1DI4CH11CarDoorAllClosed_B1 = crrcMvb->getBool(0x112,21,5);
        this->DICT_TC1DI4CH10RtDoorClose_B1 = crrcMvb->getBool(0x112,21,6);
        this->DICT_TC1DI4CH9LtDoorClose_B1 = crrcMvb->getBool(0x112,21,7);
        this->DICT_TC1DI4CH8RtDoorOpen_B1 = crrcMvb->getBool(0x112,22,0);
        this->DICT_TC1DI4CH7LtDoorOpen_B1 = crrcMvb->getBool(0x112,22,1);
        this->DICT_TC1DI4CH6ZeroSpdEnable_B1 = crrcMvb->getBool(0x112,22,2);
        this->DICT_TC1DI4CH5LtDoorEnable_B1 = crrcMvb->getBool(0x112,22,3);
        this->DICT_TC1DI4CH4RtDoorEnable_B1 = crrcMvb->getBool(0x112,22,4);
        this->DICT_TC1DI4CH3MannulOperitionDisable_B1 = crrcMvb->getBool(0x112,22,5);
        this->DICT_TC1DI4CH2AutoOperitionDisable_B1 = crrcMvb->getBool(0x112,22,6);
        this->DICT_TC1DI4CH1AutoOpenClose_B1 = crrcMvb->getBool(0x112,22,7);

        this->DICT_TC1DI5CH22HeaterStatus_B1 = crrcMvb->getBool(0x112,23,2);
        this->DICT_TC1DI5CH21Uncoupled_B1 = crrcMvb->getBool(0x112,23,3);
        this->DICT_TC1DI5CH20DoorPowerStatus_B1 = crrcMvb->getBool(0x112,23,4);
        this->DICT_TC1DI5CH19PngBroadcastStatus_B1 = crrcMvb->getBool(0x112,23,5);
        this->DICT_TC1DI5CH18PanCtrlStatus_B1 = crrcMvb->getBool(0x112,23,6);
        this->DICT_TC1DI5CH17CabBroadcastStatusB1 = crrcMvb->getBool(0x112,23,7);
        this->DICT_TC1DI5CH16ColourSwitch_B1 = crrcMvb->getBool(0x112,24,0);
        this->DICT_TC1DI5CH15LightPower4Flt_B1 = crrcMvb->getBool(0x112,24,1);
        this->DICT_TC1DI5CH14LightPower3Flt_B1 = crrcMvb->getBool(0x112,24,2);
        this->DICT_TC1DI5CH13LightPower2Flt_B1 = crrcMvb->getBool(0x112,24,3);
        this->DICT_TC1DI5CH12LightPower1Flt_B1 = crrcMvb->getBool(0x112,24,4);
        this->DICT_TC1DI5CH11HBOpenBtn_B1 = crrcMvb->getBool(0x112,24,5);
        this->DICT_TC1DI5CH10HBCloseBtn_B1 = crrcMvb->getBool(0x112,24,6);
        this->DICT_TC1DI5CH9WorkshopHoldingOn_B1 = crrcMvb->getBool(0x112,24,7);
        this->DICT_TC1DI5CH8workshopHoldingOnByPass_B1 = crrcMvb->getBool(0x112,25,0);
        this->DICT_TC1DI5CH7ABFire2_B1 = crrcMvb->getBool(0x112,25,1);
        this->DICT_TC1DI5CH6ABFire1_B1 = crrcMvb->getBool(0x112,25,2);
        this->DICT_TC1DI5CH5ZeroVoltStart_B1 = crrcMvb->getBool(0x112,25,3);
        this->DICT_TC1DI5CH4ACMOff_B1 = crrcMvb->getBool(0x112,25,4);
        this->DICT_TC1DI5CH3ACMOn_B1 = crrcMvb->getBool(0x112,25,5);
        this->DICT_TC1DI5CH2DC24Flt_B1 = crrcMvb->getBool(0x112,25,6);
        this->DICT_TC1DI5CH1BCGNormal_B1 = crrcMvb->getBool(0x112,25,7);

        //0x120 121 RIOM2-CCU
        this->GWCT_RIOMMP1GWLfSign1_U8 = crrcMvb->getUnsignedChar(0x120,0);
        this->GWCT_RIOMMP1GWVer_U8 = crrcMvb->getUnsignedChar(0x120,1);
        this->DICT_RIOMMP1DIVer_U8 = crrcMvb->getUnsignedChar(0x120,2);
        this->DOCT_RIOMMP1DOVer_U8 = crrcMvb->getUnsignedChar(0x120,3);
        this->DICT_RIOMMP1DI1LfSign_U8 = crrcMvb->getUnsignedChar(0x120,6);
        this->DOCT_RIOMMP1DO1LfSign_U8 = crrcMvb->getUnsignedChar(0x120,14);

        this->DICT_RIOMMP1DI1Online_B1 = crrcMvb->getBool(0x120,24,0);
        this->DOCT_RIOMMP1DO1Online_B1 = crrcMvb->getBool(0x120,25,0);
        this->GWCT_RIOMMP1LAT_B1 = crrcMvb->getBool(0x120,30,0);
        this->GWCT_RIOMMP1RLD_B1 = crrcMvb->getBool(0x120,30,1);

        this->DICT_MP1DI1CH23PHFire2_B1 = crrcMvb->getBool(0x121,20,1);
        this->DICT_MP1DI1CH22PHFire1_B1 = crrcMvb->getBool(0x121,20,2);
        this->DICT_MP1DI1CH21BatteryCoverOpen_B1 = crrcMvb->getBool(0x121,20,3);
        this->DICT_MP1DI1CH20DCUMPanUpEnable_B1 = crrcMvb->getBool(0x121,20,4);
        this->DICT_MP1DI1CH19PanCtrl_B1 = crrcMvb->getBool(0x121,20,5);
        this->DICT_MP1DI1CH18HSCBPower2_B1 = crrcMvb->getBool(0x121,20,6);
        this->DICT_MP1DI1CH17HSCBPower1_B1 = crrcMvb->getBool(0x121,20,7);
        this->DICT_MP1DI1CH16DoorPowerStatus_B1 = crrcMvb->getBool(0x121,21,0);
        this->DICT_MP1DI1CH15PngBroadcastStatus_B1 = crrcMvb->getBool(0x121,21,1);
        this->DICT_MP1DI1CH14LightPower4Flt_B1 = crrcMvb->getBool(0x121,21,2);
        this->DICT_MP1DI1CH13LightPower3Flt_B1 = crrcMvb->getBool(0x121,21,3);
        this->DICT_MP1DI1CH12LightPower2Flt_B1 = crrcMvb->getBool(0x121,21,4);
        this->DICT_MP1DI1CH11LightPower1Flt_B1 = crrcMvb->getBool(0x121,21,5);
        this->DICT_MP1DI1CH10ParkingBrkCutOff_B1 = crrcMvb->getBool(0x121,21,6);
        this->DICT_MP1DI1CH8BrkAllCutOff_B1 = crrcMvb->getBool(0x121,22,0);
        this->DICT_MP1DI1CH7Bg2CutOff_B1 = crrcMvb->getBool(0x121,22,1);
        this->DICT_MP1DI1CH6Bg1CutOff_B1 = crrcMvb->getBool(0x121,22,2);
        this->DICT_MP1DI1CH5PanDownandADD_B1 = crrcMvb->getBool(0x121,22,3);
        this->DICT_MP1DI1CH4PanDownStatus_B1 = crrcMvb->getBool(0x121,22,4);
        this->DICT_MP1DI1CH3PanUpStatus_B1 = crrcMvb->getBool(0x121,22,5);
        this->DICT_MP1DI1CH2FootPumpOn_B1 = crrcMvb->getBool(0x121,22,6);
        this->DICT_MP1DI1CH1FirstTimePanPumpOn_B1 = crrcMvb->getBool(0x121,22,7);

        //0x130 131 RIOM3-CCU
        this->GWCT_RIOMM1GWLfSign1_U8 = crrcMvb->getUnsignedChar(0x130,0);
        this->GWCT_RIOMM1GWVer_U8 = crrcMvb->getUnsignedChar(0x130,1);
        this->DICT_RIOMM1DIVer_U8 = crrcMvb->getUnsignedChar(0x130,2);
        this->DOCT_RIOMM1DOVer_U8 = crrcMvb->getUnsignedChar(0x130,3);
        this->DICT_RIOMM1DI1LfSign_U8 = crrcMvb->getUnsignedChar(0x130,6);
        this->DOCT_RIOMM1DO1LfSign_U8 = crrcMvb->getUnsignedChar(0x130,14);

        this->DICT_RIOMM1DI1Online_B1 = crrcMvb->getBool(0x130,24,0);
        this->DOCT_RIOMM1DO1Online_B1 = crrcMvb->getBool(0x130,25,0);
        this->GWCT_RIOMM1LAT_B1 = crrcMvb->getBool(0x130,30,0);
        this->GWCT_RIOMM1RLD_B1 = crrcMvb->getBool(0x130,30,1);

        this->DICT_M1DI1CH16LineContacterClosed_B1 = crrcMvb->getBool(0x131,21,0);
        this->DICT_M1DI1CH15HoldingBrkApplied_B1 = crrcMvb->getBool(0x131,21,1);
        this->DICT_M1DI1CH14PHFire2_B1 = crrcMvb->getBool(0x131,21,2);
        this->DICT_M1DI1CH13PHFire1_B1 = crrcMvb->getBool(0x131,21,3);
        this->DICT_M1DI1CH12DoorPowerStatus_B1 = crrcMvb->getBool(0x131,21,4);
        this->DICT_M1DI1CH11PngBroadcastStatus_B1 = crrcMvb->getBool(0x131,21,5);
        this->DICT_M1DI1CH10LineContacterStatus_B1 = crrcMvb->getBool(0x131,21,6);
        this->DICT_M1DI1CH9LightPower4Flt_B1 = crrcMvb->getBool(0x131,21,7);
        this->DICT_M1DI1CH8LightPower3Flt_B1 = crrcMvb->getBool(0x131,22,0);
        this->DICT_M1DI1CH7LightPower2Flt_B1 = crrcMvb->getBool(0x131,22,1);
        this->DICT_M1DI1CH6LightPower1Flt_B1 = crrcMvb->getBool(0x131,22,2);
        this->DICT_M1DI1CH5ParkingBrkCutOff_B1 = crrcMvb->getBool(0x131,22,3);
        this->DICT_M1DI1CH3BrkAllCutOff_B1 = crrcMvb->getBool(0x131,22,5);
        this->DICT_M1DI1CH2Bg2CutOff_B1 = crrcMvb->getBool(0x131,22,6);
        this->DICT_M1DI1CH1Bg1CutOff_B1 = crrcMvb->getBool(0x131,22,7);

        //0x140 141 RIOM4-CCU
        this->GWCT_RIOMM2GWLfSign1_U8 = crrcMvb->getUnsignedChar(0x140,0);
        this->GWCT_RIOMM2GWVer_U8 = crrcMvb->getUnsignedChar(0x140,1);
        this->DICT_RIOMM2DIVer_U8 = crrcMvb->getUnsignedChar(0x140,2);
        this->DOCT_RIOMM2DOVer_U8 = crrcMvb->getUnsignedChar(0x140,3);
        this->DICT_RIOMM2DI1LfSign_U8 = crrcMvb->getUnsignedChar(0x140,6);
        this->DOCT_RIOMM2DO1LfSign_U8 = crrcMvb->getUnsignedChar(0x140,14);

        this->DICT_RIOMM2DI1Online_B1 = crrcMvb->getBool(0x140,24,0);
        this->DOCT_RIOMM2DO1Online_B1 = crrcMvb->getBool(0x140,25,0);
        this->GWCT_RIOMM2LAT_B1 = crrcMvb->getBool(0x140,30,0);
        this->GWCT_RIOMM2RLD_B1 = crrcMvb->getBool(0x140,30,1);

        this->DICT_M2DI1CH16LineContacterClosed_B1 = crrcMvb->getBool(0x141,21,0);
        this->DICT_M2DI1CH15HoldingBrkApplied_B1 = crrcMvb->getBool(0x141,21,1);
        this->DICT_M2DI1CH14PHFire2_B1 = crrcMvb->getBool(0x141,21,2);
        this->DICT_M2DI1CH13PHFire1_B1 = crrcMvb->getBool(0x141,21,3);
        this->DICT_M2DI1CH12DoorPowerStatus_B1 = crrcMvb->getBool(0x141,21,4);
        this->DICT_M2DI1CH11PngBroadcastStatus_B1 = crrcMvb->getBool(0x141,21,5);
        this->DICT_M2DI1CH10LineContacterStatus_B1 = crrcMvb->getBool(0x141,21,6);
        this->DICT_M2DI1CH9LightPower4Flt_B1 = crrcMvb->getBool(0x141,21,7);
        this->DICT_M2DI1CH8LightPower3Flt_B1 = crrcMvb->getBool(0x141,22,0);
        this->DICT_M2DI1CH7LightPower2Flt_B1 = crrcMvb->getBool(0x141,22,1);
        this->DICT_M2DI1CH6LightPower1Flt_B1 = crrcMvb->getBool(0x141,22,2);
        this->DICT_M2DI1CH5ParkingBrkCutOff_B1 = crrcMvb->getBool(0x141,22,3);
        this->DICT_M2DI1CH3BrkAllCutOff_B1 = crrcMvb->getBool(0x141,22,5);
        this->DICT_M2DI1CH2Bg2CutOff_B1 = crrcMvb->getBool(0x141,22,6);
        this->DICT_M2DI1CH1Bg1CutOff_B1 = crrcMvb->getBool(0x141,22,7);

        //0x150 151 RIOM5-CCU
        this->GWCT_RIOMMP2GWLfSign1_U8 = crrcMvb->getUnsignedChar(0x150,0);
        this->GWCT_RIOMMP2GWVer_U8 = crrcMvb->getUnsignedChar(0x150,1);
        this->DICT_RIOMMP2DIVer_U8 = crrcMvb->getUnsignedChar(0x150,2);
        this->DOCT_RIOMMP2DOVer_U8 = crrcMvb->getUnsignedChar(0x150,3);
        this->DICT_RIOMMP2DI1LfSign_U8 = crrcMvb->getUnsignedChar(0x150,6);
        this->DOCT_RIOMMP2DO1LfSign_U8 = crrcMvb->getUnsignedChar(0x150,14);

        this->DICT_RIOMMP2DI1Online_B1 = crrcMvb->getBool(0x150,24,0);
        this->DOCT_RIOMMP2DO1Online_B1 = crrcMvb->getBool(0x150,25,0);
        this->GWCT_RIOMMP2LAT_B1 = crrcMvb->getBool(0x150,30,0);
        this->GWCT_RIOMMP2RLD_B1 = crrcMvb->getBool(0x150,30,1);

        this->DICT_MP2DI1CH23PHFire2_B1 = crrcMvb->getBool(0x151,20,1);
        this->DICT_MP2DI1CH22PHFire1_B1 = crrcMvb->getBool(0x151,20,2);
        this->DICT_MP2DI1CH21BatteryCoverOpen_B1 = crrcMvb->getBool(0x151,20,3);
        this->DICT_MP2DI1CH20DCUMPanUpEnable_B1 = crrcMvb->getBool(0x151,20,4);
        this->DICT_MP2DI1CH19PanCtrl_B1 = crrcMvb->getBool(0x151,20,5);
        this->DICT_MP2DI1CH18HSCBPower2_B1 = crrcMvb->getBool(0x151,20,6);
        this->DICT_MP2DI1CH17HSCBPower1_B1 = crrcMvb->getBool(0x151,20,7);
        this->DICT_MP2DI1CH16DoorPowerStatus_B1 = crrcMvb->getBool(0x151,21,0);
        this->DICT_MP2DI1CH15PngBroadcastStatus_B1 = crrcMvb->getBool(0x151,21,1);
        this->DICT_MP2DI1CH14LightPower4Flt_B1 = crrcMvb->getBool(0x151,21,2);
        this->DICT_MP2DI1CH13LightPower3Flt_B1 = crrcMvb->getBool(0x151,21,3);
        this->DICT_MP2DI1CH12LightPower2Flt_B1 = crrcMvb->getBool(0x151,21,4);
        this->DICT_MP2DI1CH11LightPower1Flt_B1 = crrcMvb->getBool(0x151,21,5);
        this->DICT_MP2DI1CH10ParkingBrkCutOff_B1 = crrcMvb->getBool(0x151,21,6);
        this->DICT_MP2DI1CH8BrkAllCutOff_B1 = crrcMvb->getBool(0x151,22,0);
        this->DICT_MP2DI1CH7Bg2CutOff_B1 = crrcMvb->getBool(0x151,22,1);
        this->DICT_MP2DI1CH6Bg1CutOff_B1 = crrcMvb->getBool(0x151,22,2);
        this->DICT_MP2DI1CH5PanDownandADD_B1 = crrcMvb->getBool(0x151,22,3);
        this->DICT_MP2DI1CH4PanDownStatus_B1 = crrcMvb->getBool(0x151,22,4);
        this->DICT_MP2DI1CH3PanUpStatus_B1 = crrcMvb->getBool(0x151,22,5);
        this->DICT_MP2DI1CH2FootPumpOn_B1 = crrcMvb->getBool(0x151,22,6);
        this->DICT_MP2DI1CH1FirstTimePanPumpOn_B1 = crrcMvb->getBool(0x151,22,7);

        //0x120,121,122 RIOM6-CCU
        this->GWCT_TC2GWLifeSign1_U8 = crrcMvb->getUnsignedChar(0x160,0);
        this->GWCT_TC2GWVersion_U8 = crrcMvb->getUnsignedChar(0x160,1);
        this->DICT_TC2DIVersion_U8 = crrcMvb->getUnsignedChar(0x160,2);
        this->DOCT_TC2DOVersion_U8 = crrcMvb->getUnsignedChar(0x160,3);
        this->AICT_TC2AXVersion_U8 = crrcMvb->getUnsignedChar(0x160,4);
        this->DICT_TC2DI1LifeSign_U8 = crrcMvb->getUnsignedChar(0x160,6);
        this->DICT_TC2DI2LifeSign_U8 = crrcMvb->getUnsignedChar(0x160,7);
        this->DICT_TC2DI3LifeSign_U8 = crrcMvb->getUnsignedChar(0x160,8);
        this->DICT_TC2DI4LifeSign_U8 = crrcMvb->getUnsignedChar(0x160,9);
        this->DICT_TC2DI5LifeSign_U8 = crrcMvb->getUnsignedChar(0x160,10);
        this->DOCT_TC2DO1LifeSign_U8 = crrcMvb->getUnsignedChar(0x160,14);
        this->DOCT_TC2DO2LifeSign_U8 = crrcMvb->getUnsignedChar(0x160,15);
        this->AICT_TC2AX1LifeSign_U8 = crrcMvb->getUnsignedChar(0x160,18);

        this->DICT_TC2DI1Online_B1 = crrcMvb->getBool(0x160,24,0);
        this->DICT_TC2DI2Online_B1 = crrcMvb->getBool(0x160,24,1);
        this->DICT_TC2DI3Online_B1 = crrcMvb->getBool(0x160,24,2);
        this->DICT_TC2DI4Online_B1 = crrcMvb->getBool(0x160,24,3);
        this->DICT_TC2DI5Online_B1 = crrcMvb->getBool(0x160,24,4);
        this->DOCT_TC2DO1Online_B1 = crrcMvb->getBool(0x160,25,0);
        this->AICT_TC2AX1Online_B1 = crrcMvb->getBool(0x160,25,4);
        this->GWCT_TC2LAT_B1 = crrcMvb->getBool(0x160,30,0);
        this->GWCT_TC2RLD_B1 = crrcMvb->getBool(0x160,30,1);
        this->AICT_TC2AX1AI7Grade_U16 = crrcMvb->getUnsignedInt(0x161,12);
        this->AICT_TC2AX1AI1 = crrcMvb->getUnsignedInt(0x161,0);
        this->AICT_TC2AX1AI2 = crrcMvb->getUnsignedInt(0x161,2);
        this->AICT_TC2AX1AI3 = crrcMvb->getUnsignedInt(0x161,4);
        this->AICT_TC2AX1AI4 = crrcMvb->getUnsignedInt(0x161,6);
        this->AICT_TC2AX1AI5 = crrcMvb->getUnsignedInt(0x161,8);
        this->AICT_TC2AX1AI6 = crrcMvb->getUnsignedInt(0x161,10);
        this->AICT_TC2AX1AI8 = crrcMvb->getUnsignedInt(0x161,14);

        this->DICT_TC2DI1CH24Tractionsafe_B1 = crrcMvb->getBool(0x161,20,0);
        this->DICT_TC2DI1CH23HalfBrake_B1 = crrcMvb->getBool(0x161,20,1);
        this->DICT_TC2DI1CH22HalfTraction_B1 = crrcMvb->getBool(0x161,20,2);
        this->DICT_TC2DI1CH21ZeroSpeed_B1 = crrcMvb->getBool(0x161,20,3);
        this->DICT_TC2DI1CH20TailActived_B1 = crrcMvb->getBool(0x161,20,4);
        this->DICT_TC2DI1CH19HeadActived_B1 = crrcMvb->getBool(0x161,20,5);
        this->DICT_TC2DI1CH18TowingMode_B1 = crrcMvb->getBool(0x161,20,6);
        this->DICT_TC2DI1CH17EmOperition_B1 = crrcMvb->getBool(0x161,20,7);
        this->DICT_TC2DI1CH16WashingMode_B1 = crrcMvb->getBool(0x161,21,0);
        this->DICT_TC2DI1CH15EmBrake_B1 = crrcMvb->getBool(0x161,21,1);
        this->DICT_TC2DI1CH14EmLoopByPass2_B1 = crrcMvb->getBool(0x161,21,2);
        this->DICT_TC2DI1CH13EmLoopByPass1_B1 = crrcMvb->getBool(0x161,21,3);
        this->DICT_TC2DI1CH12EmBrkButton_B1 = crrcMvb->getBool(0x161,21,4);
        this->DICT_TC2DI1CH11AlertTestButton_B1 = crrcMvb->getBool(0x161,21,5);
        this->DICT_TC2DI1CH10AlertButton_B1 = crrcMvb->getBool(0x161,21,6);
        this->DICT_TC2DI1CH9Alert3s_B1 = crrcMvb->getBool(0x161,21,7);
        this->DICT_TC2DI1CH8Alert6s_B1 = crrcMvb->getBool(0x161,22,0);
        this->DICT_TC2DI1CH7CabActive_B1 = crrcMvb->getBool(0x161,22,1);
        this->DICT_TC2DI1CH6abActive_B1 = crrcMvb->getBool(0x161,22,2);
        this->DICT_TC2DI1CH5QuickBrk_B1 = crrcMvb->getBool(0x161,22,3);
        this->DICT_TC2DI1CH4Brake_B1 = crrcMvb->getBool(0x161,22,4);
        this->DICT_TC2DI1CH3Traction_B1 = crrcMvb->getBool(0x161,22,5);
        this->DICT_TC2DI1CH2Backward_B1 = crrcMvb->getBool(0x161,22,6);
        this->DICT_TC2DI1CH1Forward_B1 = crrcMvb->getBool(0x161,22,7);

        this->DICT_TC2DI2CH24CabKey_B1 = crrcMvb->getBool(0x161,23,0);
        this->DICT_TC2DI2CH23ZeroSpeedTL_B1 = crrcMvb->getBool(0x161,23,1);
        this->DICT_TC2DI2CH22ComSupplyFlt_B1 = crrcMvb->getBool(0x161,23,2);
        this->DICT_TC2DI2CH21ComHeating_B1 = crrcMvb->getBool(0x161,23,3);
        this->DICT_TC2DI2CH20ComOverflow_B1 = crrcMvb->getBool(0x161,23,4);
        this->DICT_TC2DI2CH19CompressorOperition_B1 = crrcMvb->getBool(0x161,23,5);
        this->DICT_TC2DI2CH18ATCBrake_B1 = crrcMvb->getBool(0x161,23,6);
        this->DICT_TC2DI2CH17ATCTraction_B1 = crrcMvb->getBool(0x161,23,7);
        this->DICT_TC2DI2CH16ATCReset_B1 = crrcMvb->getBool(0x161,24,0);
        this->DICT_TC2DI2CH15RMMode_B1 = crrcMvb->getBool(0x161,24,1);
        this->DICT_TC2DI2CH14BMMode_B1 = crrcMvb->getBool(0x161,24,2);
        this->DICT_TC2DI2CH13ATOButton_B1 = crrcMvb->getBool(0x161,24,3);
        this->DICT_TC2DI2CH12ATBButton_B1 = crrcMvb->getBool(0x161,24,4);
        this->DICT_TC2DI2CH11RMButton_B1 = crrcMvb->getBool(0x161,24,5);
        this->DICT_TC2DI2CH10BMButton_B1 = crrcMvb->getBool(0x161,24,6);
        this->DICT_TC2DI2CH9FRD1_B1 = crrcMvb->getBool(0x161,24,7);
        this->DICT_TC2DI2CH8ZVRD_B1 = crrcMvb->getBool(0x161,25,0);
        this->DICT_TC2DI2CH7ATCCutOff_B1 = crrcMvb->getBool(0x161,25,1);
        this->DICT_TC2DI2CH6CabActive_B1 = crrcMvb->getBool(0x161,25,2);
        this->DICT_TC2DI2CH5QuickBrk_B1 = crrcMvb->getBool(0x161,25,3);
        this->DICT_TC2DI2CH4Brake_B1 = crrcMvb->getBool(0x161,25,4);
        this->DICT_TC2DI2CH3Traction_B1 = crrcMvb->getBool(0x161,25,5);
        this->DICT_TC2DI2CH2Backward_B1 = crrcMvb->getBool(0x161,25,6);
        this->DICT_TC2DI2CH1Forward_B1 = crrcMvb->getBool(0x161,25,7);

        this->DICT_TC2DI3CH24ValveReset_B1 = crrcMvb->getBool(0x161,26,0);
        this->DICT_TC2DI3CH23ValveTest_B1 = crrcMvb->getBool(0x161,26,1);
        this->DICT_TC2DI3CH22SprayStart_B1 = crrcMvb->getBool(0x161,26,2);
        this->DICT_TC2DI3CH21DC110On_B1 = crrcMvb->getBool(0x161,26,3);
        this->DICT_TC2DI3CH20BatteryCtrlContacter_B1 = crrcMvb->getBool(0x161,26,4);
        this->DICT_TC2DI3CH19BatteryPowerContacter_B1 = crrcMvb->getBool(0x161,26,5);
        this->DICT_TC2DI3CH18HoldingBrkCutOff_B1 = crrcMvb->getBool(0x161,26,6);
        this->DICT_TC2DI3CH17HoldingBrkApplied_B1 = crrcMvb->getBool(0x161,26,7);
        this->DICT_TC2DI3CH16BrkRlsByPass_B1 = crrcMvb->getBool(0x161,27,0);
        this->DICT_TC2DI3CH15BrkReleased_B1 = crrcMvb->getBool(0x161,27,1);
        this->DICT_TC2DI3CH14BrkRlsByPass_B1 = crrcMvb->getBool(0x161,27,2);
        this->DICT_TC2DI3CH13BrkRlsFlt_B1 = crrcMvb->getBool(0x161,27,3);
        this->DICT_TC2DI3CH12ForceRlsBtn_B1 = crrcMvb->getBool(0x161,27,4);
        this->DICT_TC2DI3CH11ParkingBrkByPass_B1 = crrcMvb->getBool(0x161,27,5);
        this->DICT_TC2DI3CH10ParkingBrkCutOff_B1 = crrcMvb->getBool(0x161,27,6);
        this->DICT_TC2DI3CH9ParkBrkStatus_B1 = crrcMvb->getBool(0x161,27,7);
        this->DICT_TC2DI3CH8ParkingBrkRlsBtn_B1 = crrcMvb->getBool(0x161,28,0);
        this->DICT_TC2DI3CH7ParkingBrkBtn_B1 = crrcMvb->getBool(0x161,28,1);
        this->DICT_TC2DI3CH6TotalAirPreLow_B1 = crrcMvb->getBool(0x161,28,2);
        this->DICT_TC2DI3CH5Spd88_B1 = crrcMvb->getBool(0x161,28,3);
        this->DICT_TC2DI3CH4NotZeroSpeed_B1 = crrcMvb->getBool(0x161,28,4);
        this->DICT_TC2DI3CH3EBCUCutOff_B1 = crrcMvb->getBool(0x161,28,5);
        this->DICT_TC2DI3CH2Bg2CutOff_B1 = crrcMvb->getBool(0x161,28,6);
        this->DICT_TC2DI3CH1Bg1CutOff_B1 = crrcMvb->getBool(0x161,28,7);

        this->DICT_TC2DI4CH23ADDCutOff_B1 = crrcMvb->getBool(0x162,20,1);
        this->DICT_TC2DI4CH22PanCutOffOtherSide_B1 = crrcMvb->getBool(0x162,20,2);
        this->DICT_TC2DI4CH21PanCutOffThisSide_B1 = crrcMvb->getBool(0x162,20,3);
        this->DICT_TC2DI4CH20PanDownOrder_B1 = crrcMvb->getBool(0x162,20,4);
        this->DICT_TC2DI4CH19PanUpOrder_B1 = crrcMvb->getBool(0x162,20,5);
        this->DICT_TC2DI4CH18DoorElection_B1 = crrcMvb->getBool(0x162,20,6);
        this->DICT_TC2DI4CH17BarrielDoorStutas_B1 = crrcMvb->getBool(0x162,20,7);
        this->DICT_TC2DI4CH16CabDoorLoopByPass_B1 = crrcMvb->getBool(0x162,21,0);
        this->DICT_TC2DI4CH15CabDoorClosed_B1 = crrcMvb->getBool(0x162,21,1);
        this->DICT_TC2DI4CH14CabRtDoorStatus_B1 = crrcMvb->getBool(0x162,21,2);
        this->DICT_TC2DI4CH13CabLtDoorStatus_B1 = crrcMvb->getBool(0x162,21,3);
        this->DICT_TC2DI4CH12CarDoorSafeLoopByPass_B1 = crrcMvb->getBool(0x162,21,4);
        this->DICT_TC2DI4CH11CarDoorAllClosed_B1 = crrcMvb->getBool(0x162,21,5);
        this->DICT_TC2DI4CH10RtDoorClose_B1 = crrcMvb->getBool(0x162,21,6);
        this->DICT_TC2DI4CH9LtDoorClose_B1 = crrcMvb->getBool(0x162,21,7);
        this->DICT_TC2DI4CH8RtDoorOpen_B1 = crrcMvb->getBool(0x162,22,0);
        this->DICT_TC2DI4CH7LtDoorOpen_B1 = crrcMvb->getBool(0x162,22,1);
        this->DICT_TC2DI4CH6ZeroSpdEnable_B1 = crrcMvb->getBool(0x162,22,2);
        this->DICT_TC2DI4CH5LtDoorEnable_B1 = crrcMvb->getBool(0x162,22,3);
        this->DICT_TC2DI4CH4RtDoorEnable_B1 = crrcMvb->getBool(0x162,22,4);
        this->DICT_TC2DI4CH3MannulOperitionDisable_B1 = crrcMvb->getBool(0x162,22,5);
        this->DICT_TC2DI4CH2AutoOperitionDisable_B1 = crrcMvb->getBool(0x162,22,6);
        this->DICT_TC2DI4CH1AutoOpenClose_B1 = crrcMvb->getBool(0x162,22,7);

        this->DICT_TC2DI5CH22HeaterStatus_B1 = crrcMvb->getBool(0x162,23,2);
        this->DICT_TC2DI5CH21Uncoupled_B1 = crrcMvb->getBool(0x162,23,3);
        this->DICT_TC2DI5CH20DoorPowerStatus_B1 = crrcMvb->getBool(0x162,23,4);
        this->DICT_TC2DI5CH19PngBroadcastStatus_B1 = crrcMvb->getBool(0x162,23,5);
        this->DICT_TC2DI5CH18PanCtrlStatus_B1 = crrcMvb->getBool(0x162,23,6);
        this->DICT_TC2DI5CH17CabBroadcastStatusB1 = crrcMvb->getBool(0x162,23,7);
        this->DICT_TC2DI5CH16ColourSwitch_B1 = crrcMvb->getBool(0x162,24,0);
        this->DICT_TC2DI5CH15LightPower4Flt_B1 = crrcMvb->getBool(0x162,24,1);
        this->DICT_TC2DI5CH14LightPower3Flt_B1 = crrcMvb->getBool(0x162,24,2);
        this->DICT_TC2DI5CH13LightPower2Flt_B1 = crrcMvb->getBool(0x162,24,3);
        this->DICT_TC2DI5CH12LightPower1Flt_B1 = crrcMvb->getBool(0x162,24,4);
        this->DICT_TC2DI5CH11HBOpenBtn_B1 = crrcMvb->getBool(0x162,24,5);
        this->DICT_TC2DI5CH10HBCloseBtn_B1 = crrcMvb->getBool(0x162,24,6);
        this->DICT_TC2DI5CH9WorkshopHoldingOn_B1 = crrcMvb->getBool(0x162,24,7);
        this->DICT_TC2DI5CH8workshopHoldingOnByPass_B1 = crrcMvb->getBool(0x162,25,0);
        this->DICT_TC2DI5CH7ABFire2_B1 = crrcMvb->getBool(0x162,25,1);
        this->DICT_TC2DI5CH6ABFire1_B1 = crrcMvb->getBool(0x162,25,2);
        this->DICT_TC2DI5CH5ZeroVoltStart_B1 = crrcMvb->getBool(0x162,25,3);
        this->DICT_TC2DI5CH4ACMOff_B1 = crrcMvb->getBool(0x162,25,4);
        this->DICT_TC2DI5CH3ACMOn_B1 = crrcMvb->getBool(0x162,25,5);
        this->DICT_TC2DI5CH2DC24Flt_B1 = crrcMvb->getBool(0x162,25,6);
        this->DICT_TC2DI5CH1BCGNormal_B1 = crrcMvb->getBool(0x162,25,7);

        //0X116-168 CCU-RIOM1-6
        this->CTDO_TC1DO1CH7PartitionWallDoorOpen_B1 = crrcMvb->getBool(0x118,20,1);
        this->CTDO_TC1DO1CH6FireCheck_B1 = crrcMvb->getBool(0x118,20,2);
        this->CTDO_TC1DO1CH5BroadcastBreakerClose_B1 = crrcMvb->getBool(0x118,20,3);
        this->CTDO_TC1DO1CH4DoorBreakerClose_B1 = crrcMvb->getBool(0x118,20,4);
        this->CTDO_TC1DO1CH3BroadcastBreakerOpen_B1 = crrcMvb->getBool(0x118,20,5);
        this->CTDO_TC1DO1CH2DoorBreakerOpen_B1 = crrcMvb->getBool(0x118,20,6);
        this->CTDO_TC1DO1CH1CompressorStart_B1 = crrcMvb->getBool(0x118,20,7);

        this->CTDO_MP1DO1CH5FireCheck_B1 = crrcMvb->getBool(0x128,20,3);
        this->CTDO_MP1DO1CH4BroadcastBreakerClose_B1 = crrcMvb->getBool(0x128,20,4);
        this->CTDO_MP1DO1CH3DoorBreakerClose_B1 = crrcMvb->getBool(0x128,20,5);
        this->CTDO_MP1DO1CH2BroadcastBreakerOpen_B1 = crrcMvb->getBool(0x128,20,6);
        this->CTDO_MP1DO1CH1DoorBreakerOpen_B1 = crrcMvb->getBool(0x128,20,7);

        this->CTDO_M1DO1CH6LineBreakerOpen_B1 = crrcMvb->getBool(0x138,20,2);
        this->CTDO_M1DO1CH5BroadcastBreakerClose_B1 = crrcMvb->getBool(0x138,20,3);
        this->CTDO_M1DO1CH4DoorBreakerClose_B1 = crrcMvb->getBool(0x138,20,4);
        this->CTDO_M1DO1CH3BroadcastBreakerOpen_B1 = crrcMvb->getBool(0x138,20,5);
        this->CTDO_M1DO1CH2DoorBreakerOpen_B1 = crrcMvb->getBool(0x138,20,6);
        this->CTDO_M1DO1CH1FireCheck_B1 = crrcMvb->getBool(0x138,20,7);

        this->CTDO_M2DO1CH6LineBreakerOpen_B1 = crrcMvb->getBool(0x148,20,2);
        this->CTDO_M2DO1CH5BroadcastBreakerClose_B1 = crrcMvb->getBool(0x148,20,3);
        this->CTDO_M2DO1CH4DoorBreakerClose_B1 = crrcMvb->getBool(0x148,20,4);
        this->CTDO_M2DO1CH3BroadcastBreakerOpen_B1 = crrcMvb->getBool(0x148,20,5);
        this->CTDO_M2DO1CH2DoorBreakerOpen_B1 = crrcMvb->getBool(0x148,20,6);
        this->CTDO_M2DO1CH1FireCheck_B1 = crrcMvb->getBool(0x148,20,7);

        this->CTDO_MP2DO1CH5FireCheck_B1 = crrcMvb->getBool(0x158,20,3);
        this->CTDO_MP2DO1CH4BroadcastBreakerClose_B1 = crrcMvb->getBool(0x158,20,4);
        this->CTDO_MP2DO1CH3DoorBreakerClose_B1 = crrcMvb->getBool(0x158,20,5);
        this->CTDO_MP2DO1CH2BroadcastBreakerOpen_B1 = crrcMvb->getBool(0x158,20,6);
        this->CTDO_MP2DO1CH1DoorBreakerOpen_B1 = crrcMvb->getBool(0x158,20,7);

        this->CTDO_TC2DO1CH7PartitionWallDoorOpen_B1 = crrcMvb->getBool(0x168,20,1);
        this->CTDO_TC2DO1CH6FireCheck_B1 = crrcMvb->getBool(0x168,20,2);
        this->CTDO_TC2DO1CH5BroadcastBreakerClose_B1 = crrcMvb->getBool(0x168,20,3);
        this->CTDO_TC2DO1CH4DoorBreakerClose_B1 = crrcMvb->getBool(0x168,20,4);
        this->CTDO_TC2DO1CH3BroadcastBreakerOpen_B1 = crrcMvb->getBool(0x168,20,5);
        this->CTDO_TC2DO1CH2DoorBreakerOpen_B1 = crrcMvb->getBool(0x168,20,6);
        this->CTDO_TC2DO1CH1CompressorStart_B1 = crrcMvb->getBool(0x168,20,7);

    }

    /////*******CCU -- HMI**********///////
    {
        this->CTHM_CCU1On_B1 = crrcMvb->getBool(0x218,0,0);
        this->CTHM_CCU2On_B1 = crrcMvb->getBool(0x218,0,1);
        this->CTHM_ERM1On_B1 = crrcMvb->getBool(0x218,0,2);
        this->CTHM_ERM2On_B1 = crrcMvb->getBool(0x218,0,3);
        this->CTHM_HMI1On_B1 = crrcMvb->getBool(0x218,0,4);
        this->CTHM_HMI2On_B1 = crrcMvb->getBool(0x218,0,5);

        this->CTHM_TC1RIOMGWOn_B1 = crrcMvb->getBool(0x218,1,0);
        this->CTHM_Mp1RIOMGWOn_B1 = crrcMvb->getBool(0x218,1,1);
        this->CTHM_M1RIOMGWOn_B1 = crrcMvb->getBool(0x218,1,2);
        this->CTHM_M2RIOMGWOn_B1 = crrcMvb->getBool(0x218,1,3);
        this->CTHM_Mp2RIOMGWOn_B1 = crrcMvb->getBool(0x218,1,4);
        this->CTHM_TC2RIOMGWOn_B1 = crrcMvb->getBool(0x218,1,5);

        this->CTHM_TC1DI1On_B1 = crrcMvb->getBool(0x218,2,0);
        this->CTHM_TC1DI2On_B1 = crrcMvb->getBool(0x218,2,1);
        this->CTHM_TC1DI3On_B1 = crrcMvb->getBool(0x218,2,2);
        this->CTHM_TC1DI4On_B1 = crrcMvb->getBool(0x218,2,3);
        this->CTHM_TC1DI5On_B1 = crrcMvb->getBool(0x218,2,4);
        this->CTHM_TC1DO1On_B1 = crrcMvb->getBool(0x218,2,5);
        this->CTHM_TC1AX1On_B1 = crrcMvb->getBool(0x218,2,6);

        this->CTHM_MP1DI1On_B1 = crrcMvb->getBool(0x218,3,0);
        this->CTHM_MP1DO1On_B1 = crrcMvb->getBool(0x218,3,1);
        this->CTHM_M1DI1On_B1 = crrcMvb->getBool(0x218,3,4);
        this->CTHM_M1DO1On_B1 = crrcMvb->getBool(0x218,3,5);

        this->CTHM_MP2DI1On_B1 = crrcMvb->getBool(0x218,4,0);
        this->CTHM_MP2DO1On_B1 = crrcMvb->getBool(0x218,4,1);
        this->CTHM_M2DI1On_B1 = crrcMvb->getBool(0x218,4,4);
        this->CTHM_M2DO1On_B1 = crrcMvb->getBool(0x218,4,5);

        this->CTHM_TC2DI1On_B1 = crrcMvb->getBool(0x218,5,0);
        this->CTHM_TC2DI2On_B1 = crrcMvb->getBool(0x218,5,1);
        this->CTHM_TC2DI3On_B1 = crrcMvb->getBool(0x218,5,2);
        this->CTHM_TC2DI4On_B1 = crrcMvb->getBool(0x218,5,3);
        this->CTHM_TC2DI5On_B1 = crrcMvb->getBool(0x218,5,4);
        this->CTHM_TC2DO1On_B1 = crrcMvb->getBool(0x218,5,5);
        this->CTHM_TC2AX1On_B1 = crrcMvb->getBool(0x218,5,6);

        this->CTHM_BCU1On_B1 = crrcMvb->getBool(0x218,6,0);
        this->CTHM_BCU2On_B1 = crrcMvb->getBool(0x218,6,1);
        this->CTHM_BCU3On_B1 = crrcMvb->getBool(0x218,6,2);
        this->CTHM_BCU4On_B1 = crrcMvb->getBool(0x218,6,3);
        this->CTHM_DCUM1On_B1 = crrcMvb->getBool(0x218,6,4);
        this->CTHM_DCUM2On_B1 = crrcMvb->getBool(0x218,6,5);
        this->CTHM_DCUM3On_B1 = crrcMvb->getBool(0x218,6,6);
        this->CTHM_DCUM4On_B1 = crrcMvb->getBool(0x218,6,7);
        this->CTHM_ACU1On_B1 = crrcMvb->getBool(0x218,7,0);
        this->CTHM_ACU2On_B1 = crrcMvb->getBool(0x218,7,1);
        this->CTHM_ACU3On_B1 = crrcMvb->getBool(0x218,7,2);
        this->CTHM_ACU4On_B1 = crrcMvb->getBool(0x218,7,3);
        this->CTHM_EDCU1On_B1 = crrcMvb->getBool(0x218,7,4);
        this->CTHM_EDCU2On_B1 = crrcMvb->getBool(0x218,7,5);
        this->CTHM_EDCU3On_B1 = crrcMvb->getBool(0x218,7,6);
        this->CTHM_EDCU4On_B1 = crrcMvb->getBool(0x218,7,7);
        this->CTHM_EDCU5On_B1 = crrcMvb->getBool(0x218,8,0);
        this->CTHM_EDCU6On_B1 = crrcMvb->getBool(0x218,8,1);
        this->CTHM_EDCU7On_B1 = crrcMvb->getBool(0x218,8,2);
        this->CTHM_EDCU8On_B1 = crrcMvb->getBool(0x218,8,3);
        this->CTHM_EDCU9On_B1 = crrcMvb->getBool(0x218,8,4);
        this->CTHM_EDCU10On_B1 = crrcMvb->getBool(0x218,8,5);
        this->CTHM_EDCU11On_B1 = crrcMvb->getBool(0x218,8,6);
        this->CTHM_EDCU12On_B1 = crrcMvb->getBool(0x218,8,7);
        this->CTHM_PIS1On_B1 = crrcMvb->getBool(0x218,9,0);
        this->CTHM_PIS2On_B1 = crrcMvb->getBool(0x218,9,1);
        this->CTHM_HVAC1On_B1 = crrcMvb->getBool(0x218,9,2);
        this->CTHM_HVAC2On_B1 = crrcMvb->getBool(0x218,9,3);
        this->CTHM_HVAC3On_B1 = crrcMvb->getBool(0x218,9,4);
        this->CTHM_HVAC4On_B1 = crrcMvb->getBool(0x218,9,5);
        this->CTHM_HVAC5On_B1 = crrcMvb->getBool(0x218,9,6);
        this->CTHM_HVAC6On_B1 = crrcMvb->getBool(0x218,9,7);
        this->CTHM_ATC1On_B1 = crrcMvb->getBool(0x218,10,0);
        this->CTHM_WMS2On_B1 = crrcMvb->getBool(0x218,10,2);
        this->CTHM_CCUD1On_B1 = crrcMvb->getBool(0x218,10,4);
        this->CTHM_CCUD2On_B1 = crrcMvb->getBool(0x218,10,5);
        this->CTHM_BCU1Master = crrcMvb->getBool(0x218,11,0);
        this->CTHM_BCU2Master = crrcMvb->getBool(0x218,11,1);
        this->CTHM_BCU3Master = crrcMvb->getBool(0x218,11,2);
        this->CTHM_BCU4Master = crrcMvb->getBool(0x218,11,3);


        this->CTHM_PIS1Active_B1 = crrcMvb->getBool(0x218,12,0);
        this->CTHM_PIS2Active_B1 = crrcMvb->getBool(0x218,12,1);
        this->CTHM_CCU1Active_B1 = crrcMvb->getBool(0x218,12,4);
        this->CTHM_CCU2Active_B1 = crrcMvb->getBool(0x218,12,5);
        this->CTHM_TC1Active_B1 = crrcMvb->getBool(0x218,12,6);
        this->CTHM_TC2Active_B1 = crrcMvb->getBool(0x218,12,7);
        this->CTHM_Traction_B1 = crrcMvb->getBool(0x218,13,0);
        this->CTHM_Brake_B1 = crrcMvb->getBool(0x218,13,1);
        this->CTHM_FastBrake_B1 = crrcMvb->getBool(0x218,13,2);
        this->CTHM_EmgyBrake_B1 = crrcMvb->getBool(0x218,13,3);
        this->CTHM_Backward_B1 = crrcMvb->getBool(0x218,13,4);
        this->CTHM_Forward_B1 = crrcMvb->getBool(0x218,13,5);
        this->CTHM_WorkshopPowerSupplyMP1_B1 = crrcMvb->getBool(0x218,13,6);
        this->CTHM_WorkshopPowerSupplyMP2_B1 = crrcMvb->getBool(0x218,12,3);

        this->CTHM_BatteryLow_B1 = crrcMvb->getBool(0x218,13,7);
        this->CTHM_MP1PanStatusUnknown_B1 = crrcMvb->getBool(0x218,14,0);
        this->CTHM_MP2PanStatusUnknown_B1 = crrcMvb->getBool(0x218,14,1);


        this->CTHM_LineNum_U8 = crrcMvb->getUnsignedChar(0x218,20);
        this->CTHM_TrainNum_U8 = crrcMvb->getUnsignedChar(0x218,21);
        this->CTHM_FirstStationID_U8 = crrcMvb->getUnsignedChar(0x218,22);
        this->CTHM_LastStationID_U8 = crrcMvb->getUnsignedChar(0x218,23);
        this->CTHM_Grade_U8 = crrcMvb->getUnsignedChar(0x218,24);
        this->CTHM_CurrentStation_U8 = crrcMvb->getUnsignedChar(0x218,25);
        this->CTHM_NextStation_U8 = crrcMvb->getUnsignedChar(0x21a,14);
        this->CTHM_TrainSpeed_U16 = crrcMvb->getUnsignedInt(0x218,26);
        this->CTHM_CatenaryVoltage_U16 = crrcMvb->getUnsignedInt(0x218,28);
        this->CTHM_CatenaryCurrent_U16 = crrcMvb->getUnsignedInt(0x218,30);
        this->CTHM_TrainLimitSpeed_U16 = crrcMvb->getUnsignedInt(0x218,18);

        this->CTHM_CCU1SWVer_U8 = crrcMvb->getUnsignedChar(0x219,0);
        this->CTHM_CCU1MVBVer_U8 = crrcMvb->getUnsignedChar(0x219,1);
        this->CTHM_CCU1SDBVer_U8 = crrcMvb->getUnsignedChar(0x219,2);
        this->CTHM_CCU1VxWorksVer_U8 = crrcMvb->getUnsignedChar(0x219,3);
        this->CTHM_CCU1FPGAVer_U8 = crrcMvb->getUnsignedChar(0x219,4);
        this->CTHM_CCU2SWVer_U8 = crrcMvb->getUnsignedChar(0x219,5);
        this->CTHM_CCU2MVBVer_U8 = crrcMvb->getUnsignedChar(0x219,6);
        this->CTHM_CCU2SDBVer_U8 = crrcMvb->getUnsignedChar(0x219,7);
        this->CTHM_CCU2VxWorksVer_U8 = crrcMvb->getUnsignedChar(0x219,8);
        this->CTHM_CCU2FPGAVer_U8 = crrcMvb->getUnsignedChar(0x219,9);

        this->CTHM_WheelDig1FedBk_U8 = crrcMvb->getUnsignedChar(0x219,10);
        this->CTHM_WheelDig2FedBk_U8 = crrcMvb->getUnsignedChar(0x219,11);
        this->CTHM_WheelDig3FedBk_U8 = crrcMvb->getUnsignedChar(0x219,12);
        this->CTHM_WheelDig4FedBk_U8 = crrcMvb->getUnsignedChar(0x219,13);
        this->CTHM_WheelDig5FedBk_U8 = crrcMvb->getUnsignedChar(0x219,14);
        this->CTHM_WheelDig6FedBk_U8 = crrcMvb->getUnsignedChar(0x219,15);
        this->CTHM_WheelDigReFedBk_U8 = crrcMvb->getUnsignedChar(0x219,16);

        this->CTHM_TC1Load_U16 = crrcMvb->getUnsignedInt(0x219,20);
        this->CTHM_MP1Load_U16 = crrcMvb->getUnsignedInt(0x219,22);
        this->CTHM_M1Load_U16 = crrcMvb->getUnsignedInt(0x219,24);
        this->CTHM_M2Load_U16 = crrcMvb->getUnsignedInt(0x219,26);
        this->CTHM_MP2Load_U16 = crrcMvb->getUnsignedInt(0x219,28);
        this->CTHM_TC2Load_U16 = crrcMvb->getUnsignedInt(0x219,30);
        this->CTHM_Acceleration_I16 = crrcMvb->getSignedInt(0x21A,0);
        this->CTHM_Acceleration40_I16 = crrcMvb->getSignedInt(0x21A,2);
        this->CTHM_Acceleration80_I16 = crrcMvb->getSignedInt(0x21A,4);
        this->CTHM_Deceleration_I16 = crrcMvb->getSignedInt(0x21A,6);
        this->CTHM_AcDeStartVelocity_U16 = crrcMvb->getUnsignedInt(0x21A,8);
        this->CTHM_AcDeDistance_U16 = crrcMvb->getUnsignedInt(0x21A,10);
        this->CTHM_AcDeTime_U16 = crrcMvb->getUnsignedInt(0x21A,12);
        this->CTHM_AcDeTestOn_B1 = crrcMvb->getBool(0x21A,15,0);

        CTHM_TC1Bogie1Select_U8  = crrcMvb->getUnsignedChar(0x21A,20);
        CTHM_TC1Bogie2Select_U8  = crrcMvb->getUnsignedChar(0x21A,21);
        CTHM_MP1Bogie3Select_U8  = crrcMvb->getUnsignedChar(0x21A,22);
        CTHM_MP1Bogie4Select_U8  = crrcMvb->getUnsignedChar(0x21A,23);
        CTHM_M1Bogie5Select_U8   = crrcMvb->getUnsignedChar(0x21A,24);
        CTHM_M1Bogie6Select_U8   = crrcMvb->getUnsignedChar(0x21A,25);
        CTHM_M2Bogie6Select_U8   = crrcMvb->getUnsignedChar(0x21A,26);
        CTHM_M2Bogie5Select_U8   = crrcMvb->getUnsignedChar(0x21A,27);
        CTHM_MP2Bogie4Select_U8  = crrcMvb->getUnsignedChar(0x21A,28);
        CTHM_MP2Bogie3Select_U8  = crrcMvb->getUnsignedChar(0x21A,29);
        CTHM_TC2Bogie2Select_U8  = crrcMvb->getUnsignedChar(0x21A,30);
        CTHM_TC2Bogie1Select_U8  = crrcMvb->getUnsignedChar(0x21A,31);

        //bg online
        CTHM_BCULBg1Online_B1 = (CTHM_TC1Bogie1Select_U8==0)?false:true;
        CTHM_BCULBg2Online_B1 = (CTHM_TC1Bogie2Select_U8==0)?false:true;
        CTHM_BCULBg3Online_B1 = (CTHM_MP1Bogie3Select_U8==0)?false:true;
        CTHM_BCULBg4Online_B1 = (CTHM_MP1Bogie4Select_U8==0)?false:true;
        CTHM_BCULBg5Online_B1 = (CTHM_M1Bogie5Select_U8==0)?false:true;
        CTHM_BCULBg6Online_B1 = (CTHM_M1Bogie6Select_U8==0)?false:true;

        CTHM_BCURBg1Online_B1 = (CTHM_TC2Bogie1Select_U8==0)?false:true;
        CTHM_BCURBg2Online_B1 = (CTHM_TC2Bogie2Select_U8==0)?false:true;
        CTHM_BCURBg3Online_B1 = (CTHM_MP2Bogie3Select_U8==0)?false:true;
        CTHM_BCURBg4Online_B1 = (CTHM_MP2Bogie4Select_U8==0)?false:true;
        CTHM_BCURBg5Online_B1 = (CTHM_M2Bogie5Select_U8==0)?false:true;
        CTHM_BCURBg6Online_B1 = (CTHM_M2Bogie6Select_U8==0)?false:true;

        float tmp_pkgtc1 = ((float)this->CTHM_TC1Load_U16/100 - DefaultLoadTC1.toFloat()*1.05);
        float tmp_pkgmp1 = ((float)this->CTHM_MP1Load_U16/100 - DefaultLoadMP1.toFloat()*1.1);
        float tmp_pkgm1 = ((float)this->CTHM_M1Load_U16/100 - DefaultLoadM1.toFloat()*1.1);
        float tmp_pkgm2 = ((float)this->CTHM_M2Load_U16/100 - DefaultLoadM2.toFloat()*1.1);
        float tmp_pkgmp2 = ((float)this->CTHM_MP2Load_U16/100 - DefaultLoadMP2.toFloat()*1.1);
        float tmp_pkgtc2 = ((float)this->CTHM_TC2Load_U16/100 - DefaultLoadTC2.toFloat()*1.05);

        tmp_pkgtc1 = tmp_pkgtc1>0?tmp_pkgtc1:0;
        tmp_pkgmp1 = tmp_pkgmp1>0?tmp_pkgmp1:0;
        tmp_pkgm1 = tmp_pkgm1>0?tmp_pkgm1:0;
        tmp_pkgm2 = tmp_pkgm2>0?tmp_pkgm2:0;
        tmp_pkgmp2 = tmp_pkgmp2>0?tmp_pkgmp2:0;
        tmp_pkgtc2 = tmp_pkgtc2>0?tmp_pkgtc2:0;

        PLoad_TC1 = QString::number((float)((tmp_pkgtc1/(DefaultFullLoadTC1.toFloat()))*100>=3)?(((float)tmp_pkgtc1/(DefaultFullLoadTC1.toFloat()))*100):0,10,0);
        PLoad_MP1 = QString::number((float)((tmp_pkgmp1/(DefaultFullLoadMP1.toFloat()))*100>=3)?(((float)tmp_pkgmp1/(DefaultFullLoadMP1.toFloat()))*100):0,10,0);
        PLoad_M1 = QString::number((float)((tmp_pkgm1/(DefaultFullLoadM1.toFloat()))*100>=3)?(((float)tmp_pkgm1/(DefaultFullLoadM1.toFloat()))*100):0,10,0);
        PLoad_M2 = QString::number((float)((tmp_pkgm2/(DefaultFullLoadM2.toFloat()))*100>=3)?(((float)tmp_pkgm2/(DefaultFullLoadM2.toFloat()))*100):0,10,0);
        PLoad_MP2 = QString::number((float)((tmp_pkgmp2/(DefaultFullLoadMP2.toFloat()))*100>=3)?(((float)tmp_pkgmp2/(DefaultFullLoadMP2.toFloat()))*100):0,10,0);
        PLoad_TC2 = QString::number((float)((tmp_pkgtc2/(DefaultFullLoadTC2.toFloat()))*100>=3)?(((float)tmp_pkgtc2/(DefaultFullLoadTC2.toFloat()))*100):0,10,0);
    }

    /////*******HMI -- CCU**********///////
    {

        HMiCT_LifeSignal_U16++;

        if(this->HMIPosition == 1)
        {
            crrcMvb->setUnsignedInt(0x200,0,HMiCT_LifeSignal_U16);
            crrcMvb->setUnsignedChar(0x200,2,HMiCT_HMISWVerH_U8);
            crrcMvb->setUnsignedChar(0x200,3,HMiCT_HMISWVerL_U8);
            crrcMvb->setUnsignedChar(0x200,31,HMiCT_SetFlagChecker_U8);

            crrcMvb->setUnsignedChar(0x201,0,HMiCT_Year_U8);
            crrcMvb->setUnsignedChar(0x201,1,HMiCT_Month_U8);
            crrcMvb->setUnsignedChar(0x201,2,HMiCT_Day_U8);
            crrcMvb->setUnsignedChar(0x201,3,HMiCT_Hour_U8);
            crrcMvb->setUnsignedChar(0x201,4,HMiCT_Minute_U8);
            crrcMvb->setUnsignedChar(0x201,5,HMiCT_Second_U8);
            crrcMvb->setUnsignedChar(0x201,6,HMiCT_TrainNum_U8);
            crrcMvb->setUnsignedChar(0x201,7,HMiCT_LineNum_U8);
            crrcMvb->setUnsignedChar(0x201,8,HMiCT_StationIDFirst_U8);
            crrcMvb->setUnsignedChar(0x201,9,HMiCT_StationIDLast_U8);

            crrcMvb->setBool(0x201,10,0,HMiCT_SAVETime_B1);
            crrcMvb->setBool(0x201,10,1,HMiCT_SAVETrainNum_B1);
            crrcMvb->setBool(0x201,10,2,HMiCT_SAVELineNum_B1);
            crrcMvb->setBool(0x201,10,3,HMiCT_SAVEFirstStation_B1);
            crrcMvb->setBool(0x201,10,4,HMiCT_SAVELastStation_B1);

            crrcMvb->setUnsignedChar(0x202,0,HMiCT_WheelDia1_U8);
            crrcMvb->setUnsignedChar(0x202,1,HMiCT_WheelDia2_U8);
            crrcMvb->setUnsignedChar(0x202,2,HMiCT_WheelDia3_U8);
            crrcMvb->setUnsignedChar(0x202,3,HMiCT_WheelDia4_U8);
            crrcMvb->setUnsignedChar(0x202,4,HMiCT_WheelDia5_U8);
            crrcMvb->setUnsignedChar(0x202,5,HMiCT_WheelDia6_U8);
            crrcMvb->setUnsignedChar(0x202,6,HMiCT_WheelDiaRe_U8);

            crrcMvb->setBool(0x202,8,0,HMiCT_SAVEWheelDig1_B1);
            crrcMvb->setBool(0x202,8,1,HMiCT_SAVEWheelDig2_B1);
            crrcMvb->setBool(0x202,8,2,HMiCT_SAVEWheelDig3_B1);
            crrcMvb->setBool(0x202,8,3,HMiCT_SAVEWheelDig4_B1);
            crrcMvb->setBool(0x202,8,4,HMiCT_SAVEWheelDig5_B1);
            crrcMvb->setBool(0x202,8,5,HMiCT_SAVEWheelDig6_B1);
            crrcMvb->setBool(0x202,8,6,HMiCT_SAVEWheelDigRe_B1);

            crrcMvb->setBool(0x201,29,4,HMiCT_Mp1DCUFaultReset_B1);
            crrcMvb->setBool(0x201,29,5,HMiCT_M1DCUFaultReset_B1);
            crrcMvb->setBool(0x201,29,6,HMiCT_M2DCUFaultReset_B1);
            crrcMvb->setBool(0x201,29,7,HMiCT_Mp2DCUFaultReset_B1);
            crrcMvb->setBool(0x201,30,0,HMiCT_Mp1DynamicBrkCut_B1);
            crrcMvb->setBool(0x201,30,1,HMiCT_M1DynamicBrkCut_B1);
            crrcMvb->setBool(0x201,30,2,HMiCT_M2DynamicBrkCut_B1);
            crrcMvb->setBool(0x201,30,3,HMiCT_Mp2DynamicBrkCut_B1);
            crrcMvb->setBool(0x201,30,4,HMiCT_ACU1Cutoff_B1);
            crrcMvb->setBool(0x201,30,5,HMiCT_ACU2Cutoff_B1);
            crrcMvb->setBool(0x201,30,6,HMiCT_ACU3Cutoff_B1);
            crrcMvb->setBool(0x201,30,7,HMiCT_ACU4Cutoff_B1);
            crrcMvb->setBool(0x201,31,0,HMiCT_ACU1Reset_B1);
            crrcMvb->setBool(0x201,31,1,HMiCT_ACU2Reset_B1);
            crrcMvb->setBool(0x201,31,2,HMiCT_ACU3Reset_B1);
            crrcMvb->setBool(0x201,31,3,HMiCT_ACU4Reset_B1);
            crrcMvb->setBool(0x201,31,4,HMiCT_PWDoorAlarmStop_B1);


            crrcMvb->setBool(0x201,11,0,HMiCT_HVACFireMode_B1);
            crrcMvb->setBool(0x201,11,1,HMiCT_HVACPreOff_B1);
            crrcMvb->setBool(0x201,11,2,HMiCT_HVACEmgcyVenti_B1);
            crrcMvb->setBool(0x201,11,3,HMiCT_HVACVenti_B1);
            crrcMvb->setBool(0x201,11,4,HMiCT_HVACAutoCold_B1);
            crrcMvb->setBool(0x201,11,5,HMiCT_HVACAutoWarm_B1);
            crrcMvb->setBool(0x201,11,6,HMiCT_HVACMannualMode_B1);
            crrcMvb->setBool(0x201,11,7,HMiCT_HVACStop_B1);

            crrcMvb->setBool(0x201,12,0,HMiCT_HVACStart_B1);
            crrcMvb->setBool(0x201,12,1,HMiCT_Reduce2_B1);
            crrcMvb->setBool(0x201,12,2,HMiCT_Reduce1_B1);
            crrcMvb->setBool(0x201,12,3,HMiCT_Add1_B1);
            crrcMvb->setBool(0x201,12,4,HMiCT_Add2_B1);
            crrcMvb->setBool(0x201,12,5,HMiCT_UICMode_B1);
            crrcMvb->setBool(0x201,12,6,HMiCT_SAVEHVACMode1_B1);
            crrcMvb->setBool(0x201,12,7,HMiCT_SAVEHVACTemp1_B1);

            crrcMvb->setUnsignedChar(0x201,13,HMiCT_SAVEHVACPosition_U8);
            crrcMvb->setUnsignedChar(0x201,14,HMiCT_SetTemp_U8);

            crrcMvb->setBool(0x202,13,0,HMiCT_PowerOFF_B1[6]);// 液磁系统 6-11车门  0-5列广
            crrcMvb->setBool(0x202,13,1,HMiCT_PowerOFF_B1[7]);
            crrcMvb->setBool(0x202,13,2,HMiCT_PowerOFF_B1[8]);
            crrcMvb->setBool(0x202,13,3,HMiCT_PowerOFF_B1[9]);
            crrcMvb->setBool(0x202,13,4,HMiCT_PowerOFF_B1[10]);
            crrcMvb->setBool(0x202,13,5,HMiCT_PowerOFF_B1[11]);
            crrcMvb->setBool(0x202,13,6,HMiCT_PowerON_B1[6]);
            crrcMvb->setBool(0x202,13,7,HMiCT_PowerON_B1[7]);
            crrcMvb->setBool(0x202,14,0,HMiCT_PowerON_B1[8]);
            crrcMvb->setBool(0x202,14,1,HMiCT_PowerON_B1[9]);
            crrcMvb->setBool(0x202,14,2,HMiCT_PowerON_B1[10]);
            crrcMvb->setBool(0x202,14,3,HMiCT_PowerON_B1[11]);
            crrcMvb->setBool(0x202,14,4,HMiCT_PowerOFF_B1[0]);
            crrcMvb->setBool(0x202,14,5,HMiCT_PowerOFF_B1[1]);
            crrcMvb->setBool(0x202,14,6,HMiCT_PowerOFF_B1[2]);
            crrcMvb->setBool(0x202,14,7,HMiCT_PowerOFF_B1[3]);
            crrcMvb->setBool(0x202,15,0,HMiCT_PowerOFF_B1[4]);
            crrcMvb->setBool(0x202,15,1,HMiCT_PowerOFF_B1[5]);
            crrcMvb->setBool(0x202,15,2,HMiCT_PowerON_B1[0]);
            crrcMvb->setBool(0x202,15,3,HMiCT_PowerON_B1[1]);
            crrcMvb->setBool(0x202,15,4,HMiCT_PowerON_B1[2]);
            crrcMvb->setBool(0x202,15,5,HMiCT_PowerON_B1[3]);
            crrcMvb->setBool(0x202,15,6,HMiCT_PowerON_B1[4]);
            crrcMvb->setBool(0x202,15,7,HMiCT_PowerON_B1[5]);
            crrcMvb->setBool(0x202,17,3,HMiCT_BCUSelfTestReq_B1);


            crrcMvb->setBool(0x203,26,0,HMiCT_RunStatSetFlag_B1);
            crrcMvb->setUnsignedChar(0x203,27,HMiCT_RunStatSetType_U8);
            crrcMvb->setUnsignedInt32(0x203,28,HMiCT_RunStatSetData_U32);

            crrcMvb->setBool(0x203,25,0,HMiCT_DCURunClear_B1);
            crrcMvb->setBool(0x203,25,1,HMiCT_ACMRunClear_B1);
            crrcMvb->setBool(0x203,25,4,HMiCT_TC1APClear_B1);
            crrcMvb->setBool(0x203,25,5,HMiCT_TC2APClear_B1);
            crrcMvb->setBool(0x203,1,6,HMiCT_ACDETestStopFlag_B1);
            crrcMvb->setBool(0x203,1,7,HMiCT_ACDETestStartFlag_B1);


            HM1CT_HMISWVerH_U8 = HMiCT_HMISWVerH_U8;
            HM1CT_HMISWVerL_U8 = HMiCT_HMISWVerL_U8;
            HM1CT_LifeSignal_U16 = HMiCT_LifeSignal_U16;

            HM2CT_HMISWVerH_U8 = this->crrcMvb->getUnsignedChar(0x280,2);
            HM2CT_HMISWVerL_U8 = this->crrcMvb->getUnsignedChar(0x280,3);
            HM2CT_LifeSignal_U16 = this->crrcMvb->getUnsignedInt(0x280,0);

        }else if(this->HMIPosition == 2)
        {
            crrcMvb->setUnsignedInt(0x280,0,HMiCT_LifeSignal_U16);
            crrcMvb->setUnsignedChar(0x280,2,HMiCT_HMISWVerH_U8);
            crrcMvb->setUnsignedChar(0x280,3,HMiCT_HMISWVerL_U8);
            crrcMvb->setUnsignedChar(0x280,31,HMiCT_SetFlagChecker_U8);

            crrcMvb->setUnsignedChar(0x281,0,HMiCT_Year_U8);
            crrcMvb->setUnsignedChar(0x281,1,HMiCT_Month_U8);
            crrcMvb->setUnsignedChar(0x281,2,HMiCT_Day_U8);
            crrcMvb->setUnsignedChar(0x281,3,HMiCT_Hour_U8);
            crrcMvb->setUnsignedChar(0x281,4,HMiCT_Minute_U8);
            crrcMvb->setUnsignedChar(0x281,5,HMiCT_Second_U8);
            crrcMvb->setUnsignedChar(0x281,6,HMiCT_TrainNum_U8);
            crrcMvb->setUnsignedChar(0x281,7,HMiCT_LineNum_U8);
            crrcMvb->setUnsignedChar(0x281,8,HMiCT_StationIDFirst_U8);
            crrcMvb->setUnsignedChar(0x281,9,HMiCT_StationIDLast_U8);

            crrcMvb->setBool(0x281,10,0,HMiCT_SAVETime_B1);
            crrcMvb->setBool(0x281,10,1,HMiCT_SAVETrainNum_B1);
            crrcMvb->setBool(0x281,10,2,HMiCT_SAVELineNum_B1);
            crrcMvb->setBool(0x281,10,3,HMiCT_SAVEFirstStation_B1);
            crrcMvb->setBool(0x281,10,4,HMiCT_SAVELastStation_B1);

            crrcMvb->setUnsignedChar(0x282,0,HMiCT_WheelDia1_U8);
            crrcMvb->setUnsignedChar(0x282,1,HMiCT_WheelDia2_U8);
            crrcMvb->setUnsignedChar(0x282,2,HMiCT_WheelDia3_U8);
            crrcMvb->setUnsignedChar(0x282,3,HMiCT_WheelDia4_U8);
            crrcMvb->setUnsignedChar(0x282,4,HMiCT_WheelDia5_U8);
            crrcMvb->setUnsignedChar(0x282,5,HMiCT_WheelDia6_U8);
            crrcMvb->setUnsignedChar(0x282,6,HMiCT_WheelDiaRe_U8);

            crrcMvb->setBool(0x282,8,0,HMiCT_SAVEWheelDig1_B1);
            crrcMvb->setBool(0x282,8,1,HMiCT_SAVEWheelDig2_B1);
            crrcMvb->setBool(0x282,8,2,HMiCT_SAVEWheelDig3_B1);
            crrcMvb->setBool(0x282,8,3,HMiCT_SAVEWheelDig4_B1);
            crrcMvb->setBool(0x282,8,4,HMiCT_SAVEWheelDig5_B1);
            crrcMvb->setBool(0x282,8,5,HMiCT_SAVEWheelDig6_B1);
            crrcMvb->setBool(0x282,8,6,HMiCT_SAVEWheelDigRe_B1);

            crrcMvb->setBool(0x281,29,4,HMiCT_Mp1DCUFaultReset_B1);
            crrcMvb->setBool(0x281,29,5,HMiCT_M1DCUFaultReset_B1);
            crrcMvb->setBool(0x281,29,6,HMiCT_M2DCUFaultReset_B1);
            crrcMvb->setBool(0x281,29,7,HMiCT_Mp2DCUFaultReset_B1);
            crrcMvb->setBool(0x281,30,0,HMiCT_Mp1DynamicBrkCut_B1);
            crrcMvb->setBool(0x281,30,1,HMiCT_M1DynamicBrkCut_B1);
            crrcMvb->setBool(0x281,30,2,HMiCT_M2DynamicBrkCut_B1);
            crrcMvb->setBool(0x281,30,3,HMiCT_Mp2DynamicBrkCut_B1);
            crrcMvb->setBool(0x281,30,4,HMiCT_ACU1Cutoff_B1);
            crrcMvb->setBool(0x281,30,5,HMiCT_ACU2Cutoff_B1);
            crrcMvb->setBool(0x281,30,6,HMiCT_ACU3Cutoff_B1);
            crrcMvb->setBool(0x281,30,7,HMiCT_ACU4Cutoff_B1);
            crrcMvb->setBool(0x281,31,0,HMiCT_ACU1Reset_B1);
            crrcMvb->setBool(0x281,31,1,HMiCT_ACU2Reset_B1);
            crrcMvb->setBool(0x281,31,2,HMiCT_ACU3Reset_B1);
            crrcMvb->setBool(0x281,31,3,HMiCT_ACU4Reset_B1);
            crrcMvb->setBool(0x281,31,4,HMiCT_PWDoorAlarmStop_B1);

            crrcMvb->setBool(0x281,11,0,HMiCT_HVACFireMode_B1);
            crrcMvb->setBool(0x281,11,1,HMiCT_HVACPreOff_B1);
            crrcMvb->setBool(0x281,11,2,HMiCT_HVACEmgcyVenti_B1);
            crrcMvb->setBool(0x281,11,3,HMiCT_HVACVenti_B1);
            crrcMvb->setBool(0x281,11,4,HMiCT_HVACAutoCold_B1);
            crrcMvb->setBool(0x281,11,5,HMiCT_HVACAutoWarm_B1);
            crrcMvb->setBool(0x281,11,6,HMiCT_HVACMannualMode_B1);
            crrcMvb->setBool(0x281,11,7,HMiCT_HVACStop_B1);

            crrcMvb->setBool(0x281,12,0,HMiCT_HVACStart_B1);
            crrcMvb->setBool(0x281,12,1,HMiCT_Reduce2_B1);
            crrcMvb->setBool(0x281,12,2,HMiCT_Reduce1_B1);
            crrcMvb->setBool(0x281,12,3,HMiCT_Add1_B1);
            crrcMvb->setBool(0x281,12,4,HMiCT_Add2_B1);
            crrcMvb->setBool(0x281,12,5,HMiCT_UICMode_B1);
            crrcMvb->setBool(0x281,12,6,HMiCT_SAVEHVACMode1_B1);
            crrcMvb->setBool(0x281,12,7,HMiCT_SAVEHVACTemp1_B1);

            crrcMvb->setUnsignedChar(0x281,13,HMiCT_SAVEHVACPosition_U8);
            crrcMvb->setUnsignedChar(0x281,14,HMiCT_SetTemp_U8);

            crrcMvb->setBool(0x282,13,0,HMiCT_PowerOFF_B1[6]);// 液磁系统
            crrcMvb->setBool(0x282,13,1,HMiCT_PowerOFF_B1[7]);
            crrcMvb->setBool(0x282,13,2,HMiCT_PowerOFF_B1[8]);
            crrcMvb->setBool(0x282,13,3,HMiCT_PowerOFF_B1[9]);
            crrcMvb->setBool(0x282,13,4,HMiCT_PowerOFF_B1[10]);
            crrcMvb->setBool(0x282,13,5,HMiCT_PowerOFF_B1[11]);
            crrcMvb->setBool(0x282,13,6,HMiCT_PowerON_B1[6]);
            crrcMvb->setBool(0x282,13,7,HMiCT_PowerON_B1[7]);
            crrcMvb->setBool(0x282,14,0,HMiCT_PowerON_B1[8]);
            crrcMvb->setBool(0x282,14,1,HMiCT_PowerON_B1[9]);
            crrcMvb->setBool(0x282,14,2,HMiCT_PowerON_B1[10]);
            crrcMvb->setBool(0x282,14,3,HMiCT_PowerON_B1[11]);
            crrcMvb->setBool(0x282,14,4,HMiCT_PowerOFF_B1[0]);
            crrcMvb->setBool(0x282,14,5,HMiCT_PowerOFF_B1[1]);
            crrcMvb->setBool(0x282,14,6,HMiCT_PowerOFF_B1[2]);
            crrcMvb->setBool(0x282,14,7,HMiCT_PowerOFF_B1[3]);
            crrcMvb->setBool(0x282,15,0,HMiCT_PowerOFF_B1[4]);
            crrcMvb->setBool(0x282,15,1,HMiCT_PowerOFF_B1[5]);
            crrcMvb->setBool(0x282,15,2,HMiCT_PowerON_B1[0]);
            crrcMvb->setBool(0x282,15,3,HMiCT_PowerON_B1[1]);
            crrcMvb->setBool(0x282,15,4,HMiCT_PowerON_B1[2]);
            crrcMvb->setBool(0x282,15,5,HMiCT_PowerON_B1[3]);
            crrcMvb->setBool(0x282,15,6,HMiCT_PowerON_B1[4]);
            crrcMvb->setBool(0x282,15,7,HMiCT_PowerON_B1[5]);
            crrcMvb->setBool(0x282,17,3,HMiCT_BCUSelfTestReq_B1);


            crrcMvb->setBool(0x283,26,0,HMiCT_RunStatSetFlag_B1);
            crrcMvb->setUnsignedChar(0x283,27,HMiCT_RunStatSetType_U8);
            crrcMvb->setUnsignedInt32(0x283,28,HMiCT_RunStatSetData_U32);

            crrcMvb->setBool(0x283,25,0,HMiCT_DCURunClear_B1);
            crrcMvb->setBool(0x283,25,1,HMiCT_ACMRunClear_B1);
            crrcMvb->setBool(0x283,25,4,HMiCT_TC1APClear_B1);
            crrcMvb->setBool(0x283,25,5,HMiCT_TC2APClear_B1);
            crrcMvb->setBool(0x283,1,6,HMiCT_ACDETestStopFlag_B1);
            crrcMvb->setBool(0x283,1,7,HMiCT_ACDETestStartFlag_B1);

            HM2CT_HMISWVerH_U8 = HMiCT_HMISWVerH_U8;
            HM2CT_HMISWVerL_U8 = HMiCT_HMISWVerL_U8;
            HM2CT_LifeSignal_U16 = HMiCT_LifeSignal_U16;

            HM1CT_HMISWVerH_U8 = this->crrcMvb->getUnsignedChar(0x200,2);
            HM1CT_HMISWVerL_U8 = this->crrcMvb->getUnsignedChar(0x200,3);
            HM1CT_LifeSignal_U16 = this->crrcMvb->getUnsignedInt(0x200,0);
        }


    }

    /////*******ERM -- CCU**********///////
    {
        if(this->CTHM_ERM1On_B1)
        {
            this->DT1CT_AP1ClearTimeYear_U8 = crrcMvb->getUnsignedChar(0x311,7);
            this->DT1CT_AP1ClearTimeMonth_U8 = crrcMvb->getUnsignedChar(0x311,8);
            this->DT1CT_AP1ClearTimeDay_U8 = crrcMvb->getUnsignedChar(0x311,9);
            this->DT1CT_AP2ClearTimeYear_U8 = crrcMvb->getUnsignedChar(0x311,10);
            this->DT1CT_AP2ClearTimeMonth_U8 = crrcMvb->getUnsignedChar(0x311,11);
            this->DT1CT_AP2ClearTimeDay_U8 = crrcMvb->getUnsignedChar(0x311,12);
            this->DT1CT_RunStatClearTimeYear_U8 = crrcMvb->getUnsignedChar(0x311,13);
            this->DT1CT_RunStatClearTimeMonth_U8 = crrcMvb->getUnsignedChar(0x311,14);
            this->DT1CT_RunStatClearTimeDay_U8 = crrcMvb->getUnsignedChar(0x311,15);

            this->DT1CT_TCMSRunTimeYear_U8 = crrcMvb->getUnsignedChar(0x311,1);
            this->DT1CT_TCMSRunTimeMonth_U8 = crrcMvb->getUnsignedChar(0x311,2);
            this->DT1CT_TCMSRunTimeDay_U8 = crrcMvb->getUnsignedChar(0x311,3);
            this->DT1CT_DistanceTimeYear_U8 = crrcMvb->getUnsignedChar(0x311,4);
            this->DT1CT_DistanceTimeMonth_U8 = crrcMvb->getUnsignedChar(0x311,5);
            this->DT1CT_DistanceTimeDay_U8 = crrcMvb->getUnsignedChar(0x311,6);
            this->DT1CT_TCMSRunTimeToday_U16 = crrcMvb->getUnsignedInt(0x310,28);
            this->DT1CT_TCMSDistanceToday_U16 = crrcMvb->getUnsignedInt(0x310,30);


            this->DT1CT_TCMSRunTime_U32 = crrcMvb->getUnsignedInt32(0x311,16);
            this->DT1CT_RunKilometers_U32 = crrcMvb->getUnsignedInt32(0x311,20);
            this->DT1CT_DCU1ConsEnergy_U32 = crrcMvb->getUnsignedInt32(0x311,24);
            this->DT1CT_DCU2ConsEnergy_U32 = crrcMvb->getUnsignedInt32(0x311,28);
            this->DT1CT_DCU3ConsEnergy_U32 = crrcMvb->getUnsignedInt32(0x312,0);
            this->DT1CT_DCU4ConsEnergy_U32 = crrcMvb->getUnsignedInt32(0x312,4);
            this->DT1CT_ACM1ConsEnergy_U32 = crrcMvb->getUnsignedInt32(0x312,8);
            this->DT1CT_ACM2ConsEnergy_U32 = crrcMvb->getUnsignedInt32(0x312,12);
            this->DT1CT_ACM3ConsEnergy_U32 = crrcMvb->getUnsignedInt32(0x312,16);
            this->DT1CT_ACM4ConsEnergy_U32 = crrcMvb->getUnsignedInt32(0x312,20);
            this->DT1CT_DCU1RhBrkConsEnergy_U32 = crrcMvb->getUnsignedInt32(0x312,24);
            this->DT1CT_DCU2RhBrkConsEnergy_U32 = crrcMvb->getUnsignedInt32(0x312,28);
            this->DT1CT_DCU3RhBrkConsEnergy_U32 = crrcMvb->getUnsignedInt32(0x313,0);
            this->DT1CT_DCU4RhBrkConsEnergy_U32 = crrcMvb->getUnsignedInt32(0x313,4);
            this->DT1CT_DCU1RegBrkEnergy_U32 = crrcMvb->getUnsignedInt32(0x313,8);
            this->DT1CT_DCU2RegBrkEnergy_U32 = crrcMvb->getUnsignedInt32(0x313,12);
            this->DT1CT_DCU3RegBrkEnergy_U32 = crrcMvb->getUnsignedInt32(0x313,16);
            this->DT1CT_DCU4RegBrkEnergy_U32 = crrcMvb->getUnsignedInt32(0x313,20);
            this->DT1CT_TC1APRunTime_U32 = crrcMvb->getUnsignedInt32(0x313,24);
            this->DT1CT_TC2APRunTime_U32 = crrcMvb->getUnsignedInt32(0x313,28);

        }else if(this->CTHM_ERM2On_B1)
        {
            this->DT1CT_AP1ClearTimeYear_U8 = crrcMvb->getUnsignedChar(0x321,7);
            this->DT1CT_AP1ClearTimeMonth_U8 = crrcMvb->getUnsignedChar(0x321,8);
            this->DT1CT_AP1ClearTimeDay_U8 = crrcMvb->getUnsignedChar(0x321,9);
            this->DT1CT_AP2ClearTimeYear_U8 = crrcMvb->getUnsignedChar(0x321,10);
            this->DT1CT_AP2ClearTimeMonth_U8 = crrcMvb->getUnsignedChar(0x321,11);
            this->DT1CT_AP2ClearTimeDay_U8 = crrcMvb->getUnsignedChar(0x321,12);
            this->DT1CT_RunStatClearTimeYear_U8 = crrcMvb->getUnsignedChar(0x321,13);
            this->DT1CT_RunStatClearTimeMonth_U8 = crrcMvb->getUnsignedChar(0x321,14);
            this->DT1CT_RunStatClearTimeDay_U8 = crrcMvb->getUnsignedChar(0x321,15);

            this->DT1CT_TCMSRunTimeYear_U8 = crrcMvb->getUnsignedChar(0x321,1);
            this->DT1CT_TCMSRunTimeMonth_U8 = crrcMvb->getUnsignedChar(0x321,2);
            this->DT1CT_TCMSRunTimeDay_U8 = crrcMvb->getUnsignedChar(0x321,3);
            this->DT1CT_DistanceTimeYear_U8 = crrcMvb->getUnsignedChar(0x321,4);
            this->DT1CT_DistanceTimeMonth_U8 = crrcMvb->getUnsignedChar(0x321,5);
            this->DT1CT_DistanceTimeDay_U8 = crrcMvb->getUnsignedChar(0x321,6);
            this->DT1CT_TCMSRunTimeToday_U16 = crrcMvb->getUnsignedInt(0x320,28);
            this->DT1CT_TCMSDistanceToday_U16 = crrcMvb->getUnsignedInt(0x320,30);

            this->DT1CT_TCMSRunTime_U32 = crrcMvb->getUnsignedInt32(0x321,16);
            this->DT1CT_RunKilometers_U32 = crrcMvb->getUnsignedInt32(0x321,20);
            this->DT1CT_DCU1ConsEnergy_U32 = crrcMvb->getUnsignedInt32(0x321,24);
            this->DT1CT_DCU2ConsEnergy_U32 = crrcMvb->getUnsignedInt32(0x321,28);
            this->DT1CT_DCU3ConsEnergy_U32 = crrcMvb->getUnsignedInt32(0x322,0);
            this->DT1CT_DCU4ConsEnergy_U32 = crrcMvb->getUnsignedInt32(0x322,4);
            this->DT1CT_ACM1ConsEnergy_U32 = crrcMvb->getUnsignedInt32(0x322,8);
            this->DT1CT_ACM2ConsEnergy_U32 = crrcMvb->getUnsignedInt32(0x322,12);
            this->DT1CT_ACM3ConsEnergy_U32 = crrcMvb->getUnsignedInt32(0x322,16);
            this->DT1CT_ACM4ConsEnergy_U32 = crrcMvb->getUnsignedInt32(0x322,20);
            this->DT1CT_DCU1RhBrkConsEnergy_U32 = crrcMvb->getUnsignedInt32(0x322,24);
            this->DT1CT_DCU2RhBrkConsEnergy_U32 = crrcMvb->getUnsignedInt32(0x322,28);
            this->DT1CT_DCU3RhBrkConsEnergy_U32 = crrcMvb->getUnsignedInt32(0x323,0);
            this->DT1CT_DCU4RhBrkConsEnergy_U32 = crrcMvb->getUnsignedInt32(0x323,4);
            this->DT1CT_DCU1RegBrkEnergy_U32 = crrcMvb->getUnsignedInt32(0x323,8);
            this->DT1CT_DCU2RegBrkEnergy_U32 = crrcMvb->getUnsignedInt32(0x323,12);
            this->DT1CT_DCU3RegBrkEnergy_U32 = crrcMvb->getUnsignedInt32(0x323,16);
            this->DT1CT_DCU4RegBrkEnergy_U32 = crrcMvb->getUnsignedInt32(0x323,20);
            this->DT1CT_TC1APRunTime_U32 = crrcMvb->getUnsignedInt32(0x323,24);
            this->DT1CT_TC2APRunTime_U32 = crrcMvb->getUnsignedInt32(0x323,28);
        }
        DT1CT_ERMLifeSign_U8 = crrcMvb->getUnsignedChar(0x310,0);
        DT1CT_ERMSWVer_U8 = crrcMvb->getUnsignedChar(0x310,1);
        DT1CT_ERMVxWorksVer_U8 = crrcMvb->getUnsignedChar(0x310,2);
        DT1CT_ERMMVBSWVer_U8 = crrcMvb->getUnsignedChar(0x310,3);
        DT1CT_ERMSDBVer_U8 = crrcMvb->getUnsignedChar(0x310,4);
        DT1CT_ERMFPGAVer_U8 = crrcMvb->getUnsignedChar(0x310,5);

        DT2CT_ERMLifeSign_U8 = crrcMvb->getUnsignedChar(0x320,0);
        DT2CT_ERMSWVer_U8 = crrcMvb->getUnsignedChar(0x320,1);
        DT2CT_ERMVxWorksVer_U8 = crrcMvb->getUnsignedChar(0x320,2);
        DT2CT_ERMMVBSWVer_U8 = crrcMvb->getUnsignedChar(0x320,3);
        DT2CT_ERMSDBVer_U8 = crrcMvb->getUnsignedChar(0x320,4);
        DT2CT_ERMFPGAVer_U8 = crrcMvb->getUnsignedChar(0x320,5);

        //CCU-CRM FAULT
        this->CTDT_Mp1ADDLowPanto_B1 = crrcMvb->getBool(0x318,3,3);
        this->CTDT_Mp2ADDLowPanto_B1 = crrcMvb->getBool(0x318,3,4);
        this->CTDT_ACM1InnerSC_B1 = crrcMvb->getBool(0x318,27,4);
        this->CTDT_ACM2InnerSC_B1 = crrcMvb->getBool(0x318,27,5);
        this->CTDT_ACM3InnerSC_B1 = crrcMvb->getBool(0x318,27,6);
        this->CTDT_ACM4InnerSC_B1 = crrcMvb->getBool(0x318,27,7);
        this->CTDT_ACM1OuterSC_B1 = crrcMvb->getBool(0x318,27,0);
        this->CTDT_ACM2OuterSC_B1 = crrcMvb->getBool(0x318,27,1);
        this->CTDT_ACM3OuterSC_B1 = crrcMvb->getBool(0x318,27,2);
        this->CTDT_ACM4OuterSC_B1 = crrcMvb->getBool(0x318,27,3);
    }



    /////*******DCU -- CCU**********///////
    {
        //DCU1
        this->TR1CT_DCUMBrkForce_I16 = this->crrcMvb->getSignedInt(0x490,2);
        this->TR1CT_DCVoltage_I16 = this->crrcMvb->getSignedInt(0x491,4);
        this->TR1CT_TractionStatus_I16 = this->crrcMvb->getSignedInt(0x491,10);
        this->TR1CT_MotorCurrent_I16 = this->crrcMvb->getSignedInt(0x491,18);
        this->TR1CT_DCUMVersion_I16 = this->crrcMvb->getSignedInt(0x492,2);
        this->TR1CT_TBEValid_B1 = this->crrcMvb->getBool(0x490,15,7);
        this->TR1CT_DivContacterClose_B1 = this->crrcMvb->getBool(0x491,31,5);
        this->TR1CT_HSCBClose_B1 = this->crrcMvb->getBool(0x491,31,7);
        this->TR1CT_EBOK_B1  =this->crrcMvb->getBool(0x490,14,2);
        this->TR1CT_Motor1Temp_I16  =this->crrcMvb->getSignedInt(0x492,6);
        this->TR1CT_Motor2Temp_I16  =this->crrcMvb->getSignedInt(0x492,8);
        this->TR1CT_Motor3Temp_I16  =this->crrcMvb->getSignedInt(0x492,10);
        this->TR1CT_Motor4Temp_I16  =this->crrcMvb->getSignedInt(0x492,12);
        this->TR1CT_Slide_B1 = this->crrcMvb->getBool(0x490,14,7);
        //DCU2
        this->TR2CT_DCUMBrkForce_I16 = this->crrcMvb->getSignedInt(0x4c0,2);
        this->TR2CT_DCVoltage_I16 = this->crrcMvb->getSignedInt(0x4c1,4);
        this->TR2CT_TractionStatus_I16 = this->crrcMvb->getSignedInt(0x4c1,10);
        this->TR2CT_MotorCurrent_I16 = this->crrcMvb->getSignedInt(0x4c1,18);
        this->TR2CT_DCUMVersion_I16 = this->crrcMvb->getSignedInt(0x4c2,2);
        this->TR2CT_TBEValid_B1 = this->crrcMvb->getBool(0x4c0,15,7);
        this->TR2CT_DivContacterClose_B1 = this->crrcMvb->getBool(0x4c1,31,5);
        this->TR2CT_HSCBClose_B1 = this->crrcMvb->getBool(0x4c1,31,7);
        this->TR2CT_EBOK_B1  =this->crrcMvb->getBool(0x4c0,14,2);
        this->TR2CT_Motor1Temp_I16  =this->crrcMvb->getSignedInt(0x4c2,6);
        this->TR2CT_Motor2Temp_I16  =this->crrcMvb->getSignedInt(0x4c2,8);
        this->TR2CT_Motor3Temp_I16  =this->crrcMvb->getSignedInt(0x4c2,10);
        this->TR2CT_Motor4Temp_I16  =this->crrcMvb->getSignedInt(0x4c2,12);
        this->TR2CT_Slide_B1 = this->crrcMvb->getBool(0x4c0,14,7);
        //DCU3
        this->TR3CT_DCUMBrkForce_I16 = this->crrcMvb->getSignedInt(0x4d0,2);
        this->TR3CT_DCVoltage_I16 = this->crrcMvb->getSignedInt(0x4d1,4);
        this->TR3CT_TractionStatus_I16 = this->crrcMvb->getSignedInt(0x4d1,10);
        this->TR3CT_MotorCurrent_I16 = this->crrcMvb->getSignedInt(0x4d1,18);
        this->TR3CT_DCUMVersion_I16 = this->crrcMvb->getSignedInt(0x4d2,2);
        this->TR3CT_TBEValid_B1 = this->crrcMvb->getBool(0x4d0,15,7);
        this->TR3CT_DivContacterClose_B1 = this->crrcMvb->getBool(0x4d1,31,5);
        this->TR3CT_HSCBClose_B1 = this->crrcMvb->getBool(0x4d1,31,7);
        this->TR3CT_EBOK_B1  =this->crrcMvb->getBool(0x4d0,14,2);
        this->TR3CT_Motor1Temp_I16  =this->crrcMvb->getSignedInt(0x4d2,6);
        this->TR3CT_Motor2Temp_I16  =this->crrcMvb->getSignedInt(0x4d2,8);
        this->TR3CT_Motor3Temp_I16  =this->crrcMvb->getSignedInt(0x4d2,10);
        this->TR3CT_Motor4Temp_I16  =this->crrcMvb->getSignedInt(0x4d2,12);
        this->TR3CT_Slide_B1 = this->crrcMvb->getBool(0x4d0,14,7);
        //DCU4
        this->TR4CT_DCUMBrkForce_I16 = this->crrcMvb->getSignedInt(0x480,2);
        this->TR4CT_DCVoltage_I16 = this->crrcMvb->getSignedInt(0x481,4);
        this->TR4CT_TractionStatus_I16 = this->crrcMvb->getSignedInt(0x481,10);
        this->TR4CT_MotorCurrent_I16 = this->crrcMvb->getSignedInt(0x481,18);
        this->TR4CT_DCUMVersion_I16 = this->crrcMvb->getSignedInt(0x482,2);
        this->TR4CT_TBEValid_B1 = this->crrcMvb->getBool(0x480,15,7);
        this->TR4CT_DivContacterClose_B1 = this->crrcMvb->getBool(0x481,31,5);
        this->TR4CT_HSCBClose_B1 = this->crrcMvb->getBool(0x481,31,7);
        this->TR4CT_EBOK_B1  =this->crrcMvb->getBool(0x480,14,2);
        this->TR4CT_Motor1Temp_I16  =this->crrcMvb->getSignedInt(0x482,6);
        this->TR4CT_Motor2Temp_I16  =this->crrcMvb->getSignedInt(0x482,8);
        this->TR4CT_Motor3Temp_I16  =this->crrcMvb->getSignedInt(0x482,10);
        this->TR4CT_Motor4Temp_I16  =this->crrcMvb->getSignedInt(0x482,12);
        this->TR4CT_Slide_B1 = this->crrcMvb->getBool(0x480,14,7);

        TR1CT_IESContacterQ2_B1 = this->crrcMvb->getBool(0x491,31,1);
        TR1CT_IESContacterQ1_B1 = this->crrcMvb->getBool(0x491,31,2);
        TR4CT_IESContacterQ2_B1 = this->crrcMvb->getBool(0x481,31,1);
        TR4CT_IESContacterQ1_B1 = this->crrcMvb->getBool(0x481,31,2);
        TR1CT_FrontDoorCantCloseFlt_B1 = this->crrcMvb->getBool(0x494,5,1);
        TR4CT_FrontDoorCantCloseFlt_B1 = this->crrcMvb->getBool(0x484,5,1);

        //CCU-DCU
        this->CTTR1_EBCutOff_B1 = this->crrcMvb->getBool(0x49A,28,6);
        this->CTTR2_EBCutOff_B1 = this->crrcMvb->getBool(0x4cA,28,6);
        this->CTTR3_EBCutOff_B1 = this->crrcMvb->getBool(0x4dA,28,6);
        this->CTTR4_EBCutOff_B1 = this->crrcMvb->getBool(0x48A,28,6);

    }

    /////*******ACM -- CCU**********///////
    {
        //ACM1
        this->AX1CT_DCUALifeSignal1_I16 = this->crrcMvb->getSignedInt(0x501,0);
        this->AX1CT_DCVoltage_I16 = this->crrcMvb->getSignedInt(0x501,2);
        this->AX1CT_AuxInvStatus_I16 = this->crrcMvb->getSignedInt(0x501,8);
        this->AX1CT_AuxInvLoadVoltage_I16 = this->crrcMvb->getSignedInt(0x501,10);
        this->AX1CT_BatteryTemp_I16 = this->crrcMvb->getSignedInt(0x501,14);
        this->AX1CT_AuxInvLoadCurrent_I16 = this->crrcMvb->getSignedInt(0x501,16);
        this->AX1CT_DCCurrent_I16 = this->crrcMvb->getSignedInt(0x501,22);
        this->AX1CT_SWVersion1_I16 = this->crrcMvb->getSignedInt(0x502,20);
        this->AX1CT_SWVersion2_I16 = this->crrcMvb->getSignedInt(0x502,22);
        this->AX1CT_SWVersion3_I16 = this->crrcMvb->getSignedInt(0x502,24);
        this->AX1CT_SWVersion4_I16 = this->crrcMvb->getSignedInt(0x502,26);
        this->AX1CT_BatteryChargingCurrent_I16 = this->crrcMvb->getSignedInt(0x502,12);
        this->AX1CT_BatteryLineVoltage_I16 = this->crrcMvb->getSignedInt(0x502,8);
        this->AX1CT_BatteryLineCurrent_I16 = this->crrcMvb->getSignedInt(0x502,10);

        this->AX1CT_AuxInvCutFeedback_B1 = this->crrcMvb->getBool(0x501,28,5);
        this->AX1CT_AuxInvVoltageValid_B1 = this->crrcMvb->getBool(0x501,29,3);
        this->AX1CT_ACMLineActived_B1 = this->crrcMvb->getBool(0x501,29,4);
        this->AX1CT_DCVoltageValid_B1 = this->crrcMvb->getBool(0x501,29,7);
        this->AX1CT_BatteryTempValid_B1 = this->crrcMvb->getBool(0x501,31,1);
        this->AX1CT_BCMFlt_B1 = this->crrcMvb->getBool(0x501,30,0);
        this->AX1CT_BCMCharging_B1 = this->crrcMvb->getBool(0x501,30,1);

        //ACM2
        this->AX2CT_DCUALifeSignal1_I16 = this->crrcMvb->getSignedInt(0x511,0);
        this->AX2CT_DCVoltage_I16 = this->crrcMvb->getSignedInt(0x511,2);
        this->AX2CT_AuxInvStatus_I16 = this->crrcMvb->getSignedInt(0x511,8);
        this->AX2CT_AuxInvLoadVoltage_I16 = this->crrcMvb->getSignedInt(0x511,10);
        this->AX2CT_BatteryTemp_I16 = this->crrcMvb->getSignedInt(0x511,14);
        this->AX2CT_AuxInvLoadCurrent_I16 = this->crrcMvb->getSignedInt(0x511,16);
        this->AX2CT_DCCurrent_I16 = this->crrcMvb->getSignedInt(0x511,22);
        this->AX2CT_SWVersion1_I16 = this->crrcMvb->getSignedInt(0x512,20);
        this->AX2CT_SWVersion2_I16 = this->crrcMvb->getSignedInt(0x512,22);
        this->AX2CT_SWVersion3_I16 = this->crrcMvb->getSignedInt(0x512,24);
        this->AX2CT_SWVersion4_I16 = this->crrcMvb->getSignedInt(0x512,26);
        this->AX2CT_BatteryChargingCurrent_I16 = this->crrcMvb->getSignedInt(0x512,12);
        this->AX2CT_BatteryLineVoltage_I16 = this->crrcMvb->getSignedInt(0x512,8);
        this->AX2CT_BatteryLineCurrent_I16 = this->crrcMvb->getSignedInt(0x512,10);

        this->AX2CT_AuxInvCutFeedback_B1 = this->crrcMvb->getBool(0x511,28,5);
        this->AX2CT_AuxInvVoltageValid_B1 = this->crrcMvb->getBool(0x511,29,3);
        this->AX2CT_ACMLineActived_B1 = this->crrcMvb->getBool(0x511,29,4);
        this->AX2CT_DCVoltageValid_B1 = this->crrcMvb->getBool(0x511,29,7);
        this->AX2CT_BatteryTempValid_B1 = this->crrcMvb->getBool(0x511,31,1);
        this->AX2CT_BCMFlt_B1 = this->crrcMvb->getBool(0x511,30,0);
        this->AX2CT_BCMCharging_B1 = this->crrcMvb->getBool(0x511,30,1);
        //ACM3
        this->AX3CT_DCUALifeSignal1_I16 = this->crrcMvb->getSignedInt(0x531,0);
        this->AX3CT_DCVoltage_I16 = this->crrcMvb->getSignedInt(0x531,2);
        this->AX3CT_AuxInvStatus_I16 = this->crrcMvb->getSignedInt(0x531,8);
        this->AX3CT_AuxInvLoadVoltage_I16 = this->crrcMvb->getSignedInt(0x531,10);
        this->AX3CT_BatteryTemp_I16 = this->crrcMvb->getSignedInt(0x531,14);
        this->AX3CT_AuxInvLoadCurrent_I16 = this->crrcMvb->getSignedInt(0x531,16);
        this->AX3CT_DCCurrent_I16 = this->crrcMvb->getSignedInt(0x531,22);
        this->AX3CT_SWVersion1_I16 = this->crrcMvb->getSignedInt(0x532,20);
        this->AX3CT_SWVersion2_I16 = this->crrcMvb->getSignedInt(0x532,22);
        this->AX3CT_SWVersion3_I16 = this->crrcMvb->getSignedInt(0x532,24);
        this->AX3CT_SWVersion4_I16 = this->crrcMvb->getSignedInt(0x532,26);
        this->AX3CT_BatteryChargingCurrent_I16 = this->crrcMvb->getSignedInt(0x532,12);
        this->AX3CT_BatteryLineVoltage_I16 = this->crrcMvb->getSignedInt(0x532,8);
        this->AX3CT_BatteryLineCurrent_I16 = this->crrcMvb->getSignedInt(0x532,10);

        this->AX3CT_AuxInvCutFeedback_B1 = this->crrcMvb->getBool(0x531,28,5);
        this->AX3CT_AuxInvVoltageValid_B1 = this->crrcMvb->getBool(0x531,29,3);
        this->AX3CT_ACMLineActived_B1 = this->crrcMvb->getBool(0x531,29,4);
        this->AX3CT_DCVoltageValid_B1 = this->crrcMvb->getBool(0x531,29,7);
        this->AX3CT_BatteryTempValid_B1 = this->crrcMvb->getBool(0x531,31,1);
        this->AX3CT_BCMFlt_B1 = this->crrcMvb->getBool(0x531,30,0);
        this->AX3CT_BCMCharging_B1 = this->crrcMvb->getBool(0x531,30,1);
        //ACM4
        this->AX4CT_DCUALifeSignal1_I16 = this->crrcMvb->getSignedInt(0x521,0);
        this->AX4CT_DCVoltage_I16 = this->crrcMvb->getSignedInt(0x521,2);
        this->AX4CT_AuxInvStatus_I16 = this->crrcMvb->getSignedInt(0x521,8);
        this->AX4CT_AuxInvLoadVoltage_I16 = this->crrcMvb->getSignedInt(0x521,10);
        this->AX4CT_BatteryTemp_I16 = this->crrcMvb->getSignedInt(0x521,14);
        this->AX4CT_AuxInvLoadCurrent_I16 = this->crrcMvb->getSignedInt(0x521,16);
        this->AX4CT_DCCurrent_I16 = this->crrcMvb->getSignedInt(0x521,22);
        this->AX4CT_SWVersion1_I16 = this->crrcMvb->getSignedInt(0x522,20);
        this->AX4CT_SWVersion2_I16 = this->crrcMvb->getSignedInt(0x522,22);
        this->AX4CT_SWVersion3_I16 = this->crrcMvb->getSignedInt(0x522,24);
        this->AX4CT_SWVersion4_I16 = this->crrcMvb->getSignedInt(0x522,26);
        this->AX4CT_BatteryChargingCurrent_I16 = this->crrcMvb->getSignedInt(0x522,12);
        this->AX4CT_BatteryLineVoltage_I16 = this->crrcMvb->getSignedInt(0x522,8);
        this->AX4CT_BatteryLineCurrent_I16 = this->crrcMvb->getSignedInt(0x522,10);

        this->AX4CT_AuxInvCutFeedback_B1 = this->crrcMvb->getBool(0x521,28,5);
        this->AX4CT_AuxInvVoltageValid_B1 = this->crrcMvb->getBool(0x521,29,3);
        this->AX4CT_ACMLineActived_B1 = this->crrcMvb->getBool(0x521,29,4);
        this->AX4CT_DCVoltageValid_B1 = this->crrcMvb->getBool(0x521,29,7);
        this->AX4CT_BatteryTempValid_B1 = this->crrcMvb->getBool(0x521,31,1);
        this->AX4CT_BCMFlt_B1 = this->crrcMvb->getBool(0x521,30,0);
        this->AX4CT_BCMCharging_B1 = this->crrcMvb->getBool(0x521,30,1);

        this->CTAX1_ShortCurcuitCheck_B1  =this->crrcMvb->getBool(0x509,12,5);
        this->CTAX2_ShortCurcuitCheck_B1  =this->crrcMvb->getBool(0x519,12,5);
        this->CTAX3_ShortCurcuitCheck_B1  =this->crrcMvb->getBool(0x539,12,5);
        this->CTAX4_ShortCurcuitCheck_B1  =this->crrcMvb->getBool(0x529,12,5);

    }

    /////*******HVAC -- CCU**********///////
    {
        //HVAC1
        this->AC1CT_HVACStopped_B1 = this->crrcMvb->getBool(0x910,0,0);
        this->AC1CT_Ventilation_B1 = this->crrcMvb->getBool(0x910,0,2);
        this->AC1CT_MannualMode_B1 = this->crrcMvb->getBool(0x910,0,4);
        this->AC1CT_AutoMode_B1 = this->crrcMvb->getBool(0x910,0,5);
        this->AC1CT_PreWork_B1 = this->crrcMvb->getBool(0x910,1,4);
        this->AC1CT_EmVentilation_B1 = this->crrcMvb->getBool(0x910,1,5);
        this->AC1CT_InsideFire_B1 = this->crrcMvb->getBool(0x910,2,1);
        this->AC1CT_OutsideFire_B1 = this->crrcMvb->getBool(0x910,2,2);
        this->AC1CT_NetCtrlMode_B1 = this->crrcMvb->getBool(0x910,2,4);
        this->AC1CT_LocalCtrlMode_B1 = this->crrcMvb->getBool(0x910,2,5);
        this->AC1CT_MinorFlt_B1 = this->crrcMvb->getBool(0x910,21,5);
        this->AC1CT_MediumFlt_B1 = this->crrcMvb->getBool(0x910,21,6);
        this->AC1CT_MajorFlt_B1 = this->crrcMvb->getBool(0x910,21,7);
        this->AC1CT_Unit1Compressor1On_B1 = this->crrcMvb->getBool(0x910,4,0);
        this->AC1CT_Unit1Compressor2On_B1 = this->crrcMvb->getBool(0x910,4,1);
        this->AC1CT_Unit1Ventilator1On_B1 = this->crrcMvb->getBool(0x910,4,2);
        this->AC1CT_Unit1Ventilator2On_B1 = this->crrcMvb->getBool(0x910,4,3);
        this->AC1CT_Unit1Condenser1On_B1 = this->crrcMvb->getBool(0x910,4,4);
        this->AC1CT_Unit1Condenser2On_B1 = this->crrcMvb->getBool(0x910,4,5);
        this->AC1CT_Unit2Compressor1On_B1 = this->crrcMvb->getBool(0x910,5,0);
        this->AC1CT_Unit2Compressor2On_B1 = this->crrcMvb->getBool(0x910,5,1);
        this->AC1CT_Unit2Ventilator1On_B1 = this->crrcMvb->getBool(0x910,5,2);
        this->AC1CT_Unit2Ventilator2On_B1 = this->crrcMvb->getBool(0x910,5,3);
        this->AC1CT_Unit2Condenser1On_B1 = this->crrcMvb->getBool(0x910,5,4);
        this->AC1CT_Unit2Condenser2On_B1 = this->crrcMvb->getBool(0x910,5,5);
        this->AC1CT_LodeDecFinished_B1 = this->crrcMvb->getBool(0x910,2,6);
        this->AC1CT_Unit1Compressor1Fault_B1 = this->crrcMvb->getBool(0x910,14,4);
        this->AC1CT_Unit1Compressor2Fault_B1 = this->crrcMvb->getBool(0x910,14,5);
        this->AC1CT_Unit2Compressor1Fault_B1 = this->crrcMvb->getBool(0x910,14,6);
        this->AC1CT_Unit2Compressor2Fault_B1 = this->crrcMvb->getBool(0x910,14,7);
        this->AC1CT_Unit1Ventilator1Fault_B1 = this->crrcMvb->getBool(0x910,13,4);
        this->AC1CT_Unit1Ventilator2Fault_B1 = this->crrcMvb->getBool(0x910,13,5);
        this->AC1CT_Unit2Ventilator1Fault_B1 = this->crrcMvb->getBool(0x910,13,6);
        this->AC1CT_Unit2Ventilator2Fault_B1 = this->crrcMvb->getBool(0x910,13,7);
        this->AC1CT_Unit1Condenser1Fault_B1 = this->crrcMvb->getBool(0x910,13,0);
        this->AC1CT_Unit1Condenser2Fault_B1 = this->crrcMvb->getBool(0x910,13,1);
        this->AC1CT_Unit2Condenser1Fault_B1 = this->crrcMvb->getBool(0x910,13,2);
        this->AC1CT_Unit2Condenser2Fault_B1 = this->crrcMvb->getBool(0x910,13,3);

        this->AC1CT_TargetTemp_U8 = this->crrcMvb->getUnsignedChar(0x910,8);
        this->AC1CT_FreshAirTemp_U8 = this->crrcMvb->getUnsignedChar(0x910,10);
        this->AC1CT_ReturnAirTemp_U8 = this->crrcMvb->getUnsignedChar(0x910,11);
        this->AC1CT_SWVersionHighByteX_U8 = this->crrcMvb->getUnsignedChar(0x910,26);
        this->AC1CT_SWVersionHighByteY_U8 = this->crrcMvb->getUnsignedChar(0x910,27);
        this->AC1CT_LifeSignalHighByte_U8 = this->crrcMvb->getUnsignedChar(0x910,30);
        this->AC1CT_LifeSignalLowByte_U8 = this->crrcMvb->getUnsignedChar(0x910,31);
        //HVAC2
        this->AC2CT_HVACStopped_B1 = this->crrcMvb->getBool(0x920,0,0);
        this->AC2CT_Ventilation_B1 = this->crrcMvb->getBool(0x920,0,2);
        this->AC2CT_MannualMode_B1 = this->crrcMvb->getBool(0x920,0,4);
        this->AC2CT_AutoMode_B1 = this->crrcMvb->getBool(0x920,0,5);
        this->AC2CT_PreWork_B1 = this->crrcMvb->getBool(0x920,1,4);
        this->AC2CT_EmVentilation_B1 = this->crrcMvb->getBool(0x920,1,5);
        this->AC2CT_InsideFire_B1 = this->crrcMvb->getBool(0x920,2,1);
        this->AC2CT_OutsideFire_B1 = this->crrcMvb->getBool(0x920,2,2);
        this->AC2CT_NetCtrlMode_B1 = this->crrcMvb->getBool(0x920,2,4);
        this->AC2CT_LocalCtrlMode_B1 = this->crrcMvb->getBool(0x920,2,5);
        this->AC2CT_MinorFlt_B1 = this->crrcMvb->getBool(0x920,21,5);
        this->AC2CT_MediumFlt_B1 = this->crrcMvb->getBool(0x920,21,6);
        this->AC2CT_MajorFlt_B1 = this->crrcMvb->getBool(0x920,21,7);
        this->AC2CT_Unit1Compressor1On_B1 = this->crrcMvb->getBool(0x920,4,0);
        this->AC2CT_Unit1Compressor2On_B1 = this->crrcMvb->getBool(0x920,4,1);
        this->AC2CT_Unit1Ventilator1On_B1 = this->crrcMvb->getBool(0x920,4,2);
        this->AC2CT_Unit1Ventilator2On_B1 = this->crrcMvb->getBool(0x920,4,3);
        this->AC2CT_Unit1Condenser1On_B1 = this->crrcMvb->getBool(0x920,4,4);
        this->AC2CT_Unit1Condenser2On_B1 = this->crrcMvb->getBool(0x920,4,5);
        this->AC2CT_Unit2Compressor1On_B1 = this->crrcMvb->getBool(0x920,5,0);
        this->AC2CT_Unit2Compressor2On_B1 = this->crrcMvb->getBool(0x920,5,1);
        this->AC2CT_Unit2Ventilator1On_B1 = this->crrcMvb->getBool(0x920,5,2);
        this->AC2CT_Unit2Ventilator2On_B1 = this->crrcMvb->getBool(0x920,5,3);
        this->AC2CT_Unit2Condenser1On_B1 = this->crrcMvb->getBool(0x920,5,4);
        this->AC2CT_Unit2Condenser2On_B1 = this->crrcMvb->getBool(0x920,5,5);
        this->AC2CT_LodeDecFinished_B1 = this->crrcMvb->getBool(0x920,2,6);
        this->AC2CT_Unit1Compressor1Fault_B1 = this->crrcMvb->getBool(0x920,14,4);
        this->AC2CT_Unit1Compressor2Fault_B1 = this->crrcMvb->getBool(0x920,14,5);
        this->AC2CT_Unit2Compressor1Fault_B1 = this->crrcMvb->getBool(0x920,14,6);
        this->AC2CT_Unit2Compressor2Fault_B1 = this->crrcMvb->getBool(0x920,14,7);
        this->AC2CT_Unit1Ventilator1Fault_B1 = this->crrcMvb->getBool(0x920,13,4);
        this->AC2CT_Unit1Ventilator2Fault_B1 = this->crrcMvb->getBool(0x920,13,5);
        this->AC2CT_Unit2Ventilator1Fault_B1 = this->crrcMvb->getBool(0x920,13,6);
        this->AC2CT_Unit2Ventilator2Fault_B1 = this->crrcMvb->getBool(0x920,13,7);
        this->AC2CT_Unit1Condenser1Fault_B1 = this->crrcMvb->getBool(0x920,13,0);
        this->AC2CT_Unit1Condenser2Fault_B1 = this->crrcMvb->getBool(0x920,13,1);
        this->AC2CT_Unit2Condenser1Fault_B1 = this->crrcMvb->getBool(0x920,13,2);
        this->AC2CT_Unit2Condenser2Fault_B1 = this->crrcMvb->getBool(0x920,13,3);

        this->AC2CT_TargetTemp_U8 = this->crrcMvb->getUnsignedChar(0x920,8);
        this->AC2CT_FreshAirTemp_U8 = this->crrcMvb->getUnsignedChar(0x920,10);
        this->AC2CT_ReturnAirTemp_U8 = this->crrcMvb->getUnsignedChar(0x920,11);
        this->AC2CT_SWVersionHighByteX_U8 = this->crrcMvb->getUnsignedChar(0x920,26);
        this->AC2CT_SWVersionHighByteY_U8 = this->crrcMvb->getUnsignedChar(0x920,27);
        this->AC2CT_LifeSignalHighByte_U8 = this->crrcMvb->getUnsignedChar(0x920,30);
        this->AC2CT_LifeSignalLowByte_U8 = this->crrcMvb->getUnsignedChar(0x920,31);
        //HVAC3
        this->AC3CT_HVACStopped_B1 = this->crrcMvb->getBool(0x930,0,0);
        this->AC3CT_Ventilation_B1 = this->crrcMvb->getBool(0x930,0,2);
        this->AC3CT_MannualMode_B1 = this->crrcMvb->getBool(0x930,0,4);
        this->AC3CT_AutoMode_B1 = this->crrcMvb->getBool(0x930,0,5);
        this->AC3CT_PreWork_B1 = this->crrcMvb->getBool(0x930,1,4);
        this->AC3CT_EmVentilation_B1 = this->crrcMvb->getBool(0x930,1,5);
        this->AC3CT_InsideFire_B1 = this->crrcMvb->getBool(0x930,2,1);
        this->AC3CT_OutsideFire_B1 = this->crrcMvb->getBool(0x930,2,2);
        this->AC3CT_NetCtrlMode_B1 = this->crrcMvb->getBool(0x930,2,4);
        this->AC3CT_LocalCtrlMode_B1 = this->crrcMvb->getBool(0x930,2,5);
        this->AC3CT_MinorFlt_B1 = this->crrcMvb->getBool(0x930,21,5);
        this->AC3CT_MediumFlt_B1 = this->crrcMvb->getBool(0x930,21,6);
        this->AC3CT_MajorFlt_B1 = this->crrcMvb->getBool(0x930,21,7);
        this->AC3CT_Unit1Compressor1On_B1 = this->crrcMvb->getBool(0x930,4,0);
        this->AC3CT_Unit1Compressor2On_B1 = this->crrcMvb->getBool(0x930,4,1);
        this->AC3CT_Unit1Ventilator1On_B1 = this->crrcMvb->getBool(0x930,4,2);
        this->AC3CT_Unit1Ventilator2On_B1 = this->crrcMvb->getBool(0x930,4,3);
        this->AC3CT_Unit1Condenser1On_B1 = this->crrcMvb->getBool(0x930,4,4);
        this->AC3CT_Unit1Condenser2On_B1 = this->crrcMvb->getBool(0x930,4,5);
        this->AC3CT_Unit2Compressor1On_B1 = this->crrcMvb->getBool(0x930,5,0);
        this->AC3CT_Unit2Compressor2On_B1 = this->crrcMvb->getBool(0x930,5,1);
        this->AC3CT_Unit2Ventilator1On_B1 = this->crrcMvb->getBool(0x930,5,2);
        this->AC3CT_Unit2Ventilator2On_B1 = this->crrcMvb->getBool(0x930,5,3);
        this->AC3CT_Unit2Condenser1On_B1 = this->crrcMvb->getBool(0x930,5,4);
        this->AC3CT_Unit2Condenser2On_B1 = this->crrcMvb->getBool(0x930,5,5);
        this->AC3CT_LodeDecFinished_B1 = this->crrcMvb->getBool(0x930,2,6);
        this->AC3CT_Unit1Compressor1Fault_B1 = this->crrcMvb->getBool(0x930,14,4);
        this->AC3CT_Unit1Compressor2Fault_B1 = this->crrcMvb->getBool(0x930,14,5);
        this->AC3CT_Unit2Compressor1Fault_B1 = this->crrcMvb->getBool(0x930,14,6);
        this->AC3CT_Unit2Compressor2Fault_B1 = this->crrcMvb->getBool(0x930,14,7);
        this->AC3CT_Unit1Ventilator1Fault_B1 = this->crrcMvb->getBool(0x930,13,4);
        this->AC3CT_Unit1Ventilator2Fault_B1 = this->crrcMvb->getBool(0x930,13,5);
        this->AC3CT_Unit2Ventilator1Fault_B1 = this->crrcMvb->getBool(0x930,13,6);
        this->AC3CT_Unit2Ventilator2Fault_B1 = this->crrcMvb->getBool(0x930,13,7);
        this->AC3CT_Unit1Condenser1Fault_B1 = this->crrcMvb->getBool(0x930,13,0);
        this->AC3CT_Unit1Condenser2Fault_B1 = this->crrcMvb->getBool(0x930,13,1);
        this->AC3CT_Unit2Condenser1Fault_B1 = this->crrcMvb->getBool(0x930,13,2);
        this->AC3CT_Unit2Condenser2Fault_B1 = this->crrcMvb->getBool(0x930,13,3);


        this->AC3CT_TargetTemp_U8 = this->crrcMvb->getUnsignedChar(0x930,8);
        this->AC3CT_FreshAirTemp_U8 = this->crrcMvb->getUnsignedChar(0x930,10);
        this->AC3CT_ReturnAirTemp_U8 = this->crrcMvb->getUnsignedChar(0x930,11);
        this->AC3CT_SWVersionHighByteX_U8 = this->crrcMvb->getUnsignedChar(0x930,26);
        this->AC3CT_SWVersionHighByteY_U8 = this->crrcMvb->getUnsignedChar(0x930,27);
        this->AC3CT_LifeSignalHighByte_U8 = this->crrcMvb->getUnsignedChar(0x930,30);
        this->AC3CT_LifeSignalLowByte_U8 = this->crrcMvb->getUnsignedChar(0x930,31);
        //HVAC4
        this->AC4CT_HVACStopped_B1 = this->crrcMvb->getBool(0x940,0,0);
        this->AC4CT_Ventilation_B1 = this->crrcMvb->getBool(0x940,0,2);
        this->AC4CT_MannualMode_B1 = this->crrcMvb->getBool(0x940,0,4);
        this->AC4CT_AutoMode_B1 = this->crrcMvb->getBool(0x940,0,5);
        this->AC4CT_PreWork_B1 = this->crrcMvb->getBool(0x940,1,4);
        this->AC4CT_EmVentilation_B1 = this->crrcMvb->getBool(0x940,1,5);
        this->AC4CT_InsideFire_B1 = this->crrcMvb->getBool(0x940,2,1);
        this->AC4CT_OutsideFire_B1 = this->crrcMvb->getBool(0x940,2,2);
        this->AC4CT_NetCtrlMode_B1 = this->crrcMvb->getBool(0x940,2,4);
        this->AC4CT_LocalCtrlMode_B1 = this->crrcMvb->getBool(0x940,2,5);
        this->AC4CT_MinorFlt_B1 = this->crrcMvb->getBool(0x940,21,5);
        this->AC4CT_MediumFlt_B1 = this->crrcMvb->getBool(0x940,21,6);
        this->AC4CT_MajorFlt_B1 = this->crrcMvb->getBool(0x940,21,7);
        this->AC4CT_Unit1Compressor1On_B1 = this->crrcMvb->getBool(0x940,4,0);
        this->AC4CT_Unit1Compressor2On_B1 = this->crrcMvb->getBool(0x940,4,1);
        this->AC4CT_Unit1Ventilator1On_B1 = this->crrcMvb->getBool(0x940,4,2);
        this->AC4CT_Unit1Ventilator2On_B1 = this->crrcMvb->getBool(0x940,4,3);
        this->AC4CT_Unit1Condenser1On_B1 = this->crrcMvb->getBool(0x940,4,4);
        this->AC4CT_Unit1Condenser2On_B1 = this->crrcMvb->getBool(0x940,4,5);
        this->AC4CT_Unit2Compressor1On_B1 = this->crrcMvb->getBool(0x940,5,0);
        this->AC4CT_Unit2Compressor2On_B1 = this->crrcMvb->getBool(0x940,5,1);
        this->AC4CT_Unit2Ventilator1On_B1 = this->crrcMvb->getBool(0x940,5,2);
        this->AC4CT_Unit2Ventilator2On_B1 = this->crrcMvb->getBool(0x940,5,3);
        this->AC4CT_Unit2Condenser1On_B1 = this->crrcMvb->getBool(0x940,5,4);
        this->AC4CT_Unit2Condenser2On_B1 = this->crrcMvb->getBool(0x940,5,5);
        this->AC4CT_LodeDecFinished_B1 = this->crrcMvb->getBool(0x940,2,6);
        this->AC4CT_Unit1Compressor1Fault_B1 = this->crrcMvb->getBool(0x940,14,4);
        this->AC4CT_Unit1Compressor2Fault_B1 = this->crrcMvb->getBool(0x940,14,5);
        this->AC4CT_Unit2Compressor1Fault_B1 = this->crrcMvb->getBool(0x940,14,6);
        this->AC4CT_Unit2Compressor2Fault_B1 = this->crrcMvb->getBool(0x940,14,7);
        this->AC4CT_Unit1Ventilator1Fault_B1 = this->crrcMvb->getBool(0x940,13,4);
        this->AC4CT_Unit1Ventilator2Fault_B1 = this->crrcMvb->getBool(0x940,13,5);
        this->AC4CT_Unit2Ventilator1Fault_B1 = this->crrcMvb->getBool(0x940,13,6);
        this->AC4CT_Unit2Ventilator2Fault_B1 = this->crrcMvb->getBool(0x940,13,7);
        this->AC4CT_Unit1Condenser1Fault_B1 = this->crrcMvb->getBool(0x940,13,0);
        this->AC4CT_Unit1Condenser2Fault_B1 = this->crrcMvb->getBool(0x940,13,1);
        this->AC4CT_Unit2Condenser1Fault_B1 = this->crrcMvb->getBool(0x940,13,2);
        this->AC4CT_Unit2Condenser2Fault_B1 = this->crrcMvb->getBool(0x940,13,3);


        this->AC4CT_TargetTemp_U8 = this->crrcMvb->getUnsignedChar(0x940,8);
        this->AC4CT_FreshAirTemp_U8 = this->crrcMvb->getUnsignedChar(0x940,10);
        this->AC4CT_ReturnAirTemp_U8 = this->crrcMvb->getUnsignedChar(0x940,11);
        this->AC4CT_SWVersionHighByteX_U8 = this->crrcMvb->getUnsignedChar(0x940,26);
        this->AC4CT_SWVersionHighByteY_U8 = this->crrcMvb->getUnsignedChar(0x940,27);
        this->AC4CT_LifeSignalHighByte_U8 = this->crrcMvb->getUnsignedChar(0x940,30);
        this->AC4CT_LifeSignalLowByte_U8 = this->crrcMvb->getUnsignedChar(0x940,31);
        //HVAC5
        this->AC5CT_HVACStopped_B1 = this->crrcMvb->getBool(0x950,0,0);
        this->AC5CT_Ventilation_B1 = this->crrcMvb->getBool(0x950,0,2);
        this->AC5CT_MannualMode_B1 = this->crrcMvb->getBool(0x950,0,4);
        this->AC5CT_AutoMode_B1 = this->crrcMvb->getBool(0x950,0,5);
        this->AC5CT_PreWork_B1 = this->crrcMvb->getBool(0x950,1,4);
        this->AC5CT_EmVentilation_B1 = this->crrcMvb->getBool(0x950,1,5);
        this->AC5CT_InsideFire_B1 = this->crrcMvb->getBool(0x950,2,1);
        this->AC5CT_OutsideFire_B1 = this->crrcMvb->getBool(0x950,2,2);
        this->AC5CT_NetCtrlMode_B1 = this->crrcMvb->getBool(0x950,2,4);
        this->AC5CT_LocalCtrlMode_B1 = this->crrcMvb->getBool(0x950,2,5);
        this->AC5CT_MinorFlt_B1 = this->crrcMvb->getBool(0x950,21,5);
        this->AC5CT_MediumFlt_B1 = this->crrcMvb->getBool(0x950,21,6);
        this->AC5CT_MajorFlt_B1 = this->crrcMvb->getBool(0x950,21,7);
        this->AC5CT_Unit1Compressor1On_B1 = this->crrcMvb->getBool(0x950,4,0);
        this->AC5CT_Unit1Compressor2On_B1 = this->crrcMvb->getBool(0x950,4,1);
        this->AC5CT_Unit1Ventilator1On_B1 = this->crrcMvb->getBool(0x950,4,2);
        this->AC5CT_Unit1Ventilator2On_B1 = this->crrcMvb->getBool(0x950,4,3);
        this->AC5CT_Unit1Condenser1On_B1 = this->crrcMvb->getBool(0x950,4,4);
        this->AC5CT_Unit1Condenser2On_B1 = this->crrcMvb->getBool(0x950,4,5);
        this->AC5CT_Unit2Compressor1On_B1 = this->crrcMvb->getBool(0x950,5,0);
        this->AC5CT_Unit2Compressor2On_B1 = this->crrcMvb->getBool(0x950,5,1);
        this->AC5CT_Unit2Ventilator1On_B1 = this->crrcMvb->getBool(0x950,5,2);
        this->AC5CT_Unit2Ventilator2On_B1 = this->crrcMvb->getBool(0x950,5,3);
        this->AC5CT_Unit2Condenser1On_B1 = this->crrcMvb->getBool(0x950,5,4);
        this->AC5CT_Unit2Condenser2On_B1 = this->crrcMvb->getBool(0x950,5,5);
        this->AC5CT_LodeDecFinished_B1 = this->crrcMvb->getBool(0x950,2,6);
        this->AC5CT_Unit1Compressor1Fault_B1 = this->crrcMvb->getBool(0x950,14,4);
        this->AC5CT_Unit1Compressor2Fault_B1 = this->crrcMvb->getBool(0x950,14,5);
        this->AC5CT_Unit2Compressor1Fault_B1 = this->crrcMvb->getBool(0x950,14,6);
        this->AC5CT_Unit2Compressor2Fault_B1 = this->crrcMvb->getBool(0x950,14,7);
        this->AC5CT_Unit1Ventilator1Fault_B1 = this->crrcMvb->getBool(0x950,13,4);
        this->AC5CT_Unit1Ventilator2Fault_B1 = this->crrcMvb->getBool(0x950,13,5);
        this->AC5CT_Unit2Ventilator1Fault_B1 = this->crrcMvb->getBool(0x950,13,6);
        this->AC5CT_Unit2Ventilator2Fault_B1 = this->crrcMvb->getBool(0x950,13,7);
        this->AC5CT_Unit1Condenser1Fault_B1 = this->crrcMvb->getBool(0x950,13,0);
        this->AC5CT_Unit1Condenser2Fault_B1 = this->crrcMvb->getBool(0x950,13,1);
        this->AC5CT_Unit2Condenser1Fault_B1 = this->crrcMvb->getBool(0x950,13,2);
        this->AC5CT_Unit2Condenser2Fault_B1 = this->crrcMvb->getBool(0x950,13,3);


        this->AC5CT_TargetTemp_U8 = this->crrcMvb->getUnsignedChar(0x950,8);
        this->AC5CT_FreshAirTemp_U8 = this->crrcMvb->getUnsignedChar(0x950,10);
        this->AC5CT_ReturnAirTemp_U8 = this->crrcMvb->getUnsignedChar(0x950,11);
        this->AC5CT_SWVersionHighByteX_U8 = this->crrcMvb->getUnsignedChar(0x950,26);
        this->AC5CT_SWVersionHighByteY_U8 = this->crrcMvb->getUnsignedChar(0x950,27);
        this->AC5CT_LifeSignalHighByte_U8 = this->crrcMvb->getUnsignedChar(0x950,30);
        this->AC5CT_LifeSignalLowByte_U8 = this->crrcMvb->getUnsignedChar(0x950,31);
        //HVAC6
        this->AC6CT_HVACStopped_B1 = this->crrcMvb->getBool(0x960,0,0);
        this->AC6CT_Ventilation_B1 = this->crrcMvb->getBool(0x960,0,2);
        this->AC6CT_MannualMode_B1 = this->crrcMvb->getBool(0x960,0,4);
        this->AC6CT_AutoMode_B1 = this->crrcMvb->getBool(0x960,0,5);
        this->AC6CT_PreWork_B1 = this->crrcMvb->getBool(0x960,1,4);
        this->AC6CT_EmVentilation_B1 = this->crrcMvb->getBool(0x960,1,5);
        this->AC6CT_InsideFire_B1 = this->crrcMvb->getBool(0x960,2,1);
        this->AC6CT_OutsideFire_B1 = this->crrcMvb->getBool(0x960,2,2);
        this->AC6CT_NetCtrlMode_B1 = this->crrcMvb->getBool(0x960,2,4);
        this->AC6CT_LocalCtrlMode_B1 = this->crrcMvb->getBool(0x960,2,5);
        this->AC6CT_MinorFlt_B1 = this->crrcMvb->getBool(0x960,21,5);
        this->AC6CT_MediumFlt_B1 = this->crrcMvb->getBool(0x960,21,6);
        this->AC6CT_MajorFlt_B1 = this->crrcMvb->getBool(0x960,21,7);
        this->AC6CT_Unit1Compressor1On_B1 = this->crrcMvb->getBool(0x960,4,0);
        this->AC6CT_Unit1Compressor2On_B1 = this->crrcMvb->getBool(0x960,4,1);
        this->AC6CT_Unit1Ventilator1On_B1 = this->crrcMvb->getBool(0x960,4,2);
        this->AC6CT_Unit1Ventilator2On_B1 = this->crrcMvb->getBool(0x960,4,3);
        this->AC6CT_Unit1Condenser1On_B1 = this->crrcMvb->getBool(0x960,4,4);
        this->AC6CT_Unit1Condenser2On_B1 = this->crrcMvb->getBool(0x960,4,5);
        this->AC6CT_Unit2Compressor1On_B1 = this->crrcMvb->getBool(0x960,5,0);
        this->AC6CT_Unit2Compressor2On_B1 = this->crrcMvb->getBool(0x960,5,1);
        this->AC6CT_Unit2Ventilator1On_B1 = this->crrcMvb->getBool(0x960,5,2);
        this->AC6CT_Unit2Ventilator2On_B1 = this->crrcMvb->getBool(0x960,5,3);
        this->AC6CT_Unit2Condenser1On_B1 = this->crrcMvb->getBool(0x960,5,4);
        this->AC6CT_Unit2Condenser2On_B1 = this->crrcMvb->getBool(0x960,5,5);
        this->AC6CT_LodeDecFinished_B1 = this->crrcMvb->getBool(0x960,2,6);
        this->AC6CT_Unit1Compressor1Fault_B1 = this->crrcMvb->getBool(0x960,14,4);
        this->AC6CT_Unit1Compressor2Fault_B1 = this->crrcMvb->getBool(0x960,14,5);
        this->AC6CT_Unit2Compressor1Fault_B1 = this->crrcMvb->getBool(0x960,14,6);
        this->AC6CT_Unit2Compressor2Fault_B1 = this->crrcMvb->getBool(0x960,14,7);
        this->AC6CT_Unit1Ventilator1Fault_B1 = this->crrcMvb->getBool(0x960,13,4);
        this->AC6CT_Unit1Ventilator2Fault_B1 = this->crrcMvb->getBool(0x960,13,5);
        this->AC6CT_Unit2Ventilator1Fault_B1 = this->crrcMvb->getBool(0x960,13,6);
        this->AC6CT_Unit2Ventilator2Fault_B1 = this->crrcMvb->getBool(0x960,13,7);
        this->AC6CT_Unit1Condenser1Fault_B1 = this->crrcMvb->getBool(0x960,13,0);
        this->AC6CT_Unit1Condenser2Fault_B1 = this->crrcMvb->getBool(0x960,13,1);
        this->AC6CT_Unit2Condenser1Fault_B1 = this->crrcMvb->getBool(0x960,13,2);
        this->AC6CT_Unit2Condenser2Fault_B1 = this->crrcMvb->getBool(0x960,13,3);


        this->AC6CT_TargetTemp_U8 = this->crrcMvb->getUnsignedChar(0x960,8);
        this->AC6CT_FreshAirTemp_U8 = this->crrcMvb->getUnsignedChar(0x960,10);
        this->AC6CT_ReturnAirTemp_U8 = this->crrcMvb->getUnsignedChar(0x960,11);
        this->AC6CT_SWVersionHighByteX_U8 = this->crrcMvb->getUnsignedChar(0x960,26);
        this->AC6CT_SWVersionHighByteY_U8 = this->crrcMvb->getUnsignedChar(0x960,27);
        this->AC6CT_LifeSignalHighByte_U8 = this->crrcMvb->getUnsignedChar(0x960,30);
        this->AC6CT_LifeSignalLowByte_U8 = this->crrcMvb->getUnsignedChar(0x960,31);

    }


    QList<unsigned short int> temp_virtualports,temp_realports;

    /////*******EDCU -- CCU**********///////
    {


        //****
        this->DR1CT_LifeSignal_U16 = crrcMvb->getUnsignedInt(0x710,20);
        this->DR1CT_MDCUStatus_U8= crrcMvb->getUnsignedChar(0x710,22);

        this->DR2CT_LifeSignal_U16 = crrcMvb->getUnsignedInt(0x720,20);
        this->DR2CT_MDCUStatus_U8= crrcMvb->getUnsignedChar(0x720,22);
        temp_virtualports<<0xf710<<0xf711;
        temp_realports<<0x710<<0x711<<0x720<<0x721;
        this->createEDCUList(this->CTHM_EDCU1On_B1,this->CTHM_EDCU2On_B1,temp_virtualports,temp_realports);
        //*****TODO realdata from virual port
        this->DR1_2CT_SwVersion1_U8 = crrcMvb->getUnsignedChar(0xf710,10);
        this->DR1_2CT_SwVersion2_U8 = crrcMvb->getUnsignedChar(0xf710,11);

        this->DR1_2CT_SwVersionDCU1_U8 = crrcMvb->getUnsignedChar(0xf710,12);
        this->DR1_2CT_SwVersionDCU2_U8 = crrcMvb->getUnsignedChar(0xf710,13);
        this->DR1_2CT_SwVersionDCU3_U8 = crrcMvb->getUnsignedChar(0xf710,14);
        this->DR1_2CT_SwVersionDCU4_U8 = crrcMvb->getUnsignedChar(0xf710,15);
        this->DR1_2CT_SwVersionDCU5_U8 = crrcMvb->getUnsignedChar(0xf710,16);
        this->DR1_2CT_SwVersionDCU6_U8 = crrcMvb->getUnsignedChar(0xf710,17);
        this->DR1_2CT_SwVersionDCU7_U8 = crrcMvb->getUnsignedChar(0xf710,18);
        this->DR1_2CT_SwVersionDCU8_U8 = crrcMvb->getUnsignedChar(0xf710,19);

        this->DR1_2CT_DCU1Fault_U8 = crrcMvb->getUnsignedChar(0xf710,1);
        this->DR1_2CT_DCU2Fault_U8 = crrcMvb->getUnsignedChar(0xf710,2);
        this->DR1_2CT_DCU3Fault_U8 = crrcMvb->getUnsignedChar(0xf710,3);
        this->DR1_2CT_DCU4Fault_U8 = crrcMvb->getUnsignedChar(0xf710,4);
        this->DR1_2CT_DCU5Fault_U8 = crrcMvb->getUnsignedChar(0xf710,5);
        this->DR1_2CT_DCU6Fault_U8 = crrcMvb->getUnsignedChar(0xf710,6);
        this->DR1_2CT_DCU7Fault_U8 = crrcMvb->getUnsignedChar(0xf710,7);
        this->DR1_2CT_DCU8Fault_U8 = crrcMvb->getUnsignedChar(0xf710,8);

        this->DR1_2CT_DCU1EmUnlock_B1 = crrcMvb->getBool(0xf711,4,0);
        this->DR1_2CT_DCU2EmUnlock_B1 = crrcMvb->getBool(0xf711,4,1);
        this->DR1_2CT_DCU3EmUnlock_B1 = crrcMvb->getBool(0xf711,4,2);
        this->DR1_2CT_DCU4EmUnlock_B1 = crrcMvb->getBool(0xf711,4,3);
        this->DR1_2CT_DCU5EmUnlock_B1 = crrcMvb->getBool(0xf711,4,4);
        this->DR1_2CT_DCU6EmUnlock_B1 = crrcMvb->getBool(0xf711,4,5);
        this->DR1_2CT_DCU7EmUnlock_B1 = crrcMvb->getBool(0xf711,4,6);
        this->DR1_2CT_DCU8EmUnlock_B1 = crrcMvb->getBool(0xf711,4,7);

        this->DR1_2CT_DCU1Isolate_B1 = crrcMvb->getBool(0xf711,5,0);
        this->DR1_2CT_DCU2Isolate_B1 = crrcMvb->getBool(0xf711,5,1);
        this->DR1_2CT_DCU3Isolate_B1 = crrcMvb->getBool(0xf711,5,2);
        this->DR1_2CT_DCU4Isolate_B1 = crrcMvb->getBool(0xf711,5,3);
        this->DR1_2CT_DCU5Isolate_B1 = crrcMvb->getBool(0xf711,5,4);
        this->DR1_2CT_DCU6Isolate_B1 = crrcMvb->getBool(0xf711,5,5);
        this->DR1_2CT_DCU7Isolate_B1 = crrcMvb->getBool(0xf711,5,6);
        this->DR1_2CT_DCU8Isolate_B1 = crrcMvb->getBool(0xf711,5,7);

        this->DR1_2CT_DCU1ObstacleDetcted_B1 = crrcMvb->getBool(0xf711,6,0);
        this->DR1_2CT_DCU2ObstacleDetcted_B1 = crrcMvb->getBool(0xf711,6,1);
        this->DR1_2CT_DCU3ObstacleDetcted_B1 = crrcMvb->getBool(0xf711,6,2);
        this->DR1_2CT_DCU4ObstacleDetcted_B1 = crrcMvb->getBool(0xf711,6,3);
        this->DR1_2CT_DCU5ObstacleDetcted_B1 = crrcMvb->getBool(0xf711,6,4);
        this->DR1_2CT_DCU6ObstacleDetcted_B1 = crrcMvb->getBool(0xf711,6,5);
        this->DR1_2CT_DCU7ObstacleDetcted_B1 = crrcMvb->getBool(0xf711,6,6);
        this->DR1_2CT_DCU8ObstacleDetcted_B1 = crrcMvb->getBool(0xf711,6,7);

//        this->DR1_2CT_DCU1ObstacleDetcted_B1 = crrcMvb->getBool(0xf711,7,0);
//        this->DR1_2CT_DCU2ObstacleDetcted_B1 = crrcMvb->getBool(0xf711,7,1);
//        this->DR1_2CT_DCU3ObstacleDetcted_B1 = crrcMvb->getBool(0xf711,7,2);
//        this->DR1_2CT_DCU4ObstacleDetcted_B1 = crrcMvb->getBool(0xf711,7,3);
//        this->DR1_2CT_DCU5ObstacleDetcted_B1 = crrcMvb->getBool(0xf711,7,4);
//        this->DR1_2CT_DCU6ObstacleDetcted_B1 = crrcMvb->getBool(0xf711,7,5);
//        this->DR1_2CT_DCU7ObstacleDetcted_B1 = crrcMvb->getBool(0xf711,7,6);
//        this->DR1_2CT_DCU8ObstacleDetcted_B1 = crrcMvb->getBool(0xf711,7,7);

//        this->DR1_2CT_DCU1ObstacleDetcted_B1 = crrcMvb->getBool(0xf711,8,0);
//        this->DR1_2CT_DCU2ObstacleDetcted_B1 = crrcMvb->getBool(0xf711,8,1);
//        this->DR1_2CT_DCU3ObstacleDetcted_B1 = crrcMvb->getBool(0xf711,8,2);
//        this->DR1_2CT_DCU4ObstacleDetcted_B1 = crrcMvb->getBool(0xf711,8,3);
//        this->DR1_2CT_DCU5ObstacleDetcted_B1 = crrcMvb->getBool(0xf711,8,4);
//        this->DR1_2CT_DCU6ObstacleDetcted_B1 = crrcMvb->getBool(0xf711,8,5);
//        this->DR1_2CT_DCU7ObstacleDetcted_B1 = crrcMvb->getBool(0xf711,8,6);
//        this->DR1_2CT_DCU8ObstacleDetcted_B1 = crrcMvb->getBool(0xf711,8,7);


        this->DR1_2CT_DCU1TotallyClose_B1 = crrcMvb->getBool(0xf711,9,0);
        this->DR1_2CT_DCU2TotallyClose_B1 = crrcMvb->getBool(0xf711,9,1);
        this->DR1_2CT_DCU3TotallyClose_B1 = crrcMvb->getBool(0xf711,9,2);
        this->DR1_2CT_DCU4TotallyClose_B1 = crrcMvb->getBool(0xf711,9,3);
        this->DR1_2CT_DCU5TotallyClose_B1 = crrcMvb->getBool(0xf711,9,4);
        this->DR1_2CT_DCU6TotallyClose_B1 = crrcMvb->getBool(0xf711,9,5);
        this->DR1_2CT_DCU7TotallyClose_B1 = crrcMvb->getBool(0xf711,9,6);
        this->DR1_2CT_DCU8TotallyClose_B1 = crrcMvb->getBool(0xf711,9,7);

        this->DR1_2CT_DCU1TotallyOpen_B1 = crrcMvb->getBool(0xf711,10,0)|| crrcMvb->getBool(0xf711,7,0)|| crrcMvb->getBool(0xf711,8,0);
        this->DR1_2CT_DCU2TotallyOpen_B1 = crrcMvb->getBool(0xf711,10,1)|| crrcMvb->getBool(0xf711,7,1)|| crrcMvb->getBool(0xf711,8,1);
        this->DR1_2CT_DCU3TotallyOpen_B1 = crrcMvb->getBool(0xf711,10,2)|| crrcMvb->getBool(0xf711,7,2)|| crrcMvb->getBool(0xf711,8,2);
        this->DR1_2CT_DCU4TotallyOpen_B1 = crrcMvb->getBool(0xf711,10,3)|| crrcMvb->getBool(0xf711,7,3)|| crrcMvb->getBool(0xf711,8,3);
        this->DR1_2CT_DCU5TotallyOpen_B1 = crrcMvb->getBool(0xf711,10,4)|| crrcMvb->getBool(0xf711,7,4)|| crrcMvb->getBool(0xf711,8,4);
        this->DR1_2CT_DCU6TotallyOpen_B1 = crrcMvb->getBool(0xf711,10,5)|| crrcMvb->getBool(0xf711,7,5)|| crrcMvb->getBool(0xf711,8,5);
        this->DR1_2CT_DCU7TotallyOpen_B1 = crrcMvb->getBool(0xf711,10,6)|| crrcMvb->getBool(0xf711,7,6)|| crrcMvb->getBool(0xf711,8,6);
        this->DR1_2CT_DCU8TotallyOpen_B1 = crrcMvb->getBool(0xf711,10,7)|| crrcMvb->getBool(0xf711,7,7)|| crrcMvb->getBool(0xf711,8,7);

        this->DR1_2CT_DCU1GreenInputFeedback_B1 = crrcMvb->getBool(0xf711,27,0);
        this->DR1_2CT_DCU2GreenInputFeedback_B1 = crrcMvb->getBool(0xf711,27,1);
        this->DR1_2CT_DCU3GreenInputFeedback_B1 = crrcMvb->getBool(0xf711,27,2);
        this->DR1_2CT_DCU4GreenInputFeedback_B1 = crrcMvb->getBool(0xf711,27,3);
        this->DR1_2CT_DCU5GreenInputFeedback_B1 = crrcMvb->getBool(0xf711,27,4);
        this->DR1_2CT_DCU6GreenInputFeedback_B1 = crrcMvb->getBool(0xf711,27,5);
        this->DR1_2CT_DCU7GreenInputFeedback_B1 = crrcMvb->getBool(0xf711,27,6);
        this->DR1_2CT_DCU8GreenInputFeedback_B1 = crrcMvb->getBool(0xf711,27,7);

        this->DR1_2CT_DCU1GreenOutputFeedback_B1 = crrcMvb->getBool(0xf711,28,0);
        this->DR1_2CT_DCU2GreenOutputFeedback_B1 = crrcMvb->getBool(0xf711,28,1);
        this->DR1_2CT_DCU3GreenOutputFeedback_B1 = crrcMvb->getBool(0xf711,28,2);
        this->DR1_2CT_DCU4GreenOutputFeedback_B1 = crrcMvb->getBool(0xf711,28,3);
        this->DR1_2CT_DCU5GreenOutputFeedback_B1 = crrcMvb->getBool(0xf711,28,4);
        this->DR1_2CT_DCU6GreenOutputFeedback_B1 = crrcMvb->getBool(0xf711,28,5);
        this->DR1_2CT_DCU7GreenOutputFeedback_B1 = crrcMvb->getBool(0xf711,28,6);
        this->DR1_2CT_DCU8GreenOutputFeedback_B1 = crrcMvb->getBool(0xf711,28,7);

        //*****

        this->DR3CT_LifeSignal_U16 = crrcMvb->getUnsignedInt(0x730,20);
        this->DR3CT_MDCUStatus_U8= crrcMvb->getUnsignedChar(0x730,22);

        this->DR4CT_LifeSignal_U16 = crrcMvb->getUnsignedInt(0x740,20);
        this->DR4CT_MDCUStatus_U8= crrcMvb->getUnsignedChar(0x740,22);
        temp_virtualports.clear();
        temp_realports.clear();
        temp_virtualports<<0xf730<<0xf731;
        temp_realports<<0x730<<0x731<<0x740<<0x741;
        this->createEDCUList(this->CTHM_EDCU3On_B1,this->CTHM_EDCU4On_B1,temp_virtualports,temp_realports);
        //*****TODO realdata from virual port
        this->DR3_4CT_SwVersion1_U8 = crrcMvb->getUnsignedChar(0xf730,10);
        this->DR3_4CT_SwVersion2_U8 = crrcMvb->getUnsignedChar(0xf730,11);

        this->DR3_4CT_SwVersionDCU1_U8 = crrcMvb->getUnsignedChar(0xf730,12);
        this->DR3_4CT_SwVersionDCU2_U8 = crrcMvb->getUnsignedChar(0xf730,13);
        this->DR3_4CT_SwVersionDCU3_U8 = crrcMvb->getUnsignedChar(0xf730,14);
        this->DR3_4CT_SwVersionDCU4_U8 = crrcMvb->getUnsignedChar(0xf730,15);
        this->DR3_4CT_SwVersionDCU5_U8 = crrcMvb->getUnsignedChar(0xf730,16);
        this->DR3_4CT_SwVersionDCU6_U8 = crrcMvb->getUnsignedChar(0xf730,17);
        this->DR3_4CT_SwVersionDCU7_U8 = crrcMvb->getUnsignedChar(0xf730,18);
        this->DR3_4CT_SwVersionDCU8_U8 = crrcMvb->getUnsignedChar(0xf730,19);

        this->DR3_4CT_DCU1Fault_U8 = crrcMvb->getUnsignedChar(0xf730,1);
        this->DR3_4CT_DCU2Fault_U8 = crrcMvb->getUnsignedChar(0xf730,2);
        this->DR3_4CT_DCU3Fault_U8 = crrcMvb->getUnsignedChar(0xf730,3);
        this->DR3_4CT_DCU4Fault_U8 = crrcMvb->getUnsignedChar(0xf730,4);
        this->DR3_4CT_DCU5Fault_U8 = crrcMvb->getUnsignedChar(0xf730,5);
        this->DR3_4CT_DCU6Fault_U8 = crrcMvb->getUnsignedChar(0xf730,6);
        this->DR3_4CT_DCU7Fault_U8 = crrcMvb->getUnsignedChar(0xf730,7);
        this->DR3_4CT_DCU8Fault_U8 = crrcMvb->getUnsignedChar(0xf730,8);

        this->DR3_4CT_DCU1EmUnlock_B1 = crrcMvb->getBool(0xf731,4,0);
        this->DR3_4CT_DCU2EmUnlock_B1 = crrcMvb->getBool(0xf731,4,1);
        this->DR3_4CT_DCU3EmUnlock_B1 = crrcMvb->getBool(0xf731,4,2);
        this->DR3_4CT_DCU4EmUnlock_B1 = crrcMvb->getBool(0xf731,4,3);
        this->DR3_4CT_DCU5EmUnlock_B1 = crrcMvb->getBool(0xf731,4,4);
        this->DR3_4CT_DCU6EmUnlock_B1 = crrcMvb->getBool(0xf731,4,5);
        this->DR3_4CT_DCU7EmUnlock_B1 = crrcMvb->getBool(0xf731,4,6);
        this->DR3_4CT_DCU8EmUnlock_B1 = crrcMvb->getBool(0xf731,4,7);

        this->DR3_4CT_DCU1Isolate_B1 = crrcMvb->getBool(0xf731,5,0);
        this->DR3_4CT_DCU2Isolate_B1 = crrcMvb->getBool(0xf731,5,1);
        this->DR3_4CT_DCU3Isolate_B1 = crrcMvb->getBool(0xf731,5,2);
        this->DR3_4CT_DCU4Isolate_B1 = crrcMvb->getBool(0xf731,5,3);
        this->DR3_4CT_DCU5Isolate_B1 = crrcMvb->getBool(0xf731,5,4);
        this->DR3_4CT_DCU6Isolate_B1 = crrcMvb->getBool(0xf731,5,5);
        this->DR3_4CT_DCU7Isolate_B1 = crrcMvb->getBool(0xf731,5,6);
        this->DR3_4CT_DCU8Isolate_B1 = crrcMvb->getBool(0xf731,5,7);

        this->DR3_4CT_DCU1ObstacleDetcted_B1 = crrcMvb->getBool(0xf731,6,0);
        this->DR3_4CT_DCU2ObstacleDetcted_B1 = crrcMvb->getBool(0xf731,6,1);
        this->DR3_4CT_DCU3ObstacleDetcted_B1 = crrcMvb->getBool(0xf731,6,2);
        this->DR3_4CT_DCU4ObstacleDetcted_B1 = crrcMvb->getBool(0xf731,6,3);
        this->DR3_4CT_DCU5ObstacleDetcted_B1 = crrcMvb->getBool(0xf731,6,4);
        this->DR3_4CT_DCU6ObstacleDetcted_B1 = crrcMvb->getBool(0xf731,6,5);
        this->DR3_4CT_DCU7ObstacleDetcted_B1 = crrcMvb->getBool(0xf731,6,6);
        this->DR3_4CT_DCU8ObstacleDetcted_B1 = crrcMvb->getBool(0xf731,6,7);

        this->DR3_4CT_DCU1TotallyClose_B1 = crrcMvb->getBool(0xf731,9,0);
        this->DR3_4CT_DCU2TotallyClose_B1 = crrcMvb->getBool(0xf731,9,1);
        this->DR3_4CT_DCU3TotallyClose_B1 = crrcMvb->getBool(0xf731,9,2);
        this->DR3_4CT_DCU4TotallyClose_B1 = crrcMvb->getBool(0xf731,9,3);
        this->DR3_4CT_DCU5TotallyClose_B1 = crrcMvb->getBool(0xf731,9,4);
        this->DR3_4CT_DCU6TotallyClose_B1 = crrcMvb->getBool(0xf731,9,5);
        this->DR3_4CT_DCU7TotallyClose_B1 = crrcMvb->getBool(0xf731,9,6);
        this->DR3_4CT_DCU8TotallyClose_B1 = crrcMvb->getBool(0xf731,9,7);

//        this->DR3_4CT_DCU1TotallyOpen_B1 = crrcMvb->getBool(0xf731,10,0);
//        this->DR3_4CT_DCU2TotallyOpen_B1 = crrcMvb->getBool(0xf731,10,1);
//        this->DR3_4CT_DCU3TotallyOpen_B1 = crrcMvb->getBool(0xf731,10,2);
//        this->DR3_4CT_DCU4TotallyOpen_B1 = crrcMvb->getBool(0xf731,10,3);
//        this->DR3_4CT_DCU5TotallyOpen_B1 = crrcMvb->getBool(0xf731,10,4);
//        this->DR3_4CT_DCU6TotallyOpen_B1 = crrcMvb->getBool(0xf731,10,5);
//        this->DR3_4CT_DCU7TotallyOpen_B1 = crrcMvb->getBool(0xf731,10,6);
//        this->DR3_4CT_DCU8TotallyOpen_B1 = crrcMvb->getBool(0xf731,10,7);

        this->DR3_4CT_DCU1TotallyOpen_B1 = crrcMvb->getBool(0xf731,10,0)|| crrcMvb->getBool(0xf731,7,0)|| crrcMvb->getBool(0xf731,8,0);
        this->DR3_4CT_DCU2TotallyOpen_B1 = crrcMvb->getBool(0xf731,10,1)|| crrcMvb->getBool(0xf731,7,1)|| crrcMvb->getBool(0xf731,8,1);
        this->DR3_4CT_DCU3TotallyOpen_B1 = crrcMvb->getBool(0xf731,10,2)|| crrcMvb->getBool(0xf731,7,2)|| crrcMvb->getBool(0xf731,8,2);
        this->DR3_4CT_DCU4TotallyOpen_B1 = crrcMvb->getBool(0xf731,10,3)|| crrcMvb->getBool(0xf731,7,3)|| crrcMvb->getBool(0xf731,8,3);
        this->DR3_4CT_DCU5TotallyOpen_B1 = crrcMvb->getBool(0xf731,10,4)|| crrcMvb->getBool(0xf731,7,4)|| crrcMvb->getBool(0xf731,8,4);
        this->DR3_4CT_DCU6TotallyOpen_B1 = crrcMvb->getBool(0xf731,10,5)|| crrcMvb->getBool(0xf731,7,5)|| crrcMvb->getBool(0xf731,8,5);
        this->DR3_4CT_DCU7TotallyOpen_B1 = crrcMvb->getBool(0xf731,10,6)|| crrcMvb->getBool(0xf731,7,6)|| crrcMvb->getBool(0xf731,8,6);
        this->DR3_4CT_DCU8TotallyOpen_B1 = crrcMvb->getBool(0xf731,10,7)|| crrcMvb->getBool(0xf731,7,7)|| crrcMvb->getBool(0xf731,8,7);


        this->DR3_4CT_DCU1GreenInputFeedback_B1 = crrcMvb->getBool(0xf731,27,0);
        this->DR3_4CT_DCU2GreenInputFeedback_B1 = crrcMvb->getBool(0xf731,27,1);
        this->DR3_4CT_DCU3GreenInputFeedback_B1 = crrcMvb->getBool(0xf731,27,2);
        this->DR3_4CT_DCU4GreenInputFeedback_B1 = crrcMvb->getBool(0xf731,27,3);
        this->DR3_4CT_DCU5GreenInputFeedback_B1 = crrcMvb->getBool(0xf731,27,4);
        this->DR3_4CT_DCU6GreenInputFeedback_B1 = crrcMvb->getBool(0xf731,27,5);
        this->DR3_4CT_DCU7GreenInputFeedback_B1 = crrcMvb->getBool(0xf731,27,6);
        this->DR3_4CT_DCU8GreenInputFeedback_B1 = crrcMvb->getBool(0xf731,27,7);

        this->DR3_4CT_DCU1GreenOutputFeedback_B1 = crrcMvb->getBool(0xf731,28,0);
        this->DR3_4CT_DCU2GreenOutputFeedback_B1 = crrcMvb->getBool(0xf731,28,1);
        this->DR3_4CT_DCU3GreenOutputFeedback_B1 = crrcMvb->getBool(0xf731,28,2);
        this->DR3_4CT_DCU4GreenOutputFeedback_B1 = crrcMvb->getBool(0xf731,28,3);
        this->DR3_4CT_DCU5GreenOutputFeedback_B1 = crrcMvb->getBool(0xf731,28,4);
        this->DR3_4CT_DCU6GreenOutputFeedback_B1 = crrcMvb->getBool(0xf731,28,5);
        this->DR3_4CT_DCU7GreenOutputFeedback_B1 = crrcMvb->getBool(0xf731,28,6);
        this->DR3_4CT_DCU8GreenOutputFeedback_B1 = crrcMvb->getBool(0xf731,28,7);


        //*****

        this->DR5CT_LifeSignal_U16 = crrcMvb->getUnsignedInt(0x750,20);
        this->DR5CT_MDCUStatus_U8= crrcMvb->getUnsignedChar(0x750,22);

        this->DR6CT_LifeSignal_U16 = crrcMvb->getUnsignedInt(0x760,20);
        this->DR6CT_MDCUStatus_U8= crrcMvb->getUnsignedChar(0x760,22);
        temp_virtualports.clear();
        temp_realports.clear();
        temp_virtualports<<0xf750<<0xf751;
        temp_realports<<0x750<<0x751<<0x760<<0x761;
        this->createEDCUList(this->CTHM_EDCU5On_B1,this->CTHM_EDCU6On_B1,temp_virtualports,temp_realports);
        //*****TODO realdata from virual port
        this->DR5_6CT_SwVersion1_U8 = crrcMvb->getUnsignedChar(0xf750,10);
        this->DR5_6CT_SwVersion2_U8 = crrcMvb->getUnsignedChar(0xf750,11);

        this->DR5_6CT_SwVersionDCU1_U8 = crrcMvb->getUnsignedChar(0xf750,12);
        this->DR5_6CT_SwVersionDCU2_U8 = crrcMvb->getUnsignedChar(0xf750,13);
        this->DR5_6CT_SwVersionDCU3_U8 = crrcMvb->getUnsignedChar(0xf750,14);
        this->DR5_6CT_SwVersionDCU4_U8 = crrcMvb->getUnsignedChar(0xf750,15);
        this->DR5_6CT_SwVersionDCU5_U8 = crrcMvb->getUnsignedChar(0xf750,16);
        this->DR5_6CT_SwVersionDCU6_U8 = crrcMvb->getUnsignedChar(0xf750,17);
        this->DR5_6CT_SwVersionDCU7_U8 = crrcMvb->getUnsignedChar(0xf750,18);
        this->DR5_6CT_SwVersionDCU8_U8 = crrcMvb->getUnsignedChar(0xf750,19);

        this->DR5_6CT_DCU1Fault_U8 = crrcMvb->getUnsignedChar(0xf750,1);
        this->DR5_6CT_DCU2Fault_U8 = crrcMvb->getUnsignedChar(0xf750,2);
        this->DR5_6CT_DCU3Fault_U8 = crrcMvb->getUnsignedChar(0xf750,3);
        this->DR5_6CT_DCU4Fault_U8 = crrcMvb->getUnsignedChar(0xf750,4);
        this->DR5_6CT_DCU5Fault_U8 = crrcMvb->getUnsignedChar(0xf750,5);
        this->DR5_6CT_DCU6Fault_U8 = crrcMvb->getUnsignedChar(0xf750,6);
        this->DR5_6CT_DCU7Fault_U8 = crrcMvb->getUnsignedChar(0xf750,7);
        this->DR5_6CT_DCU8Fault_U8 = crrcMvb->getUnsignedChar(0xf750,8);

        this->DR5_6CT_DCU1EmUnlock_B1 = crrcMvb->getBool(0xf751,4,0);
        this->DR5_6CT_DCU2EmUnlock_B1 = crrcMvb->getBool(0xf751,4,1);
        this->DR5_6CT_DCU3EmUnlock_B1 = crrcMvb->getBool(0xf751,4,2);
        this->DR5_6CT_DCU4EmUnlock_B1 = crrcMvb->getBool(0xf751,4,3);
        this->DR5_6CT_DCU5EmUnlock_B1 = crrcMvb->getBool(0xf751,4,4);
        this->DR5_6CT_DCU6EmUnlock_B1 = crrcMvb->getBool(0xf751,4,5);
        this->DR5_6CT_DCU7EmUnlock_B1 = crrcMvb->getBool(0xf751,4,6);
        this->DR5_6CT_DCU8EmUnlock_B1 = crrcMvb->getBool(0xf751,4,7);

        this->DR5_6CT_DCU1Isolate_B1 = crrcMvb->getBool(0xf751,5,0);
        this->DR5_6CT_DCU2Isolate_B1 = crrcMvb->getBool(0xf751,5,1);
        this->DR5_6CT_DCU3Isolate_B1 = crrcMvb->getBool(0xf751,5,2);
        this->DR5_6CT_DCU4Isolate_B1 = crrcMvb->getBool(0xf751,5,3);
        this->DR5_6CT_DCU5Isolate_B1 = crrcMvb->getBool(0xf751,5,4);
        this->DR5_6CT_DCU6Isolate_B1 = crrcMvb->getBool(0xf751,5,5);
        this->DR5_6CT_DCU7Isolate_B1 = crrcMvb->getBool(0xf751,5,6);
        this->DR5_6CT_DCU8Isolate_B1 = crrcMvb->getBool(0xf751,5,7);

        this->DR5_6CT_DCU1ObstacleDetcted_B1 = crrcMvb->getBool(0xf751,6,0);
        this->DR5_6CT_DCU2ObstacleDetcted_B1 = crrcMvb->getBool(0xf751,6,1);
        this->DR5_6CT_DCU3ObstacleDetcted_B1 = crrcMvb->getBool(0xf751,6,2);
        this->DR5_6CT_DCU4ObstacleDetcted_B1 = crrcMvb->getBool(0xf751,6,3);
        this->DR5_6CT_DCU5ObstacleDetcted_B1 = crrcMvb->getBool(0xf751,6,4);
        this->DR5_6CT_DCU6ObstacleDetcted_B1 = crrcMvb->getBool(0xf751,6,5);
        this->DR5_6CT_DCU7ObstacleDetcted_B1 = crrcMvb->getBool(0xf751,6,6);
        this->DR5_6CT_DCU8ObstacleDetcted_B1 = crrcMvb->getBool(0xf751,6,7);

        this->DR5_6CT_DCU1TotallyClose_B1 = crrcMvb->getBool(0xf751,9,0);
        this->DR5_6CT_DCU2TotallyClose_B1 = crrcMvb->getBool(0xf751,9,1);
        this->DR5_6CT_DCU3TotallyClose_B1 = crrcMvb->getBool(0xf751,9,2);
        this->DR5_6CT_DCU4TotallyClose_B1 = crrcMvb->getBool(0xf751,9,3);
        this->DR5_6CT_DCU5TotallyClose_B1 = crrcMvb->getBool(0xf751,9,4);
        this->DR5_6CT_DCU6TotallyClose_B1 = crrcMvb->getBool(0xf751,9,5);
        this->DR5_6CT_DCU7TotallyClose_B1 = crrcMvb->getBool(0xf751,9,6);
        this->DR5_6CT_DCU8TotallyClose_B1 = crrcMvb->getBool(0xf751,9,7);

//        this->DR5_6CT_DCU1TotallyOpen_B1 = crrcMvb->getBool(0xf751,10,0);
//        this->DR5_6CT_DCU2TotallyOpen_B1 = crrcMvb->getBool(0xf751,10,1);
//        this->DR5_6CT_DCU3TotallyOpen_B1 = crrcMvb->getBool(0xf751,10,2);
//        this->DR5_6CT_DCU4TotallyOpen_B1 = crrcMvb->getBool(0xf751,10,3);
//        this->DR5_6CT_DCU5TotallyOpen_B1 = crrcMvb->getBool(0xf751,10,4);
//        this->DR5_6CT_DCU6TotallyOpen_B1 = crrcMvb->getBool(0xf751,10,5);
//        this->DR5_6CT_DCU7TotallyOpen_B1 = crrcMvb->getBool(0xf751,10,6);
//        this->DR5_6CT_DCU8TotallyOpen_B1 = crrcMvb->getBool(0xf751,10,7);

        this->DR5_6CT_DCU1TotallyOpen_B1 = crrcMvb->getBool(0xf751,10,0)|| crrcMvb->getBool(0xf751,7,0)|| crrcMvb->getBool(0xf751,8,0);
        this->DR5_6CT_DCU2TotallyOpen_B1 = crrcMvb->getBool(0xf751,10,1)|| crrcMvb->getBool(0xf751,7,1)|| crrcMvb->getBool(0xf751,8,1);
        this->DR5_6CT_DCU3TotallyOpen_B1 = crrcMvb->getBool(0xf751,10,2)|| crrcMvb->getBool(0xf751,7,2)|| crrcMvb->getBool(0xf751,8,2);
        this->DR5_6CT_DCU4TotallyOpen_B1 = crrcMvb->getBool(0xf751,10,3)|| crrcMvb->getBool(0xf751,7,3)|| crrcMvb->getBool(0xf751,8,3);
        this->DR5_6CT_DCU5TotallyOpen_B1 = crrcMvb->getBool(0xf751,10,4)|| crrcMvb->getBool(0xf751,7,4)|| crrcMvb->getBool(0xf751,8,4);
        this->DR5_6CT_DCU6TotallyOpen_B1 = crrcMvb->getBool(0xf751,10,5)|| crrcMvb->getBool(0xf751,7,5)|| crrcMvb->getBool(0xf751,8,5);
        this->DR5_6CT_DCU7TotallyOpen_B1 = crrcMvb->getBool(0xf751,10,6)|| crrcMvb->getBool(0xf751,7,6)|| crrcMvb->getBool(0xf751,8,6);
        this->DR5_6CT_DCU8TotallyOpen_B1 = crrcMvb->getBool(0xf751,10,7)|| crrcMvb->getBool(0xf751,7,7)|| crrcMvb->getBool(0xf751,8,7);

        this->DR5_6CT_DCU1GreenInputFeedback_B1 = crrcMvb->getBool(0xf751,27,0);
        this->DR5_6CT_DCU2GreenInputFeedback_B1 = crrcMvb->getBool(0xf751,27,1);
        this->DR5_6CT_DCU3GreenInputFeedback_B1 = crrcMvb->getBool(0xf751,27,2);
        this->DR5_6CT_DCU4GreenInputFeedback_B1 = crrcMvb->getBool(0xf751,27,3);
        this->DR5_6CT_DCU5GreenInputFeedback_B1 = crrcMvb->getBool(0xf751,27,4);
        this->DR5_6CT_DCU6GreenInputFeedback_B1 = crrcMvb->getBool(0xf751,27,5);
        this->DR5_6CT_DCU7GreenInputFeedback_B1 = crrcMvb->getBool(0xf751,27,6);
        this->DR5_6CT_DCU8GreenInputFeedback_B1 = crrcMvb->getBool(0xf751,27,7);

        this->DR5_6CT_DCU1GreenOutputFeedback_B1 = crrcMvb->getBool(0xf751,28,0);
        this->DR5_6CT_DCU2GreenOutputFeedback_B1 = crrcMvb->getBool(0xf751,28,1);
        this->DR5_6CT_DCU3GreenOutputFeedback_B1 = crrcMvb->getBool(0xf751,28,2);
        this->DR5_6CT_DCU4GreenOutputFeedback_B1 = crrcMvb->getBool(0xf751,28,3);
        this->DR5_6CT_DCU5GreenOutputFeedback_B1 = crrcMvb->getBool(0xf751,28,4);
        this->DR5_6CT_DCU6GreenOutputFeedback_B1 = crrcMvb->getBool(0xf751,28,5);
        this->DR5_6CT_DCU7GreenOutputFeedback_B1 = crrcMvb->getBool(0xf751,28,6);
        this->DR5_6CT_DCU8GreenOutputFeedback_B1 = crrcMvb->getBool(0xf751,28,7);


        //*****

        this->DR7CT_LifeSignal_U16 = crrcMvb->getUnsignedInt(0x770,20);
        this->DR7CT_MDCUStatus_U8= crrcMvb->getUnsignedChar(0x770,22);

        this->DR8CT_LifeSignal_U16 = crrcMvb->getUnsignedInt(0x780,20);
        this->DR8CT_MDCUStatus_U8= crrcMvb->getUnsignedChar(0x780,22);
        temp_virtualports.clear();
        temp_realports.clear();
        temp_virtualports<<0xf770<<0xf771;
        temp_realports<<0x770<<0x771<<0x780<<0x781;
        this->createEDCUList(this->CTHM_EDCU7On_B1,this->CTHM_EDCU8On_B1,temp_virtualports,temp_realports);
        this->DR7_8CT_SwVersion1_U8 = crrcMvb->getUnsignedChar(0xf770,10);
        this->DR7_8CT_SwVersion2_U8 = crrcMvb->getUnsignedChar(0xf770,11);

        this->DR7_8CT_SwVersionDCU1_U8 = crrcMvb->getUnsignedChar(0xf770,12);
        this->DR7_8CT_SwVersionDCU2_U8 = crrcMvb->getUnsignedChar(0xf770,13);
        this->DR7_8CT_SwVersionDCU3_U8 = crrcMvb->getUnsignedChar(0xf770,14);
        this->DR7_8CT_SwVersionDCU4_U8 = crrcMvb->getUnsignedChar(0xf770,15);
        this->DR7_8CT_SwVersionDCU5_U8 = crrcMvb->getUnsignedChar(0xf770,16);
        this->DR7_8CT_SwVersionDCU6_U8 = crrcMvb->getUnsignedChar(0xf770,17);
        this->DR7_8CT_SwVersionDCU7_U8 = crrcMvb->getUnsignedChar(0xf770,18);
        this->DR7_8CT_SwVersionDCU8_U8 = crrcMvb->getUnsignedChar(0xf770,19);

        this->DR7_8CT_DCU1Fault_U8 = crrcMvb->getUnsignedChar(0xf770,1);
        this->DR7_8CT_DCU2Fault_U8 = crrcMvb->getUnsignedChar(0xf770,2);
        this->DR7_8CT_DCU3Fault_U8 = crrcMvb->getUnsignedChar(0xf770,3);
        this->DR7_8CT_DCU4Fault_U8 = crrcMvb->getUnsignedChar(0xf770,4);
        this->DR7_8CT_DCU5Fault_U8 = crrcMvb->getUnsignedChar(0xf770,5);
        this->DR7_8CT_DCU6Fault_U8 = crrcMvb->getUnsignedChar(0xf770,6);
        this->DR7_8CT_DCU7Fault_U8 = crrcMvb->getUnsignedChar(0xf770,7);
        this->DR7_8CT_DCU8Fault_U8 = crrcMvb->getUnsignedChar(0xf770,8);

        this->DR7_8CT_DCU1EmUnlock_B1 = crrcMvb->getBool(0xf771,4,0);
        this->DR7_8CT_DCU2EmUnlock_B1 = crrcMvb->getBool(0xf771,4,1);
        this->DR7_8CT_DCU3EmUnlock_B1 = crrcMvb->getBool(0xf771,4,2);
        this->DR7_8CT_DCU4EmUnlock_B1 = crrcMvb->getBool(0xf771,4,3);
        this->DR7_8CT_DCU5EmUnlock_B1 = crrcMvb->getBool(0xf771,4,4);
        this->DR7_8CT_DCU6EmUnlock_B1 = crrcMvb->getBool(0xf771,4,5);
        this->DR7_8CT_DCU7EmUnlock_B1 = crrcMvb->getBool(0xf771,4,6);
        this->DR7_8CT_DCU8EmUnlock_B1 = crrcMvb->getBool(0xf771,4,7);

        this->DR7_8CT_DCU1Isolate_B1 = crrcMvb->getBool(0xf771,5,0);
        this->DR7_8CT_DCU2Isolate_B1 = crrcMvb->getBool(0xf771,5,1);
        this->DR7_8CT_DCU3Isolate_B1 = crrcMvb->getBool(0xf771,5,2);
        this->DR7_8CT_DCU4Isolate_B1 = crrcMvb->getBool(0xf771,5,3);
        this->DR7_8CT_DCU5Isolate_B1 = crrcMvb->getBool(0xf771,5,4);
        this->DR7_8CT_DCU6Isolate_B1 = crrcMvb->getBool(0xf771,5,5);
        this->DR7_8CT_DCU7Isolate_B1 = crrcMvb->getBool(0xf771,5,6);
        this->DR7_8CT_DCU8Isolate_B1 = crrcMvb->getBool(0xf771,5,7);

        this->DR7_8CT_DCU1ObstacleDetcted_B1 = crrcMvb->getBool(0xf771,6,0);
        this->DR7_8CT_DCU2ObstacleDetcted_B1 = crrcMvb->getBool(0xf771,6,1);
        this->DR7_8CT_DCU3ObstacleDetcted_B1 = crrcMvb->getBool(0xf771,6,2);
        this->DR7_8CT_DCU4ObstacleDetcted_B1 = crrcMvb->getBool(0xf771,6,3);
        this->DR7_8CT_DCU5ObstacleDetcted_B1 = crrcMvb->getBool(0xf771,6,4);
        this->DR7_8CT_DCU6ObstacleDetcted_B1 = crrcMvb->getBool(0xf771,6,5);
        this->DR7_8CT_DCU7ObstacleDetcted_B1 = crrcMvb->getBool(0xf771,6,6);
        this->DR7_8CT_DCU8ObstacleDetcted_B1 = crrcMvb->getBool(0xf771,6,7);

        this->DR7_8CT_DCU1TotallyClose_B1 = crrcMvb->getBool(0xf771,9,0);
        this->DR7_8CT_DCU2TotallyClose_B1 = crrcMvb->getBool(0xf771,9,1);
        this->DR7_8CT_DCU3TotallyClose_B1 = crrcMvb->getBool(0xf771,9,2);
        this->DR7_8CT_DCU4TotallyClose_B1 = crrcMvb->getBool(0xf771,9,3);
        this->DR7_8CT_DCU5TotallyClose_B1 = crrcMvb->getBool(0xf771,9,4);
        this->DR7_8CT_DCU6TotallyClose_B1 = crrcMvb->getBool(0xf771,9,5);
        this->DR7_8CT_DCU7TotallyClose_B1 = crrcMvb->getBool(0xf771,9,6);
        this->DR7_8CT_DCU8TotallyClose_B1 = crrcMvb->getBool(0xf771,9,7);

//        this->DR7_8CT_DCU1TotallyOpen_B1 = crrcMvb->getBool(0xf771,10,0);
//        this->DR7_8CT_DCU2TotallyOpen_B1 = crrcMvb->getBool(0xf771,10,1);
//        this->DR7_8CT_DCU3TotallyOpen_B1 = crrcMvb->getBool(0xf771,10,2);
//        this->DR7_8CT_DCU4TotallyOpen_B1 = crrcMvb->getBool(0xf771,10,3);
//        this->DR7_8CT_DCU5TotallyOpen_B1 = crrcMvb->getBool(0xf771,10,4);
//        this->DR7_8CT_DCU6TotallyOpen_B1 = crrcMvb->getBool(0xf771,10,5);
//        this->DR7_8CT_DCU7TotallyOpen_B1 = crrcMvb->getBool(0xf771,10,6);
//        this->DR7_8CT_DCU8TotallyOpen_B1 = crrcMvb->getBool(0xf771,10,7);

        this->DR7_8CT_DCU1TotallyOpen_B1 = crrcMvb->getBool(0xf771,10,0)|| crrcMvb->getBool(0xf771,7,0)|| crrcMvb->getBool(0xf771,8,0);
        this->DR7_8CT_DCU2TotallyOpen_B1 = crrcMvb->getBool(0xf771,10,1)|| crrcMvb->getBool(0xf771,7,1)|| crrcMvb->getBool(0xf771,8,1);
        this->DR7_8CT_DCU3TotallyOpen_B1 = crrcMvb->getBool(0xf771,10,2)|| crrcMvb->getBool(0xf771,7,2)|| crrcMvb->getBool(0xf771,8,2);
        this->DR7_8CT_DCU4TotallyOpen_B1 = crrcMvb->getBool(0xf771,10,3)|| crrcMvb->getBool(0xf771,7,3)|| crrcMvb->getBool(0xf771,8,3);
        this->DR7_8CT_DCU5TotallyOpen_B1 = crrcMvb->getBool(0xf771,10,4)|| crrcMvb->getBool(0xf771,7,4)|| crrcMvb->getBool(0xf771,8,4);
        this->DR7_8CT_DCU6TotallyOpen_B1 = crrcMvb->getBool(0xf771,10,5)|| crrcMvb->getBool(0xf771,7,5)|| crrcMvb->getBool(0xf771,8,5);
        this->DR7_8CT_DCU7TotallyOpen_B1 = crrcMvb->getBool(0xf771,10,6)|| crrcMvb->getBool(0xf771,7,6)|| crrcMvb->getBool(0xf771,8,6);
        this->DR7_8CT_DCU8TotallyOpen_B1 = crrcMvb->getBool(0xf771,10,7)|| crrcMvb->getBool(0xf771,7,7)|| crrcMvb->getBool(0xf771,8,7);


        this->DR7_8CT_DCU1GreenInputFeedback_B1 = crrcMvb->getBool(0xf771,27,0);
        this->DR7_8CT_DCU2GreenInputFeedback_B1 = crrcMvb->getBool(0xf771,27,1);
        this->DR7_8CT_DCU3GreenInputFeedback_B1 = crrcMvb->getBool(0xf771,27,2);
        this->DR7_8CT_DCU4GreenInputFeedback_B1 = crrcMvb->getBool(0xf771,27,3);
        this->DR7_8CT_DCU5GreenInputFeedback_B1 = crrcMvb->getBool(0xf771,27,4);
        this->DR7_8CT_DCU6GreenInputFeedback_B1 = crrcMvb->getBool(0xf771,27,5);
        this->DR7_8CT_DCU7GreenInputFeedback_B1 = crrcMvb->getBool(0xf771,27,6);
        this->DR7_8CT_DCU8GreenInputFeedback_B1 = crrcMvb->getBool(0xf771,27,7);

        this->DR7_8CT_DCU1GreenOutputFeedback_B1 = crrcMvb->getBool(0xf771,28,0);
        this->DR7_8CT_DCU2GreenOutputFeedback_B1 = crrcMvb->getBool(0xf771,28,1);
        this->DR7_8CT_DCU3GreenOutputFeedback_B1 = crrcMvb->getBool(0xf771,28,2);
        this->DR7_8CT_DCU4GreenOutputFeedback_B1 = crrcMvb->getBool(0xf771,28,3);
        this->DR7_8CT_DCU5GreenOutputFeedback_B1 = crrcMvb->getBool(0xf771,28,4);
        this->DR7_8CT_DCU6GreenOutputFeedback_B1 = crrcMvb->getBool(0xf771,28,5);
        this->DR7_8CT_DCU7GreenOutputFeedback_B1 = crrcMvb->getBool(0xf771,28,6);
        this->DR7_8CT_DCU8GreenOutputFeedback_B1 = crrcMvb->getBool(0xf771,28,7);


        //*****

        this->DR9CT_LifeSignal_U16 = crrcMvb->getUnsignedInt(0x790,20);
        this->DR9CT_MDCUStatus_U8= crrcMvb->getUnsignedChar(0x790,22);

        this->DR10CT_LifeSignal_U16 = crrcMvb->getUnsignedInt(0x7a0,20);
        this->DR10CT_MDCUStatus_U8= crrcMvb->getUnsignedChar(0x7a0,22);
        temp_virtualports.clear();
        temp_realports.clear();
        temp_virtualports<<0xf790<<0xf791;
        temp_realports<<0x790<<0x791<<0x7A0<<0x7A1;
        this->createEDCUList(this->CTHM_EDCU9On_B1,this->CTHM_EDCU10On_B1,temp_virtualports,temp_realports);
        this->DR9_10CT_SwVersion1_U8 = crrcMvb->getUnsignedChar(0xf790,10);
        this->DR9_10CT_SwVersion2_U8 = crrcMvb->getUnsignedChar(0xf790,11);

        this->DR9_10CT_SwVersionDCU1_U8 = crrcMvb->getUnsignedChar(0xf790,12);
        this->DR9_10CT_SwVersionDCU2_U8 = crrcMvb->getUnsignedChar(0xf790,13);
        this->DR9_10CT_SwVersionDCU3_U8 = crrcMvb->getUnsignedChar(0xf790,14);
        this->DR9_10CT_SwVersionDCU4_U8 = crrcMvb->getUnsignedChar(0xf790,15);
        this->DR9_10CT_SwVersionDCU5_U8 = crrcMvb->getUnsignedChar(0xf790,16);
        this->DR9_10CT_SwVersionDCU6_U8 = crrcMvb->getUnsignedChar(0xf790,17);
        this->DR9_10CT_SwVersionDCU7_U8 = crrcMvb->getUnsignedChar(0xf790,18);
        this->DR9_10CT_SwVersionDCU8_U8 = crrcMvb->getUnsignedChar(0xf790,19);

        this->DR9_10CT_DCU1Fault_U8 = crrcMvb->getUnsignedChar(0xf790,1);
        this->DR9_10CT_DCU2Fault_U8 = crrcMvb->getUnsignedChar(0xf790,2);
        this->DR9_10CT_DCU3Fault_U8 = crrcMvb->getUnsignedChar(0xf790,3);
        this->DR9_10CT_DCU4Fault_U8 = crrcMvb->getUnsignedChar(0xf790,4);
        this->DR9_10CT_DCU5Fault_U8 = crrcMvb->getUnsignedChar(0xf790,5);
        this->DR9_10CT_DCU6Fault_U8 = crrcMvb->getUnsignedChar(0xf790,6);
        this->DR9_10CT_DCU7Fault_U8 = crrcMvb->getUnsignedChar(0xf790,7);
        this->DR9_10CT_DCU8Fault_U8 = crrcMvb->getUnsignedChar(0xf790,8);

        this->DR9_10CT_DCU1EmUnlock_B1 = crrcMvb->getBool(0xf791,4,0);
        this->DR9_10CT_DCU2EmUnlock_B1 = crrcMvb->getBool(0xf791,4,1);
        this->DR9_10CT_DCU3EmUnlock_B1 = crrcMvb->getBool(0xf791,4,2);
        this->DR9_10CT_DCU4EmUnlock_B1 = crrcMvb->getBool(0xf791,4,3);
        this->DR9_10CT_DCU5EmUnlock_B1 = crrcMvb->getBool(0xf791,4,4);
        this->DR9_10CT_DCU6EmUnlock_B1 = crrcMvb->getBool(0xf791,4,5);
        this->DR9_10CT_DCU7EmUnlock_B1 = crrcMvb->getBool(0xf791,4,6);
        this->DR9_10CT_DCU8EmUnlock_B1 = crrcMvb->getBool(0xf791,4,7);

        this->DR9_10CT_DCU1Isolate_B1 = crrcMvb->getBool(0xf791,5,0);
        this->DR9_10CT_DCU2Isolate_B1 = crrcMvb->getBool(0xf791,5,1);
        this->DR9_10CT_DCU3Isolate_B1 = crrcMvb->getBool(0xf791,5,2);
        this->DR9_10CT_DCU4Isolate_B1 = crrcMvb->getBool(0xf791,5,3);
        this->DR9_10CT_DCU5Isolate_B1 = crrcMvb->getBool(0xf791,5,4);
        this->DR9_10CT_DCU6Isolate_B1 = crrcMvb->getBool(0xf791,5,5);
        this->DR9_10CT_DCU7Isolate_B1 = crrcMvb->getBool(0xf791,5,6);
        this->DR9_10CT_DCU8Isolate_B1 = crrcMvb->getBool(0xf791,5,7);

        this->DR9_10CT_DCU1ObstacleDetcted_B1 = crrcMvb->getBool(0xf791,6,0);
        this->DR9_10CT_DCU2ObstacleDetcted_B1 = crrcMvb->getBool(0xf791,6,1);
        this->DR9_10CT_DCU3ObstacleDetcted_B1 = crrcMvb->getBool(0xf791,6,2);
        this->DR9_10CT_DCU4ObstacleDetcted_B1 = crrcMvb->getBool(0xf791,6,3);
        this->DR9_10CT_DCU5ObstacleDetcted_B1 = crrcMvb->getBool(0xf791,6,4);
        this->DR9_10CT_DCU6ObstacleDetcted_B1 = crrcMvb->getBool(0xf791,6,5);
        this->DR9_10CT_DCU7ObstacleDetcted_B1 = crrcMvb->getBool(0xf791,6,6);
        this->DR9_10CT_DCU8ObstacleDetcted_B1 = crrcMvb->getBool(0xf791,6,7);

        this->DR9_10CT_DCU1TotallyClose_B1 = crrcMvb->getBool(0xf791,9,0);
        this->DR9_10CT_DCU2TotallyClose_B1 = crrcMvb->getBool(0xf791,9,1);
        this->DR9_10CT_DCU3TotallyClose_B1 = crrcMvb->getBool(0xf791,9,2);
        this->DR9_10CT_DCU4TotallyClose_B1 = crrcMvb->getBool(0xf791,9,3);
        this->DR9_10CT_DCU5TotallyClose_B1 = crrcMvb->getBool(0xf791,9,4);
        this->DR9_10CT_DCU6TotallyClose_B1 = crrcMvb->getBool(0xf791,9,5);
        this->DR9_10CT_DCU7TotallyClose_B1 = crrcMvb->getBool(0xf791,9,6);
        this->DR9_10CT_DCU8TotallyClose_B1 = crrcMvb->getBool(0xf791,9,7);

//        this->DR9_10CT_DCU1TotallyOpen_B1 = crrcMvb->getBool(0xf791,10,0);
//        this->DR9_10CT_DCU2TotallyOpen_B1 = crrcMvb->getBool(0xf791,10,1);
//        this->DR9_10CT_DCU3TotallyOpen_B1 = crrcMvb->getBool(0xf791,10,2);
//        this->DR9_10CT_DCU4TotallyOpen_B1 = crrcMvb->getBool(0xf791,10,3);
//        this->DR9_10CT_DCU5TotallyOpen_B1 = crrcMvb->getBool(0xf791,10,4);
//        this->DR9_10CT_DCU6TotallyOpen_B1 = crrcMvb->getBool(0xf791,10,5);
//        this->DR9_10CT_DCU7TotallyOpen_B1 = crrcMvb->getBool(0xf791,10,6);
//        this->DR9_10CT_DCU8TotallyOpen_B1 = crrcMvb->getBool(0xf791,10,7);

        this->DR9_10CT_DCU1TotallyOpen_B1 = crrcMvb->getBool(0xf791,10,0)|| crrcMvb->getBool(0xf791,7,0)|| crrcMvb->getBool(0xf791,8,0);
        this->DR9_10CT_DCU2TotallyOpen_B1 = crrcMvb->getBool(0xf791,10,1)|| crrcMvb->getBool(0xf791,7,1)|| crrcMvb->getBool(0xf791,8,1);
        this->DR9_10CT_DCU3TotallyOpen_B1 = crrcMvb->getBool(0xf791,10,2)|| crrcMvb->getBool(0xf791,7,2)|| crrcMvb->getBool(0xf791,8,2);
        this->DR9_10CT_DCU4TotallyOpen_B1 = crrcMvb->getBool(0xf791,10,3)|| crrcMvb->getBool(0xf791,7,3)|| crrcMvb->getBool(0xf791,8,3);
        this->DR9_10CT_DCU5TotallyOpen_B1 = crrcMvb->getBool(0xf791,10,4)|| crrcMvb->getBool(0xf791,7,4)|| crrcMvb->getBool(0xf791,8,4);
        this->DR9_10CT_DCU6TotallyOpen_B1 = crrcMvb->getBool(0xf791,10,5)|| crrcMvb->getBool(0xf791,7,5)|| crrcMvb->getBool(0xf791,8,5);
        this->DR9_10CT_DCU7TotallyOpen_B1 = crrcMvb->getBool(0xf791,10,6)|| crrcMvb->getBool(0xf791,7,6)|| crrcMvb->getBool(0xf791,8,6);
        this->DR9_10CT_DCU8TotallyOpen_B1 = crrcMvb->getBool(0xf791,10,7)|| crrcMvb->getBool(0xf791,7,7)|| crrcMvb->getBool(0xf791,8,7);


        this->DR9_10CT_DCU1GreenInputFeedback_B1 = crrcMvb->getBool(0xf791,27,0);
        this->DR9_10CT_DCU2GreenInputFeedback_B1 = crrcMvb->getBool(0xf791,27,1);
        this->DR9_10CT_DCU3GreenInputFeedback_B1 = crrcMvb->getBool(0xf791,27,2);
        this->DR9_10CT_DCU4GreenInputFeedback_B1 = crrcMvb->getBool(0xf791,27,3);
        this->DR9_10CT_DCU5GreenInputFeedback_B1 = crrcMvb->getBool(0xf791,27,4);
        this->DR9_10CT_DCU6GreenInputFeedback_B1 = crrcMvb->getBool(0xf791,27,5);
        this->DR9_10CT_DCU7GreenInputFeedback_B1 = crrcMvb->getBool(0xf791,27,6);
        this->DR9_10CT_DCU8GreenInputFeedback_B1 = crrcMvb->getBool(0xf791,27,7);

        this->DR9_10CT_DCU1GreenOutputFeedback_B1 = crrcMvb->getBool(0xf791,28,0);
        this->DR9_10CT_DCU2GreenOutputFeedback_B1 = crrcMvb->getBool(0xf791,28,1);
        this->DR9_10CT_DCU3GreenOutputFeedback_B1 = crrcMvb->getBool(0xf791,28,2);
        this->DR9_10CT_DCU4GreenOutputFeedback_B1 = crrcMvb->getBool(0xf791,28,3);
        this->DR9_10CT_DCU5GreenOutputFeedback_B1 = crrcMvb->getBool(0xf791,28,4);
        this->DR9_10CT_DCU6GreenOutputFeedback_B1 = crrcMvb->getBool(0xf791,28,5);
        this->DR9_10CT_DCU7GreenOutputFeedback_B1 = crrcMvb->getBool(0xf791,28,6);
        this->DR9_10CT_DCU8GreenOutputFeedback_B1 = crrcMvb->getBool(0xf791,28,7);


        //*****

        this->DR11CT_LifeSignal_U16 = crrcMvb->getUnsignedInt(0x7b0,20);
        this->DR11CT_MDCUStatus_U8= crrcMvb->getUnsignedChar(0x7b0,22);

        this->DR12CT_LifeSignal_U16 = crrcMvb->getUnsignedInt(0x7c0,20);
        this->DR12CT_MDCUStatus_U8= crrcMvb->getUnsignedChar(0x7c0,22);
        temp_virtualports.clear();
        temp_realports.clear();
        temp_virtualports<<0xf7b0<<0xf7b1;
        temp_realports<<0x7b0<<0x7b1<<0x7C0<<0x7C1;
        this->createEDCUList(this->CTHM_EDCU11On_B1,this->CTHM_EDCU12On_B1,temp_virtualports,temp_realports);
        this->DR11_12CT_SwVersion1_U8 = crrcMvb->getUnsignedChar(0xf7b0,10);
        this->DR11_12CT_SwVersion2_U8 = crrcMvb->getUnsignedChar(0xf7b0,11);

        this->DR11_12CT_SwVersionDCU1_U8 = crrcMvb->getUnsignedChar(0xf7b0,12);
        this->DR11_12CT_SwVersionDCU2_U8 = crrcMvb->getUnsignedChar(0xf7b0,13);
        this->DR11_12CT_SwVersionDCU3_U8 = crrcMvb->getUnsignedChar(0xf7b0,14);
        this->DR11_12CT_SwVersionDCU4_U8 = crrcMvb->getUnsignedChar(0xf7b0,15);
        this->DR11_12CT_SwVersionDCU5_U8 = crrcMvb->getUnsignedChar(0xf7b0,16);
        this->DR11_12CT_SwVersionDCU6_U8 = crrcMvb->getUnsignedChar(0xf7b0,17);
        this->DR11_12CT_SwVersionDCU7_U8 = crrcMvb->getUnsignedChar(0xf7b0,18);
        this->DR11_12CT_SwVersionDCU8_U8 = crrcMvb->getUnsignedChar(0xf7b0,19);

        this->DR11_12CT_DCU1Fault_U8 = crrcMvb->getUnsignedChar(0xf7b0,1);
        this->DR11_12CT_DCU2Fault_U8 = crrcMvb->getUnsignedChar(0xf7b0,2);
        this->DR11_12CT_DCU3Fault_U8 = crrcMvb->getUnsignedChar(0xf7b0,3);
        this->DR11_12CT_DCU4Fault_U8 = crrcMvb->getUnsignedChar(0xf7b0,4);
        this->DR11_12CT_DCU5Fault_U8 = crrcMvb->getUnsignedChar(0xf7b0,5);
        this->DR11_12CT_DCU6Fault_U8 = crrcMvb->getUnsignedChar(0xf7b0,6);
        this->DR11_12CT_DCU7Fault_U8 = crrcMvb->getUnsignedChar(0xf7b0,7);
        this->DR11_12CT_DCU8Fault_U8 = crrcMvb->getUnsignedChar(0xf7b0,8);

        this->DR11_12CT_DCU1EmUnlock_B1 = crrcMvb->getBool(0xf7b1,4,0);
        this->DR11_12CT_DCU2EmUnlock_B1 = crrcMvb->getBool(0xf7b1,4,1);
        this->DR11_12CT_DCU3EmUnlock_B1 = crrcMvb->getBool(0xf7b1,4,2);
        this->DR11_12CT_DCU4EmUnlock_B1 = crrcMvb->getBool(0xf7b1,4,3);
        this->DR11_12CT_DCU5EmUnlock_B1 = crrcMvb->getBool(0xf7b1,4,4);
        this->DR11_12CT_DCU6EmUnlock_B1 = crrcMvb->getBool(0xf7b1,4,5);
        this->DR11_12CT_DCU7EmUnlock_B1 = crrcMvb->getBool(0xf7b1,4,6);
        this->DR11_12CT_DCU8EmUnlock_B1 = crrcMvb->getBool(0xf7b1,4,7);

        this->DR11_12CT_DCU1Isolate_B1 = crrcMvb->getBool(0xf7b1,5,0);
        this->DR11_12CT_DCU2Isolate_B1 = crrcMvb->getBool(0xf7b1,5,1);
        this->DR11_12CT_DCU3Isolate_B1 = crrcMvb->getBool(0xf7b1,5,2);
        this->DR11_12CT_DCU4Isolate_B1 = crrcMvb->getBool(0xf7b1,5,3);
        this->DR11_12CT_DCU5Isolate_B1 = crrcMvb->getBool(0xf7b1,5,4);
        this->DR11_12CT_DCU6Isolate_B1 = crrcMvb->getBool(0xf7b1,5,5);
        this->DR11_12CT_DCU7Isolate_B1 = crrcMvb->getBool(0xf7b1,5,6);
        this->DR11_12CT_DCU8Isolate_B1 = crrcMvb->getBool(0xf7b1,5,7);

        this->DR11_12CT_DCU1ObstacleDetcted_B1 = crrcMvb->getBool(0xf7b1,6,0);
        this->DR11_12CT_DCU2ObstacleDetcted_B1 = crrcMvb->getBool(0xf7b1,6,1);
        this->DR11_12CT_DCU3ObstacleDetcted_B1 = crrcMvb->getBool(0xf7b1,6,2);
        this->DR11_12CT_DCU4ObstacleDetcted_B1 = crrcMvb->getBool(0xf7b1,6,3);
        this->DR11_12CT_DCU5ObstacleDetcted_B1 = crrcMvb->getBool(0xf7b1,6,4);
        this->DR11_12CT_DCU6ObstacleDetcted_B1 = crrcMvb->getBool(0xf7b1,6,5);
        this->DR11_12CT_DCU7ObstacleDetcted_B1 = crrcMvb->getBool(0xf7b1,6,6);
        this->DR11_12CT_DCU8ObstacleDetcted_B1 = crrcMvb->getBool(0xf7b1,6,7);

        this->DR11_12CT_DCU1TotallyClose_B1 = crrcMvb->getBool(0xf7b1,9,0);
        this->DR11_12CT_DCU2TotallyClose_B1 = crrcMvb->getBool(0xf7b1,9,1);
        this->DR11_12CT_DCU3TotallyClose_B1 = crrcMvb->getBool(0xf7b1,9,2);
        this->DR11_12CT_DCU4TotallyClose_B1 = crrcMvb->getBool(0xf7b1,9,3);
        this->DR11_12CT_DCU5TotallyClose_B1 = crrcMvb->getBool(0xf7b1,9,4);
        this->DR11_12CT_DCU6TotallyClose_B1 = crrcMvb->getBool(0xf7b1,9,5);
        this->DR11_12CT_DCU7TotallyClose_B1 = crrcMvb->getBool(0xf7b1,9,6);
        this->DR11_12CT_DCU8TotallyClose_B1 = crrcMvb->getBool(0xf7b1,9,7);

//        this->DR11_12CT_DCU1TotallyOpen_B1 = crrcMvb->getBool(0xf7b1,10,0);
//        this->DR11_12CT_DCU2TotallyOpen_B1 = crrcMvb->getBool(0xf7b1,10,1);
//        this->DR11_12CT_DCU3TotallyOpen_B1 = crrcMvb->getBool(0xf7b1,10,2);
//        this->DR11_12CT_DCU4TotallyOpen_B1 = crrcMvb->getBool(0xf7b1,10,3);
//        this->DR11_12CT_DCU5TotallyOpen_B1 = crrcMvb->getBool(0xf7b1,10,4);
//        this->DR11_12CT_DCU6TotallyOpen_B1 = crrcMvb->getBool(0xf7b1,10,5);
//        this->DR11_12CT_DCU7TotallyOpen_B1 = crrcMvb->getBool(0xf7b1,10,6);
//        this->DR11_12CT_DCU8TotallyOpen_B1 = crrcMvb->getBool(0xf7b1,10,7);

        this->DR11_12CT_DCU1TotallyOpen_B1 = crrcMvb->getBool(0xf7b1,10,0)|| crrcMvb->getBool(0xf7b1,7,0)|| crrcMvb->getBool(0xf7b1,8,0);
        this->DR11_12CT_DCU2TotallyOpen_B1 = crrcMvb->getBool(0xf7b1,10,1)|| crrcMvb->getBool(0xf7b1,7,1)|| crrcMvb->getBool(0xf7b1,8,1);
        this->DR11_12CT_DCU3TotallyOpen_B1 = crrcMvb->getBool(0xf7b1,10,2)|| crrcMvb->getBool(0xf7b1,7,2)|| crrcMvb->getBool(0xf7b1,8,2);
        this->DR11_12CT_DCU4TotallyOpen_B1 = crrcMvb->getBool(0xf7b1,10,3)|| crrcMvb->getBool(0xf7b1,7,3)|| crrcMvb->getBool(0xf7b1,8,3);
        this->DR11_12CT_DCU5TotallyOpen_B1 = crrcMvb->getBool(0xf7b1,10,4)|| crrcMvb->getBool(0xf7b1,7,4)|| crrcMvb->getBool(0xf7b1,8,4);
        this->DR11_12CT_DCU6TotallyOpen_B1 = crrcMvb->getBool(0xf7b1,10,5)|| crrcMvb->getBool(0xf7b1,7,5)|| crrcMvb->getBool(0xf7b1,8,5);
        this->DR11_12CT_DCU7TotallyOpen_B1 = crrcMvb->getBool(0xf7b1,10,6)|| crrcMvb->getBool(0xf7b1,7,6)|| crrcMvb->getBool(0xf7b1,8,6);
        this->DR11_12CT_DCU8TotallyOpen_B1 = crrcMvb->getBool(0xf7b1,10,7)|| crrcMvb->getBool(0xf7b1,7,7)|| crrcMvb->getBool(0xf7b1,8,7);


        this->DR11_12CT_DCU1GreenInputFeedback_B1 = crrcMvb->getBool(0xf7b1,27,0);
        this->DR11_12CT_DCU2GreenInputFeedback_B1 = crrcMvb->getBool(0xf7b1,27,1);
        this->DR11_12CT_DCU3GreenInputFeedback_B1 = crrcMvb->getBool(0xf7b1,27,2);
        this->DR11_12CT_DCU4GreenInputFeedback_B1 = crrcMvb->getBool(0xf7b1,27,3);
        this->DR11_12CT_DCU5GreenInputFeedback_B1 = crrcMvb->getBool(0xf7b1,27,4);
        this->DR11_12CT_DCU6GreenInputFeedback_B1 = crrcMvb->getBool(0xf7b1,27,5);
        this->DR11_12CT_DCU7GreenInputFeedback_B1 = crrcMvb->getBool(0xf7b1,27,6);
        this->DR11_12CT_DCU8GreenInputFeedback_B1 = crrcMvb->getBool(0xf7b1,27,7);

        this->DR11_12CT_DCU1GreenOutputFeedback_B1 = crrcMvb->getBool(0xf7b1,28,0);
        this->DR11_12CT_DCU2GreenOutputFeedback_B1 = crrcMvb->getBool(0xf7b1,28,1);
        this->DR11_12CT_DCU3GreenOutputFeedback_B1 = crrcMvb->getBool(0xf7b1,28,2);
        this->DR11_12CT_DCU4GreenOutputFeedback_B1 = crrcMvb->getBool(0xf7b1,28,3);
        this->DR11_12CT_DCU5GreenOutputFeedback_B1 = crrcMvb->getBool(0xf7b1,28,4);
        this->DR11_12CT_DCU6GreenOutputFeedback_B1 = crrcMvb->getBool(0xf7b1,28,5);
        this->DR11_12CT_DCU7GreenOutputFeedback_B1 = crrcMvb->getBool(0xf7b1,28,6);
        this->DR11_12CT_DCU8GreenOutputFeedback_B1 = crrcMvb->getBool(0xf7b1,28,7);


        //*****
        //**** 门控器有效
        DR1CT_DCU8Valid_B1 = this->crrcMvb->getBool(0xf710,0,0);
        DR1CT_DCU7Valid_B1 = this->crrcMvb->getBool(0xf710,0,1);
        DR1CT_DCU6Valid_B1 = this->crrcMvb->getBool(0xf710,0,2);
        DR1CT_DCU5Valid_B1 = this->crrcMvb->getBool(0xf710,0,3);
        DR1CT_DCU4Valid_B1 = this->crrcMvb->getBool(0xf710,0,4);
        DR1CT_DCU3Valid_B1 = this->crrcMvb->getBool(0xf710,0,5);
        DR1CT_DCU2Valid_B1 = this->crrcMvb->getBool(0xf710,0,6);
        DR1CT_DCU1Valid_B1 = this->crrcMvb->getBool(0xf710,0,7);

        DR2CT_DCU8Valid_B1 = this->crrcMvb->getBool(0xf730,0,0);
        DR2CT_DCU7Valid_B1 = this->crrcMvb->getBool(0xf730,0,1);
        DR2CT_DCU6Valid_B1 = this->crrcMvb->getBool(0xf730,0,2);
        DR2CT_DCU5Valid_B1 = this->crrcMvb->getBool(0xf730,0,3);
        DR2CT_DCU4Valid_B1 = this->crrcMvb->getBool(0xf730,0,4);
        DR2CT_DCU3Valid_B1 = this->crrcMvb->getBool(0xf730,0,5);
        DR2CT_DCU2Valid_B1 = this->crrcMvb->getBool(0xf730,0,6);
        DR2CT_DCU1Valid_B1 = this->crrcMvb->getBool(0xf730,0,7);

        DR3CT_DCU8Valid_B1 = this->crrcMvb->getBool(0xf750,0,0);
        DR3CT_DCU7Valid_B1 = this->crrcMvb->getBool(0xf750,0,1);
        DR3CT_DCU6Valid_B1 = this->crrcMvb->getBool(0xf750,0,2);
        DR3CT_DCU5Valid_B1 = this->crrcMvb->getBool(0xf750,0,3);
        DR3CT_DCU4Valid_B1 = this->crrcMvb->getBool(0xf750,0,4);
        DR3CT_DCU3Valid_B1 = this->crrcMvb->getBool(0xf750,0,5);
        DR3CT_DCU2Valid_B1 = this->crrcMvb->getBool(0xf750,0,6);
        DR3CT_DCU1Valid_B1 = this->crrcMvb->getBool(0xf750,0,7);

        DR4CT_DCU8Valid_B1 = this->crrcMvb->getBool(0xf770,0,0);
        DR4CT_DCU7Valid_B1 = this->crrcMvb->getBool(0xf770,0,1);
        DR4CT_DCU6Valid_B1 = this->crrcMvb->getBool(0xf770,0,2);
        DR4CT_DCU5Valid_B1 = this->crrcMvb->getBool(0xf770,0,3);
        DR4CT_DCU4Valid_B1 = this->crrcMvb->getBool(0xf770,0,4);
        DR4CT_DCU3Valid_B1 = this->crrcMvb->getBool(0xf770,0,5);
        DR4CT_DCU2Valid_B1 = this->crrcMvb->getBool(0xf770,0,6);
        DR4CT_DCU1Valid_B1 = this->crrcMvb->getBool(0xf770,0,7);

        DR5CT_DCU8Valid_B1 = this->crrcMvb->getBool(0xf790,0,0);
        DR5CT_DCU7Valid_B1 = this->crrcMvb->getBool(0xf790,0,1);
        DR5CT_DCU6Valid_B1 = this->crrcMvb->getBool(0xf790,0,2);
        DR5CT_DCU5Valid_B1 = this->crrcMvb->getBool(0xf790,0,3);
        DR5CT_DCU4Valid_B1 = this->crrcMvb->getBool(0xf790,0,4);
        DR5CT_DCU3Valid_B1 = this->crrcMvb->getBool(0xf790,0,5);
        DR5CT_DCU2Valid_B1 = this->crrcMvb->getBool(0xf790,0,6);
        DR5CT_DCU1Valid_B1 = this->crrcMvb->getBool(0xf790,0,7);

        DR6CT_DCU8Valid_B1 = this->crrcMvb->getBool(0xf7b0,0,0);
        DR6CT_DCU7Valid_B1 = this->crrcMvb->getBool(0xf7b0,0,1);
        DR6CT_DCU6Valid_B1 = this->crrcMvb->getBool(0xf7b0,0,2) ;
        DR6CT_DCU5Valid_B1 = this->crrcMvb->getBool(0xf7b0,0,3);
        DR6CT_DCU4Valid_B1 = this->crrcMvb->getBool(0xf7b0,0,4);
        DR6CT_DCU3Valid_B1 = this->crrcMvb->getBool(0xf7b0,0,5);
        DR6CT_DCU2Valid_B1 = this->crrcMvb->getBool(0xf7b0,0,6);
        DR6CT_DCU1Valid_B1 = this->crrcMvb->getBool(0xf7b0,0,7) ;

    }

    /////*******EBCU -- CCU**********///////
    {

        this->BR1CT_BCU1Master_B1 = this->crrcMvb->getBool(0x610,5,0);
        this->BR1CT_BCU2Master_B1 = this->crrcMvb->getBool(0x630,5,0);
        this->BR2CT_BCU3Master_B1 = this->crrcMvb->getBool(0x640,5,0);
        this->BR2CT_BCU4Master_B1 = this->crrcMvb->getBool(0x660,5,0);


        this->BCU1_3Online = ((this->BR1CT_BCU1Master_B1 && this->CTHM_BCU1On_B1) ||
                             (this->BR1CT_BCU2Master_B1 && this->CTHM_BCU2On_B1)) ;

        this->BCU4_6Online = ((this->BR2CT_BCU3Master_B1 && this->CTHM_BCU3On_B1) ||
                             (this->BR2CT_BCU4Master_B1 && this->CTHM_BCU4On_B1)) ;


//        temp_virtualports.clear();
//        temp_realports.clear();
//        temp_virtualports<<0xf610<<0xf611<<0xf612<<0xf613<<0xf614<<0xf615<<0xf616;
//        temp_realports<<0x610<<0x611<<0x612<<0x613<<0x614<<0x615<<0x616<<0x630<<0x631<<0x632<<0x633<<0x634<<0x635<<0x636;
//        this->createEBCUList(this->CTHM_BCU1On_B1,this->CTHM_BCU2On_B1,temp_virtualports,temp_realports);


        this->createEBCUList(0x610,0x630,0xf610,this->CTHM_TC1Bogie1Select_U8,0);
        this->createEBCUList(0x611,0x631,0xf611,this->CTHM_TC1Bogie2Select_U8,1);
        this->createEBCUList(0x612,0x632,0xf612,this->CTHM_MP1Bogie3Select_U8,2);
        this->createEBCUList(0x613,0x633,0xf613,this->CTHM_MP1Bogie4Select_U8,3);
        this->createEBCUList(0x614,0x634,0xf614,this->CTHM_M1Bogie5Select_U8,4);
        this->createEBCUList(0x615,0x635,0xf615,this->CTHM_M1Bogie6Select_U8,5);

        //*****TODO realdata from virual port
        this->BR1CT_TcMVBVersion_U8 = this->crrcMvb->getUnsignedChar(0x616,26);
        this->BR1CT_MMVBVersion_U8 = this->crrcMvb->getUnsignedChar(0x616,27);
        //tc1bg1
        this->BR1CT_TC1Bg1LfSgn_U16 = this->crrcMvb->getUnsignedInt(0xf610,0);
        this->BR1CT_TC1Bg1ParkingBrkRlsed_B1 = this->crrcMvb->getBool(0xf610,2,0);
        this->BR1CT_TC1Bg1HoldingBrkApplied_B1 = this->crrcMvb->getBool(0xf610,2,4);
        this->BR1CT_TC1Bg1AirBrkApplied_B1 = this->crrcMvb->getBool(0xf610,2,5);
        this->BR1CT_TC1Bg1AirBrkRlsed_B1 = this->crrcMvb->getBool(0xf610,2,6);
        this->BR1CT_TC1Bg1BoogieDataValid_B1 = this->crrcMvb->getBool(0xf610,3,1);
        this->BR1CT_TC1Bg1AirBrkForceValid_B1 = this->crrcMvb->getBool(0xf610,3,2);
        this->BR1CT_TC1Bg1BoogieLoadValid_B1 = this->crrcMvb->getBool(0xf610,3,3);
        this->BR1CT_TC1Bg1BrkAirPresureValid_B1 = this->crrcMvb->getBool(0xf610,3,4);
        this->BR1CT_TC1Bg1AirPresureValid_B1 = this->crrcMvb->getBool(0xf610,3,5);
        this->BR1CT_TC1Bg1TotalPresureValid_B1 = this->crrcMvb->getBool(0xf610,3,6);
        this->BR1CT_TC1Bg1BCUSTInterrupted_B1 = this->crrcMvb->getBool(0xf610,5,3);
        this->BR1CT_TC1Bg1BCUSelfTestReady_B1 = this->crrcMvb->getBool(0xf610,5,4);
        this->BR1CT_TC1Bg1BCUSelfTestFailed_B1 = this->crrcMvb->getBool(0xf610,5,5);
        this->BR1CT_TC1Bg1BCUSelfTestPass_B1 = this->crrcMvb->getBool(0xf610,5,6);
        this->BR1CT_TC1Bg1BCUSelfTesting_B1 = this->crrcMvb->getBool(0xf610,5,7);
        this->BR1CT_TC1Bg1BCP1Pressure_U16 = this->crrcMvb->getUnsignedInt(0xf610,6);
        this->BR1CT_TC1Bg1BCP2Pressure_U16 = this->crrcMvb->getUnsignedInt(0xf610,8);
        this->BR1CT_TC1Bg1TotalPressure_U16 = this->crrcMvb->getUnsignedInt(0xf610,10);
        this->BR1CT_TC1Bg1ASP1AirPressure_U16 = this->crrcMvb->getUnsignedInt(0xf610,12);
        this->BR1CT_TC1Bg1ASP2AirPressure_U16 = this->crrcMvb->getUnsignedInt(0xf610,14);
        this->BR1CT_TC1Bg1BoogieLoad_U16 = this->crrcMvb->getUnsignedInt(0xf610,18);
        //tc1bg2
        this->BR1CT_TC1Bg2LfSgn_U16 = this->crrcMvb->getUnsignedInt(0xf611,0);
        this->BR1CT_TC1Bg2ParkingBrkRlsed_B1 = this->crrcMvb->getBool(0xf611,2,0);
        this->BR1CT_TC1Bg2HoldingBrkApplied_B1 = this->crrcMvb->getBool(0xf611,2,4);
        this->BR1CT_TC1Bg2AirBrkApplied_B1 = this->crrcMvb->getBool(0xf611,2,5);
        this->BR1CT_TC1Bg2AirBrkRlsed_B1 = this->crrcMvb->getBool(0xf611,2,6);
        this->BR1CT_TC1Bg2BoogieDataValid_B1 = this->crrcMvb->getBool(0xf611,3,1);
        this->BR1CT_TC1Bg2AirBrkForceValid_B1 = this->crrcMvb->getBool(0xf611,3,2);
        this->BR1CT_TC1Bg2BoogieLoadValid_B1 = this->crrcMvb->getBool(0xf611,3,3);
        this->BR1CT_TC1Bg2BrkAirPresureValid_B1 = this->crrcMvb->getBool(0xf611,3,4);
        this->BR1CT_TC1Bg2AirPresureValid_B1 = this->crrcMvb->getBool(0xf611,3,5);
        this->BR1CT_TC1Bg2TotalPresureValid_B1 = this->crrcMvb->getBool(0xf611,3,6);
        this->BR1CT_TC1Bg2BCUSTInterrupted_B1 = this->crrcMvb->getBool(0xf611,5,3);
        this->BR1CT_TC1Bg2BCUSelfTestReady_B1 = this->crrcMvb->getBool(0xf611,5,4);
        this->BR1CT_TC1Bg2BCUSelfTestFailed_B1 = this->crrcMvb->getBool(0xf611,5,5);
        this->BR1CT_TC1Bg2BCUSelfTestPass_B1 = this->crrcMvb->getBool(0xf611,5,6);
        this->BR1CT_TC1Bg2BCUSelfTesting_B1 = this->crrcMvb->getBool(0xf611,5,7);
        this->BR1CT_TC1Bg2BCP1Pressure_U16 = this->crrcMvb->getUnsignedInt(0xf611,6);
        this->BR1CT_TC1Bg2BCP2Pressure_U16 = this->crrcMvb->getUnsignedInt(0xf611,8);
        this->BR1CT_TC1Bg2TotalPressure_U16 = this->crrcMvb->getUnsignedInt(0xf611,10);
        this->BR1CT_TC1Bg2ASP1AirPressure_U16 = this->crrcMvb->getUnsignedInt(0xf611,12);
        this->BR1CT_TC1Bg2ASP2AirPressure_U16 = this->crrcMvb->getUnsignedInt(0xf611,14);
        this->BR1CT_TC1Bg2BoogieLoad_U16 = this->crrcMvb->getUnsignedInt(0xf611,18);
        //MP1bg1
        this->BR1CT_MP1Bg1LfSgn_U16 = this->crrcMvb->getUnsignedInt(0xf612,0);
        this->BR1CT_MP1Bg1ParkingBrkRlsed_B1 = this->crrcMvb->getBool(0xf612,2,0);
        this->BR1CT_MP1Bg1HoldingBrkApplied_B1 = this->crrcMvb->getBool(0xf612,2,4);
        this->BR1CT_MP1Bg1AirBrkApplied_B1 = this->crrcMvb->getBool(0xf612,2,5);
        this->BR1CT_MP1Bg1AirBrkRlsed_B1 = this->crrcMvb->getBool(0xf612,2,6);
        this->BR1CT_MP1Bg1BoogieDataValid_B1 = this->crrcMvb->getBool(0xf612,3,1);
        this->BR1CT_MP1Bg1AirBrkForceValid_B1 = this->crrcMvb->getBool(0xf612,3,2);
        this->BR1CT_MP1Bg1BoogieLoadValid_B1 = this->crrcMvb->getBool(0xf612,3,3);
        this->BR1CT_MP1Bg1BrkAirPresureValid_B1 = this->crrcMvb->getBool(0xf612,3,4);
        this->BR1CT_MP1Bg1AirPresureValid_B1 = this->crrcMvb->getBool(0xf612,3,5);
        this->BR1CT_MP1Bg1TotalPresureValid_B1 = this->crrcMvb->getBool(0xf612,3,6);
        this->BR1CT_MP1Bg1BCUSTInterrupted_B1 = this->crrcMvb->getBool(0xf612,5,3);
        this->BR1CT_MP1Bg1BCUSelfTestReady_B1 = this->crrcMvb->getBool(0xf612,5,4);
        this->BR1CT_MP1Bg1BCUSelfTestFailed_B1 = this->crrcMvb->getBool(0xf612,5,5);
        this->BR1CT_MP1Bg1BCUSelfTestPass_B1 = this->crrcMvb->getBool(0xf612,5,6);
        this->BR1CT_MP1Bg1BCUSelfTesting_B1 = this->crrcMvb->getBool(0xf612,5,7);
        this->BR1CT_MP1Bg1BCP1Pressure_U16 = this->crrcMvb->getUnsignedInt(0xf612,6);
        this->BR1CT_MP1Bg1BCP2Pressure_U16 = this->crrcMvb->getUnsignedInt(0xf612,8);
        this->BR1CT_MP1Bg1TotalPressure_U16 = this->crrcMvb->getUnsignedInt(0xf612,10);
        this->BR1CT_MP1Bg1ASP1AirPressure_U16 = this->crrcMvb->getUnsignedInt(0xf612,12);
        this->BR1CT_MP1Bg1ASP2AirPressure_U16 = this->crrcMvb->getUnsignedInt(0xf612,14);
        this->BR1CT_MP1Bg1BoogieLoad_U16 = this->crrcMvb->getUnsignedInt(0xf612,18);
        //MP1bg2
        this->BR1CT_MP1Bg2LfSgn_U16 = this->crrcMvb->getUnsignedInt(0xf613,0);
        this->BR1CT_MP1Bg2ParkingBrkRlsed_B1 = this->crrcMvb->getBool(0xf613,2,0);
        this->BR1CT_MP1Bg2HoldingBrkApplied_B1 = this->crrcMvb->getBool(0xf613,2,4);
        this->BR1CT_MP1Bg2AirBrkApplied_B1 = this->crrcMvb->getBool(0xf613,2,5);
        this->BR1CT_MP1Bg2AirBrkRlsed_B1 = this->crrcMvb->getBool(0xf613,2,6);
        this->BR1CT_MP1Bg2BoogieDataValid_B1 = this->crrcMvb->getBool(0xf613,3,1);
        this->BR1CT_MP1Bg2AirBrkForceValid_B1 = this->crrcMvb->getBool(0xf613,3,2);
        this->BR1CT_MP1Bg2BoogieLoadValid_B1 = this->crrcMvb->getBool(0xf613,3,3);
        this->BR1CT_MP1Bg2BrkAirPresureValid_B1 = this->crrcMvb->getBool(0xf613,3,4);
        this->BR1CT_MP1Bg2AirPresureValid_B1 = this->crrcMvb->getBool(0xf613,3,5);
        this->BR1CT_MP1Bg2TotalPresureValid_B1 = this->crrcMvb->getBool(0xf613,3,6);
        this->BR1CT_MP1Bg2BCUSTInterrupted_B1 = this->crrcMvb->getBool(0xf613,5,3);
        this->BR1CT_MP1Bg2BCUSelfTestReady_B1 = this->crrcMvb->getBool(0xf613,5,4);
        this->BR1CT_MP1Bg2BCUSelfTestFailed_B1 = this->crrcMvb->getBool(0xf613,5,5);
        this->BR1CT_MP1Bg2BCUSelfTestPass_B1 = this->crrcMvb->getBool(0xf613,5,6);
        this->BR1CT_MP1Bg2BCUSelfTesting_B1 = this->crrcMvb->getBool(0xf613,5,7);
        this->BR1CT_MP1Bg2BCP1Pressure_U16 = this->crrcMvb->getUnsignedInt(0xf613,6);
        this->BR1CT_MP1Bg2BCP2Pressure_U16 = this->crrcMvb->getUnsignedInt(0xf613,8);
        this->BR1CT_MP1Bg2TotalPressure_U16 = this->crrcMvb->getUnsignedInt(0xf613,10);
        this->BR1CT_MP1Bg2ASP1AirPressure_U16 = this->crrcMvb->getUnsignedInt(0xf613,12);
        this->BR1CT_MP1Bg2ASP2AirPressure_U16 = this->crrcMvb->getUnsignedInt(0xf613,14);
        this->BR1CT_MP1Bg2BoogieLoad_U16 = this->crrcMvb->getUnsignedInt(0xf613,18);
        //M1bg1
        this->BR1CT_M1Bg1LfSgn_U16 = this->crrcMvb->getUnsignedInt(0xf614,0);
        this->BR1CT_M1Bg1ParkingBrkRlsed_B1 = this->crrcMvb->getBool(0xf614,2,0);
        this->BR1CT_M1Bg1HoldingBrkApplied_B1 = this->crrcMvb->getBool(0xf614,2,4);
        this->BR1CT_M1Bg1AirBrkApplied_B1 = this->crrcMvb->getBool(0xf614,2,5);
        this->BR1CT_M1Bg1AirBrkRlsed_B1 = this->crrcMvb->getBool(0xf614,2,6);
        this->BR1CT_M1Bg1BoogieDataValid_B1 = this->crrcMvb->getBool(0xf614,3,1);
        this->BR1CT_M1Bg1AirBrkForceValid_B1 = this->crrcMvb->getBool(0xf614,3,2);
        this->BR1CT_M1Bg1BoogieLoadValid_B1 = this->crrcMvb->getBool(0xf614,3,3);
        this->BR1CT_M1Bg1BrkAirPresureValid_B1 = this->crrcMvb->getBool(0xf614,3,4);
        this->BR1CT_M1Bg1AirPresureValid_B1 = this->crrcMvb->getBool(0xf614,3,5);
        this->BR1CT_M1Bg1TotalPresureValid_B1 = this->crrcMvb->getBool(0xf614,3,6);
        this->BR1CT_M1Bg1BCUSTInterrupted_B1 = this->crrcMvb->getBool(0xf614,5,3);
        this->BR1CT_M1Bg1BCUSelfTestReady_B1 = this->crrcMvb->getBool(0xf614,5,4);
        this->BR1CT_M1Bg1BCUSelfTestFailed_B1 = this->crrcMvb->getBool(0xf614,5,5);
        this->BR1CT_M1Bg1BCUSelfTestPass_B1 = this->crrcMvb->getBool(0xf614,5,6);
        this->BR1CT_M1Bg1BCUSelfTesting_B1 = this->crrcMvb->getBool(0xf614,5,7);
        this->BR1CT_M1Bg1BCP1Pressure_U16 = this->crrcMvb->getUnsignedInt(0xf614,6);
        this->BR1CT_M1Bg1BCP2Pressure_U16 = this->crrcMvb->getUnsignedInt(0xf614,8);
        this->BR1CT_M1Bg1TotalPressure_U16 = this->crrcMvb->getUnsignedInt(0xf614,10);
        this->BR1CT_M1Bg1ASP1AirPressure_U16 = this->crrcMvb->getUnsignedInt(0xf614,12);
        this->BR1CT_M1Bg1ASP2AirPressure_U16 = this->crrcMvb->getUnsignedInt(0xf614,14);
        this->BR1CT_M1Bg1BoogieLoad_U16 = this->crrcMvb->getUnsignedInt(0xf614,18);
        //M1bg2
        this->BR1CT_M1Bg2LfSgn_U16 = this->crrcMvb->getUnsignedInt(0xf615,0);
        this->BR1CT_M1Bg2ParkingBrkRlsed_B1 = this->crrcMvb->getBool(0xf615,2,0);
        this->BR1CT_M1Bg2HoldingBrkApplied_B1 = this->crrcMvb->getBool(0xf615,2,4);
        this->BR1CT_M1Bg2AirBrkApplied_B1 = this->crrcMvb->getBool(0xf615,2,5);
        this->BR1CT_M1Bg2AirBrkRlsed_B1 = this->crrcMvb->getBool(0xf615,2,6);
        this->BR1CT_M1Bg2BoogieDataValid_B1 = this->crrcMvb->getBool(0xf615,3,1);
        this->BR1CT_M1Bg2AirBrkForceValid_B1 = this->crrcMvb->getBool(0xf615,3,2);
        this->BR1CT_M1Bg2BoogieLoadValid_B1 = this->crrcMvb->getBool(0xf615,3,3);
        this->BR1CT_M1Bg2BrkAirPresureValid_B1 = this->crrcMvb->getBool(0xf615,3,4);
        this->BR1CT_M1Bg2AirPresureValid_B1 = this->crrcMvb->getBool(0xf615,3,5);
        this->BR1CT_M1Bg2TotalPresureValid_B1 = this->crrcMvb->getBool(0xf615,3,6);
        this->BR1CT_M1Bg2BCUSTInterrupted_B1 = this->crrcMvb->getBool(0xf615,5,3);
        this->BR1CT_M1Bg2BCUSelfTestReady_B1 = this->crrcMvb->getBool(0xf615,5,4);
        this->BR1CT_M1Bg2BCUSelfTestFailed_B1 = this->crrcMvb->getBool(0xf615,5,5);
        this->BR1CT_M1Bg2BCUSelfTestPass_B1 = this->crrcMvb->getBool(0xf615,5,6);
        this->BR1CT_M1Bg2BCUSelfTesting_B1 = this->crrcMvb->getBool(0xf615,5,7);
        this->BR1CT_M1Bg2BCP1Pressure_U16 = this->crrcMvb->getUnsignedInt(0xf615,6);
        this->BR1CT_M1Bg2BCP2Pressure_U16 = this->crrcMvb->getUnsignedInt(0xf615,8);
        this->BR1CT_M1Bg2TotalPressure_U16 = this->crrcMvb->getUnsignedInt(0xf615,10);
        this->BR1CT_M1Bg2ASP1AirPressure_U16 = this->crrcMvb->getUnsignedInt(0xf615,12);
        this->BR1CT_M1Bg2ASP2AirPressure_U16 = this->crrcMvb->getUnsignedInt(0xf615,14);
        this->BR1CT_M1Bg2BoogieLoad_U16 = this->crrcMvb->getUnsignedInt(0xf615,18);

        // 1-2-3 FAULT

        this->BR1CT_TC1Bg1Fault_U32 = this->crrcMvb->getUnsignedInt32(0xf616,0);
        this->BR1CT_TC1Bg2Fault_U32 = this->crrcMvb->getUnsignedInt32(0xf616,4);
        this->BR1CT_MP1Bg1Fault_U32 = this->crrcMvb->getUnsignedInt32(0xf616,8);
        this->BR1CT_MP1Bg2Fault_U32 = this->crrcMvb->getUnsignedInt32(0xf616,12);
        this->BR1CT_M1Bg1Fault_U32 = this->crrcMvb->getUnsignedInt32(0xf616,16);
        this->BR1CT_M1Bg2Fault_U32 = this->crrcMvb->getUnsignedInt32(0xf616,20);

        this->BR1CT_24HourNoSelfTest_B1 = this->crrcMvb->getBool(0x616,25,7);

        this->createEBCUList(0x660,0x640,0xf640,this->CTHM_TC2Bogie1Select_U8,0);
        this->createEBCUList(0x661,0x641,0xf641,this->CTHM_TC2Bogie2Select_U8,1);
        this->createEBCUList(0x662,0x642,0xf642,this->CTHM_MP2Bogie3Select_U8,2);
        this->createEBCUList(0x663,0x643,0xf643,this->CTHM_MP2Bogie4Select_U8,3);
        this->createEBCUList(0x664,0x644,0xf644,this->CTHM_M2Bogie5Select_U8,4);
        this->createEBCUList(0x665,0x645,0xf645,this->CTHM_M2Bogie6Select_U8,5);

        this->BR2CT_TcMVBVersion_U8 = this->crrcMvb->getUnsignedChar(0x646,26);
        this->BR2CT_MMVBVersion_U8 = this->crrcMvb->getUnsignedChar(0x646,27);

        //M2bg1
        this->BR2CT_M2Bg1LfSgn_U16 = this->crrcMvb->getUnsignedInt(0xf644,0);
        this->BR2CT_M2Bg1ParkingBrkRlsed_B1 = this->crrcMvb->getBool(0xf644,2,0);
        this->BR2CT_M2Bg1HoldingBrkApplied_B1 = this->crrcMvb->getBool(0xf644,2,4);
        this->BR2CT_M2Bg1AirBrkApplied_B1 = this->crrcMvb->getBool(0xf644,2,5);
        this->BR2CT_M2Bg1AirBrkRlsed_B1 = this->crrcMvb->getBool(0xf644,2,6);
        this->BR2CT_M2Bg1BoogieDataValid_B1 = this->crrcMvb->getBool(0xf644,3,1);
        this->BR2CT_M2Bg1AirBrkForceValid_B1 = this->crrcMvb->getBool(0xf644,3,2);
        this->BR2CT_M2Bg1BoogieLoadValid_B1 = this->crrcMvb->getBool(0xf644,3,3);
        this->BR2CT_M2Bg1BrkAirPresureValid_B1 = this->crrcMvb->getBool(0xf644,3,4);
        this->BR2CT_M2Bg1AirPresureValid_B1 = this->crrcMvb->getBool(0xf644,3,5);
        this->BR2CT_M2Bg1TotalPresureValid_B1 = this->crrcMvb->getBool(0xf644,3,6);
        this->BR2CT_M2Bg1BCUSTInterrupted_B1 = this->crrcMvb->getBool(0xf644,5,3);
        this->BR2CT_M2Bg1BCUSelfTestReady_B1 = this->crrcMvb->getBool(0xf644,5,4);
        this->BR2CT_M2Bg1BCUSelfTestFailed_B1 = this->crrcMvb->getBool(0xf644,5,5);
        this->BR2CT_M2Bg1BCUSelfTestPass_B1 = this->crrcMvb->getBool(0xf644,5,6);
        this->BR2CT_M2Bg1BCUSelfTesting_B1 = this->crrcMvb->getBool(0xf644,5,7);
        this->BR2CT_M2Bg1BCP1Pressure_U16 = this->crrcMvb->getUnsignedInt(0xf644,6);
        this->BR2CT_M2Bg1BCP2Pressure_U16 = this->crrcMvb->getUnsignedInt(0xf644,8);
        this->BR2CT_M2Bg1TotalPressure_U16 = this->crrcMvb->getUnsignedInt(0xf644,10);
        this->BR2CT_M2Bg1ASP1AirPressure_U16 = this->crrcMvb->getUnsignedInt(0xf644,12);
        this->BR2CT_M2Bg1ASP2AirPressure_U16 = this->crrcMvb->getUnsignedInt(0xf644,14);
        this->BR2CT_M2Bg1BoogieLoad_U16 = this->crrcMvb->getUnsignedInt(0xf644,18);
        //M2bg2
        this->BR2CT_M2Bg2LfSgn_U16 = this->crrcMvb->getUnsignedInt(0xf645,0);
        this->BR2CT_M2Bg2ParkingBrkRlsed_B1 = this->crrcMvb->getBool(0xf645,2,0);
        this->BR2CT_M2Bg2HoldingBrkApplied_B1 = this->crrcMvb->getBool(0xf645,2,4);
        this->BR2CT_M2Bg2AirBrkApplied_B1 = this->crrcMvb->getBool(0xf645,2,5);
        this->BR2CT_M2Bg2AirBrkRlsed_B1 = this->crrcMvb->getBool(0xf645,2,6);
        this->BR2CT_M2Bg2BoogieDataValid_B1 = this->crrcMvb->getBool(0xf645,3,1);
        this->BR2CT_M2Bg2AirBrkForceValid_B1 = this->crrcMvb->getBool(0xf645,3,2);
        this->BR2CT_M2Bg2BoogieLoadValid_B1 = this->crrcMvb->getBool(0xf645,3,3);
        this->BR2CT_M2Bg2BrkAirPresureValid_B1 = this->crrcMvb->getBool(0xf645,3,4);
        this->BR2CT_M2Bg2AirPresureValid_B1 = this->crrcMvb->getBool(0xf645,3,5);
        this->BR2CT_M2Bg2TotalPresureValid_B1 = this->crrcMvb->getBool(0xf645,3,6);
        this->BR2CT_M2Bg2BCUSTInterrupted_B1 = this->crrcMvb->getBool(0xf645,5,3);
        this->BR2CT_M2Bg2BCUSelfTestReady_B1 = this->crrcMvb->getBool(0xf645,5,4);
        this->BR2CT_M2Bg2BCUSelfTestFailed_B1 = this->crrcMvb->getBool(0xf645,5,5);
        this->BR2CT_M2Bg2BCUSelfTestPass_B1 = this->crrcMvb->getBool(0xf645,5,6);
        this->BR2CT_M2Bg2BCUSelfTesting_B1 = this->crrcMvb->getBool(0xf645,5,7);
        this->BR2CT_M2Bg2BCP1Pressure_U16 = this->crrcMvb->getUnsignedInt(0xf645,6);
        this->BR2CT_M2Bg2BCP2Pressure_U16 = this->crrcMvb->getUnsignedInt(0xf645,8);
        this->BR2CT_M2Bg2TotalPressure_U16 = this->crrcMvb->getUnsignedInt(0xf645,10);
        this->BR2CT_M2Bg2ASP1AirPressure_U16 = this->crrcMvb->getUnsignedInt(0xf645,12);
        this->BR2CT_M2Bg2ASP2AirPressure_U16 = this->crrcMvb->getUnsignedInt(0xf645,14);
        this->BR2CT_M2Bg2BoogieLoad_U16 = this->crrcMvb->getUnsignedInt(0xf645,18);
        //MP2bg1
        this->BR2CT_MP2Bg1LfSgn_U16 = this->crrcMvb->getUnsignedInt(0xf642,0);
        this->BR2CT_MP2Bg1ParkingBrkRlsed_B1 = this->crrcMvb->getBool(0xf642,2,0);
        this->BR2CT_MP2Bg1HoldingBrkApplied_B1 = this->crrcMvb->getBool(0xf642,2,4);
        this->BR2CT_MP2Bg1AirBrkApplied_B1 = this->crrcMvb->getBool(0xf642,2,5);
        this->BR2CT_MP2Bg1AirBrkRlsed_B1 = this->crrcMvb->getBool(0xf642,2,6);
        this->BR2CT_MP2Bg1BoogieDataValid_B1 = this->crrcMvb->getBool(0xf642,3,1);
        this->BR2CT_MP2Bg1AirBrkForceValid_B1 = this->crrcMvb->getBool(0xf642,3,2);
        this->BR2CT_MP2Bg1BoogieLoadValid_B1 = this->crrcMvb->getBool(0xf642,3,3);
        this->BR2CT_MP2Bg1BrkAirPresureValid_B1 = this->crrcMvb->getBool(0xf642,3,4);
        this->BR2CT_MP2Bg1AirPresureValid_B1 = this->crrcMvb->getBool(0xf642,3,5);
        this->BR2CT_MP2Bg1TotalPresureValid_B1 = this->crrcMvb->getBool(0xf642,3,6);
        this->BR2CT_MP2Bg1BCUSTInterrupted_B1 = this->crrcMvb->getBool(0xf642,5,3);
        this->BR2CT_MP2Bg1BCUSelfTestReady_B1 = this->crrcMvb->getBool(0xf642,5,4);
        this->BR2CT_MP2Bg1BCUSelfTestFailed_B1 = this->crrcMvb->getBool(0xf642,5,5);
        this->BR2CT_MP2Bg1BCUSelfTestPass_B1 = this->crrcMvb->getBool(0xf642,5,6);
        this->BR2CT_MP2Bg1BCUSelfTesting_B1 = this->crrcMvb->getBool(0xf642,5,7);
        this->BR2CT_MP2Bg1BCP1Pressure_U16 = this->crrcMvb->getUnsignedInt(0xf642,6);
        this->BR2CT_MP2Bg1BCP2Pressure_U16 = this->crrcMvb->getUnsignedInt(0xf642,8);
        this->BR2CT_MP2Bg1TotalPressure_U16 = this->crrcMvb->getUnsignedInt(0xf642,10);
        this->BR2CT_MP2Bg1ASP1AirPressure_U16 = this->crrcMvb->getUnsignedInt(0xf642,12);
        this->BR2CT_MP2Bg1ASP2AirPressure_U16 = this->crrcMvb->getUnsignedInt(0xf642,14);
        this->BR2CT_MP2Bg1BoogieLoad_U16 = this->crrcMvb->getUnsignedInt(0xf642,18);
        //MP2bg2
        this->BR2CT_MP2Bg2LfSgn_U16 = this->crrcMvb->getUnsignedInt(0xf643,0);
        this->BR2CT_MP2Bg2ParkingBrkRlsed_B1 = this->crrcMvb->getBool(0xf643,2,0);
        this->BR2CT_MP2Bg2HoldingBrkApplied_B1 = this->crrcMvb->getBool(0xf643,2,4);
        this->BR2CT_MP2Bg2AirBrkApplied_B1 = this->crrcMvb->getBool(0xf643,2,5);
        this->BR2CT_MP2Bg2AirBrkRlsed_B1 = this->crrcMvb->getBool(0xf643,2,6);
        this->BR2CT_MP2Bg2BoogieDataValid_B1 = this->crrcMvb->getBool(0xf643,3,1);
        this->BR2CT_M2Bg2AirBrkForceValid_B1 = this->crrcMvb->getBool(0xf643,3,2);
        this->BR2CT_MP2Bg2BoogieLoadValid_B1 = this->crrcMvb->getBool(0xf643,3,3);
        this->BR2CT_MP2Bg2BrkAirPresureValid_B1 = this->crrcMvb->getBool(0xf643,3,4);
        this->BR2CT_MP2Bg2AirPresureValid_B1 = this->crrcMvb->getBool(0xf643,3,5);
        this->BR2CT_MP2Bg2TotalPresureValid_B1 = this->crrcMvb->getBool(0xf643,3,6);
        this->BR2CT_MP2Bg2BCUSTInterrupted_B1 = this->crrcMvb->getBool(0xf643,5,3);
        this->BR2CT_MP2Bg2BCUSelfTestReady_B1 = this->crrcMvb->getBool(0xf643,5,4);
        this->BR2CT_MP2Bg2BCUSelfTestFailed_B1 = this->crrcMvb->getBool(0xf643,5,5);
        this->BR2CT_MP2Bg2BCUSelfTestPass_B1 = this->crrcMvb->getBool(0xf643,5,6);
        this->BR2CT_MP2Bg2BCUSelfTesting_B1 = this->crrcMvb->getBool(0xf643,5,7);
        this->BR2CT_MP2Bg2BCP1Pressure_U16 = this->crrcMvb->getUnsignedInt(0xf643,6);
        this->BR2CT_MP2Bg2BCP2Pressure_U16 = this->crrcMvb->getUnsignedInt(0xf643,8);
        this->BR2CT_MP2Bg2TotalPressure_U16 = this->crrcMvb->getUnsignedInt(0xf643,10);
        this->BR2CT_MP2Bg2ASP1AirPressure_U16 = this->crrcMvb->getUnsignedInt(0xf643,12);
        this->BR2CT_MP2Bg2ASP2AirPressure_U16 = this->crrcMvb->getUnsignedInt(0xf643,14);
        this->BR2CT_MP2Bg2BoogieLoad_U16 = this->crrcMvb->getUnsignedInt(0xf643,18);
        //TC2bg1
        this->BR2CT_TC2Bg1LfSgn_U16 = this->crrcMvb->getUnsignedInt(0xf640,0);
        this->BR2CT_TC2Bg1ParkingBrkRlsed_B1 = this->crrcMvb->getBool(0xf640,2,0);
        this->BR2CT_TC2Bg1HoldingBrkApplied_B1 = this->crrcMvb->getBool(0xf640,2,4);
        this->BR2CT_TC2Bg1AirBrkApplied_B1 = this->crrcMvb->getBool(0xf640,2,5);
        this->BR2CT_TC2Bg1AirBrkRlsed_B1 = this->crrcMvb->getBool(0xf640,2,6);
        this->BR2CT_TC2Bg1BoogieDataValid_B1 = this->crrcMvb->getBool(0xf640,3,1);
        this->BR2CT_TC2Bg1AirBrkForceValid_B1 = this->crrcMvb->getBool(0xf640,3,2);
        this->BR2CT_TC2Bg1BoogieLoadValid_B1 = this->crrcMvb->getBool(0xf640,3,3);
        this->BR2CT_TC2Bg1BrkAirPresureValid_B1 = this->crrcMvb->getBool(0xf640,3,4);
        this->BR2CT_TC2Bg1AirPresureValid_B1 = this->crrcMvb->getBool(0xf640,3,5);
        this->BR2CT_TC2Bg1TotalPresureValid_B1 = this->crrcMvb->getBool(0xf640,3,6);
        this->BR2CT_TC2Bg1BCUSTInterrupted_B1 = this->crrcMvb->getBool(0xf640,5,3);
        this->BR2CT_TC2Bg1BCUSelfTestReady_B1 = this->crrcMvb->getBool(0xf640,5,4);
        this->BR2CT_TC2Bg1BCUSelfTestFailed_B1 = this->crrcMvb->getBool(0xf640,5,5);
        this->BR2CT_TC2Bg1BCUSelfTestPass_B1 = this->crrcMvb->getBool(0xf640,5,6);
        this->BR2CT_TC2Bg1BCUSelfTesting_B1 = this->crrcMvb->getBool(0xf640,5,7);
        this->BR2CT_TC2Bg1BCP1Pressure_U16 = this->crrcMvb->getUnsignedInt(0xf640,6);
        this->BR2CT_TC2Bg1BCP2Pressure_U16 = this->crrcMvb->getUnsignedInt(0xf640,8);
        this->BR2CT_TC2Bg1TotalPressure_U16 = this->crrcMvb->getUnsignedInt(0xf640,10);
        this->BR2CT_TC2Bg1ASP1AirPressure_U16 = this->crrcMvb->getUnsignedInt(0xf640,12);
        this->BR2CT_TC2Bg1ASP2AirPressure_U16 = this->crrcMvb->getUnsignedInt(0xf640,14);
        this->BR2CT_TC2Bg1BoogieLoad_U16 = this->crrcMvb->getUnsignedInt(0xf640,18);
        //TC2bg2
        this->BR2CT_TC2Bg2LfSgn_U16 = this->crrcMvb->getUnsignedInt(0xf641,0);
        this->BR2CT_TC2Bg2ParkingBrkRlsed_B1 = this->crrcMvb->getBool(0xf641,2,0);
        this->BR2CT_TC2Bg2HoldingBrkApplied_B1 = this->crrcMvb->getBool(0xf641,2,4);
        this->BR2CT_TC2Bg2AirBrkApplied_B1 = this->crrcMvb->getBool(0xf641,2,5);
        this->BR2CT_TC2Bg2AirBrkRlsed_B1 = this->crrcMvb->getBool(0xf641,2,6);
        this->BR2CT_TC2Bg2BoogieDataValid_B1 = this->crrcMvb->getBool(0xf641,3,1);
        this->BR2CT_TC2Bg2AirBrkForceValid_B1 = this->crrcMvb->getBool(0xf641,3,2);
        this->BR2CT_TC2Bg2BoogieLoadValid_B1 = this->crrcMvb->getBool(0xf641,3,3);
        this->BR2CT_TC2Bg2BrkAirPresureValid_B1 = this->crrcMvb->getBool(0xf641,3,4);
        this->BR2CT_TC2Bg2AirPresureValid_B1 = this->crrcMvb->getBool(0xf641,3,5);
        this->BR2CT_TC2Bg2TotalPresureValid_B1 = this->crrcMvb->getBool(0xf641,3,6);
        this->BR2CT_TC2Bg2BCUSTInterrupted_B1 = this->crrcMvb->getBool(0xf641,5,3);
        this->BR2CT_TC2Bg2BCUSelfTestReady_B1 = this->crrcMvb->getBool(0xf641,5,4);
        this->BR2CT_TC2Bg2BCUSelfTestFailed_B1 = this->crrcMvb->getBool(0xf641,5,5);
        this->BR2CT_TC2Bg2BCUSelfTestPass_B1 = this->crrcMvb->getBool(0xf641,5,6);
        this->BR2CT_TC2Bg2BCUSelfTesting_B1 = this->crrcMvb->getBool(0xf641,5,7);
        this->BR2CT_TC2Bg2BCP1Pressure_U16 = this->crrcMvb->getUnsignedInt(0xf641,6);
        this->BR2CT_TC2Bg2BCP2Pressure_U16 = this->crrcMvb->getUnsignedInt(0xf641,8);
        this->BR2CT_TC2Bg2TotalPressure_U16 = this->crrcMvb->getUnsignedInt(0xf641,10);
        this->BR2CT_TC2Bg2ASP1AirPressure_U16 = this->crrcMvb->getUnsignedInt(0xf641,12);
        this->BR2CT_TC2Bg2ASP2AirPressure_U16 = this->crrcMvb->getUnsignedInt(0xf641,14);
        this->BR2CT_TC2Bg2BoogieLoad_U16 = this->crrcMvb->getUnsignedInt(0xf641,18);

        // 4-5-6 FAULT 0-23
        this->BR2CT_TC2Bg1Fault_U32 = this->crrcMvb->getUnsignedInt32(0xf646,0);
        this->BR2CT_TC2Bg2Fault_U32 = this->crrcMvb->getUnsignedInt32(0xf646,4);
        this->BR2CT_MP2Bg1Fault_U32 = this->crrcMvb->getUnsignedInt32(0xf646,8);
        this->BR2CT_MP2Bg2Fault_U32 = this->crrcMvb->getUnsignedInt32(0xf646,12);
        this->BR2CT_M2Bg1Fault_U32 = this->crrcMvb->getUnsignedInt32(0xf646,16);
        this->BR2CT_M2Bg2Fault_U32 = this->crrcMvb->getUnsignedInt32(0xf646,20);

        this->BR2CT_24HourNoSelfTest_B1 = this->crrcMvb->getBool(0x646,25,7);


    }

    /////*******ATC -- CCU**********///////
    {

        ATCT_ATOActive_B1 = this->crrcMvb->getBool(0xb10,0,0);
        ATCT_ATBMode_B1 = this->crrcMvb->getBool(0xb10,0,1);
        ATCT_CMMode_B1 = this->crrcMvb->getBool(0xb10,0,2);
        ATCT_RMFMode_B1 = this->crrcMvb->getBool(0xb10,0,3);
        ATCT_RMRMode_B1 = this->crrcMvb->getBool(0xb10,0,5);
        ATCT_BMMode_B1 = this->crrcMvb->getBool(0xb10,1,4);
        ATCT_CBTCMode_B1 = this->crrcMvb->getBool(0xb10,1,5);
        ATCT_MajorFault_B1 = this->crrcMvb->getBool(0xb11,24,0);
        ATCT_MediumFault_B1 = this->crrcMvb->getBool(0xb11,24,1);

       ATCT_StartStationID_U16 = this->crrcMvb->getUnsignedInt(0xb11,2);
       ATCT_EndStationID_U16 = this->crrcMvb->getUnsignedInt(0xb11,4);
       ATCT_NextStationID_U16 = this->crrcMvb->getUnsignedInt(0xb11,6);
       ATCT_CurrentStationID_U16 = this->crrcMvb->getUnsignedInt(0xb11,8);
       ATCT_Location_U16 = this->crrcMvb->getUnsignedInt(0xb11,10);

       ATCT_ATCSWVersion_U32 = this->crrcMvb->getUnsignedInt32(0xb11,26);
    }

    /////*******WMS -- CCU**********///////
    {

       WSCT_Car6CabDetecterFlt_B1 = this->crrcMvb->getBool(0xa60,10,0);
       WSCT_Car6HDetecterFlt_B1 = this->crrcMvb->getBool(0xa60,10,1);
       WSCT_Car6RDetecterFlt_B1 = this->crrcMvb->getBool(0xa60,10,2);
       WSCT_Car6FDetecterFlt_B1 = this->crrcMvb->getBool(0xa60,10,3);
       WSCT_Car6DDetecterFlt_B1 = this->crrcMvb->getBool(0xa60,10,4);
       WSCT_Car6Zone1DetecterFlt_B1 = this->crrcMvb->getBool(0xa60,10,5);
       WSCT_Car6Zone2DetecterFlt_B1 = this->crrcMvb->getBool(0xa60,10,6);

       WSCT_Car5RDetecterFlt_B1 = this->crrcMvb->getBool(0xa60,11,2);
       WSCT_Car5FDetecterFlt_B1 = this->crrcMvb->getBool(0xa60,11,3);
       WSCT_Car5Zone1DetecterFlt_B1 = this->crrcMvb->getBool(0xa60,11,5);
       WSCT_Car5Zone2DetecterFlt_B1 = this->crrcMvb->getBool(0xa60,11,6);

       WSCT_Car4RDetecterFlt_B1 = this->crrcMvb->getBool(0xa60,12,2);
       WSCT_Car4FDetecterFlt_B1 = this->crrcMvb->getBool(0xa60,12,3);
       WSCT_Car4Zone1DetecterFlt_B1 = this->crrcMvb->getBool(0xa60,12,5);
       WSCT_Car4Zone2DetecterFlt_B1 = this->crrcMvb->getBool(0xa60,12,6);

       WSCT_Car1CabDetecterFlt_B1 = this->crrcMvb->getBool(0xa60,13,0);
       WSCT_Car1HDetecterFlt_B1 = this->crrcMvb->getBool(0xa60,13,1);
       WSCT_Car1RDetecterFlt_B1 = this->crrcMvb->getBool(0xa60,13,2);
       WSCT_Car1FDetecterFlt_B1 = this->crrcMvb->getBool(0xa60,13,3);
       WSCT_Car1DDetecterFlt_B1 = this->crrcMvb->getBool(0xa60,13,4);
       WSCT_Car1Zone1DetecterFlt_B1 = this->crrcMvb->getBool(0xa60,13,5);
       WSCT_Car1Zone2DetecterFlt_B1 = this->crrcMvb->getBool(0xa60,13,6);

       WSCT_Car2RDetecterFlt_B1 = this->crrcMvb->getBool(0xa60,14,2);
       WSCT_Car2FDetecterFlt_B1 = this->crrcMvb->getBool(0xa60,14,3);
       WSCT_Car2Zone1DetecterFlt_B1 = this->crrcMvb->getBool(0xa60,14,5);
       WSCT_Car2Zone2DetecterFlt_B1 = this->crrcMvb->getBool(0xa60,14,6);

       WSCT_Car3RDetecterFlt_B1 = this->crrcMvb->getBool(0xa60,15,2);
       WSCT_Car3FDetecterFlt_B1 = this->crrcMvb->getBool(0xa60,15,3);
       WSCT_Car3Zone1DetecterFlt_B1 = this->crrcMvb->getBool(0xa60,15,5);
       WSCT_Car3Zone2DetecterFlt_B1 = this->crrcMvb->getBool(0xa60,15,6);


       WSCT_GWSWVersion_U16 = this->crrcMvb->getUnsignedInt(0xa60,4);
       WSCT_ATemperature_U16 = this->crrcMvb->getUnsignedInt(0xa60,6);
       WSCT_BTemperature_U16 = this->crrcMvb->getUnsignedInt(0xa60,8);
       WSCT_Car6CabFire_B1 = this->crrcMvb->getBool(0xa61,0,0);
       WSCT_Car6HFire_B1 = this->crrcMvb->getBool(0xa61,1,0);
       WSCT_Car6RFire_B1 = this->crrcMvb->getBool(0xa61,1,1);
       WSCT_Car6FFire_B1 = this->crrcMvb->getBool(0xa61,1,2);
       WSCT_Car6DFire_B1 = this->crrcMvb->getBool(0xa61,1,3);
       WSCT_Car6Zone1LightFire_B1 = this->crrcMvb->getBool(0xa61,1,4);
       WSCT_Car6Zone1HeavyFire_B1 = this->crrcMvb->getBool(0xa61,1,5);
       WSCT_Car6Zone2LightFire_B1 = this->crrcMvb->getBool(0xa61,1,6);
       WSCT_Car6Zone2HeavyFire_B1 = this->crrcMvb->getBool(0xa61,1,7);

       WSCT_Car5RFire_B1 = this->crrcMvb->getBool(0xa61,2,1);
       WSCT_Car5FFire_B1 = this->crrcMvb->getBool(0xa61,2,2);
       WSCT_Car5Zone1LightFire_B1 = this->crrcMvb->getBool(0xa61,2,4);
       WSCT_Car5Zone1HeavyFire_B1 = this->crrcMvb->getBool(0xa61,2,5);
       WSCT_Car5Zone2LightFire_B1 = this->crrcMvb->getBool(0xa61,2,6);
       WSCT_Car5Zone2HeavyFire_B1 = this->crrcMvb->getBool(0xa61,2,7);

       WSCT_Car4RFire_B1 = this->crrcMvb->getBool(0xa61,3,1);
       WSCT_Car4FFire_B1 = this->crrcMvb->getBool(0xa61,3,2);
       WSCT_Car4Zone1LightFire_B1 = this->crrcMvb->getBool(0xa61,3,4);
       WSCT_Car4Zone1HeavyFire_B1 = this->crrcMvb->getBool(0xa61,3,5);
       WSCT_Car4Zone2LightFire_B1 = this->crrcMvb->getBool(0xa61,3,6);
       WSCT_Car4Zone2HeavyFire_B1 = this->crrcMvb->getBool(0xa61,3,7);

       WSCT_Car3RFire_B1 = this->crrcMvb->getBool(0xa61,7,1);
       WSCT_Car3FFire_B1 = this->crrcMvb->getBool(0xa61,7,2);
       WSCT_Car3Zone1LightFire_B1 = this->crrcMvb->getBool(0xa61,7,4);
       WSCT_Car3Zone1HeavyFire_B1 = this->crrcMvb->getBool(0xa61,7,5);
       WSCT_Car3Zone2LightFire_B1 = this->crrcMvb->getBool(0xa61,7,6);
       WSCT_Car3Zone2HeavyFire_B1 = this->crrcMvb->getBool(0xa61,7,7);

       WSCT_Car2RFire_B1 = this->crrcMvb->getBool(0xa61,6,1);
       WSCT_Car2FFire_B1 = this->crrcMvb->getBool(0xa61,6,2);
       WSCT_Car2Zone1LightFire_B1 = this->crrcMvb->getBool(0xa61,6,4);
       WSCT_Car2Zone1HeavyFire_B1 = this->crrcMvb->getBool(0xa61,6,5);
       WSCT_Car2Zone2LightFire_B1 = this->crrcMvb->getBool(0xa61,6,6);
       WSCT_Car2Zone2HeavyFire_B1 = this->crrcMvb->getBool(0xa61,6,7);

       WSCT_Car1CabFire_B1 = this->crrcMvb->getBool(0xa61,4,0);
       WSCT_Car1HFire_B1 = this->crrcMvb->getBool(0xa61,5,0);
       WSCT_Car1RFire_B1 = this->crrcMvb->getBool(0xa61,5,1);
       WSCT_Car1FFire_B1 = this->crrcMvb->getBool(0xa61,5,2);
       WSCT_Car1DFire_B1 = this->crrcMvb->getBool(0xa61,5,3);
       WSCT_Car1Zone1LightFire_B1 = this->crrcMvb->getBool(0xa61,5,4);
       WSCT_Car1Zone1HeavyFire_B1 = this->crrcMvb->getBool(0xa61,5,5);
       WSCT_Car1Zone2LightFire_B1 = this->crrcMvb->getBool(0xa61,5,6);
       WSCT_Car1Zone2HeavyFire_B1 = this->crrcMvb->getBool(0xa61,5,7);

       WSCT_FrameBWaterInTapStatus_B1 = this->crrcMvb->getBool(0xa61,11,0);
       WSCT_FrameBWaterOutTapStatus_B1 = this->crrcMvb->getBool(0xa61,11,1);
       WSCT_FrameBNi1PressureStatus_B1 = this->crrcMvb->getBool(0xa61,11,2);
       WSCT_FrameBNi2PressureStatus_B1 = this->crrcMvb->getBool(0xa61,11,3);
       WSCT_FrameBWaterHeaterStatus_B1 = this->crrcMvb->getBool(0xa61,11,4);
       WSCT_FrameBWaterStatus_B1 = this->crrcMvb->getBool(0xa61,11,5);

       WSCT_FrameAWaterInTapStatus_B1 = this->crrcMvb->getBool(0xa61,15,0);
       WSCT_FrameAWaterOutTapStatus_B1 = this->crrcMvb->getBool(0xa61,15,1);
       WSCT_FrameANi1PressureStatus_B1 = this->crrcMvb->getBool(0xa61,15,2);
       WSCT_FrameANi2PressureStatus_B1 = this->crrcMvb->getBool(0xa61,15,3);
       WSCT_FrameAWaterHeaterStatus_B1 = this->crrcMvb->getBool(0xa61,15,4);
       WSCT_FrameAWaterStatus_B1 = this->crrcMvb->getBool(0xa61,15,5);

       WSCT_TC1Fault = this->crrcMvb->getUnsignedChar(0xa60,13) &0xfe;
       WSCT_MP1Fault = this->crrcMvb->getUnsignedChar(0xa60,14) &0x36;
       WSCT_M1Fault = this->crrcMvb->getUnsignedChar(0xa60,15) &0x36;
       WSCT_M2Fault = this->crrcMvb->getUnsignedChar(0xa60,12) &0x36;
       WSCT_MP2Fault = this->crrcMvb->getUnsignedChar(0xa60,11) &0x36;
       WSCT_TC2Fault = this->crrcMvb->getUnsignedChar(0xa60,10) &0xfe;

    }

    /////*******PIDS -- CCU**********///////
    {
       if(this->CTHM_PIS1Active_B1)
       {
            this->copyPort(0xFC10,0xC10);
            this->copyPort(0xFC11,0xC11);
       }else if(this->CTHM_PIS2Active_B1)
       {
           this->copyPort(0xFC10,0xC60);
           this->copyPort(0xFC11,0xC61);
       }else
       {
            //nothing todo
       }
       PA1CT_LifeSignal_U16 = this->crrcMvb->getUnsignedInt(0xc10,0);
       PA1CT_SoftwareVersion0_U8 = this->crrcMvb->getUnsignedChar(0xc10,16);
       PA1CT_SoftwareVersion1_U8 = this->crrcMvb->getUnsignedChar(0xc10,17);
       PA1CT_SoftwareVersion2_U8 = this->crrcMvb->getUnsignedChar(0xc10,18);
       PA2CT_LifeSignal_U16 = this->crrcMvb->getUnsignedInt(0xc60,0);
       PA2CT_SoftwareVersion0_U8 = this->crrcMvb->getUnsignedChar(0xc60,16);
       PA2CT_SoftwareVersion1_U8 = this->crrcMvb->getUnsignedChar(0xc60,17);
       PA2CT_SoftwareVersion2_U8 = this->crrcMvb->getUnsignedChar(0xc60,18);

        PAiCT_FirstStationID_U16 = this->crrcMvb->getUnsignedInt(0xfc10,6);
        PAiCT_CurrentStationID_U16 = this->crrcMvb->getUnsignedInt(0xfc10,8);
        PAiCT_NextStationID_U16 = this->crrcMvb->getUnsignedInt(0xfc10,10);
        PAiCT_FinalStationID_U16 = this->crrcMvb->getUnsignedInt(0xfc10,12);
        PAiCT_EmBroadCastCode_U16 = this->crrcMvb->getUnsignedInt(0xfc10,14);

        PAiCT_BroadcastHalfAuto_B1 = this->crrcMvb->getBool(0xfc10,2,0);
        PAiCT_BroadcastFullAuto_B1 = this->crrcMvb->getBool(0xfc10,2,1);
        PAiCT_BroadcastMannual_B1 = this->crrcMvb->getBool(0xfc10,2,2);
        PAiCT_Broadcast_B1 = this->crrcMvb->getBool(0xfc10,2,3);
        PAiCT_OCCBroadcast_B1 = this->crrcMvb->getBool(0xfc10,2,4);
        PAiCT_DriverSpeaker_B1 = this->crrcMvb->getBool(0xfc10,2,5);
        PAiCT_EmBroadcast_B1 = this->crrcMvb->getBool(0xfc10,3,0);
        PAiCT_LeavingBroadcast_B1 = this->crrcMvb->getBool(0xfc10,3,1);
        PAiCT_ArrivingBroadcast_B1 = this->crrcMvb->getBool(0xfc10,3,2);
        PAiCT_BroadcastingStatus_B1 = this->crrcMvb->getBool(0xfc10,3,3);
        PAiCT_Master_B1 = this->crrcMvb->getBool(0xfc10,4,0);
        PAiCT_Slave_B1 = this->crrcMvb->getBool(0xfc10,4,1);
        PAiCT_SelfCheckResult_B1 = this->crrcMvb->getBool(0xfc10,4,3);

    }
    /////*******CCU-D -- CCU**********///////
    {
        CD1CT_DCUMLifeSignal_I16 = this->crrcMvb->getSignedInt(0x818,0);
        CD1CT_SoftWareVersion1_I16 = this->crrcMvb->getSignedInt(0x818,2);
        CD1CT_SoftWareVersion2_I16 = this->crrcMvb->getSignedInt(0x818,4);
        CD1CT_SoftWareVersion3_I16 = this->crrcMvb->getSignedInt(0x818,6);
        CD1CT_SoftWareVersion4_I16 = this->crrcMvb->getSignedInt(0x818,8);
        CD2CT_DCUMLifeSignal_I16 = this->crrcMvb->getSignedInt(0x828,0);
        CD2CT_SoftWareVersion1_I16 = this->crrcMvb->getSignedInt(0x828,2);
        CD2CT_SoftWareVersion2_I16 = this->crrcMvb->getSignedInt(0x828,4);
        CD2CT_SoftWareVersion3_I16 = this->crrcMvb->getSignedInt(0x828,6);
        CD2CT_SoftWareVersion4_I16 = this->crrcMvb->getSignedInt(0x828,8);
    }
}

void Database::createEBCUList(unsigned short realport1,unsigned short realport2,unsigned short virtualport,
                              unsigned char trustIndex,unsigned char bgnum)
{

//    bool t_masterport1 = this->crrcMvb->getBool(realport1, 5,0);
//    bool t_masterport2 = this->crrcMvb->getBool(realport2, 5,0);

//    bool t_validport1 = this->crrcMvb->getBool(realport1, 3,1);
//    bool t_validport2 = this->crrcMvb->getBool(realport2, 3,1);

    //  edcu1/4 jia i trust logic
    if(
            trustIndex == 1 || trustIndex == 4
//            (true == realport1bgonline && true == realport2bgonline && t_masterport1 == true && t_validport1 == true) ||
//            (true == realport1bgonline && true == realport2bgonline && t_masterport1 == false && t_masterport2 == true && t_validport1 == true && t_validport2 == false) ||
//            (true == realport1bgonline && false == realport2bgonline && t_validport1 == true)
            )
    {
        // data signal
        this->copyPort( virtualport,realport1);
        //resbgonline = realport1bgonline;
        //fault signal
        this->crrcMvb->setUnsignedInt32(virtualport-bgnum+6,bgnum*4,this->crrcMvb->getUnsignedInt32(realport1-bgnum+6,bgnum*4));

        this->crrcMvb->setBool(virtualport-bgnum+6,bgnum*4+1,6,this->crrcMvb->getBool(realport1-bgnum+6,bgnum*4+1,6));//CAN0 FAULT
        this->crrcMvb->setBool(virtualport-bgnum+6,bgnum*4+1,7,this->crrcMvb->getBool(realport1-bgnum+6,bgnum*4+1,7));//CAN1 FAULT
        //these 3 faults should not be in cycle ,but here deal it in each cycle,trust the last
        this->crrcMvb->setBool(virtualport-bgnum+6,25,7,this->crrcMvb->getBool(realport1-bgnum+6,25,7));//24h untest FAULT
        this->crrcMvb->setBool(virtualport-bgnum+6,25,0,this->crrcMvb->getBool(realport1-bgnum+6,25,0));//brake not release FAULT
        this->crrcMvb->setBool(virtualport-bgnum+6,24,5,this->crrcMvb->getBool(realport1-bgnum+6,24,5));//brake test fail FAULT

    }
    //  edcu2/3 trust logic
    else if(
            trustIndex == 2 || trustIndex == 3

//            (true == realport1bgonline && true == realport2bgonline && t_masterport1 == true && t_validport1 == false && t_validport2 == true ) ||
//            (true == realport1bgonline && true == realport2bgonline && t_masterport1 == false && t_masterport2 == true && t_validport2 == true) ||
//            (false == realport1bgonline && true == realport2bgonline && t_validport2 == true)
            )
    {
            this->copyPort( virtualport,realport2);
            //resbgonline = realport2bgonline;
            //fault signal
            this->crrcMvb->setUnsignedInt32(virtualport-bgnum+6,bgnum*4,this->crrcMvb->getUnsignedInt32(realport2-bgnum+6,bgnum*4));

            this->crrcMvb->setBool(virtualport-bgnum+6,bgnum*4+1,6,this->crrcMvb->getBool(realport2-bgnum+6,bgnum*4+1,6));//CAN0 FAULT
            this->crrcMvb->setBool(virtualport-bgnum+6,bgnum*4+1,7,this->crrcMvb->getBool(realport2-bgnum+6,bgnum*4+1,7));//CAN1 FAULT
            //these 3 faults should not be in cycle ,but here deal it in each cycle,trust the last
            this->crrcMvb->setBool(virtualport-bgnum+6,25,7,this->crrcMvb->getBool(realport2-bgnum+6,25,7));//24h untest FAULT
            this->crrcMvb->setBool(virtualport-bgnum+6,25,0,this->crrcMvb->getBool(realport2-bgnum+6,25,0));//brake not release FAULT
            this->crrcMvb->setBool(virtualport-bgnum+6,24,5,this->crrcMvb->getBool(realport2-bgnum+6,24,5));//brake test fail FAULT

    }else
    {
            this->copyPort( virtualport,0xfff);
            this->crrcMvb->setUnsignedInt32(virtualport-bgnum+6,bgnum*4,0);
            //resbgonline = false;

    }

}

//void Database::createEBCUList(bool ebcu1Online, bool ebcu2Online, QList<unsigned short> virtualports, QList<unsigned short> realports)
//{
//    if (realports.size() != 14)
//    {
//        _LOG << "EBCU the size of the real ports is not enough";

//        return;
//    }

//    if (virtualports.size() != 7)
//    {
//        _LOG << "EBCU the size of the virtual ports is not enough";

//        return;
//    }

//    bool t_bcu1master = this->crrcMvb->getBool(realports.at(0), 5,0);
//    bool t_bcu2master = this->crrcMvb->getBool(realports.at(7), 5,0);

//    for(int i = 0;i<6;i++)
//    {
//        // data signal
//        bool t_bcu1valid = this->crrcMvb->getBool(realports.at(i), 3,1);
//        bool t_bcu2valid = this->crrcMvb->getBool(realports.at(i+7), 3,1);

//        //  edcu1/4 jia i trust logic
//        if(
//                (true == ebcu1Online && true == ebcu2Online && t_bcu1master == true && t_bcu1valid == true) ||
//                (true == ebcu1Online && true == ebcu2Online && t_bcu1master == false && t_bcu2master == true && t_bcu1valid == true && t_bcu2valid == false) ||
//                (true == ebcu1Online && false == ebcu2Online && t_bcu1valid == true)
//                )
//        {
//                this->copyPort( virtualports.at(i),realports.at(i));
//        }
//        //  edcu2/3 trust logic
//        else if(
//                (true == ebcu1Online && true == ebcu2Online && t_bcu1master == true && t_bcu1valid == false && t_bcu2valid == true ) ||
//                (true == ebcu1Online && true == ebcu2Online && t_bcu1master == false && t_bcu2master == true && t_bcu2valid == true) ||
//                (false == ebcu1Online && true == ebcu2Online && t_bcu2valid == true)
//                )
//        {
//                this->copyPort( virtualports.at(i),realports.at(i+7));
//        }else
//        {
//                this->copyPort( virtualports.at(i),0xfff);
//        }

//        // fault signal
//        //应大连厂要求屏蔽故障数据有效的逻辑
//        //bool t_bcu1faultvalid = this->crrcMvb->getBool(realport, i*4+1,0);
//        //bool t_bcu2faultvalid = this->crrcMvb->getBool(realports.at(13),i*4+1,0);
//        bool t_bcu1faultvalid = true;
//        bool t_bcu2faultvalid = true;
//        //  edcu1/4 jia i trust logic
//        if(
//                (true == ebcu1Online && true == ebcu2Online && t_bcu1master == true && t_bcu1faultvalid == true) ||
//                (true == ebcu1Online && true == ebcu2Online && t_bcu1master == false && t_bcu2master == true && t_bcu1faultvalid == true && t_bcu2faultvalid == false) ||
//                (true == ebcu1Online && false == ebcu2Online && t_bcu1faultvalid == true)
//                )
//        {
//            this->crrcMvb->setUnsignedInt32(virtualport,i*4,this->crrcMvb->getUnsignedInt32(realport,i*4));

//            this->crrcMvb->setBool(virtualport,i*4+1,6,this->crrcMvb->getBool(realport,i*4+1,6));//CAN0 FAULT
//            this->crrcMvb->setBool(virtualport,i*4+1,7,this->crrcMvb->getBool(realport,i*4+1,7));//CAN1 FAULT
//            this->crrcMvb->setBool(virtualport,25,7,this->crrcMvb->getBool(realport,25,7));//24h untest FAULT
//            this->crrcMvb->setBool(virtualport,25,0,this->crrcMvb->getBool(realport,25,0));//brake not release FAULT
//            this->crrcMvb->setBool(virtualport,24,5,this->crrcMvb->getBool(realport,24,5));//brake test fail FAULT


//        }
//        //  edcu2/3 trust logic
//        else if(
//                (true == ebcu1Online && true == ebcu2Online && t_bcu1master == true && t_bcu1faultvalid == false && t_bcu2faultvalid == true ) ||
//                (true == ebcu1Online && true == ebcu2Online && t_bcu1master == false && t_bcu2master == true && t_bcu2faultvalid == true) ||
//                (false == ebcu1Online && true == ebcu2Online && t_bcu2faultvalid == true)
//                )
//        {
//            this->crrcMvb->setUnsignedInt32(virtualport,i*4,this->crrcMvb->getUnsignedInt32(realports.at(13),i*4));

//            this->crrcMvb->setBool(virtualport,i*4+1,6,this->crrcMvb->getBool(realports.at(13),i*4+1,6));//CAN0 FAULT
//            this->crrcMvb->setBool(virtualport,i*4+1,7,this->crrcMvb->getBool(realports.at(13),i*4+1,7));//CAN1 FAULT
//            this->crrcMvb->setBool(virtualport,25,7,this->crrcMvb->getBool(realports.at(13),25,7));//24h untest FAULT
//            this->crrcMvb->setBool(virtualport,25,0,this->crrcMvb->getBool(realports.at(13),25,0));//brake not release FAULT
//            this->crrcMvb->setBool(virtualport,24,5,this->crrcMvb->getBool(realports.at(13),24,5));//brake test fail FAULT

//        }else
//        {
//            this->crrcMvb->setUnsignedInt32(virtualport,i*4,0);
//            this->crrcMvb->setUnsignedInt32(virtualport,24,0);
//            this->crrcMvb->setUnsignedInt32(virtualport,25,0);
//        }
//    }


//}

void Database::createEDCUList(bool edcu1Online, bool edcu2Online, QList<unsigned short> virtualports, QList<unsigned short> realports)
{

    if (realports.size() != 4)
    {
        _LOG <<virtualports.at(0) <<"EDCU the size of the real ports is not enough";

        return;
    }

    if (virtualports.size() != 2)
    {
        _LOG << "EDCU the size of the virtual ports is not enough";

        return;
    }
    //virtualport1:7i0 virtualport2:7i1
    unsigned short virtualport1 = virtualports.at(0);
    unsigned short virtualport2 = virtualports.at(1);

    //virtualporti_1:7i0 virtualporti_2:7i1
    unsigned short realport1_1 = realports.at(0);
    unsigned short realport1_2 = realports.at(1);
    unsigned short realport2_1 = realports.at(2);
    unsigned short realport2_2 = realports.at(3);

    if (this->crrcMvb->getUnsignedChar(realport1_1, 22) == 1 && true == edcu1Online)     // edcu1 master
    {
        this->copyPort(virtualport1,realport1_1);
        this->copyPort(virtualport2,realport1_2);
    }
    else if (1 == this->crrcMvb->getUnsignedChar(realport2_1, 22) == 1 && true == edcu2Online)   // edcu2 master
    {
        this->copyPort(virtualport1,realport2_1);
        this->copyPort(virtualport2,realport2_2);
    }else
    {

        // 门1 trust
        if (this->crrcMvb->getBool(realport1_1, 0, 7) && true == edcu1Online )//门控器1-1有效
        {
            // fault byte   6 fault boolean
            this->crrcMvb->setUnsignedChar(virtualport1,1,this->crrcMvb->getUnsignedChar(realport1_1,1));
            // state byte
            // version
            this->crrcMvb->setUnsignedChar(virtualport1,12,this->crrcMvb->getUnsignedChar(realport1_1,12));
            for(int i = 0; i<11;i++)
            {
                //11 state boolean
                this->crrcMvb->setBool(virtualport2,i,0,this->crrcMvb->getBool(realport1_2,i,0));
            }
            this->crrcMvb->setBool(virtualport2,27,0,this->crrcMvb->getBool(realport1_2,27,0));
            this->crrcMvb->setBool(virtualport2,28,0,this->crrcMvb->getBool(realport1_2,28,0));

        }
        else if (this->crrcMvb->getBool(realport2_1, 0, 7) && true == edcu2Online)//门控器2-1有效
        {
            // fault byte   6 fault boolean
            this->crrcMvb->setUnsignedChar(virtualport1,1,this->crrcMvb->getUnsignedChar(realport2_1,1));
            // state byte
            // version
            this->crrcMvb->setUnsignedChar(virtualport1,12,this->crrcMvb->getUnsignedChar(realport2_1,12));
            for(int i = 0; i<11;i++)
            {
                //11 state boolean
                this->crrcMvb->setBool(virtualport2,i,0,this->crrcMvb->getBool(realport2_2,i,0));
            }
            this->crrcMvb->setBool(virtualport2,27,0,this->crrcMvb->getBool(realport2_2,27,0));
            this->crrcMvb->setBool(virtualport2,28,0,this->crrcMvb->getBool(realport2_2,28,0));
        }else
        {
            // fault byte   6 fault boolean
            this->crrcMvb->setUnsignedChar(virtualport1,1,0);
            // state byte
            // version
            this->crrcMvb->setUnsignedChar(virtualport1,12,0);
            for(int i = 0; i<11;i++)
            {
                //11 state boolean
                this->crrcMvb->setBool(virtualport2,i,0,false);
            }
            this->crrcMvb->setBool(virtualport2,27,0,0);
            this->crrcMvb->setBool(virtualport2,28,0,0);
        }

        // 门2 trust
        if (this->crrcMvb->getBool(realport1_1, 0, 6)  && true == edcu1Online)//门控器1-2有效
        {
            // fault byte   6 fault boolean
            this->crrcMvb->setUnsignedChar(virtualport1,2,this->crrcMvb->getUnsignedChar(realport1_1,2));
            // state byte
            // version
            this->crrcMvb->setUnsignedChar(virtualport1,13,this->crrcMvb->getUnsignedChar(realport1_1,13));
            for(int i = 0; i<11;i++)
            {
                //11 state boolean
                this->crrcMvb->setBool(virtualport2,i,1,this->crrcMvb->getBool(realport1_2,i,1));
            }
            this->crrcMvb->setBool(virtualport2,27,1,this->crrcMvb->getBool(realport1_2,27,1));
            this->crrcMvb->setBool(virtualport2,28,1,this->crrcMvb->getBool(realport1_2,28,1));
        }
        else if (this->crrcMvb->getBool(realport2_1, 0, 6) && true == edcu2Online)//门控器2-2有效
        {
            // fault byte   6 fault boolean
            this->crrcMvb->setUnsignedChar(virtualport1,2,this->crrcMvb->getUnsignedChar(realport2_1,2));
            // state byte
            // version
            this->crrcMvb->setUnsignedChar(virtualport1,13,this->crrcMvb->getUnsignedChar(realport2_1,13));
            for(int i = 0; i<11;i++)
            {
                //11 state boolean
                this->crrcMvb->setBool(virtualport2,i,1,this->crrcMvb->getBool(realport2_2,i,1));
            }
            this->crrcMvb->setBool(virtualport2,27,1,this->crrcMvb->getBool(realport2_2,27,1));
            this->crrcMvb->setBool(virtualport2,28,1,this->crrcMvb->getBool(realport2_2,28,1));
        }else
        {
            // fault byte   6 fault boolean
            this->crrcMvb->setUnsignedChar(virtualport1,2,0);
            // state byte
            // version
            this->crrcMvb->setUnsignedChar(virtualport1,13,0);
            for(int i = 0; i<11;i++)
            {
                //11 state boolean
                this->crrcMvb->setBool(virtualport2,i,1,false);
            }
            this->crrcMvb->setBool(virtualport2,27,1,0);
            this->crrcMvb->setBool(virtualport2,28,1,0);
        }

        // 门3 trust
        if (this->crrcMvb->getBool(realport1_1, 0, 5) && true == edcu1Online)//门控器1-3有效
        {
            // fault byte   6 fault boolean
            this->crrcMvb->setUnsignedChar(virtualport1,3,this->crrcMvb->getUnsignedChar(realport1_1,3));
            // state byte
            // version
            this->crrcMvb->setUnsignedChar(virtualport1,14,this->crrcMvb->getUnsignedChar(realport1_1,14));
            for(int i = 0; i<11;i++)
            {
                //11 state boolean
                this->crrcMvb->setBool(virtualport2,i,2,this->crrcMvb->getBool(realport1_2,i,2));
            }
            this->crrcMvb->setBool(virtualport2,27,2,this->crrcMvb->getBool(realport1_2,27,2));
            this->crrcMvb->setBool(virtualport2,28,2,this->crrcMvb->getBool(realport1_2,28,2));
        }
        else if (this->crrcMvb->getBool(realport2_1, 0, 5) && true == edcu2Online)//门控器2-3有效
        {
            // fault byte   6 fault boolean
            this->crrcMvb->setUnsignedChar(virtualport1,3,this->crrcMvb->getUnsignedChar(realport2_1,3));
            // state byte
            // version
            this->crrcMvb->setUnsignedChar(virtualport1,14,this->crrcMvb->getUnsignedChar(realport2_1,14));
            for(int i = 0; i<11;i++)
            {
                //11 state boolean
                this->crrcMvb->setBool(virtualport2,i,2,this->crrcMvb->getBool(realport2_2,i,2));
            }
            this->crrcMvb->setBool(virtualport2,27,2,this->crrcMvb->getBool(realport2_2,27,2));
            this->crrcMvb->setBool(virtualport2,28,2,this->crrcMvb->getBool(realport2_2,28,2));
        }else
        {
            // fault byte   6 fault boolean
            this->crrcMvb->setUnsignedChar(virtualport1,3,0);
            // state byte
            // version
            this->crrcMvb->setUnsignedChar(virtualport1,14,0);
            for(int i = 0; i<11;i++)
            {
                //11 state boolean
                this->crrcMvb->setBool(virtualport2,i,2,false);
            }
            this->crrcMvb->setBool(virtualport2,27,2,0);
            this->crrcMvb->setBool(virtualport2,28,2,0);
        }

        // 门4 trust
        if (this->crrcMvb->getBool(realport1_1, 0, 4) && true == edcu1Online)//门控器1-4有效
        {
            // fault byte   6 fault boolean
            this->crrcMvb->setUnsignedChar(virtualport1,4,this->crrcMvb->getUnsignedChar(realport1_1,4));
            // state byte
            // version
            this->crrcMvb->setUnsignedChar(virtualport1,15,this->crrcMvb->getUnsignedChar(realport1_1,15));
            for(int i = 0; i<11;i++)
            {
                //11 state boolean
                this->crrcMvb->setBool(virtualport2,i,3,this->crrcMvb->getBool(realport1_2,i,3));
            }
            this->crrcMvb->setBool(virtualport2,27,3,this->crrcMvb->getBool(realport1_2,27,3));
            this->crrcMvb->setBool(virtualport2,28,3,this->crrcMvb->getBool(realport1_2,28,3));
        }
        else if (this->crrcMvb->getBool(realport2_1, 0, 4) && true == edcu2Online)//门控器2-4有效
        {
            // fault byte   6 fault boolean
            this->crrcMvb->setUnsignedChar(virtualport1,4,this->crrcMvb->getUnsignedChar(realport2_1,4));
            // state byte
            // version
            this->crrcMvb->setUnsignedChar(virtualport1,15,this->crrcMvb->getUnsignedChar(realport2_1,15));
            for(int i = 0; i<11;i++)
            {
                //11 state boolean
                this->crrcMvb->setBool(virtualport2,i,3,this->crrcMvb->getBool(realport2_2,i,3));
            }
            this->crrcMvb->setBool(virtualport2,27,3,this->crrcMvb->getBool(realport2_2,27,3));
            this->crrcMvb->setBool(virtualport2,28,3,this->crrcMvb->getBool(realport2_2,28,3));
        }else
        {
            // fault byte   6 fault boolean
            this->crrcMvb->setUnsignedChar(virtualport1,4,0);
            // state byte
            // version
            this->crrcMvb->setUnsignedChar(virtualport1,15,0);
            for(int i = 0; i<11;i++)
            {
                //11 state boolean
                this->crrcMvb->setBool(virtualport2,i,3,false);
            }
            this->crrcMvb->setBool(virtualport2,27,3,0);
            this->crrcMvb->setBool(virtualport2,28,3,0);
        }

        // 门5 trust
        if (this->crrcMvb->getBool(realport1_1, 0, 3) && true == edcu1Online)//门控器1-5有效
        {
            // fault byte   6 fault boolean
            this->crrcMvb->setUnsignedChar(virtualport1,5,this->crrcMvb->getUnsignedChar(realport1_1,5));
            // state byte
            // version
            this->crrcMvb->setUnsignedChar(virtualport1,16,this->crrcMvb->getUnsignedChar(realport1_1,16));
            for(int i = 0; i<11;i++)
            {
                //11 state boolean
                this->crrcMvb->setBool(virtualport2,i,4,this->crrcMvb->getBool(realport1_2,i,4));
            }
            this->crrcMvb->setBool(virtualport2,27,4,this->crrcMvb->getBool(realport1_2,27,4));
            this->crrcMvb->setBool(virtualport2,28,4,this->crrcMvb->getBool(realport1_2,28,4));
        }
        else if (this->crrcMvb->getBool(realport2_1, 0, 3) && true == edcu2Online)//门控器2-5有效
        {
            // fault byte   6 fault boolean
            this->crrcMvb->setUnsignedChar(virtualport1,5,this->crrcMvb->getUnsignedChar(realport2_1,5));
            // state byte
            // version
            this->crrcMvb->setUnsignedChar(virtualport1,16,this->crrcMvb->getUnsignedChar(realport2_1,16));
            for(int i = 0; i<11;i++)
            {
                //11 state boolean
                this->crrcMvb->setBool(virtualport2,i,4,this->crrcMvb->getBool(realport2_2,i,4));
            }
            this->crrcMvb->setBool(virtualport2,27,4,this->crrcMvb->getBool(realport2_2,27,4));
            this->crrcMvb->setBool(virtualport2,28,4,this->crrcMvb->getBool(realport2_2,28,4));
        }else
        {
            // fault byte   6 fault boolean
            this->crrcMvb->setUnsignedChar(virtualport1,5,0);
            // state byte
            // version
            this->crrcMvb->setUnsignedChar(virtualport1,16,0);
            for(int i = 0; i<11;i++)
            {
                //11 state boolean
                this->crrcMvb->setBool(virtualport2,i,4,false);
            }
            this->crrcMvb->setBool(virtualport2,27,4,0);
            this->crrcMvb->setBool(virtualport2,28,4,0);
        }

        // 门6 trust
        if (this->crrcMvb->getBool(realport1_1, 0, 2) && true == edcu1Online)//门控器1-6有效
        {
            // fault byte   6 fault boolean
            this->crrcMvb->setUnsignedChar(virtualport1,6,this->crrcMvb->getUnsignedChar(realport1_1,6));
            // state byte
            // version
            this->crrcMvb->setUnsignedChar(virtualport1,17,this->crrcMvb->getUnsignedChar(realport1_1,17));
            for(int i = 0; i<11;i++)
            {
                //11 state boolean
                this->crrcMvb->setBool(virtualport2,i,5,this->crrcMvb->getBool(realport1_2,i,5));
            }
            this->crrcMvb->setBool(virtualport2,27,5,this->crrcMvb->getBool(realport1_2,27,5));
            this->crrcMvb->setBool(virtualport2,28,5,this->crrcMvb->getBool(realport1_2,28,5));
        }
        else if (this->crrcMvb->getBool(realport2_1, 0, 2) && true == edcu2Online)//门控器2-6有效
        {
            // fault byte   6 fault boolean
            this->crrcMvb->setUnsignedChar(virtualport1,6,this->crrcMvb->getUnsignedChar(realport2_1,6));
            // state byte
            // version
            this->crrcMvb->setUnsignedChar(virtualport1,17,this->crrcMvb->getUnsignedChar(realport2_1,17));
            for(int i = 0; i<11;i++)
            {
                //11 state boolean
                this->crrcMvb->setBool(virtualport2,i,5,this->crrcMvb->getBool(realport2_2,i,5));
            }
            this->crrcMvb->setBool(virtualport2,27,5,this->crrcMvb->getBool(realport2_2,27,5));
            this->crrcMvb->setBool(virtualport2,28,5,this->crrcMvb->getBool(realport2_2,28,5));
        }else
        {
            // fault byte   6 fault boolean
            this->crrcMvb->setUnsignedChar(virtualport1,6,0);
            // state byte
            // version
            this->crrcMvb->setUnsignedChar(virtualport1,17,0);
            for(int i = 0; i<11;i++)
            {
                //11 state boolean
                this->crrcMvb->setBool(virtualport2,i,5,false);
            }
            this->crrcMvb->setBool(virtualport2,27,5,0);
            this->crrcMvb->setBool(virtualport2,28,5,0);
        }

        // 门7 trust
        if (this->crrcMvb->getBool(realport1_1, 0, 1) && true == edcu1Online)//门控器1-7有效
        {
            // fault byte   6 fault boolean
            this->crrcMvb->setUnsignedChar(virtualport1,7,this->crrcMvb->getUnsignedChar(realport1_1,7));
            // state byte
            // version
            this->crrcMvb->setUnsignedChar(virtualport1,18,this->crrcMvb->getUnsignedChar(realport1_1,18));
            for(int i = 0; i<11;i++)
            {
                //11 state boolean
                this->crrcMvb->setBool(virtualport2,i,6,this->crrcMvb->getBool(realport1_2,i,6));
            }
            this->crrcMvb->setBool(virtualport2,27,6,this->crrcMvb->getBool(realport1_2,27,6));
            this->crrcMvb->setBool(virtualport2,28,6,this->crrcMvb->getBool(realport1_2,28,6));
        }
        else if (this->crrcMvb->getBool(realport2_1, 0, 1) && true == edcu2Online)//门控器2-7有效
        {
            // fault byte   6 fault boolean
            this->crrcMvb->setUnsignedChar(virtualport1,7,this->crrcMvb->getUnsignedChar(realport2_1,7));
            // state byte
            // version
            this->crrcMvb->setUnsignedChar(virtualport1,18,this->crrcMvb->getUnsignedChar(realport2_1,18));
            for(int i = 0; i<11;i++)
            {
                //11 state boolean
                this->crrcMvb->setBool(virtualport2,i,6,this->crrcMvb->getBool(realport2_2,i,6));
            }
            this->crrcMvb->setBool(virtualport2,27,6,this->crrcMvb->getBool(realport2_2,27,6));
            this->crrcMvb->setBool(virtualport2,28,6,this->crrcMvb->getBool(realport2_2,28,6));
        }else
        {
            // fault byte   6 fault boolean
            this->crrcMvb->setUnsignedChar(virtualport1,7,0);
            // state byte
            // version
            this->crrcMvb->setUnsignedChar(virtualport1,18,0);
            for(int i = 0; i<11;i++)
            {
                //11 state boolean
                this->crrcMvb->setBool(virtualport2,i,6,false);
            }
            this->crrcMvb->setBool(virtualport2,27,6,0);
            this->crrcMvb->setBool(virtualport2,28,6,0);
        }

        // 门8 trust
        if (this->crrcMvb->getBool(realport1_1, 0, 0) && true == edcu1Online)//门控器1-8有效
        {
            // fault byte   6 fault boolean
            this->crrcMvb->setUnsignedChar(virtualport1,8,this->crrcMvb->getUnsignedChar(realport1_1,8));
            // state byte
            // version
            this->crrcMvb->setUnsignedChar(virtualport1,19,this->crrcMvb->getUnsignedChar(realport1_1,19));
            for(int i = 0; i<11;i++)
            {
                //11 state boolean
                this->crrcMvb->setBool(virtualport2,i,7,this->crrcMvb->getBool(realport1_2,i,7));
            }
            this->crrcMvb->setBool(virtualport2,27,7,this->crrcMvb->getBool(realport1_2,27,7));
            this->crrcMvb->setBool(virtualport2,28,7,this->crrcMvb->getBool(realport1_2,28,7));
        }
        else if (this->crrcMvb->getBool(realport2_1, 0, 0) && true == edcu2Online)//门控器2-8有效
        {
            // fault byte   6 fault boolean
            this->crrcMvb->setUnsignedChar(virtualport1,8,this->crrcMvb->getUnsignedChar(realport2_1,8));
            // state byte
            // version
            this->crrcMvb->setUnsignedChar(virtualport1,19,this->crrcMvb->getUnsignedChar(realport2_1,19));
            for(int i = 0; i<11;i++)
            {
                //11 state boolean
                this->crrcMvb->setBool(virtualport2,i,7,this->crrcMvb->getBool(realport2_2,i,7));
            }
            this->crrcMvb->setBool(virtualport2,27,7,this->crrcMvb->getBool(realport2_2,27,7));
            this->crrcMvb->setBool(virtualport2,28,7,this->crrcMvb->getBool(realport2_2,28,7));
        }else
        {
            // fault byte   6 fault boolean
            this->crrcMvb->setUnsignedChar(virtualport1,8,0);
            // state byte
            // version
            this->crrcMvb->setUnsignedChar(virtualport1,19,0);
            for(int i = 0; i<11;i++)
            {
                //11 state boolean
                this->crrcMvb->setBool(virtualport2,i,7,false);
            }
            this->crrcMvb->setBool(virtualport2,27,7,0);
            this->crrcMvb->setBool(virtualport2,28,7,0);
        }
    }
}

