#include "vehicleresetpage.h"
#include "ui_vehicleresetpage.h"

#define VCBUTTON_UP "font: 20px, \"微软雅黑\";color: white;background-color: rgb(0, 128, 128);border-top: 2px solid white;border-left: 2px solid white;"
#define VCBUTTON_DOWN "font: 20px, \"微软雅黑\";border-top: 2px solid  rgb(0, 0, 0);border-left: 2px solid  rgb(0, 0, 0);border-bottom: 2px solid white;border-right: 2px solid white;background-color:orange"


VehicleResetPage::VehicleResetPage(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::VehicleResetPage)
{
    ui->setupUi(this);
    DCU2sTimer[0] = DCU2sTimer[1] = DCU2sTimer[2] = DCU2sTimer[3] = 0;
    ACM2sTimer[0] = ACM2sTimer[1] = ACM2sTimer[2] = ACM2sTimer[3] = 0;
}

VehicleResetPage::~VehicleResetPage()
{
    delete ui;
}
void VehicleResetPage::updatePage()
{
    // acm reset 2s
    if(this->database->HMiCT_ACU1Reset_B1)
    {
        if(ACM2sTimer[0]++>6)
        {
            ACM2sTimer[0] = 0;
            this->ui->ACMRESETTC1Btn->setDisabled(false);
            this->ui->ACMRESETTC1Btn->setStyleSheet(VCBUTTON_UP);
            this->database->HMiCT_ACU1Reset_B1 = false;


        }
    }
    if(this->database->HMiCT_ACU2Reset_B1)
    {
        if(ACM2sTimer[1]++>6)
        {
            ACM2sTimer[1] = 0;
            this->ui->ACMRESETM1Btn->setDisabled(false);
            this->ui->ACMRESETM1Btn->setStyleSheet(VCBUTTON_UP);
            this->database->HMiCT_ACU2Reset_B1 = false;

        }
    }
    if(this->database->HMiCT_ACU3Reset_B1)
    {
        if(ACM2sTimer[2]++>6)
        {
            ACM2sTimer[2] = 0;
            this->ui->ACMRESETM2Btn->setDisabled(false);
            this->ui->ACMRESETM2Btn->setStyleSheet(VCBUTTON_UP);
            this->database->HMiCT_ACU3Reset_B1 = false;

        }
    }
    if(this->database->HMiCT_ACU4Reset_B1)
    {
        if(ACM2sTimer[3]++>6)
        {
            ACM2sTimer[3] = 0;
            this->ui->ACMRESETTC2Btn->setDisabled(false);
            this->ui->ACMRESETTC2Btn->setStyleSheet(VCBUTTON_UP);
            this->database->HMiCT_ACU4Reset_B1 = false;

        }
    }

    //vvvf fault reset 2s
    if(this->database->HMiCT_Mp1DCUFaultReset_B1)
    {
        if(DCU2sTimer[0]++>6)
        {
            DCU2sTimer[0] = 0;
            this->ui->VVVFMP1Btn->setDisabled(false);
            this->ui->VVVFMP1Btn->setStyleSheet(VCBUTTON_UP);
            this->database->HMiCT_Mp1DCUFaultReset_B1 = false;
        }
    }
    if(this->database->HMiCT_M1DCUFaultReset_B1)
    {
        if(DCU2sTimer[1]++>6)
        {
            DCU2sTimer[1] = 0;
            this->ui->VVVFM1Btn->setDisabled(false);
            this->ui->VVVFM1Btn->setStyleSheet(VCBUTTON_UP);
            this->database->HMiCT_M1DCUFaultReset_B1 = false;
        }
    }
    if(this->database->HMiCT_M2DCUFaultReset_B1)
    {
        if(DCU2sTimer[2]++>6)
        {
            DCU2sTimer[2] = 0;
            this->ui->VVVFM2Btn->setDisabled(false);
            this->ui->VVVFM2Btn->setStyleSheet(VCBUTTON_UP);
            this->database->HMiCT_M2DCUFaultReset_B1 = false;
        }
    }
    if(this->database->HMiCT_Mp2DCUFaultReset_B1)
    {
        if(DCU2sTimer[3]++>6)
        {
            DCU2sTimer[3] = 0;
            this->ui->VVVFMP2Btn->setDisabled(false);
            this->ui->VVVFMP2Btn->setStyleSheet(VCBUTTON_UP);
            this->database->HMiCT_Mp2DCUFaultReset_B1 = false;
        }
    }

    setlabelstates(this->ui->EBStateMP1lbl,this->database->TR1CT_TractionStatus_I16);
    setlabelstates(this->ui->EBStateM1lbl,this->database->TR2CT_TractionStatus_I16);
    setlabelstates(this->ui->EBStateM2lbl,this->database->TR3CT_TractionStatus_I16);
    setlabelstates(this->ui->EBStateMP2lbl,this->database->TR4CT_TractionStatus_I16);


    setlabelstates(this->ui->ACMStateTC1lbl,this->database->AX1CT_AuxInvStatus_I16);
    setlabelstates(this->ui->ACMStateM1lbl,this->database->AX2CT_AuxInvStatus_I16);
    setlabelstates(this->ui->ACMStateM2lbl,this->database->AX3CT_AuxInvStatus_I16);
    setlabelstates(this->ui->ACMStateTC2lbl,this->database->AX4CT_AuxInvStatus_I16);


    if(this->database->CTHM_Forward_B1)
    {
        this->ui->DirectTC1lbl->show();
        this->ui->DirectTC2lbl->hide();
    }else if(this->database->CTHM_Backward_B1)
    {
        this->ui->DirectTC2lbl->show();
        this->ui->DirectTC1lbl->hide();
    }else
    {
        this->ui->DirectTC1lbl->hide();
        this->ui->DirectTC2lbl->hide();
    }

    //钥匙激活
    if(this->database->CTHM_TC1Active_B1)
    {
        this->ui->CabTC1lbl->setStyleSheet(KEYACTIVETC1);
    }else
    {
        this->ui->CabTC1lbl->setStyleSheet(KEYNOACTIVETC1);
    }

    if(this->database->CTHM_TC2Active_B1)
    {
        this->ui->CabTC2lbl->setStyleSheet(KEYACTIVETC2);
    }else
    {
        this->ui->CabTC2lbl->setStyleSheet(KEYNOACTIVETC2);
    }
    QString tmp;
    tmp.sprintf("%02d",this->database->CTHM_TrainNum_U8);
    this->ui->TrainNumTC1lbl->setText("09"+tmp+"1");
    this->ui->TrainNumMP1lbl->setText("09"+tmp+"2");
    this->ui->TrainNumM1lbl->setText("09"+tmp+"3");
    this->ui->TrainNumM2lbl->setText("09"+tmp+"4");
    this->ui->TrainNumMP2lbl->setText("09"+tmp+"5");
    this->ui->TrainNumTC2lbl->setText("09"+tmp+"6");
}
void VehicleResetPage::on_returnBtn_pressed()
{
    changePage(uVehicleRunStatePage);
}


void VehicleResetPage::on_ACMRESETTC1Btn_pressed()
{
    this->database->HMiCT_ACU1Reset_B1 = true;
    this->ui->ACMRESETTC1Btn->setStyleSheet(VCBUTTON_DOWN);
    this->ui->ACMRESETTC1Btn->setDisabled(true);
    this->database->HMiCT_ACU1Cutoff_B1 = false;
}

void VehicleResetPage::on_ACMRESETM1Btn_pressed()
{
    this->database->HMiCT_ACU2Reset_B1 = true;
    this->ui->ACMRESETM1Btn->setStyleSheet(VCBUTTON_DOWN);
    this->ui->ACMRESETM1Btn->setDisabled(true);
    this->database->HMiCT_ACU2Cutoff_B1 = false;
}

void VehicleResetPage::on_ACMRESETM2Btn_pressed()
{
    this->database->HMiCT_ACU3Reset_B1 = true;
    this->ui->ACMRESETM2Btn->setStyleSheet(VCBUTTON_DOWN);
    this->ui->ACMRESETM2Btn->setDisabled(true);
    this->database->HMiCT_ACU3Cutoff_B1 = false;
}

void VehicleResetPage::on_ACMRESETTC2Btn_pressed()
{
    this->database->HMiCT_ACU4Reset_B1 = true;
    this->ui->ACMRESETTC2Btn->setStyleSheet(VCBUTTON_DOWN);
    this->ui->ACMRESETTC2Btn->setDisabled(true);
    this->database->HMiCT_ACU4Cutoff_B1 = false;
}


void VehicleResetPage::on_VVVFMP1Btn_pressed()
{
    this->database->HMiCT_Mp1DCUFaultReset_B1 = true;
    this->ui->VVVFMP1Btn->setStyleSheet(VCBUTTON_DOWN);
    this->ui->VVVFMP1Btn->setDisabled(true);
}

void VehicleResetPage::on_VVVFM1Btn_pressed()
{
    this->database->HMiCT_M1DCUFaultReset_B1 = true;
    this->ui->VVVFM1Btn->setStyleSheet(VCBUTTON_DOWN);
    this->ui->VVVFM1Btn->setDisabled(true);
}

void VehicleResetPage::on_VVVFM2Btn_pressed()
{
    this->database->HMiCT_M2DCUFaultReset_B1 = true;
    this->ui->VVVFM2Btn->setStyleSheet(VCBUTTON_DOWN);
    this->ui->VVVFM2Btn->setDisabled(true);
}

void VehicleResetPage::on_VVVFMP2Btn_pressed()
{
    this->database->HMiCT_Mp2DCUFaultReset_B1 = true;
    this->ui->VVVFMP2Btn->setStyleSheet(VCBUTTON_DOWN);
    this->ui->VVVFMP2Btn->setDisabled(true);
}

void VehicleResetPage::setlabelstates(QLabel* lbl,int states)
{
    if(states >= 20)
    {
        lbl->setStyleSheet(LABELRED);
    }else if(states <= 12  &&  states>=4)
    {
        lbl->setStyleSheet(LABELGREEN);
    }else
    {
        lbl->setStyleSheet(LABELWHITE);
    }
}
