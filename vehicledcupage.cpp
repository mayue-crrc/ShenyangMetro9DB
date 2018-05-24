#include "vehicledcupage.h"
#include "ui_vehicledcupage.h"


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
    setlabelstates(this->ui->HSBCMP1lbl,this->database->TR1CT_HSCBClose_B1);
    setlabelstates(this->ui->HSBCMP2lbl,this->database->TR4CT_HSCBClose_B1);
    setlabelstates(this->ui->HSBCM1lbl,this->database->TR2CT_HSCBClose_B1);
    setlabelstates(this->ui->HSBCM2lbl,this->database->TR3CT_HSCBClose_B1);

    ui->VDCMP1lbl->setText(QString::number((float)this->database->TR1CT_DCVoltage_I16/10));
    ui->VDCM1lbl->setText(QString::number((float)this->database->TR2CT_DCVoltage_I16/10));
    ui->VDCM2lbl->setText(QString::number((float)this->database->TR3CT_DCVoltage_I16/10));
    ui->VDCMP2lbl->setText(QString::number((float)this->database->TR4CT_DCVoltage_I16/10));


    setlabelstates(this->ui->KMMP1lbl,this->database->TR1CT_DivContacterClose_B1);
    setlabelstates(this->ui->KMM1lbl,this->database->TR2CT_DivContacterClose_B1);
    setlabelstates(this->ui->KMM2lbl,this->database->TR3CT_DivContacterClose_B1);
    setlabelstates(this->ui->KMMP2lbl,this->database->TR4CT_DivContacterClose_B1);

    setlabelstates(this->ui->TCUIVMP1lbl,this->database->TR1CT_TractionStatus_I16);
    setlabelstates(this->ui->TCUIVM1lbl,this->database->TR2CT_TractionStatus_I16);
    setlabelstates(this->ui->TCUIVM2lbl,this->database->TR3CT_TractionStatus_I16);
    setlabelstates(this->ui->TCUIVMP2lbl,this->database->TR4CT_TractionStatus_I16);

    ui->MOTORIMP1lbl->setText(QString::number((float)this->database->TR1CT_MotorCurrent_I16/10));
    ui->MOTORIM1lbl->setText(QString::number((float)this->database->TR2CT_MotorCurrent_I16/10));
    ui->MOTORIM2lbl->setText(QString::number((float)this->database->TR3CT_MotorCurrent_I16/10));
    ui->MOTORIMP2lbl->setText(QString::number((float)this->database->TR4CT_MotorCurrent_I16/10));

    setlabelstates(this->ui->TCUEBMP1lbl,this->database->TR1CT_TBEValid_B1,(float)this->database->TR1CT_DCUMBrkForce_I16/100,2);
    setlabelstates(this->ui->TCUEBM1lbl,this->database->TR2CT_TBEValid_B1,(float)this->database->TR2CT_DCUMBrkForce_I16/100,2);
    setlabelstates(this->ui->TCUEBM2lbl,this->database->TR3CT_TBEValid_B1,(float)this->database->TR3CT_DCUMBrkForce_I16/100,2);
    setlabelstates(this->ui->TCUEBMP2lbl,this->database->TR4CT_TBEValid_B1,(float)this->database->TR4CT_DCUMBrkForce_I16/100,2);



}
void VehicleDCUPage::setlabelstates(QLabel* lbl,bool state)
{
    if(state)
    {
        lbl->setStyleSheet(LABELGREEN);
    }else
    {
        lbl->setStyleSheet(LABELGRAY);
    }
}
void VehicleDCUPage::setlabelstates(QLabel* lbl,int states)
{
    if(states >= 20)
    {
        lbl->setStyleSheet(LABELRED);
    }else if(states <= 12  &&  states>=4)
    {
        lbl->setStyleSheet(LABELGREEN);
    }else
    {
        lbl->setStyleSheet(LABELGRAY);

    }
}
void VehicleDCUPage::setlabelstates(QLabel* lbl,bool valid,float value,int per)
{
    if(!valid)
    {
        lbl->setText("--");
    }else
    {
        lbl->setText(QString::number(value,10,per));
    }
}
