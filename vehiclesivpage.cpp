#include "vehiclesivpage.h"
#include "ui_vehiclesivpage.h"


VehicleSIVPage::VehicleSIVPage(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::VehicleSIVPage)
{
    ui->setupUi(this);
}

VehicleSIVPage::~VehicleSIVPage()
{
    delete ui;
}
void VehicleSIVPage::updatePage()
{
    //ACM 状态
    setlabelstates(this->ui->ACMTC1lbl,this->database->AX1CT_AuxInvStatus_I16);
    setlabelstates(this->ui->ACMM1lbl,this->database->AX2CT_AuxInvStatus_I16);
    setlabelstates(this->ui->ACMM2lbl,this->database->AX3CT_AuxInvStatus_I16);
    setlabelstates(this->ui->ACMTC2lbl,this->database->AX4CT_AuxInvStatus_I16);

    //负载电压
    setlabelstates(this->ui->LOADVTC1lbl,this->database->AX1CT_AuxInvVoltageValid_B1,(float)this->database->AX1CT_AuxInvLoadVoltage_I16/10,1);
    setlabelstates(this->ui->LOADVM1lbl,this->database->AX2CT_AuxInvVoltageValid_B1,(float)this->database->AX2CT_AuxInvLoadVoltage_I16/10,1);
    setlabelstates(this->ui->LOADVM2lbl,this->database->AX3CT_AuxInvVoltageValid_B1,(float)this->database->AX3CT_AuxInvLoadVoltage_I16/10,1);
    setlabelstates(this->ui->LOADVTC2lbl,this->database->AX4CT_AuxInvVoltageValid_B1,(float)this->database->AX4CT_AuxInvLoadVoltage_I16/10,1);

    //负载电流
    this->ui->LOADATC1lbl->setText(QString::number(this->database->AX1CT_AuxInvLoadCurrent_I16));
    this->ui->LOADAM1lbl->setText(QString::number(this->database->AX2CT_AuxInvLoadCurrent_I16));
    this->ui->LOADAM2lbl->setText(QString::number(this->database->AX3CT_AuxInvLoadCurrent_I16));
    this->ui->LOADATC2lbl->setText(QString::number(this->database->AX4CT_AuxInvLoadCurrent_I16));

    //直流电压
    setlabelstates(this->ui->DCVTC1lbl,this->database->AX1CT_DCVoltageValid_B1,(float)this->database->AX1CT_DCVoltage_I16/10,1);
    setlabelstates(this->ui->DCVM1lbl,this->database->AX2CT_DCVoltageValid_B1,(float)this->database->AX2CT_DCVoltage_I16/10,1);
    setlabelstates(this->ui->DCVM2lbl,this->database->AX3CT_DCVoltageValid_B1,(float)this->database->AX3CT_DCVoltage_I16/10,1);
    setlabelstates(this->ui->DCVTC2lbl,this->database->AX4CT_DCVoltageValid_B1,(float)this->database->AX4CT_DCVoltage_I16/10,1);

    //直流电流
    this->ui->DCATC1lbl->setText(QString::number((float)this->database->AX1CT_DCCurrent_I16/10,10,1));
    this->ui->DCAM1lbl->setText(QString::number((float)this->database->AX2CT_DCCurrent_I16/10,10,1));
    this->ui->DCAM2lbl->setText(QString::number((float)this->database->AX3CT_DCCurrent_I16/10,10,1));
    this->ui->DCATC2lbl->setText(QString::number((float)this->database->AX4CT_DCCurrent_I16/10,10,1));

    //蓄电池温度
    setlabelstates(this->ui->BCTTC1lbl,this->database->AX1CT_BatteryTempValid_B1,(float)this->database->AX1CT_BatteryTemp_I16/100,2);
    setlabelstates(this->ui->BCTTC2lbl,this->database->AX4CT_BatteryTempValid_B1,(float)this->database->AX4CT_BatteryTemp_I16/100,2);

    //接触器
    //if(this->database->AX1CT_ACMLineActived_B1)
    if(this->database->DICT_M1DI1CH16LineContacterClosed_B1)
    {
        this->ui->ACMKMlbl->setStyleSheet("border-image: url(:/images/images/ACMKMclose.bmp);");
    }else
    {
        this->ui->ACMKMlbl->setStyleSheet("border-image: url(:/images/images/ACMKMopen.bmp);");
    }

}
void VehicleSIVPage::setlabelstates(QLabel* lbl,bool state)
{
    if(state)
    {
        lbl->setStyleSheet(LABELGREEN);
    }else
    {
        lbl->setStyleSheet(LABELGRAY);
    }
}
void VehicleSIVPage::setlabelstates(QLabel* lbl,int states)
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
void VehicleSIVPage::setlabelstates(QLabel* lbl,bool valid,float value,int per)
{
    if(!valid)
    {
        lbl->setText("--");
    }else
    {
        lbl->setText(QString::number(value,10,per));
    }
}
