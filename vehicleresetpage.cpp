#include "vehicleresetpage.h"
#include "ui_vehicleresetpage.h"

#define VCBUTTON_UP "font: 20px, \"微软雅黑\";color: white;background-color: rgb(0, 128, 128);border-top: 2px solid white;border-left: 2px solid white;"
#define VCBUTTON_DOWN "font: 20px, \"微软雅黑\";border-top: 2px solid  rgb(0, 0, 0);border-left: 2px solid  rgb(0, 0, 0);border-bottom: 2px solid white;border-right: 2px solid white;background-color:orange"

#define VPBUTTON_SELECT "font: 24px, \"微软雅黑\";color: white;background-color: orange;border-top: 2px solid  rgb(0, 0, 0);border-left: 2px solid  rgb(0, 0, 0);border-bottom: 2px solid white;border-right: 2px solid white;"
#define VPBUTTON_NOTSELECT "font: 24px, \"微软雅黑\";color: black;background-color: rgb(255,255,153);border-top: 2px solid  rgb(0, 0, 0);border-left: 2px solid  rgb(0, 0, 0);border-bottom: 2px solid white;border-right: 2px solid white;"


VehicleResetPage::VehicleResetPage(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::VehicleResetPage)
{
    ui->setupUi(this);
    DCU2sTimer = 0;
    ACM2sTimer = 0;

    buttons<<ui->Train1Btn<<ui->Train2Btn<<ui->Train3Btn<<ui->Train4Btn<<ui->Train5Btn<<ui->Train6Btn;

    foreach (QPushButton *button, buttons)
    {
        connect(button, SIGNAL(clicked()), this, SLOT(ButtonsPressEvent()));
    }
    for(int i = 0; i < 6 ;i++)
    {
        Buttonstatus[i] = false;
    }

    ACMBtnflg = false;
    DCUBtnflg = false;


}

VehicleResetPage::~VehicleResetPage()
{
    delete ui;
}
void VehicleResetPage::updatePage()
{
    // acm reset 2s
    if(ACMBtnflg)
    {
        if(ACM2sTimer++>6)
        {
            ACM2sTimer = 0;
            ACMBtnflg =false;
            this->ui->ACMRESETTC1Btn->setDisabled(false);
            this->ui->ACMRESETTC1Btn->setStyleSheet(VCBUTTON_UP);
            this->database->HMiCT_ACU1Reset_B1 = false;
            this->database->HMiCT_ACU2Reset_B1 = false;
            this->database->HMiCT_ACU3Reset_B1 = false;
            this->database->HMiCT_ACU4Reset_B1 = false;
            for(int i = 0; i < 6 ;i++)
            {
                buttons[i]->setStyleSheet(VPBUTTON_NOTSELECT);

                Buttonstatus[i] = false;
            }
        }
    }



    //vvvf fault reset 2s
    if(DCUBtnflg)
    {
        if(DCU2sTimer++>6)
        {
            DCU2sTimer = 0;
            DCUBtnflg = false;
            this->ui->VVVFMP1Btn->setDisabled(false);
            this->ui->VVVFMP1Btn->setStyleSheet(VCBUTTON_UP);
            this->database->HMiCT_Mp1DCUFaultReset_B1 = false;
            this->database->HMiCT_M1DCUFaultReset_B1 = false;
            this->database->HMiCT_M2DCUFaultReset_B1 = false;
            this->database->HMiCT_Mp2DCUFaultReset_B1 = false;
            for(int i = 0; i < 6 ;i++)
            {
                buttons[i]->setStyleSheet(VPBUTTON_NOTSELECT);

                Buttonstatus[i] = false;
            }
        }
    }


    setlabelstates(this->ui->EBStateMP1lbl,this->database->TR1CT_TractionStatus_I16,this->database->CTHM_DCUM1On_B1);
    setlabelstates(this->ui->EBStateM1lbl,this->database->TR2CT_TractionStatus_I16,this->database->CTHM_DCUM1On_B1);
    setlabelstates(this->ui->EBStateM2lbl,this->database->TR3CT_TractionStatus_I16,this->database->CTHM_DCUM1On_B1);
    setlabelstates(this->ui->EBStateMP2lbl,this->database->TR4CT_TractionStatus_I16,this->database->CTHM_DCUM1On_B1);


    setlabelstates(this->ui->ACMStateTC1lbl,this->database->AX1CT_AuxInvStatus_I16,this->database->CTHM_ACU1On_B1);
    setlabelstates(this->ui->ACMStateM1lbl,this->database->AX2CT_AuxInvStatus_I16,this->database->CTHM_ACU2On_B1);
    setlabelstates(this->ui->ACMStateM2lbl,this->database->AX3CT_AuxInvStatus_I16,this->database->CTHM_ACU3On_B1);
    setlabelstates(this->ui->ACMStateTC2lbl,this->database->AX4CT_AuxInvStatus_I16,this->database->CTHM_ACU4On_B1);


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

void VehicleResetPage::ButtonsPressEvent()
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

void VehicleResetPage::on_returnBtn_pressed()
{
    changePage(uVehicleRunStatePage);
}


void VehicleResetPage::on_ACMRESETTC1Btn_pressed()
{
    ACMBtnflg = true;

    this->ui->ACMRESETTC1Btn->setStyleSheet(VCBUTTON_DOWN);
    this->database->HMiCT_ACU1Reset_B1 = Buttonstatus[0];
    this->database->HMiCT_ACU2Reset_B1 = Buttonstatus[2];
    this->database->HMiCT_ACU3Reset_B1 = Buttonstatus[3];
    this->database->HMiCT_ACU4Reset_B1 = Buttonstatus[5];

    this->ui->ACMRESETTC1Btn->setDisabled(true);

}



void VehicleResetPage::on_VVVFMP1Btn_pressed()
{

    DCUBtnflg = true;

    this->ui->VVVFMP1Btn->setStyleSheet(VCBUTTON_DOWN);
    this->database->HMiCT_Mp1DCUFaultReset_B1 = Buttonstatus[1];
    this->database->HMiCT_M1DCUFaultReset_B1 = Buttonstatus[2];
    this->database->HMiCT_M2DCUFaultReset_B1 = Buttonstatus[3];
    this->database->HMiCT_Mp2DCUFaultReset_B1 = Buttonstatus[4];

    this->ui->VVVFMP1Btn->setDisabled(true);
}

void VehicleResetPage::setlabelstates(QLabel* lbl,int status,bool isonline)
{
    // unknown >> cutout>>fault<<braking >> run >> stop
    if(!isonline)
    {
        lbl->setStyleSheet(LABELWHITE);
    }else if(status >= 20 )
    {
        lbl->setStyleSheet(LABELRED);
    }else if(status == 9)
    {
        lbl->setStyleSheet(LABELGREEN);
    }else if(status >= 4 && status <= 12)
    {
        lbl->setStyleSheet(LABELGRAY);
    }else
    {
        lbl->setStyleSheet(LABELWHITE);
    }
}
