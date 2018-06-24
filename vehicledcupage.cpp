#include "vehicledcupage.h"
#include "ui_vehicledcupage.h"

#define PANTODOWNMP1  "border-image: url(:/images/images/PantoDownMP1.bmp);"
#define PANTODOWNMP2  "border-image: url(:/images/images/PantoDownMP2.bmp);"
#define PANTOUPMP1  "border-image: url(:/images/images/PantoUpMP1.bmp);"
#define PANTOUPMP2  "border-image: url(:/images/images/PantoUpMP2.bmp);"

VehicleDCUPage::VehicleDCUPage(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::VehicleDCUPage)
{
    ui->setupUi(this);
}

VehicleDCUPage::~VehicleDCUPage()
{
    delete ui;
}
void VehicleDCUPage::updatePage()
{
    setlabelstates(this->ui->HSBCMP1lbl,this->database->TR1CT_HSCBClose_B1,this->database->CTHM_DCUM1On_B1);
    setlabelstates(this->ui->HSBCM1lbl,this->database->TR2CT_HSCBClose_B1,this->database->CTHM_DCUM2On_B1);
    setlabelstates(this->ui->HSBCM2lbl,this->database->TR3CT_HSCBClose_B1,this->database->CTHM_DCUM3On_B1);
    setlabelstates(this->ui->HSBCMP2lbl,this->database->TR4CT_HSCBClose_B1,this->database->CTHM_DCUM4On_B1);

    setlabelstates(this->ui->VDCMP1lbl,true,(float)this->database->TR1CT_DCVoltage_I16/10,1,this->database->CTHM_DCUM1On_B1);
    setlabelstates(this->ui->VDCM1lbl,true,(float)this->database->TR2CT_DCVoltage_I16/10,1,this->database->CTHM_DCUM2On_B1);
    setlabelstates(this->ui->VDCM2lbl,true,(float)this->database->TR3CT_DCVoltage_I16/10,1,this->database->CTHM_DCUM3On_B1);
    setlabelstates(this->ui->VDCMP2lbl,true,(float)this->database->TR4CT_DCVoltage_I16/10,1,this->database->CTHM_DCUM4On_B1);

    setlabelstates(this->ui->KMMP1lbl,this->database->TR1CT_DivContacterClose_B1,this->database->CTHM_DCUM1On_B1);
    setlabelstates(this->ui->KMM1lbl,this->database->TR2CT_DivContacterClose_B1,this->database->CTHM_DCUM2On_B1);
    setlabelstates(this->ui->KMM2lbl,this->database->TR3CT_DivContacterClose_B1,this->database->CTHM_DCUM3On_B1);
    setlabelstates(this->ui->KMMP2lbl,this->database->TR4CT_DivContacterClose_B1,this->database->CTHM_DCUM4On_B1);

    setlabelstates(this->ui->TCUIVMP1lbl,this->database->TR1CT_TractionStatus_I16,this->database->CTHM_DCUM1On_B1);
    setlabelstates(this->ui->TCUIVM1lbl,this->database->TR2CT_TractionStatus_I16,this->database->CTHM_DCUM2On_B1);
    setlabelstates(this->ui->TCUIVM2lbl,this->database->TR3CT_TractionStatus_I16,this->database->CTHM_DCUM3On_B1);
    setlabelstates(this->ui->TCUIVMP2lbl,this->database->TR4CT_TractionStatus_I16,this->database->CTHM_DCUM4On_B1);

    setlabelstates(this->ui->MOTORIMP1lbl,true,(float)this->database->TR1CT_MotorCurrent_I16/10,1,this->database->CTHM_DCUM1On_B1);
    setlabelstates(this->ui->MOTORIM1lbl,true,(float)this->database->TR2CT_MotorCurrent_I16/10,1,this->database->CTHM_DCUM2On_B1);
    setlabelstates(this->ui->MOTORIM2lbl,true,(float)this->database->TR3CT_MotorCurrent_I16/10,1,this->database->CTHM_DCUM3On_B1);
    setlabelstates(this->ui->MOTORIMP2lbl,true,(float)this->database->TR4CT_MotorCurrent_I16/10,1,this->database->CTHM_DCUM4On_B1);

    setlabelstates(this->ui->TCUEBMP1lbl,this->database->TR1CT_TBEValid_B1,(float)this->database->TR1CT_DCUMBrkForce_I16/100,2,this->database->CTHM_DCUM1On_B1);
    setlabelstates(this->ui->TCUEBM1lbl,this->database->TR2CT_TBEValid_B1,(float)this->database->TR2CT_DCUMBrkForce_I16/100,2,this->database->CTHM_DCUM2On_B1);
    setlabelstates(this->ui->TCUEBM2lbl,this->database->TR3CT_TBEValid_B1,(float)this->database->TR3CT_DCUMBrkForce_I16/100,2,this->database->CTHM_DCUM3On_B1);
    setlabelstates(this->ui->TCUEBMP2lbl,this->database->TR4CT_TBEValid_B1,(float)this->database->TR4CT_DCUMBrkForce_I16/100,2,this->database->CTHM_DCUM4On_B1);

    if(this->database->CTDT_Mp1ADDLowPanto_B1)
    {
        this->ui->PANTOMP1_1lbl->setStyleSheet(PANTODOWNMP1);
    }else
    {
        this->ui->PANTOMP1_1lbl->setStyleSheet(PANTOUPMP1);
    }


    if(this->database->CTDT_Mp2ADDLowPanto_B1)
    {
        this->ui->PANTOMP2_1lbl->setStyleSheet(PANTODOWNMP2);
    }else
    {
        this->ui->PANTOMP2_1lbl->setStyleSheet(PANTOUPMP2);
    }
}
void VehicleDCUPage::setlabelstates(QLabel* lbl,bool state,bool isonline)
{
    if(!isonline)
    {
        lbl->setStyleSheet(LABELWHITE);
    }
    else if(state)
    {
        lbl->setStyleSheet(LABELGREEN);
    }else
    {
        lbl->setStyleSheet(LABELGRAY);
    }
}
void VehicleDCUPage::setlabelstates(QLabel* lbl,int states,bool isonline)
{
    if(!isonline)
    {
        lbl->setStyleSheet(LABELWHITE);
    }
    else if(states >= 20)
    {
        lbl->setStyleSheet(LABELRED);
    }
    else if(states == 9)
    {
        lbl->setStyleSheet(LABELGREEN);

    }else if(states <= 12  &&  states>=4)
    {
        lbl->setStyleSheet(LABELGRAY);
    }else
    {
        lbl->setStyleSheet(LABELWHITE);
    }
}
void VehicleDCUPage::setlabelstates(QLabel* lbl,bool valid,float value,int per,bool isonline)
{
    if(!isonline)
    {
        lbl->setText("--");
        lbl->setStyleSheet(LABELWHITE);
    }
    else if(!valid)
    {
        lbl->setText("--");
        lbl->setStyleSheet(LABELBLUE);
    }else
    {
        lbl->setText(QString::number(value,10,per));
        lbl->setStyleSheet(LABELBLUE);
    }
}
