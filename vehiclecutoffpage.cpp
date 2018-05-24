#include "vehiclecutoffpage.h"
#include "ui_vehiclecutoffpage.h"

#define VCBUTTON_UP "font: 20px, \"微软雅黑\";color: white;background-color: rgb(0, 128, 128);border-top: 2px solid white;border-left: 2px solid white;"
#define VCBUTTON_DOWN "font: 20px, \"微软雅黑\";border-top: 2px solid  rgb(0, 0, 0);border-left: 2px solid  rgb(0, 0, 0);border-bottom: 2px solid white;border-right: 2px solid white;background-color:orange"




VehicleCutoffPage::VehicleCutoffPage(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::VehicleCutoffPage)
{
    ui->setupUi(this);
}

VehicleCutoffPage::~VehicleCutoffPage()
{
    delete ui;
}
void VehicleCutoffPage::updatePage()
{


    setlabelstates(this->ui->ACMStateTC1lbl,this->database->AX1CT_AuxInvStatus_I16);
    setlabelstates(this->ui->ACMStateM1lbl,this->database->AX2CT_AuxInvStatus_I16);
    setlabelstates(this->ui->ACMStateM2lbl,this->database->AX3CT_AuxInvStatus_I16);
    setlabelstates(this->ui->ACMStateTC2lbl,this->database->AX4CT_AuxInvStatus_I16);

    setlabelstates(this->ui->EBStateMP1lbl,this->database->TR1CT_EBOK_B1);
    setlabelstates(this->ui->EBStateM1lbl,this->database->TR2CT_EBOK_B1);
    setlabelstates(this->ui->EBStateM2lbl,this->database->TR3CT_EBOK_B1);
    setlabelstates(this->ui->EBStateMP2lbl,this->database->TR4CT_EBOK_B1);

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

void VehicleCutoffPage::setlabelstates(QLabel* lbl,int states)
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

void VehicleCutoffPage::setlabelstates(QLabel* lbl,bool state,bool state2)
{
    if(state2)
    {
        lbl->setStyleSheet(LABELGRAY);
    }
    else if(state)
    {
        lbl->setStyleSheet(LABELGREEN);
    }else
    {
        lbl->setStyleSheet(LABELWHITE);
    }
}
void VehicleCutoffPage::on_returnBtn_pressed()
{
    changePage(uVehicleRunStatePage);
}


void VehicleCutoffPage::on_EBMP1Btn_pressed()
{
    if(this->database->HMiCT_Mp1DynamicBrkCut_B1)
    {
        this->ui->EBMP1Btn->setStyleSheet(VCBUTTON_UP);
        this->database->HMiCT_Mp1DynamicBrkCut_B1 = false;
    }else
    {
        this->ui->EBMP1Btn->setStyleSheet(VCBUTTON_DOWN);
        this->database->HMiCT_Mp1DynamicBrkCut_B1 = true;
    }
}

void VehicleCutoffPage::on_EBM1Btn_pressed()
{
    if(this->database->HMiCT_M1DynamicBrkCut_B1)
    {
        this->ui->EBM1Btn->setStyleSheet(VCBUTTON_UP);
        this->database->HMiCT_M1DynamicBrkCut_B1 = false;
    }else
    {
        this->ui->EBM1Btn->setStyleSheet(VCBUTTON_DOWN);
        this->database->HMiCT_M1DynamicBrkCut_B1 = true;
    }
}

void VehicleCutoffPage::on_EBM2Btn_pressed()
{
    if(this->database->HMiCT_M2DynamicBrkCut_B1)
    {
        this->ui->EBM2Btn->setStyleSheet(VCBUTTON_UP);
        this->database->HMiCT_M2DynamicBrkCut_B1 = false;
    }else
    {
        this->ui->EBM2Btn->setStyleSheet(VCBUTTON_DOWN);
        this->database->HMiCT_M2DynamicBrkCut_B1 = true;
    }
}

void VehicleCutoffPage::on_EBMP2Btn_pressed()
{
    if(this->database->HMiCT_Mp2DynamicBrkCut_B1)
    {
        this->ui->EBMP2Btn->setStyleSheet(VCBUTTON_UP);
        this->database->HMiCT_Mp2DynamicBrkCut_B1 = false;
    }else
    {
        this->ui->EBMP2Btn->setStyleSheet(VCBUTTON_DOWN);
        this->database->HMiCT_Mp2DynamicBrkCut_B1 = true;
    }
}

void VehicleCutoffPage::on_ACMCUTTC1Btn_pressed()
{
    if(this->database->HMiCT_ACU1Cutoff_B1)
    {
        this->ui->ACMCUTTC1Btn->setStyleSheet(VCBUTTON_UP);
        this->database->HMiCT_ACU1Cutoff_B1 = false;

    }else
    {
        this->ui->ACMCUTTC1Btn->setStyleSheet(VCBUTTON_DOWN);
        this->database->HMiCT_ACU1Cutoff_B1 = true;
    }

}

void VehicleCutoffPage::on_ACMCUTM1Btn_pressed()
{
    if(this->database->HMiCT_ACU2Cutoff_B1)
    {
        this->ui->ACMCUTM1Btn->setStyleSheet(VCBUTTON_UP);
        this->database->HMiCT_ACU2Cutoff_B1 = false;

    }else
    {
        this->ui->ACMCUTM1Btn->setStyleSheet(VCBUTTON_DOWN);
        this->database->HMiCT_ACU2Cutoff_B1 = true;
    }
}

void VehicleCutoffPage::on_ACMCUTM2Btn_pressed()
{
    if(this->database->HMiCT_ACU3Cutoff_B1)
    {
        this->ui->ACMCUTM2Btn->setStyleSheet(VCBUTTON_UP);
        this->database->HMiCT_ACU3Cutoff_B1 = false;

    }else
    {
        this->ui->ACMCUTM2Btn->setStyleSheet(VCBUTTON_DOWN);
        this->database->HMiCT_ACU3Cutoff_B1 = true;
    }
}

void VehicleCutoffPage::on_ACMCUTTC2Btn_pressed()
{
    if(this->database->HMiCT_ACU4Cutoff_B1)
    {
        this->ui->ACMCUTTC2Btn->setStyleSheet(VCBUTTON_UP);
        this->database->HMiCT_ACU4Cutoff_B1 = false;

    }else
    {
        this->ui->ACMCUTTC2Btn->setStyleSheet(VCBUTTON_DOWN);
        this->database->HMiCT_ACU4Cutoff_B1 = true;
    }
}

