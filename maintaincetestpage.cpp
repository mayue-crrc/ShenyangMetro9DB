#include "maintaincetestpage.h"
#include "ui_maintaincetestpage.h"

MaintainceTestPage::MaintainceTestPage(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::MaintainceTestPage)
{
    ui->setupUi(this);
}

MaintainceTestPage::~MaintainceTestPage()
{
    delete ui;
}

void MaintainceTestPage::updatePage()
{
    this->ui->MTempMP1lbl->setText(QString::number((float)(this->database->TR1CT_Motor1Temp_I16+
                                                   this->database->TR1CT_Motor2Temp_I16+
                                                   this->database->TR1CT_Motor3Temp_I16+
                                                   this->database->TR1CT_Motor4Temp_I16)/400,10,2)+"℃");
    this->ui->MTempM1lbl->setText(QString::number((float)(this->database->TR2CT_Motor1Temp_I16+
                                                   this->database->TR2CT_Motor2Temp_I16+
                                                   this->database->TR2CT_Motor3Temp_I16+
                                                   this->database->TR2CT_Motor4Temp_I16)/400,10,2)+"℃");
    this->ui->MTempM2lbl->setText(QString::number((float)(this->database->TR3CT_Motor1Temp_I16+
                                                   this->database->TR3CT_Motor2Temp_I16+
                                                   this->database->TR3CT_Motor3Temp_I16+
                                                   this->database->TR3CT_Motor4Temp_I16)/400,10,2)+"℃");
    this->ui->MTempMP2lbl->setText(QString::number((float)(this->database->TR4CT_Motor1Temp_I16+
                                                   this->database->TR4CT_Motor2Temp_I16+
                                                   this->database->TR4CT_Motor3Temp_I16+
                                                   this->database->TR4CT_Motor4Temp_I16)/400,10,2)+"℃");
    //BC压力 取架1压力值
    setlabelstates(ui->BCPTC11lbl,this->database->BR1CT_TC1Bg1BrkAirPresureValid_B1,this->database->BR1CT_TC1Bg1BCP1Pressure_U16);
    setlabelstates(ui->BCPTC12lbl,this->database->BR1CT_TC1Bg2BrkAirPresureValid_B1,this->database->BR1CT_TC1Bg2BCP1Pressure_U16);
    setlabelstates(ui->BCPTC21lbl,this->database->BR2CT_TC2Bg1BrkAirPresureValid_B1,this->database->BR2CT_TC2Bg1BCP1Pressure_U16);
    setlabelstates(ui->BCPTC22lbl,this->database->BR2CT_TC2Bg2BrkAirPresureValid_B1,this->database->BR2CT_TC2Bg2BCP1Pressure_U16);
    setlabelstates(ui->BCPMP11lbl,this->database->BR1CT_MP1Bg1BrkAirPresureValid_B1,this->database->BR1CT_MP1Bg1BCP1Pressure_U16);
    setlabelstates(ui->BCPMP12lbl,this->database->BR1CT_MP1Bg2BrkAirPresureValid_B1,this->database->BR1CT_MP1Bg2BCP1Pressure_U16);
    setlabelstates(ui->BCPMP21lbl,this->database->BR2CT_MP2Bg1BrkAirPresureValid_B1,this->database->BR2CT_MP2Bg1BCP1Pressure_U16);
    setlabelstates(ui->BCPMP22lbl,this->database->BR2CT_MP2Bg2BrkAirPresureValid_B1,this->database->BR2CT_MP2Bg2BCP1Pressure_U16);
    setlabelstates(ui->BCPM11lbl,this->database->BR1CT_M1Bg1BrkAirPresureValid_B1,this->database->BR1CT_M1Bg1BCP1Pressure_U16);
    setlabelstates(ui->BCPM12lbl,this->database->BR1CT_M1Bg2BrkAirPresureValid_B1,this->database->BR1CT_M1Bg2BCP1Pressure_U16);
    setlabelstates(ui->BCPM21lbl,this->database->BR2CT_M2Bg1BrkAirPresureValid_B1,this->database->BR2CT_M2Bg1BCP1Pressure_U16);
    setlabelstates(ui->BCPM22lbl,this->database->BR2CT_M2Bg2BrkAirPresureValid_B1,this->database->BR2CT_M2Bg2BCP1Pressure_U16);

    this->ui->Speedlbl->setText(QString::number((float)this->database->CTHM_TrainSpeed_U16/10,10,1));
    this->ui->ASpeedlbl->setText(QString::number((float)this->database->CTHM_Acceleration_I16/100,10,2));
    this->ui->levellbl->setText(QString::number(this->database->CTHM_Grade_U8));
    this->ui->A40Speedlbl->setText(QString::number((float)this->database->CTHM_Acceleration40_I16/100,10,2));
    this->ui->A80Speedlbl->setText(QString::number((float)this->database->CTHM_Acceleration80_I16/100,10,2));
    this->ui->InitSpeedlbl->setText(QString::number((float)this->database->CTHM_AcDeStartVelocity_U16/100,10,2));
    this->ui->AveSpeedlbl->setText(QString::number((float)this->database->CTHM_Deceleration_I16/100,10,2));
    this->ui->BrakeDistancelbl->setText(QString::number(this->database->CTHM_AcDeDistance_U16));
    this->ui->Braketimelbl->setText(QString::number(this->database->CTHM_AcDeTime_U16));

    if(this->database->CTHM_AcDeTestOn_B1)
    {
        this->ui->Teststatuslbl->setText("测试进行中");
        this->ui->Teststatuslbl->setStyleSheet("background-color:green;color:black;");
    }else
    {
        this->ui->Teststatuslbl->setText("测试未进行");
        this->ui->Teststatuslbl->setStyleSheet("background-color:yellow;color:black;");
    }

    static int startdelay2s = 0;
    if(this->database->HMiCT_ACDETestStartFlag_B1 == true)
    {
        if(startdelay2s++>6)
        {
            startdelay2s = 0;
            this->database->HMiCT_ACDETestStartFlag_B1 = false;
            this->ui->StartTestBtn->setStyleSheet(PButtonUP);
        }
    }
    else
    {
        startdelay2s = 0;
    }
    static int stopdelay2s = 0;
    if(this->database->HMiCT_ACDETestStopFlag_B1 == true)
    {
        if(stopdelay2s++>6)
        {
            stopdelay2s = 0;
            this->database->HMiCT_ACDETestStopFlag_B1 = false;
            this->ui->StopTestBtn->setStyleSheet(PButtonUP);
        }
    }
    else
    {
        stopdelay2s = 0;
    }
}

void MaintainceTestPage::on_returnBtn_pressed()
{
    changePage(uVehicleRunStatePage);
}
void MaintainceTestPage::setlabelstates(QLabel* lbl,bool valid,int value)
{
    if(!valid)
    {
        lbl->setText("--");
    }else
    {
        lbl->setText(QString::number((float)value/100,10,2));
    }

}

void MaintainceTestPage::on_StartTestBtn_pressed()
{
    this->database->HMiCT_ACDETestStartFlag_B1 = true;
    this->ui->StartTestBtn->setStyleSheet(PButtonDOWN);
}

void MaintainceTestPage::on_StopTestBtn_pressed()
{
    this->database->HMiCT_ACDETestStopFlag_B1 = true;
    this->ui->StopTestBtn->setStyleSheet(PButtonDOWN);

}
