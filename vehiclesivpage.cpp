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
    setlabelstates(this->ui->ACMTC1lbl,this->database->AX1CT_AuxInvStatus_I16,this->database->CTHM_ACU1On_B1,this->database->CTAX1_ShortCurcuitCheck_B1);
    setlabelstates(this->ui->ACMM1lbl,this->database->AX2CT_AuxInvStatus_I16,this->database->CTHM_ACU2On_B1,this->database->CTAX2_ShortCurcuitCheck_B1);
    setlabelstates(this->ui->ACMM2lbl,this->database->AX3CT_AuxInvStatus_I16,this->database->CTHM_ACU3On_B1,this->database->CTAX3_ShortCurcuitCheck_B1);
    setlabelstates(this->ui->ACMTC2lbl,this->database->AX4CT_AuxInvStatus_I16,this->database->CTHM_ACU4On_B1,this->database->CTAX4_ShortCurcuitCheck_B1);

    //负载电压
    setlabelstates(this->ui->LOADVTC1lbl,this->database->AX1CT_AuxInvVoltageValid_B1,(float)this->database->AX1CT_AuxInvLoadVoltage_I16/10,1,this->database->CTHM_ACU1On_B1);
    setlabelstates(this->ui->LOADVM1lbl,this->database->AX2CT_AuxInvVoltageValid_B1,(float)this->database->AX2CT_AuxInvLoadVoltage_I16/10,1,this->database->CTHM_ACU2On_B1);
    setlabelstates(this->ui->LOADVM2lbl,this->database->AX3CT_AuxInvVoltageValid_B1,(float)this->database->AX3CT_AuxInvLoadVoltage_I16/10,1,this->database->CTHM_ACU3On_B1);
    setlabelstates(this->ui->LOADVTC2lbl,this->database->AX4CT_AuxInvVoltageValid_B1,(float)this->database->AX4CT_AuxInvLoadVoltage_I16/10,1,this->database->CTHM_ACU4On_B1);

    //负载电流
    setlabelstates(this->ui->LOADATC1lbl,true,(float)this->database->AX1CT_AuxInvLoadCurrent_I16,0,this->database->CTHM_ACU1On_B1);
    setlabelstates(this->ui->LOADAM1lbl,true,(float)this->database->AX2CT_AuxInvLoadCurrent_I16,0,this->database->CTHM_ACU2On_B1);
    setlabelstates(this->ui->LOADAM2lbl,true,(float)this->database->AX3CT_AuxInvLoadCurrent_I16,0,this->database->CTHM_ACU3On_B1);
    setlabelstates(this->ui->LOADATC2lbl,true,(float)this->database->AX4CT_AuxInvLoadCurrent_I16,0,this->database->CTHM_ACU4On_B1);

    //直流电压
    setlabelstates(this->ui->DCVTC1lbl,this->database->AX1CT_DCVoltageValid_B1,(float)this->database->AX1CT_DCVoltage_I16/10,1,this->database->CTHM_ACU1On_B1);
    setlabelstates(this->ui->DCVM1lbl,this->database->AX2CT_DCVoltageValid_B1,(float)this->database->AX2CT_DCVoltage_I16/10,1,this->database->CTHM_ACU2On_B1);
    setlabelstates(this->ui->DCVM2lbl,this->database->AX3CT_DCVoltageValid_B1,(float)this->database->AX3CT_DCVoltage_I16/10,1,this->database->CTHM_ACU3On_B1);
    setlabelstates(this->ui->DCVTC2lbl,this->database->AX4CT_DCVoltageValid_B1,(float)this->database->AX4CT_DCVoltage_I16/10,1,this->database->CTHM_ACU4On_B1);

    //直流电流
    setlabelstates(this->ui->DCATC1lbl,true,(float)this->database->AX1CT_DCCurrent_I16/10,1,this->database->CTHM_ACU1On_B1);
    setlabelstates(this->ui->DCAM1lbl,true,(float)this->database->AX2CT_DCCurrent_I16/10,1,this->database->CTHM_ACU2On_B1);
    setlabelstates(this->ui->DCAM2lbl,true,(float)this->database->AX3CT_DCCurrent_I16/10,1,this->database->CTHM_ACU3On_B1);
    setlabelstates(this->ui->DCATC2lbl,true,(float)this->database->AX4CT_DCCurrent_I16/10,1,this->database->CTHM_ACU4On_B1);

    //内部、外部短路
    setlabelstates(this->ui->SCTC1lbl,this->database->CTDT_ACM1InnerSC_B1,this->database->CTDT_ACM1OuterSC_B1,this->database->CTHM_ACU1On_B1);
    setlabelstates(this->ui->SCM1lbl,this->database->CTDT_ACM2InnerSC_B1,this->database->CTDT_ACM2OuterSC_B1,this->database->CTHM_ACU2On_B1);
    setlabelstates(this->ui->SCM2lbl,this->database->CTDT_ACM3InnerSC_B1,this->database->CTDT_ACM3OuterSC_B1,this->database->CTHM_ACU3On_B1);
    setlabelstates(this->ui->SCTC2lbl,this->database->CTDT_ACM4InnerSC_B1,this->database->CTDT_ACM4OuterSC_B1,this->database->CTHM_ACU4On_B1);

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
void VehicleSIVPage::setlabelstates(QLabel* lbl,bool state,bool isonline)
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
void VehicleSIVPage::setlabelstates(QLabel* lbl,bool state1,bool state2,bool isonline)
{
    if(!isonline)
    {
        lbl->setStyleSheet(LABELWHITE);
        lbl->setText("");
    }
    else if(state1)
    {
        lbl->setText("内部短路");
        lbl->setStyleSheet(LABELRED);
    }else if(state2)
    {
        lbl->setText("外部短路");
        lbl->setStyleSheet(LABELRED);
    }else
    {
        lbl->setStyleSheet(LABELGREEN);
        lbl->setText("");
    }
}

void VehicleSIVPage::setlabelstates(QLabel* lbl,int states,bool isonline,bool selftest)
{
    if(!isonline)
    {
        lbl->setStyleSheet(LABELWHITE);
    }
    else if(states >= 20)
    {
        lbl->setStyleSheet(LABELRED);
    }else if(selftest)
    {
        lbl->setStyleSheet(LABELPINK);

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
void VehicleSIVPage::setlabelstates(QLabel* lbl,bool valid,float value,int per,bool isonline)
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

void VehicleSIVPage::on_NextPageBtn_pressed()
{
    changePage(uVehicleSIVPage2);
}
