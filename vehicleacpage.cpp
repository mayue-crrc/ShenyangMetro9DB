#include "vehicleacpage.h"
#include "ui_vehicleacpage.h"




VehicleACPage::VehicleACPage(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::VehicleACPage)
{
    ui->setupUi(this);
}

VehicleACPage::~VehicleACPage()
{
    delete ui;
}
void VehicleACPage::updatePage()
{
    //模式
    QList<bool> tmp;
    tmp<<this->database->AC1CT_HVACStopped_B1<<this->database->AC1CT_PreWork_B1<<this->database->AC1CT_MannualMode_B1<<
         this->database->AC1CT_AutoMode_B1<<this->database->AC1CT_EmVentilation_B1<<this->database->AC1CT_Ventilation_B1;
    setlabelstates(this->ui->ACModeTC1lbl,tmp);

    tmp.clear();
    tmp<<this->database->AC2CT_HVACStopped_B1<<this->database->AC2CT_PreWork_B1<<this->database->AC2CT_MannualMode_B1<<
         this->database->AC2CT_AutoMode_B1<<this->database->AC2CT_EmVentilation_B1<<this->database->AC2CT_Ventilation_B1;
    setlabelstates(this->ui->ACModeMP1lbl,tmp);

    tmp.clear();
    tmp<<this->database->AC3CT_HVACStopped_B1<<this->database->AC3CT_PreWork_B1<<this->database->AC3CT_MannualMode_B1<<
         this->database->AC3CT_AutoMode_B1<<this->database->AC3CT_EmVentilation_B1<<this->database->AC3CT_Ventilation_B1;
    setlabelstates(this->ui->ACModeM1lbl,tmp);

    tmp.clear();
    tmp<<this->database->AC4CT_HVACStopped_B1<<this->database->AC4CT_PreWork_B1<<this->database->AC4CT_MannualMode_B1<<
         this->database->AC4CT_AutoMode_B1<<this->database->AC4CT_EmVentilation_B1<<this->database->AC4CT_Ventilation_B1;
    setlabelstates(this->ui->ACModeM2lbl,tmp);

    tmp.clear();
    tmp<<this->database->AC5CT_HVACStopped_B1<<this->database->AC5CT_PreWork_B1<<this->database->AC5CT_MannualMode_B1<<
         this->database->AC5CT_AutoMode_B1<<this->database->AC5CT_EmVentilation_B1<<this->database->AC5CT_Ventilation_B1;
    setlabelstates(this->ui->ACModeMP2lbl,tmp);

    tmp.clear();
    tmp<<this->database->AC6CT_HVACStopped_B1<<this->database->AC6CT_PreWork_B1<<this->database->AC6CT_MannualMode_B1<<
         this->database->AC6CT_AutoMode_B1<<this->database->AC6CT_EmVentilation_B1<<this->database->AC6CT_Ventilation_B1;
    setlabelstates(this->ui->ACModeTC2lbl,tmp);
    tmp.clear();

    //减载
    setlabelstates(this->ui->ACReduceTC1lbl,this->database->AC1CT_LodeDecFinished_B1);
    setlabelstates(this->ui->ACReduceMP1lbl,this->database->AC2CT_LodeDecFinished_B1);
    setlabelstates(this->ui->ACReduceM1lbl,this->database->AC3CT_LodeDecFinished_B1);
    setlabelstates(this->ui->ACReduceM2lbl,this->database->AC4CT_LodeDecFinished_B1);
    setlabelstates(this->ui->ACReduceMP2lbl,this->database->AC5CT_LodeDecFinished_B1);
    setlabelstates(this->ui->ACReduceTC2lbl,this->database->AC6CT_LodeDecFinished_B1);

    //控制模式
    setlabelctrl(this->ui->ACControlTC1lbl,this->database->AC1CT_NetCtrlMode_B1,this->database->AC1CT_LocalCtrlMode_B1);
    setlabelctrl(this->ui->ACControlMP1lbl,this->database->AC2CT_NetCtrlMode_B1,this->database->AC2CT_LocalCtrlMode_B1);
    setlabelctrl(this->ui->ACControlM1lbl,this->database->AC3CT_NetCtrlMode_B1,this->database->AC3CT_LocalCtrlMode_B1);
    setlabelctrl(this->ui->ACControlM2lbl,this->database->AC4CT_NetCtrlMode_B1,this->database->AC4CT_LocalCtrlMode_B1);
    setlabelctrl(this->ui->ACControlMP2lbl,this->database->AC5CT_NetCtrlMode_B1,this->database->AC5CT_LocalCtrlMode_B1);
    setlabelctrl(this->ui->ACControlTC2lbl,this->database->AC6CT_NetCtrlMode_B1,this->database->AC6CT_LocalCtrlMode_B1);

    //当前温度
    this->ui->TempTC1lbl->setText(QString::number(this->database->AC1CT_ReturnAirTemp_U8-30));
    this->ui->TempMP1lbl->setText(QString::number(this->database->AC2CT_ReturnAirTemp_U8-30));
    this->ui->TempM1lbl->setText(QString::number(this->database->AC3CT_ReturnAirTemp_U8-30));
    this->ui->TempM2lbl->setText(QString::number(this->database->AC4CT_ReturnAirTemp_U8-30));
    this->ui->TempMP2lbl->setText(QString::number(this->database->AC5CT_ReturnAirTemp_U8-30));
    this->ui->TempTC2lbl->setText(QString::number(this->database->AC6CT_ReturnAirTemp_U8-30));


    //压缩机
    setlabelstates(this->ui->YSJ1TC1_1lbl,this->database->AC1CT_Unit1Compressor1Fault_B1,this->database->AC1CT_Unit1Compressor1On_B1);
    setlabelstates(this->ui->YSJ1TC1_2lbl,this->database->AC1CT_Unit1Compressor2Fault_B1,this->database->AC1CT_Unit1Compressor2On_B1);
    setlabelstates(this->ui->YSJ1MP1_1lbl,this->database->AC2CT_Unit1Compressor1Fault_B1,this->database->AC2CT_Unit1Compressor1On_B1);
    setlabelstates(this->ui->YSJ1MP1_2lbl,this->database->AC2CT_Unit1Compressor2Fault_B1,this->database->AC2CT_Unit1Compressor2On_B1);
    setlabelstates(this->ui->YSJ1M1_1lbl,this->database->AC3CT_Unit1Compressor1Fault_B1,this->database->AC3CT_Unit1Compressor1On_B1);
    setlabelstates(this->ui->YSJ1M1_2lbl,this->database->AC3CT_Unit1Compressor2Fault_B1,this->database->AC3CT_Unit1Compressor2On_B1);
    setlabelstates(this->ui->YSJ1M2_1lbl,this->database->AC4CT_Unit1Compressor1Fault_B1,this->database->AC4CT_Unit1Compressor1On_B1);
    setlabelstates(this->ui->YSJ1M2_2lbl,this->database->AC4CT_Unit1Compressor2Fault_B1,this->database->AC4CT_Unit1Compressor2On_B1);
    setlabelstates(this->ui->YSJ1MP2_1lbl,this->database->AC5CT_Unit1Compressor1Fault_B1,this->database->AC5CT_Unit1Compressor1On_B1);
    setlabelstates(this->ui->YSJ1MP2_2lbl,this->database->AC5CT_Unit1Compressor2Fault_B1,this->database->AC5CT_Unit1Compressor2On_B1);
    setlabelstates(this->ui->YSJ1TC2_1lbl,this->database->AC6CT_Unit1Compressor1Fault_B1,this->database->AC6CT_Unit1Compressor1On_B1);
    setlabelstates(this->ui->YSJ1TC2_2lbl,this->database->AC6CT_Unit1Compressor2Fault_B1,this->database->AC6CT_Unit1Compressor2On_B1);

    setlabelstates(this->ui->YSJ2TC1_1lbl,this->database->AC1CT_Unit2Compressor1Fault_B1,this->database->AC1CT_Unit2Compressor1On_B1);
    setlabelstates(this->ui->YSJ2TC1_2lbl,this->database->AC1CT_Unit2Compressor2Fault_B1,this->database->AC1CT_Unit2Compressor2On_B1);
    setlabelstates(this->ui->YSJ2MP1_1lbl,this->database->AC2CT_Unit2Compressor1Fault_B1,this->database->AC2CT_Unit2Compressor1On_B1);
    setlabelstates(this->ui->YSJ2MP1_2lbl,this->database->AC2CT_Unit2Compressor2Fault_B1,this->database->AC2CT_Unit2Compressor2On_B1);
    setlabelstates(this->ui->YSJ2M1_1lbl,this->database->AC3CT_Unit2Compressor1Fault_B1,this->database->AC3CT_Unit2Compressor1On_B1);
    setlabelstates(this->ui->YSJ2M1_2lbl,this->database->AC3CT_Unit2Compressor2Fault_B1,this->database->AC3CT_Unit2Compressor2On_B1);
    setlabelstates(this->ui->YSJ2M2_1lbl,this->database->AC4CT_Unit2Compressor1Fault_B1,this->database->AC4CT_Unit2Compressor1On_B1);
    setlabelstates(this->ui->YSJ2M2_2lbl,this->database->AC4CT_Unit2Compressor2Fault_B1,this->database->AC4CT_Unit2Compressor2On_B1);
    setlabelstates(this->ui->YSJ2MP2_1lbl,this->database->AC5CT_Unit2Compressor1Fault_B1,this->database->AC5CT_Unit2Compressor1On_B1);
    setlabelstates(this->ui->YSJ2MP2_2lbl,this->database->AC5CT_Unit2Compressor2Fault_B1,this->database->AC5CT_Unit2Compressor2On_B1);
    setlabelstates(this->ui->YSJ2TC2_1lbl,this->database->AC6CT_Unit2Compressor1Fault_B1,this->database->AC6CT_Unit2Compressor1On_B1);
    setlabelstates(this->ui->YSJ2TC2_2lbl,this->database->AC6CT_Unit2Compressor2Fault_B1,this->database->AC6CT_Unit2Compressor2On_B1);
    //通风机
    setlabelstates(this->ui->TFJ1TC1_1lbl,this->database->AC1CT_Unit1Ventilator1Fault_B1,this->database->AC1CT_Unit1Ventilator1On_B1);
    setlabelstates(this->ui->TFJ1TC1_2lbl,this->database->AC1CT_Unit1Ventilator2Fault_B1,this->database->AC1CT_Unit1Ventilator2On_B1);
    setlabelstates(this->ui->TFJ1MP1_1lbl,this->database->AC2CT_Unit1Ventilator1Fault_B1,this->database->AC2CT_Unit1Ventilator1On_B1);
    setlabelstates(this->ui->TFJ1MP1_2lbl,this->database->AC2CT_Unit1Ventilator2Fault_B1,this->database->AC2CT_Unit1Ventilator2On_B1);
    setlabelstates(this->ui->TFJ1M1_1lbl,this->database->AC3CT_Unit1Ventilator1Fault_B1,this->database->AC3CT_Unit1Ventilator1On_B1);
    setlabelstates(this->ui->TFJ1M1_2lbl,this->database->AC3CT_Unit1Ventilator2Fault_B1,this->database->AC3CT_Unit1Ventilator2On_B1);
    setlabelstates(this->ui->TFJ1M2_1lbl,this->database->AC4CT_Unit1Ventilator1Fault_B1,this->database->AC4CT_Unit1Ventilator1On_B1);
    setlabelstates(this->ui->TFJ1M2_2lbl,this->database->AC4CT_Unit1Ventilator2Fault_B1,this->database->AC4CT_Unit1Ventilator2On_B1);
    setlabelstates(this->ui->TFJ1MP2_1lbl,this->database->AC5CT_Unit1Ventilator1Fault_B1,this->database->AC5CT_Unit1Ventilator1On_B1);
    setlabelstates(this->ui->TFJ1MP2_2lbl,this->database->AC5CT_Unit1Ventilator2Fault_B1,this->database->AC5CT_Unit1Ventilator2On_B1);
    setlabelstates(this->ui->TFJ1TC2_1lbl,this->database->AC6CT_Unit1Ventilator1Fault_B1,this->database->AC6CT_Unit1Ventilator1On_B1);
    setlabelstates(this->ui->TFJ1TC2_2lbl,this->database->AC6CT_Unit1Ventilator2Fault_B1,this->database->AC6CT_Unit1Ventilator2On_B1);

    setlabelstates(this->ui->TFJ2TC1_1lbl,this->database->AC1CT_Unit2Ventilator1Fault_B1,this->database->AC1CT_Unit2Ventilator1On_B1);
    setlabelstates(this->ui->TFJ2TC1_2lbl,this->database->AC1CT_Unit2Ventilator2Fault_B1,this->database->AC1CT_Unit2Ventilator2On_B1);
    setlabelstates(this->ui->TFJ2MP1_1lbl,this->database->AC2CT_Unit2Ventilator1Fault_B1,this->database->AC2CT_Unit2Ventilator1On_B1);
    setlabelstates(this->ui->TFJ2MP1_2lbl,this->database->AC2CT_Unit2Ventilator2Fault_B1,this->database->AC2CT_Unit2Ventilator2On_B1);
    setlabelstates(this->ui->TFJ2M1_1lbl,this->database->AC3CT_Unit2Ventilator1Fault_B1,this->database->AC3CT_Unit2Ventilator1On_B1);
    setlabelstates(this->ui->TFJ2M1_2lbl,this->database->AC3CT_Unit2Ventilator2Fault_B1,this->database->AC3CT_Unit2Ventilator2On_B1);
    setlabelstates(this->ui->TFJ2M2_1lbl,this->database->AC4CT_Unit2Ventilator1Fault_B1,this->database->AC4CT_Unit2Ventilator1On_B1);
    setlabelstates(this->ui->TFJ2M2_2lbl,this->database->AC4CT_Unit2Ventilator2Fault_B1,this->database->AC4CT_Unit2Ventilator2On_B1);
    setlabelstates(this->ui->TFJ2MP2_1lbl,this->database->AC5CT_Unit2Ventilator1Fault_B1,this->database->AC5CT_Unit2Ventilator1On_B1);
    setlabelstates(this->ui->TFJ2MP2_2lbl,this->database->AC5CT_Unit2Ventilator2Fault_B1,this->database->AC5CT_Unit2Ventilator2On_B1);
    setlabelstates(this->ui->TFJ2TC2_1lbl,this->database->AC6CT_Unit2Ventilator1Fault_B1,this->database->AC6CT_Unit2Ventilator1On_B1);
    setlabelstates(this->ui->TFJ2TC2_2lbl,this->database->AC6CT_Unit2Ventilator2Fault_B1,this->database->AC6CT_Unit2Ventilator2On_B1);
    //冷凝风机
    setlabelstates(this->ui->LNFJ1TC1_1lbl,this->database->AC1CT_Unit1Condenser1Fault_B1,this->database->AC1CT_Unit1Condenser1On_B1);
    setlabelstates(this->ui->LNFJ1TC1_2lbl,this->database->AC1CT_Unit1Condenser2Fault_B1,this->database->AC1CT_Unit1Condenser2On_B1);
    setlabelstates(this->ui->LNFJ1MP1_1lbl,this->database->AC2CT_Unit1Condenser1Fault_B1,this->database->AC2CT_Unit1Condenser1On_B1);
    setlabelstates(this->ui->LNFJ1MP1_2lbl,this->database->AC2CT_Unit1Condenser2Fault_B1,this->database->AC2CT_Unit1Condenser2On_B1);
    setlabelstates(this->ui->LNFJ1M1_1lbl,this->database->AC3CT_Unit1Condenser1Fault_B1,this->database->AC3CT_Unit1Condenser1On_B1);
    setlabelstates(this->ui->LNFJ1M1_2lbl,this->database->AC3CT_Unit1Condenser2Fault_B1,this->database->AC3CT_Unit1Condenser2On_B1);
    setlabelstates(this->ui->LNFJ1M2_1lbl,this->database->AC4CT_Unit1Condenser1Fault_B1,this->database->AC4CT_Unit1Condenser1On_B1);
    setlabelstates(this->ui->LNFJ1M2_2lbl,this->database->AC4CT_Unit1Condenser2Fault_B1,this->database->AC4CT_Unit1Condenser2On_B1);
    setlabelstates(this->ui->LNFJ1MP2_1lbl,this->database->AC5CT_Unit1Condenser1Fault_B1,this->database->AC5CT_Unit1Condenser1On_B1);
    setlabelstates(this->ui->LNFJ1MP2_2lbl,this->database->AC5CT_Unit1Condenser2Fault_B1,this->database->AC5CT_Unit1Condenser2On_B1);
    setlabelstates(this->ui->LNFJ1TC2_1lbl,this->database->AC6CT_Unit1Condenser1Fault_B1,this->database->AC6CT_Unit1Condenser1On_B1);
    setlabelstates(this->ui->LNFJ1TC2_2lbl,this->database->AC6CT_Unit1Condenser2Fault_B1,this->database->AC6CT_Unit1Condenser2On_B1);

    setlabelstates(this->ui->LNFJ2TC1_1lbl,this->database->AC1CT_Unit2Condenser1Fault_B1,this->database->AC1CT_Unit2Condenser1On_B1);
    setlabelstates(this->ui->LNFJ2TC1_2lbl,this->database->AC1CT_Unit2Condenser2Fault_B1,this->database->AC1CT_Unit2Condenser2On_B1);
    setlabelstates(this->ui->LNFJ2MP1_1lbl,this->database->AC2CT_Unit2Condenser1Fault_B1,this->database->AC2CT_Unit2Condenser1On_B1);
    setlabelstates(this->ui->LNFJ2MP1_2lbl,this->database->AC2CT_Unit2Condenser2Fault_B1,this->database->AC2CT_Unit2Condenser2On_B1);
    setlabelstates(this->ui->LNFJ2M1_1lbl,this->database->AC3CT_Unit2Condenser1Fault_B1,this->database->AC3CT_Unit2Condenser1On_B1);
    setlabelstates(this->ui->LNFJ2M1_2lbl,this->database->AC3CT_Unit2Condenser2Fault_B1,this->database->AC3CT_Unit2Condenser2On_B1);
    setlabelstates(this->ui->LNFJ2M2_1lbl,this->database->AC4CT_Unit2Condenser1Fault_B1,this->database->AC4CT_Unit2Condenser1On_B1);
    setlabelstates(this->ui->LNFJ2M2_2lbl,this->database->AC4CT_Unit2Condenser2Fault_B1,this->database->AC4CT_Unit2Condenser2On_B1);
    setlabelstates(this->ui->LNFJ2MP2_1lbl,this->database->AC5CT_Unit2Condenser1Fault_B1,this->database->AC5CT_Unit2Condenser1On_B1);
    setlabelstates(this->ui->LNFJ2MP2_2lbl,this->database->AC5CT_Unit2Condenser2Fault_B1,this->database->AC5CT_Unit2Condenser2On_B1);
    setlabelstates(this->ui->LNFJ2TC2_1lbl,this->database->AC6CT_Unit2Condenser1Fault_B1,this->database->AC6CT_Unit2Condenser1On_B1);
    setlabelstates(this->ui->LNFJ2TC2_2lbl,this->database->AC6CT_Unit2Condenser2Fault_B1,this->database->AC6CT_Unit2Condenser2On_B1);
}

void VehicleACPage::on_NextPageBtn_pressed()
{
    changePage(uVehicleACPage2);
}
void VehicleACPage::setlabelstates(QLabel* lbl,QList<bool> states)
{
    if(states.size() != 6)
    {
        _LOG << "HVAC mode states size error!";
        return;
    }
    // stop>prework>mannual>auto>emven>ven
    if(states.at(0))
    {
        lbl->setText("停机");
    }else if(states.at(1))
    {
        lbl->setText("预冷/预暖");
    }else if(states.at(2))
    {
        lbl->setText("手动");
    }else if(states.at(3))
    {
        lbl->setText("自动");
    }else if(states.at(4))
    {
        lbl->setText("紧急通风");
    }else if(states.at(5))
    {
        lbl->setText("通风");
    }else
    {
        lbl->setText("--");
    }
}
//states1 err  states2 state
void VehicleACPage::setlabelstates(QLabel* lbl,bool states1,bool states2)
{
    if(states1)
    {
        lbl->setStyleSheet(LABELRED);
    }else if(states2)
    {
        lbl->setStyleSheet(LABELGREEN);
    }else
    {
        lbl->setStyleSheet(LABELGRAY);
    }
}
void VehicleACPage::setlabelstates(QLabel* lbl,bool states)
{
    if(states)
    {
        lbl->setStyleSheet(LABELGREEN);
    }else
    {
        lbl->setStyleSheet(LABELGRAY);
    }
}

void VehicleACPage::setlabelctrl(QLabel* lbl,bool net,bool local)
{
    if(net)
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
        lbl->setStyleSheet(LABELGRAY);

    }
}
