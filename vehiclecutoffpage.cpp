#include "vehiclecutoffpage.h"
#include "ui_vehiclecutoffpage.h"

#define VCBUTTON_UP "font: 20px, \"微软雅黑\";color: white;background-color: rgb(0, 128, 128);border-top: 2px solid white;border-left: 2px solid white;"
#define VCBUTTON_DOWN "font: 20px, \"微软雅黑\";border-top: 2px solid  rgb(0, 0, 0);border-left: 2px solid  rgb(0, 0, 0);border-bottom: 2px solid white;border-right: 2px solid white;background-color:orange"

#define VBUTTON_HMICOMMONDSEND "font: 20px, \"微软雅黑\";color: white;background-color: orange;border:2px solid white"
#define VBUTTON_HMICOMMONDNORMAL "font: 20px, \"微软雅黑\";color: white;background-color: rgb(255,255,153);border:2px solid white"
#define VPBUTTON_SELECT "font: 24px, \"微软雅黑\";color: white;background-color: orange;border-top: 2px solid  rgb(0, 0, 0);border-left: 2px solid  rgb(0, 0, 0);border-bottom: 2px solid white;border-right: 2px solid white;"
#define VPBUTTON_NOTSELECT "font: 24px, \"微软雅黑\";color: black;background-color: rgb(255,255,153);border-top: 2px solid  rgb(0, 0, 0);border-left: 2px solid  rgb(0, 0, 0);border-bottom: 2px solid white;border-right: 2px solid white;"



VehicleCutoffPage::VehicleCutoffPage(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::VehicleCutoffPage)
{
    ui->setupUi(this);

    buttons<<ui->Train1Btn<<ui->Train2Btn<<ui->Train3Btn<<ui->Train4Btn<<ui->Train5Btn<<ui->Train6Btn;

    foreach (QPushButton *button, buttons)
    {
        connect(button, SIGNAL(clicked()), this, SLOT(ButtonsPressEvent()));
    }
    for(int i = 0; i < 6 ;i++)
    {
        Buttonstatus[i] = false;
    }

    //m_pispoweroff=m_pispoweron=m_doorpoweroff=m_doorpoweron=false;


}

VehicleCutoffPage::~VehicleCutoffPage()
{
    delete ui;
}
void VehicleCutoffPage::updatePage()
{


    setlabelstates(this->ui->ACMStateTC1lbl,this->database->AX1CT_AuxInvStatus_I16,this->database->AX1CT_AuxInvCutFeedback_B1,this->database->CTHM_ACU1On_B1);
    setlabelstates(this->ui->ACMStateM1lbl,this->database->AX2CT_AuxInvStatus_I16,this->database->AX2CT_AuxInvCutFeedback_B1,this->database->CTHM_ACU2On_B1);
    setlabelstates(this->ui->ACMStateM2lbl,this->database->AX3CT_AuxInvStatus_I16,this->database->AX3CT_AuxInvCutFeedback_B1,this->database->CTHM_ACU3On_B1);
    setlabelstates(this->ui->ACMStateTC2lbl,this->database->AX4CT_AuxInvStatus_I16,this->database->AX4CT_AuxInvCutFeedback_B1,this->database->CTHM_ACU4On_B1);

    setlabelstates(this->ui->EBStateMP1lbl,this->database->TR1CT_EBOK_B1,this->database->CTTR1_EBCutOff_B1,this->database->CTHM_DCUM1On_B1);
    setlabelstates(this->ui->EBStateM1lbl,this->database->TR2CT_EBOK_B1,this->database->CTTR2_EBCutOff_B1,this->database->CTHM_DCUM2On_B1);
    setlabelstates(this->ui->EBStateM2lbl,this->database->TR3CT_EBOK_B1,this->database->CTTR3_EBCutOff_B1,this->database->CTHM_DCUM3On_B1);
    setlabelstates(this->ui->EBStateMP2lbl,this->database->TR4CT_EBOK_B1,this->database->CTTR4_EBCutOff_B1,this->database->CTHM_DCUM4On_B1);

    setlabelstates(this->ui->HMIEBStateMP1lbl,this->database->HMiCT_Mp1DynamicBrkCut_B1);
    setlabelstates(this->ui->HMIEBStateM1lbl,this->database->HMiCT_M1DynamicBrkCut_B1);
    setlabelstates(this->ui->HMIEBStateM2lbl,this->database->HMiCT_M2DynamicBrkCut_B1);
    setlabelstates(this->ui->HMIEBStateMP2lbl,this->database->HMiCT_Mp2DynamicBrkCut_B1);

    setlabelstates(this->ui->HMIACMStateMP1lbl,this->database->HMiCT_ACU1Cutoff_B1);
    setlabelstates(this->ui->HMIACMStateM1lbl,this->database->HMiCT_ACU2Cutoff_B1);
    setlabelstates(this->ui->HMIACMStateM2lbl,this->database->HMiCT_ACU3Cutoff_B1);
    setlabelstates(this->ui->HMIACMStateMP2lbl,this->database->HMiCT_ACU4Cutoff_B1);

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
    this->ui->Train1Btn->setText("09"+tmp+"1");
    this->ui->Train2Btn->setText("09"+tmp+"2");
    this->ui->Train3Btn->setText("09"+tmp+"3");
    this->ui->Train4Btn->setText("09"+tmp+"4");
    this->ui->Train5Btn->setText("09"+tmp+"5");
    this->ui->Train6Btn->setText("09"+tmp+"6");

}

void VehicleCutoffPage::setlabelstates(QLabel* lbl,int states,bool states2,bool isonline)
{
    if(!isonline)
    {
        lbl->setStyleSheet(LABELWHITE);
    }else if(states2)
    {
        lbl->setStyleSheet(LABELRED);//cutout
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
void VehicleCutoffPage::setlabelstates(QLabel* lbl,bool state)
{
    if(state)
    {
        lbl->setStyleSheet(LABELORANGE);
    }else
    {
        lbl->setStyleSheet(LABELGRAY);
    }
}

void VehicleCutoffPage::setlabelstates(QLabel* lbl,bool state,bool state2,bool isonline)
{
    if(!isonline)
    {
        lbl->setStyleSheet(LABELWHITE);
    }
    else if(state2 && !state)
    {
        lbl->setStyleSheet(LABELRED);
    }
    else if(!state)
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
void VehicleCutoffPage::ButtonsPressEvent()
{
    int m_BtnID = ((QPushButton *)this->sender())->whatsThis().toInt();
    if(Buttonstatus[m_BtnID-1])
    {
        Buttonstatus[m_BtnID-1] = false;
        ((QPushButton *)this->sender())->setStyleSheet(VPBUTTON_NOTSELECT);
    }else
    {
        Buttonstatus[m_BtnID-1] = true;
        ((QPushButton *)this->sender())->setStyleSheet(VPBUTTON_SELECT);

    }
}



void VehicleCutoffPage::on_CutoffEBBtn_pressed()
{
    this->ui->CutoffEBBtn->setStyleSheet(VCBUTTON_DOWN);
}

void VehicleCutoffPage::on_CutoffEBBtn_released()
{

    this->ui->CutoffEBBtn->setStyleSheet(VCBUTTON_UP);
    if(!this->database->HMiCT_Mp1DynamicBrkCut_B1)
        this->database->HMiCT_Mp1DynamicBrkCut_B1 = Buttonstatus[1];
    if(!this->database->HMiCT_M1DynamicBrkCut_B1)
        this->database->HMiCT_M1DynamicBrkCut_B1 = Buttonstatus[2];
    if(!this->database->HMiCT_M2DynamicBrkCut_B1)
        this->database->HMiCT_M2DynamicBrkCut_B1 = Buttonstatus[3];
    if(!this->database->HMiCT_Mp2DynamicBrkCut_B1)
        this->database->HMiCT_Mp2DynamicBrkCut_B1 = Buttonstatus[4];


    for(int i = 0; i < 6 ;i++)
    {
        buttons[i]->setStyleSheet(VPBUTTON_NOTSELECT);

        Buttonstatus[i] = false;
    }
}

void VehicleCutoffPage::on_ResetEBBtn_pressed()
{
    this->ui->ResetEBBtn->setStyleSheet(VCBUTTON_DOWN);

}

void VehicleCutoffPage::on_ResetEBBtn_released()
{
    this->ui->ResetEBBtn->setStyleSheet(VCBUTTON_UP);
    if(this->database->HMiCT_Mp1DynamicBrkCut_B1)
        this->database->HMiCT_Mp1DynamicBrkCut_B1 = !Buttonstatus[1];
    if(this->database->HMiCT_M1DynamicBrkCut_B1)
        this->database->HMiCT_M1DynamicBrkCut_B1 = !Buttonstatus[2];
    if(this->database->HMiCT_M2DynamicBrkCut_B1)
        this->database->HMiCT_M2DynamicBrkCut_B1 = !Buttonstatus[3];
    if(this->database->HMiCT_Mp2DynamicBrkCut_B1)
        this->database->HMiCT_Mp2DynamicBrkCut_B1 = !Buttonstatus[4];


    for(int i = 0; i < 6 ;i++)
    {
        buttons[i]->setStyleSheet(VPBUTTON_NOTSELECT);

        Buttonstatus[i] = false;
    }
}

void VehicleCutoffPage::on_CutoffACMBtn_pressed()
{
    this->ui->CutoffACMBtn->setStyleSheet(VCBUTTON_UP);

}

void VehicleCutoffPage::on_CutoffACMBtn_released()
{
    this->ui->CutoffACMBtn->setStyleSheet(VCBUTTON_UP);
    if(!this->database->HMiCT_ACU1Cutoff_B1)
        this->database->HMiCT_ACU1Cutoff_B1 = Buttonstatus[0];
    if(!this->database->HMiCT_ACU2Cutoff_B1)
        this->database->HMiCT_ACU2Cutoff_B1 = Buttonstatus[2];
    if(!this->database->HMiCT_ACU3Cutoff_B1)
        this->database->HMiCT_ACU3Cutoff_B1 = Buttonstatus[3];
    if(!this->database->HMiCT_ACU4Cutoff_B1)
        this->database->HMiCT_ACU4Cutoff_B1 = Buttonstatus[5];


    for(int i = 0; i < 6 ;i++)
    {
        buttons[i]->setStyleSheet(VPBUTTON_NOTSELECT);

        Buttonstatus[i] = false;
    }
}

void VehicleCutoffPage::on_ResetACMBtn_pressed()
{
    this->ui->ResetACMBtn->setStyleSheet(VCBUTTON_UP);

}

void VehicleCutoffPage::on_ResetACMBtn_released()
{
    this->ui->ResetACMBtn->setStyleSheet(VCBUTTON_UP);
    if(this->database->HMiCT_ACU1Cutoff_B1)
        this->database->HMiCT_ACU1Cutoff_B1 = !Buttonstatus[0];
    if(this->database->HMiCT_ACU2Cutoff_B1)
        this->database->HMiCT_ACU2Cutoff_B1 = !Buttonstatus[2];
    if(this->database->HMiCT_ACU3Cutoff_B1)
        this->database->HMiCT_ACU3Cutoff_B1 = !Buttonstatus[3];
    if(this->database->HMiCT_ACU4Cutoff_B1)
        this->database->HMiCT_ACU4Cutoff_B1 = !Buttonstatus[5];


    for(int i = 0; i < 6 ;i++)
    {
        buttons[i]->setStyleSheet(VPBUTTON_NOTSELECT);

        Buttonstatus[i] = false;
    }
}
