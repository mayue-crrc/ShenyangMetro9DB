#include "vehicleacpage2.h"
#include "ui_vehicleacpage2.h"

#define HVACMODEAUTO    "	font: 16px, \"微软雅黑\";color:white;background-color:green;border:1px solid black"
#define HVACMODEMANNAL    "     font: 16px, \"微软雅黑\";color:white;background-color:rgb(0,80,180);border:1px solid black"
#define HVACMODEVEN    "        font: 16px, \"微软雅黑\";color:white;background-color:rgb(243,81,180);border:1px solid black"
#define HVACMODEEMVEN    "	font: 16px, \"微软雅黑\";color:white;background-color:orange;border:1px solid black"
#define HVACMODESTOP    "	font: 16px, \"微软雅黑\";color:white;background-color:black;border:1px solid white"
#define HVACMODEUNKNOWN    "	font: 16px, \"微软雅黑\";color:black;background-color:white;border:1px solid black"
#define HVACMODEFIRE    "	font: 16px, \"微软雅黑\";color:white;background-color:red;border:1px solid black"
#define HVACMODEPRE    "	font: 16px, \"微软雅黑\";black:white;background-color:lightblue;border:1px solid black"



VehicleACPage2::VehicleACPage2(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::VehicleACPage2)
{
    ui->setupUi(this);
    SelectButtons<<ui->SelectALLBtn<<ui->SelectTC1Btn<<ui->SelectMP1Btn<<ui->SelectM1Btn<<ui->SelectM2Btn<<ui->SelectMP2Btn<<ui->SelectTC2Btn;
//    ModeButtons<<ui->ModeStopPreworkBtn<<ui->ModeEmVenBtn<<ui->ModeAutoColdBtn<<ui->ModeMannulBtn<<ui->ModeVenBtn
//            <<ui->ModeUICBtn<<ui->UICM2Btn<<ui->UICM1Btn<<ui->UICP1Btn<<ui->UICP2Btn;
    ModeButtons<<ui->ModeAutoColdBtn<<ui->ModeMannulBtn<<ui->ModeVenBtn<<ui->ModeStopBtn<<ui->ModeFireBtn;
    foreach (QPushButton *button, SelectButtons)
    {
        connect(button, SIGNAL(clicked()), this, SLOT(onSelectClkEvent()));
        button->setStyleSheet(PButtonDOWN);
    }

    foreach (QPushButton *button, ModeButtons)
    {
        connect(button, SIGNAL(clicked()), this, SLOT(onModeClkEvent()));
    }
    ui->ModeStopPreworkBtn->hide();
    ui->ModeEmVenBtn->hide();
    ui->ModeUICBtn->hide();
    ui->UICM2Btn->hide();
    ui->UICM1Btn->hide();
    ui->UICP1Btn->hide();
    ui->UICP2Btn->hide();
    ui->ModeStartBtn->hide();

    m_confirmclick = false;
}

VehicleACPage2::~VehicleACPage2()
{
    delete ui;
}
void setboolflg(bool states[7], int index)
{
    for(int i = 0; i < 7 ; i++)
    {
        states[i] = false;
        if(i == index)
        {
            states[i] = true;
        }
    }
}
void VehicleACPage2::updatePage()
{
    //模式
    QList<bool> tmp;
    tmp<<this->database->AC1CT_HVACStopped_B1<<this->database->AC1CT_PreWork_B1<<this->database->AC1CT_MannualMode_B1<<
         this->database->AC1CT_AutoMode_B1<<this->database->AC1CT_EmVentilation_B1<<this->database->AC1CT_Ventilation_B1<<this->database->AC1CT_OutsideFire_B1
        <<this->database->CTHM_HVAC1On_B1;
    setlabelstates(this->ui->ACModeTC1lbl,tmp);

    tmp.clear();
    tmp<<this->database->AC2CT_HVACStopped_B1<<this->database->AC2CT_PreWork_B1<<this->database->AC2CT_MannualMode_B1<<
         this->database->AC2CT_AutoMode_B1<<this->database->AC2CT_EmVentilation_B1<<this->database->AC2CT_Ventilation_B1<<this->database->AC2CT_OutsideFire_B1
         <<this->database->CTHM_HVAC2On_B1;
    setlabelstates(this->ui->ACModeMP1lbl,tmp);

    tmp.clear();
    tmp<<this->database->AC3CT_HVACStopped_B1<<this->database->AC3CT_PreWork_B1<<this->database->AC3CT_MannualMode_B1<<
         this->database->AC3CT_AutoMode_B1<<this->database->AC3CT_EmVentilation_B1<<this->database->AC3CT_Ventilation_B1<<this->database->AC3CT_OutsideFire_B1
         <<this->database->CTHM_HVAC3On_B1;
    setlabelstates(this->ui->ACModeM1lbl,tmp);

    tmp.clear();
    tmp<<this->database->AC4CT_HVACStopped_B1<<this->database->AC4CT_PreWork_B1<<this->database->AC4CT_MannualMode_B1<<
         this->database->AC4CT_AutoMode_B1<<this->database->AC4CT_EmVentilation_B1<<this->database->AC4CT_Ventilation_B1<<this->database->AC4CT_OutsideFire_B1
         <<this->database->CTHM_HVAC4On_B1;
    setlabelstates(this->ui->ACModeM2lbl,tmp);

    tmp.clear();
    tmp<<this->database->AC5CT_HVACStopped_B1<<this->database->AC5CT_PreWork_B1<<this->database->AC5CT_MannualMode_B1<<
         this->database->AC5CT_AutoMode_B1<<this->database->AC5CT_EmVentilation_B1<<this->database->AC5CT_Ventilation_B1<<this->database->AC5CT_OutsideFire_B1
         <<this->database->CTHM_HVAC5On_B1;
    setlabelstates(this->ui->ACModeMP2lbl,tmp);

    tmp.clear();
    tmp<<this->database->AC6CT_HVACStopped_B1<<this->database->AC6CT_PreWork_B1<<this->database->AC6CT_MannualMode_B1<<
         this->database->AC6CT_AutoMode_B1<<this->database->AC6CT_EmVentilation_B1<<this->database->AC6CT_Ventilation_B1<<this->database->AC6CT_OutsideFire_B1
         <<this->database->CTHM_HVAC6On_B1;
    setlabelstates(this->ui->ACModeTC2lbl,tmp);
    tmp.clear();

    //减载
    setlabelstates(this->ui->ACReduceTC1lbl,this->database->AC1CT_LodeDecFinished_B1,this->database->CTHM_HVAC1On_B1);
    setlabelstates(this->ui->ACReduceMP1lbl,this->database->AC2CT_LodeDecFinished_B1,this->database->CTHM_HVAC2On_B1);
    setlabelstates(this->ui->ACReduceM1lbl,this->database->AC3CT_LodeDecFinished_B1,this->database->CTHM_HVAC3On_B1);
    setlabelstates(this->ui->ACReduceM2lbl,this->database->AC4CT_LodeDecFinished_B1,this->database->CTHM_HVAC4On_B1);
    setlabelstates(this->ui->ACReduceMP2lbl,this->database->AC5CT_LodeDecFinished_B1,this->database->CTHM_HVAC5On_B1);
    setlabelstates(this->ui->ACReduceTC2lbl,this->database->AC6CT_LodeDecFinished_B1,this->database->CTHM_HVAC6On_B1);

    //控制模式
    setlabelctrl(this->ui->ACControlTC1lbl,this->database->AC1CT_NetCtrlMode_B1,this->database->AC1CT_LocalCtrlMode_B1,this->database->CTHM_HVAC1On_B1);
    setlabelctrl(this->ui->ACControlMP1lbl,this->database->AC2CT_NetCtrlMode_B1,this->database->AC2CT_LocalCtrlMode_B1,this->database->CTHM_HVAC2On_B1);
    setlabelctrl(this->ui->ACControlM1lbl,this->database->AC3CT_NetCtrlMode_B1,this->database->AC3CT_LocalCtrlMode_B1,this->database->CTHM_HVAC3On_B1);
    setlabelctrl(this->ui->ACControlM2lbl,this->database->AC4CT_NetCtrlMode_B1,this->database->AC4CT_LocalCtrlMode_B1,this->database->CTHM_HVAC4On_B1);
    setlabelctrl(this->ui->ACControlMP2lbl,this->database->AC5CT_NetCtrlMode_B1,this->database->AC5CT_LocalCtrlMode_B1,this->database->CTHM_HVAC5On_B1);
    setlabelctrl(this->ui->ACControlTC2lbl,this->database->AC6CT_NetCtrlMode_B1,this->database->AC6CT_LocalCtrlMode_B1,this->database->CTHM_HVAC6On_B1);

    //当前温度
    setlabelvalue(this->ui->TempTC1lbl,this->database->AC1CT_ReturnAirTemp_U8-30,this->database->CTHM_HVAC1On_B1);
    setlabelvalue(this->ui->TempMP1lbl,this->database->AC2CT_ReturnAirTemp_U8-30,this->database->CTHM_HVAC2On_B1);
    setlabelvalue(this->ui->TempM1lbl,this->database->AC3CT_ReturnAirTemp_U8-30,this->database->CTHM_HVAC3On_B1);
    setlabelvalue(this->ui->TempM2lbl,this->database->AC4CT_ReturnAirTemp_U8-30,this->database->CTHM_HVAC4On_B1);
    setlabelvalue(this->ui->TempMP2lbl,this->database->AC5CT_ReturnAirTemp_U8-30,this->database->CTHM_HVAC5On_B1);
    setlabelvalue(this->ui->TempTC2lbl,this->database->AC6CT_ReturnAirTemp_U8-30,this->database->CTHM_HVAC6On_B1);

    //设定温度
    setlabelvalue(this->ui->SettingTempTC1lbl,this->database->AC1CT_TargetTemp_U8,this->database->CTHM_HVAC1On_B1);
    setlabelvalue(this->ui->SettingTempMP1lbl,this->database->AC2CT_TargetTemp_U8,this->database->CTHM_HVAC2On_B1);
    setlabelvalue(this->ui->SettingTempM1lbl,this->database->AC3CT_TargetTemp_U8,this->database->CTHM_HVAC3On_B1);
    setlabelvalue(this->ui->SettingTempM2lbl,this->database->AC4CT_TargetTemp_U8,this->database->CTHM_HVAC4On_B1);
    setlabelvalue(this->ui->SettingTempMP2lbl,this->database->AC5CT_TargetTemp_U8,this->database->CTHM_HVAC5On_B1);
    setlabelvalue(this->ui->SettingTempTC2lbl,this->database->AC6CT_TargetTemp_U8,this->database->CTHM_HVAC6On_B1);

    this->ui->SettingTemplbl->setText(QString::number(this->database->HMiCT_SetTemp_U8)+"℃");

    if(this->database->HMiCT_HVACMannualMode_B1)
    {
        this->ui->Tempplus1Btn->setDisabled(false);
        this->ui->Tempminus1Btn->setDisabled(false);
    }else
    {
        this->ui->Tempplus1Btn->setDisabled(true);
        this->ui->Tempminus1Btn->setDisabled(true);
    }
    // confirm btn press, 3s delay
    static int timer3s = 0;
    if(this->database->HMiCT_SAVEHVACMode1_B1)
    {
        if(timer3s++>9)
        {
            timer3s = 0;
            this->ui->ConfirmBtn->setStyleSheet(PButtonUP);
            foreach (QPushButton *button, SelectButtons)
            {
                button->setDisabled(false);
            }

            foreach (QPushButton *button, ModeButtons)
            {
                button->setDisabled(false);
            }
            this->ui->Tempplus1Btn->setDisabled(false);
            this->ui->Tempminus1Btn->setDisabled(false);
            this->database->HMiCT_SAVEHVACMode1_B1 = false;
            this->database->HMiCT_SAVEHVACTemp1_B1 = false;
            this->database->HMiCT_SetFlagChecker_U8 = 0x55;

        }
    }

//    static int timer3sstart = 0;
//    if(this->database->HMiCT_SAVEHVACMode1_B1)
//    {
//        if(timer3sstart++>6)
//        {
//            foreach (QPushButton *button, SelectButtons)
//            {
//                button->setDisabled(false);
//            }
//            timer3sstart = 0;
//            this->database->HMiCT_HVACStart_B1 = false;
//            this->ui->ModeStartBtn->setStyleSheet(PButtonUP);
//        }
//    }

//    static int timer3sstop = 0;
//    if(this->database->HMiCT_HVACStop_B1)
//    {
//        if(timer3sstop++>6)
//        {
//            foreach (QPushButton *button, SelectButtons)
//            {
//                button->setDisabled(false);
//            }
//            timer3sstop = 0;
//            this->database->HMiCT_HVACStop_B1 = false;
//            this->ui->ModeStopBtn->setStyleSheet(PButtonUP);
//        }
//    }
}

void VehicleACPage2::on_NextPageBtn_pressed()
{
    changePage(uVehicleACPage);
}
void VehicleACPage2::onSelectClkEvent()
{

    TrainBtnName = ((QPushButton *)this->sender())->text();
    if(TrainBtnName == "全列")
    {
        for(int i = 0; i < SelectButtons.size();i++)
        {
           SelectButtons[i]->setStyleSheet(PButtonDOWN);
        }
        this->database->HMiCT_SAVEHVACPosition_U8 = 7;
    }else
    {

        for(int i = 0; i < SelectButtons.size();i++)
        {
           SelectButtons[i]->setStyleSheet(PButtonUP);
        }
        this->database->HMiCT_SAVEHVACPosition_U8 = ((QPushButton *)this->sender())->text().toInt();

        ((QPushButton *)this->sender())->setStyleSheet(PButtonDOWN);
    }

}

void VehicleACPage2::onModeClkEvent()
{

    this->database->HMiCT_HVACFireMode_B1=this->database->HMiCT_HVACPreOff_B1=this->database->HMiCT_HVACEmgcyVenti_B1
    =this->database->HMiCT_HVACAutoCold_B1=this->database->HMiCT_HVACAutoWarm_B1=this->database->HMiCT_HVACVenti_B1
    =this->database->HMiCT_HVACMannualMode_B1=this->database->HMiCT_Reduce2_B1=this->database->HMiCT_Reduce1_B1=this->database->HMiCT_Add1_B1
    =this->database->HMiCT_Add2_B1=this->database->HMiCT_UICMode_B1 = this->database->HMiCT_HVACStop_B1 = false;

    BtnName = ((QPushButton *)this->sender())->text();

    if(BtnName == "自动")
    {
        this->database->HMiCT_HVACAutoCold_B1 = true;
    }
/*    }else if(BtnName == "-2k")
    {
        this->database->HMiCT_Reduce2_B1 = true;
    }else if(BtnName == "-1k")
    {
        this->database->HMiCT_Reduce1_B1 = true;
    }else if(BtnName == "+1k")
    {
        this->database->HMiCT_Add1_B1 = true;
    }else if(BtnName == "+2k")
    {
        this->database->HMiCT_Add2_B1 = true;
    }else if(BtnName == "UIC")
    {
        this->database->HMiCT_UICMode_B1 = true;
    }*/else if(BtnName == "手动")
    {
        this->database->HMiCT_HVACMannualMode_B1 = true;
    }else if(BtnName == "通风")
    {
        this->database->HMiCT_HVACVenti_B1 = true;
    }else if(BtnName == "停机")
    {
        this->database->HMiCT_HVACStop_B1 = true;
    }/*else if(BtnName == "关闭预冷/暖")
    {
        this->database->HMiCT_HVACPreOff_B1 = true;
    }*/else if(BtnName == "紧急通风")
    {
        this->database->HMiCT_HVACEmgcyVenti_B1 = true;
    }else if(BtnName == "室外火灾")
    {
        this->database->HMiCT_HVACFireMode_B1 = true;
    }

    for(int i = 0; i < ModeButtons.size();i++)
    {
       ModeButtons[i]->setStyleSheet(PButtonUP);
    }
    ((QPushButton *)this->sender())->setStyleSheet(PButtonDOWN);


}
void VehicleACPage2::setlabelstates(QLabel* lbl,QList<bool> states)
{
    if(states.size() != 8)
    {
        _LOG << "HVAC mode states size error!";
        return;
    }
    // off line>>fire>>stop>prework>mannual>auto>emven>ven
    if(states.at(7))
    {
        lbl->setText("--");
        lbl->setStyleSheet(HVACMODEUNKNOWN);
    }
    else if(states.at(4))
    {
        lbl->setStyleSheet(HVACMODEEMVEN);
        lbl->setText("紧急通风");}
    if(states.at(6))
    {
        lbl->setText("火灾");
        lbl->setStyleSheet(HVACMODEFIRE);
    }
    else if(states.at(0))
    {
        lbl->setText("停机");
        lbl->setStyleSheet(HVACMODESTOP);

    }else if(states.at(3))
    {
        lbl->setStyleSheet(HVACMODEAUTO);
        lbl->setText("自动");
    }else if(states.at(1))
    {
        lbl->setStyleSheet(HVACMODEPRE);
        lbl->setText("预冷/预暖");
    }else if(states.at(2))
    {
        lbl->setStyleSheet(HVACMODEMANNAL);
        lbl->setText("手动");

    }else if(states.at(5))
    {
        lbl->setStyleSheet(HVACMODEVEN);
        lbl->setText("通风");
    }
    else
    {
        lbl->setStyleSheet(HVACMODEUNKNOWN);
        lbl->setText("--");
    }
}
void VehicleACPage2::setlabelstates(QLabel* lbl,bool states,bool isonline)
{
    if(!isonline)
    {
        lbl->setStyleSheet(LABELWHITE);
    }else if(states)
    {
        lbl->setStyleSheet("font: 20px, \"微软雅黑\";background-color:gray;border:1px solid black");
    }else
    {
        lbl->setStyleSheet("font: 20px, \"微软雅黑\";background-color:black;border:1px solid white");
    }
}

void VehicleACPage2::setlabelctrl(QLabel* lbl,bool net,bool local,bool isonline)
{
    if(!isonline)
    {
        lbl->setText("--");
        lbl->setStyleSheet(LABELWHITE);
    }else if(net)
    {
        lbl->setText("集控");
        lbl->setStyleSheet(LABELGREEN);
    }else if(local)
    {
        lbl->setText("本控");
        lbl->setStyleSheet(LABELORANGE);
    }else
    {
        lbl->setText("--");
        lbl->setStyleSheet(LABELWHITE);

    }
}


void VehicleACPage2::on_Tempminus1Btn_pressed()
{
    if(this->database->HMiCT_SetTemp_U8>12)
    this->database->HMiCT_SetTemp_U8--;
}

void VehicleACPage2::on_Tempplus1Btn_pressed()
{
    if(this->database->HMiCT_SetTemp_U8<28)
    this->database->HMiCT_SetTemp_U8++;

}

void VehicleACPage2::on_ConfirmBtn_pressed()
{
    this->ui->ConfirmBtn->setStyleSheet(PButtonDOWN);

    foreach (QPushButton *button, SelectButtons)
    {
        button->setDisabled(true);
    }
    this->ui->Tempminus1Btn->setDisabled(true);
    foreach (QPushButton *button, ModeButtons)
    {
        button->setDisabled(true);
    }
    this->ui->Tempplus1Btn->setDisabled(true);
    this->database->HMiCT_SAVEHVACMode1_B1 = true;

    if(this->database->HMiCT_HVACMannualMode_B1)
    this->database->HMiCT_SAVEHVACTemp1_B1 = true;

    if(this->database->HMiCT_HVACMannualMode_B1)
    {
        logger()->info("设置"+ TrainBtnName +"车空调运行模式: "+BtnName+", 设定温度: "+ QString::number(this->database->HMiCT_SetTemp_U8));
    }else
    {
        logger()->info("设置"+ TrainBtnName +"车空调运行模式: "+BtnName);
    }
    this->database->HMiCT_SetFlagChecker_U8 = 0xaa;

}

void VehicleACPage2::setlabelvalue(QLabel* lbl,signed char value,bool isonline)
{
    if(!isonline)
    {
        lbl->setText("--");
        lbl->setStyleSheet(LABELWHITE);
    }else
    {
        lbl->setText(QString::number(value));
        lbl->setStyleSheet(LABELBLUE);
    }
}
