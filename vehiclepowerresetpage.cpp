#include "vehiclepowerresetpage.h"
#include "ui_vehiclepowerresetpage.h"

#define VPBUTTON_POWEROFF "font: 20px, \"微软雅黑\";color: white;background-color: red;border-top: 2px solid white;border-left: 2px solid white;"
#define VPBUTTON_POWERON "font: 20px, \"微软雅黑\";color: white;background-color: green;border-top: 2px solid white;border-left: 2px solid white;"
#define VPBUTTON_SELECT "font: 24px, \"微软雅黑\";color: white;background-color: orange;border-top: 2px solid  rgb(0, 0, 0);border-left: 2px solid  rgb(0, 0, 0);border-bottom: 2px solid white;border-right: 2px solid white;"
#define VPBUTTON_NOTSELECT "font: 24px, \"微软雅黑\";color: black;background-color: rgb(255,255,153);border-top: 2px solid  rgb(0, 0, 0);border-left: 2px solid  rgb(0, 0, 0);border-bottom: 2px solid white;border-right: 2px solid white;"
#define VPBUTTON_NOTSELECT2 "font: 24px, \"微软雅黑\";color: white;background-color: rgb(0, 128, 128);border-top: 2px solid  rgb(0, 0, 0);border-left: 2px solid  rgb(0, 0, 0);border-bottom: 2px solid white;border-right: 2px solid white;"


#define DOORCLOSE "background-color: rgb(0,192,0);border:2px solid rgb(255,255,153);font: 20px  \"微软雅黑\";color:rgba(0,0,0,255);"
#define DOOROPEN "background-color: rgb(224,160,192);border:2px solid rgb(255,255,153);font: 20px  \"微软雅黑\";color:rgba(0,0,0,255);"
#define DOORFANGJIA "border-image: url(:/images/images/DOORfangjia.bmp);color:rgba(0,0,0,0);"
#define DOORFAULT "background-color: rgb(255,0,0);border:2px solid rgb(255,255,153);font: 20px  \"微软雅黑\";color:rgba(0,0,0,255);"
#define DOOREMLOCK "border-image: url(:/images/images/DOORemlock.bmp);color:rgba(0,0,0,0);"
#define DOORBYPASS "border-image: url(:/images/images/DOORbypass.bmp);color:rgba(0,0,0,0);"
#define DOORUNKNOW "background-color: rgb(255,255,255);border:2px solid rgb(255,255,153);font: 20px  \"微软雅黑\";color:rgba(0,0,0,255);"

VehiclePowerResetPage::VehiclePowerResetPage(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::VehiclePowerResetPage)
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

    m_pispoweroff=m_pispoweron=m_doorpoweroff=m_doorpoweron=false;

    m_BtnID =1;
}

VehiclePowerResetPage::~VehiclePowerResetPage()
{
    delete ui;
}
void VehiclePowerResetPage::ButtonsPressEvent()
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

void VehiclePowerResetPage::on_returnBtn_pressed()
{
    changePage(uVehicleRunStatePage);
}
void VehiclePowerResetPage::updatePage()
{
    //车号
    QString tmp;
    tmp.sprintf("%02d",this->database->CTHM_TrainNum_U8);
    this->ui->Train1Btn->setText("09"+tmp+"1");
    this->ui->Train2Btn->setText("09"+tmp+"2");
    this->ui->Train3Btn->setText("09"+tmp+"3");
    this->ui->Train4Btn->setText("09"+tmp+"4");
    this->ui->Train5Btn->setText("09"+tmp+"5");
    this->ui->Train6Btn->setText("09"+tmp+"6");

    QList<bool> buttonsignals;
    buttonsignals<<this->database->DICT_TC1DI5CH19PngBroadcastStatus_B1<<this->database->DICT_MP1DI1CH15PngBroadcastStatus_B1
                <<this->database->DICT_M1DI1CH11PngBroadcastStatus_B1<<this->database->DICT_M2DI1CH11PngBroadcastStatus_B1
                <<this->database->DICT_MP2DI1CH15PngBroadcastStatus_B1<<this->database->DICT_TC2DI5CH19PngBroadcastStatus_B1
                <<this->database->DICT_TC1DI5CH20DoorPowerStatus_B1<<this->database->DICT_MP1DI1CH16DoorPowerStatus_B1
                 <<this->database->DICT_M1DI1CH12DoorPowerStatus_B1<<this->database->DICT_M2DI1CH12DoorPowerStatus_B1
                 <<this->database->DICT_MP2DI1CH16DoorPowerStatus_B1<<this->database->DICT_TC2DI5CH20DoorPowerStatus_B1;
    QList<QLabel* > statelbl;
    statelbl<<this->ui->PISTC1lbl<<this->ui->PISMP1lbl<<this->ui->PISM1lbl
            <<this->ui->PISM2lbl<<this->ui->PISMP2lbl<<this->ui->PISTC2lbl
            <<this->ui->DOORTC1lbl<<this->ui->DOORMP1lbl<<this->ui->DOORM1lbl
            <<this->ui->DOORM2lbl<<this->ui->DOORMP2lbl<<this->ui->DOORTC2lbl;

    for(int i = 0; i < 12 ;i++)
    {
        //update button realtime status
        if(buttonsignals.at(i))
        {
            statelbl[i]->setStyleSheet(VPBUTTON_POWERON);

        }else
        {
            statelbl[i]->setStyleSheet(VPBUTTON_POWEROFF);

        }
    }

    static int timer3s_pisoff = 0;
    if(this->m_pispoweroff)
    {
        if(timer3s_pisoff++>6)
        {
            timer3s_pisoff = 0;
            this->m_pispoweroff = false;
            this->ui->PowerOffPISBtn->setStyleSheet(VPBUTTON_NOTSELECT2);
            this->ui->PowerOnPISBtn->setDisabled(false);
            this->ui->returnBtn->setDisabled(false);

            for(int i = 0; i < 6 ;i++)
            {
                this->database->HMiCT_PowerOFF_B1[i] = false;
                //Buttonstatus[i] = false;
            }
        }
    }

    static int timer3s_pison = 0;
    if(this->m_pispoweron)
    {
        if(timer3s_pison++>6)
        {
            timer3s_pison = 0;
            this->m_pispoweron = false;
            this->ui->PowerOnPISBtn->setStyleSheet(VPBUTTON_NOTSELECT2);
            this->ui->PowerOffPISBtn->setDisabled(false);
            this->ui->returnBtn->setDisabled(false);

            for(int i = 0; i < 6 ;i++)
            {
                this->database->HMiCT_PowerON_B1[i] = false;
                //Buttonstatus[i] = false;
            }
        }
    }

    static int timer3s_dooroff = 0;
    if(this->m_doorpoweroff)
    {
        if(timer3s_dooroff++>6)
        {
            timer3s_dooroff = 0;
            this->m_doorpoweroff = false;
            this->ui->PowerOffdoorBtn->setStyleSheet(VPBUTTON_NOTSELECT2);
            this->ui->PowerOndoorBtn->setDisabled(false);
            this->ui->returnBtn->setDisabled(false);

            for(int i = 0; i < 6 ;i++)
            {
                this->database->HMiCT_PowerOFF_B1[i+6] = false;
                //Buttonstatus[i] = false;
            }
        }
    }

    static int timer3s_dooron = 0;
    if(this->m_doorpoweron)
    {
        if(timer3s_dooron++>6)
        {
            timer3s_dooron = 0;
            this->m_doorpoweron = false;
            this->ui->PowerOndoorBtn->setStyleSheet(VPBUTTON_NOTSELECT2);
            this->ui->PowerOffdoorBtn->setDisabled(false);
            this->ui->returnBtn->setDisabled(false);
            for(int i = 0; i < 6 ;i++)
            {
                this->database->HMiCT_PowerON_B1[i+6] = false;
                //Buttonstatus[i] = false;
            }
        }
    }

    updateDoorStatus();
}



void VehiclePowerResetPage::updateDoorStatus()
{
    //DOOR status
    QList<bool> DOORstatus;
    //tc1
    DOORstatus<<database->DR1_2CT_DCU1Isolate_B1<<database->DR1_2CT_DCU1Fault_U8<<database->DR1_2CT_DCU1EmUnlock_B1
            <<database->DR1_2CT_DCU1ObstacleDetcted_B1<<database->DR1_2CT_DCU1TotallyOpen_B1<<database->DR1_2CT_DCU1TotallyClose_B1;
    setDOORStatus(this->ui->Tc1Door1lbl,DOORstatus);
    DOORstatus.clear();

    DOORstatus<<database->DR1_2CT_DCU2Isolate_B1<<database->DR1_2CT_DCU2Fault_U8<<database->DR1_2CT_DCU2EmUnlock_B1
            <<database->DR1_2CT_DCU2ObstacleDetcted_B1<<database->DR1_2CT_DCU2TotallyOpen_B1<<database->DR1_2CT_DCU2TotallyClose_B1;
    setDOORStatus(this->ui->Tc1Door2lbl,DOORstatus);
    DOORstatus.clear();

    DOORstatus<<database->DR1_2CT_DCU3Isolate_B1<<database->DR1_2CT_DCU3Fault_U8<<database->DR1_2CT_DCU3EmUnlock_B1
            <<database->DR1_2CT_DCU3ObstacleDetcted_B1<<database->DR1_2CT_DCU3TotallyOpen_B1<<database->DR1_2CT_DCU3TotallyClose_B1;
    setDOORStatus(this->ui->Tc1Door3lbl,DOORstatus);
    DOORstatus.clear();

    DOORstatus<<database->DR1_2CT_DCU4Isolate_B1<<database->DR1_2CT_DCU4Fault_U8<<database->DR1_2CT_DCU4EmUnlock_B1
            <<database->DR1_2CT_DCU4ObstacleDetcted_B1<<database->DR1_2CT_DCU4TotallyOpen_B1<<database->DR1_2CT_DCU4TotallyClose_B1;
    setDOORStatus(this->ui->Tc1Door4lbl,DOORstatus);
    DOORstatus.clear();

    DOORstatus<<database->DR1_2CT_DCU5Isolate_B1<<database->DR1_2CT_DCU5Fault_U8<<database->DR1_2CT_DCU5EmUnlock_B1
            <<database->DR1_2CT_DCU5ObstacleDetcted_B1<<database->DR1_2CT_DCU5TotallyOpen_B1<<database->DR1_2CT_DCU5TotallyClose_B1;
    setDOORStatus(this->ui->Tc1Door5lbl,DOORstatus);
    DOORstatus.clear();

    DOORstatus<<database->DR1_2CT_DCU6Isolate_B1<<database->DR1_2CT_DCU6Fault_U8<<database->DR1_2CT_DCU6EmUnlock_B1
            <<database->DR1_2CT_DCU6ObstacleDetcted_B1<<database->DR1_2CT_DCU6TotallyOpen_B1<<database->DR1_2CT_DCU6TotallyClose_B1;
    setDOORStatus(this->ui->Tc1Door6lbl,DOORstatus);
    DOORstatus.clear();

    DOORstatus<<database->DR1_2CT_DCU7Isolate_B1<<database->DR1_2CT_DCU7Fault_U8<<database->DR1_2CT_DCU7EmUnlock_B1
            <<database->DR1_2CT_DCU7ObstacleDetcted_B1<<database->DR1_2CT_DCU7TotallyOpen_B1<<database->DR1_2CT_DCU7TotallyClose_B1;
    setDOORStatus(this->ui->Tc1Door7lbl,DOORstatus);
    DOORstatus.clear();

    DOORstatus<<database->DR1_2CT_DCU8Isolate_B1<<database->DR1_2CT_DCU8Fault_U8<<database->DR1_2CT_DCU8EmUnlock_B1
            <<database->DR1_2CT_DCU8ObstacleDetcted_B1<<database->DR1_2CT_DCU8TotallyOpen_B1<<database->DR1_2CT_DCU8TotallyClose_B1;
    setDOORStatus(this->ui->Tc1Door8lbl,DOORstatus);
    DOORstatus.clear();

    //mp1
    DOORstatus<<database->DR3_4CT_DCU1Isolate_B1<<database->DR3_4CT_DCU1Fault_U8<<database->DR3_4CT_DCU1EmUnlock_B1
            <<database->DR3_4CT_DCU1ObstacleDetcted_B1<<database->DR3_4CT_DCU1TotallyOpen_B1<<database->DR3_4CT_DCU1TotallyClose_B1;
    setDOORStatus(this->ui->Mp1Door1lbl,DOORstatus);
    DOORstatus.clear();

    DOORstatus<<database->DR3_4CT_DCU2Isolate_B1<<database->DR3_4CT_DCU2Fault_U8<<database->DR3_4CT_DCU2EmUnlock_B1
            <<database->DR3_4CT_DCU2ObstacleDetcted_B1<<database->DR3_4CT_DCU2TotallyOpen_B1<<database->DR3_4CT_DCU2TotallyClose_B1;
    setDOORStatus(this->ui->Mp1Door2lbl,DOORstatus);
    DOORstatus.clear();

    DOORstatus<<database->DR3_4CT_DCU3Isolate_B1<<database->DR3_4CT_DCU3Fault_U8<<database->DR3_4CT_DCU3EmUnlock_B1
            <<database->DR3_4CT_DCU3ObstacleDetcted_B1<<database->DR3_4CT_DCU3TotallyOpen_B1<<database->DR3_4CT_DCU3TotallyClose_B1;
    setDOORStatus(this->ui->Mp1Door3lbl,DOORstatus);
    DOORstatus.clear();

    DOORstatus<<database->DR3_4CT_DCU4Isolate_B1<<database->DR3_4CT_DCU4Fault_U8<<database->DR3_4CT_DCU4EmUnlock_B1
            <<database->DR3_4CT_DCU4ObstacleDetcted_B1<<database->DR3_4CT_DCU4TotallyOpen_B1<<database->DR3_4CT_DCU4TotallyClose_B1;
    setDOORStatus(this->ui->Mp1Door4lbl,DOORstatus);
    DOORstatus.clear();

    DOORstatus<<database->DR3_4CT_DCU5Isolate_B1<<database->DR3_4CT_DCU5Fault_U8<<database->DR3_4CT_DCU5EmUnlock_B1
            <<database->DR3_4CT_DCU5ObstacleDetcted_B1<<database->DR3_4CT_DCU5TotallyOpen_B1<<database->DR3_4CT_DCU5TotallyClose_B1;
    setDOORStatus(this->ui->Mp1Door5lbl,DOORstatus);
    DOORstatus.clear();

    DOORstatus<<database->DR3_4CT_DCU6Isolate_B1<<database->DR3_4CT_DCU6Fault_U8<<database->DR3_4CT_DCU6EmUnlock_B1
            <<database->DR3_4CT_DCU6ObstacleDetcted_B1<<database->DR3_4CT_DCU6TotallyOpen_B1<<database->DR3_4CT_DCU6TotallyClose_B1;
    setDOORStatus(this->ui->Mp1Door6lbl,DOORstatus);
    DOORstatus.clear();

    DOORstatus<<database->DR3_4CT_DCU7Isolate_B1<<database->DR3_4CT_DCU7Fault_U8<<database->DR3_4CT_DCU7EmUnlock_B1
            <<database->DR3_4CT_DCU7ObstacleDetcted_B1<<database->DR3_4CT_DCU7TotallyOpen_B1<<database->DR3_4CT_DCU7TotallyClose_B1;
    setDOORStatus(this->ui->Mp1Door7lbl,DOORstatus);
    DOORstatus.clear();

    DOORstatus<<database->DR3_4CT_DCU8Isolate_B1<<database->DR3_4CT_DCU8Fault_U8<<database->DR3_4CT_DCU8EmUnlock_B1
            <<database->DR3_4CT_DCU8ObstacleDetcted_B1<<database->DR3_4CT_DCU8TotallyOpen_B1<<database->DR3_4CT_DCU8TotallyClose_B1;
    setDOORStatus(this->ui->Mp1Door8lbl,DOORstatus);
    DOORstatus.clear();

    //m1
    DOORstatus<<database->DR5_6CT_DCU1Isolate_B1<<database->DR5_6CT_DCU1Fault_U8<<database->DR5_6CT_DCU1EmUnlock_B1
            <<database->DR5_6CT_DCU1ObstacleDetcted_B1<<database->DR5_6CT_DCU1TotallyOpen_B1<<database->DR5_6CT_DCU1TotallyClose_B1;
    setDOORStatus(this->ui->M1Door1lbl,DOORstatus);
    DOORstatus.clear();

    DOORstatus<<database->DR5_6CT_DCU2Isolate_B1<<database->DR5_6CT_DCU2Fault_U8<<database->DR5_6CT_DCU2EmUnlock_B1
            <<database->DR5_6CT_DCU2ObstacleDetcted_B1<<database->DR5_6CT_DCU2TotallyOpen_B1<<database->DR5_6CT_DCU2TotallyClose_B1;
    setDOORStatus(this->ui->M1Door2lbl,DOORstatus);
    DOORstatus.clear();

    DOORstatus<<database->DR5_6CT_DCU3Isolate_B1<<database->DR5_6CT_DCU3Fault_U8<<database->DR5_6CT_DCU3EmUnlock_B1
            <<database->DR5_6CT_DCU3ObstacleDetcted_B1<<database->DR5_6CT_DCU3TotallyOpen_B1<<database->DR5_6CT_DCU3TotallyClose_B1;
    setDOORStatus(this->ui->M1Door3lbl,DOORstatus);
    DOORstatus.clear();

    DOORstatus<<database->DR5_6CT_DCU4Isolate_B1<<database->DR5_6CT_DCU4Fault_U8<<database->DR5_6CT_DCU4EmUnlock_B1
            <<database->DR5_6CT_DCU4ObstacleDetcted_B1<<database->DR5_6CT_DCU4TotallyOpen_B1<<database->DR5_6CT_DCU4TotallyClose_B1;
    setDOORStatus(this->ui->M1Door4lbl,DOORstatus);
    DOORstatus.clear();

    DOORstatus<<database->DR5_6CT_DCU5Isolate_B1<<database->DR5_6CT_DCU5Fault_U8<<database->DR5_6CT_DCU5EmUnlock_B1
            <<database->DR5_6CT_DCU5ObstacleDetcted_B1<<database->DR5_6CT_DCU5TotallyOpen_B1<<database->DR5_6CT_DCU5TotallyClose_B1;
    setDOORStatus(this->ui->M1Door5lbl,DOORstatus);
    DOORstatus.clear();

    DOORstatus<<database->DR5_6CT_DCU6Isolate_B1<<database->DR5_6CT_DCU6Fault_U8<<database->DR5_6CT_DCU6EmUnlock_B1
            <<database->DR5_6CT_DCU6ObstacleDetcted_B1<<database->DR5_6CT_DCU6TotallyOpen_B1<<database->DR5_6CT_DCU6TotallyClose_B1;
    setDOORStatus(this->ui->M1Door6lbl,DOORstatus);
    DOORstatus.clear();

    DOORstatus<<database->DR5_6CT_DCU7Isolate_B1<<database->DR5_6CT_DCU7Fault_U8<<database->DR5_6CT_DCU7EmUnlock_B1
            <<database->DR5_6CT_DCU7ObstacleDetcted_B1<<database->DR5_6CT_DCU7TotallyOpen_B1<<database->DR5_6CT_DCU7TotallyClose_B1;
    setDOORStatus(this->ui->M1Door7lbl,DOORstatus);
    DOORstatus.clear();

    DOORstatus<<database->DR5_6CT_DCU8Isolate_B1<<database->DR5_6CT_DCU8Fault_U8<<database->DR5_6CT_DCU8EmUnlock_B1
            <<database->DR5_6CT_DCU8ObstacleDetcted_B1<<database->DR5_6CT_DCU8TotallyOpen_B1<<database->DR5_6CT_DCU8TotallyClose_B1;
    setDOORStatus(this->ui->M1Door8lbl,DOORstatus);
    DOORstatus.clear();

    //m2
    DOORstatus<<database->DR7_8CT_DCU1Isolate_B1<<database->DR7_8CT_DCU1Fault_U8<<database->DR7_8CT_DCU1EmUnlock_B1
            <<database->DR7_8CT_DCU1ObstacleDetcted_B1<<database->DR7_8CT_DCU1TotallyOpen_B1<<database->DR7_8CT_DCU1TotallyClose_B1;
    setDOORStatus(this->ui->M2Door1lbl,DOORstatus);
    DOORstatus.clear();

    DOORstatus<<database->DR7_8CT_DCU2Isolate_B1<<database->DR7_8CT_DCU2Fault_U8<<database->DR7_8CT_DCU2EmUnlock_B1
            <<database->DR7_8CT_DCU2ObstacleDetcted_B1<<database->DR7_8CT_DCU2TotallyOpen_B1<<database->DR7_8CT_DCU2TotallyClose_B1;
    setDOORStatus(this->ui->M2Door2lbl,DOORstatus);
    DOORstatus.clear();

    DOORstatus<<database->DR7_8CT_DCU3Isolate_B1<<database->DR7_8CT_DCU3Fault_U8<<database->DR7_8CT_DCU3EmUnlock_B1
            <<database->DR7_8CT_DCU3ObstacleDetcted_B1<<database->DR7_8CT_DCU3TotallyOpen_B1<<database->DR7_8CT_DCU3TotallyClose_B1;
    setDOORStatus(this->ui->M2Door3lbl,DOORstatus);
    DOORstatus.clear();

    DOORstatus<<database->DR7_8CT_DCU4Isolate_B1<<database->DR7_8CT_DCU4Fault_U8<<database->DR7_8CT_DCU4EmUnlock_B1
            <<database->DR7_8CT_DCU4ObstacleDetcted_B1<<database->DR7_8CT_DCU4TotallyOpen_B1<<database->DR7_8CT_DCU4TotallyClose_B1;
    setDOORStatus(this->ui->M2Door4lbl,DOORstatus);
    DOORstatus.clear();

    DOORstatus<<database->DR7_8CT_DCU5Isolate_B1<<database->DR7_8CT_DCU5Fault_U8<<database->DR7_8CT_DCU5EmUnlock_B1
            <<database->DR7_8CT_DCU5ObstacleDetcted_B1<<database->DR7_8CT_DCU5TotallyOpen_B1<<database->DR7_8CT_DCU5TotallyClose_B1;
    setDOORStatus(this->ui->M2Door5lbl,DOORstatus);
    DOORstatus.clear();

    DOORstatus<<database->DR7_8CT_DCU6Isolate_B1<<database->DR7_8CT_DCU6Fault_U8<<database->DR7_8CT_DCU6EmUnlock_B1
            <<database->DR7_8CT_DCU6ObstacleDetcted_B1<<database->DR7_8CT_DCU6TotallyOpen_B1<<database->DR7_8CT_DCU6TotallyClose_B1;
    setDOORStatus(this->ui->M2Door6lbl,DOORstatus);
    DOORstatus.clear();

    DOORstatus<<database->DR7_8CT_DCU7Isolate_B1<<database->DR7_8CT_DCU7Fault_U8<<database->DR7_8CT_DCU7EmUnlock_B1
            <<database->DR7_8CT_DCU7ObstacleDetcted_B1<<database->DR7_8CT_DCU7TotallyOpen_B1<<database->DR7_8CT_DCU7TotallyClose_B1;
    setDOORStatus(this->ui->M2Door7lbl,DOORstatus);
    DOORstatus.clear();

    DOORstatus<<database->DR7_8CT_DCU8Isolate_B1<<database->DR7_8CT_DCU8Fault_U8<<database->DR7_8CT_DCU8EmUnlock_B1
            <<database->DR7_8CT_DCU8ObstacleDetcted_B1<<database->DR7_8CT_DCU8TotallyOpen_B1<<database->DR7_8CT_DCU8TotallyClose_B1;
    setDOORStatus(this->ui->M2Door8lbl,DOORstatus);
    DOORstatus.clear();

    //mp2
    DOORstatus<<database->DR9_10CT_DCU1Isolate_B1<<database->DR9_10CT_DCU1Fault_U8<<database->DR9_10CT_DCU1EmUnlock_B1
            <<database->DR9_10CT_DCU1ObstacleDetcted_B1<<database->DR9_10CT_DCU1TotallyOpen_B1<<database->DR9_10CT_DCU1TotallyClose_B1;
    setDOORStatus(this->ui->Mp2Door1lbl,DOORstatus);
    DOORstatus.clear();

    DOORstatus<<database->DR9_10CT_DCU2Isolate_B1<<database->DR9_10CT_DCU2Fault_U8<<database->DR9_10CT_DCU2EmUnlock_B1
            <<database->DR9_10CT_DCU2ObstacleDetcted_B1<<database->DR9_10CT_DCU2TotallyOpen_B1<<database->DR9_10CT_DCU2TotallyClose_B1;
    setDOORStatus(this->ui->Mp2Door2lbl,DOORstatus);
    DOORstatus.clear();

    DOORstatus<<database->DR9_10CT_DCU3Isolate_B1<<database->DR9_10CT_DCU3Fault_U8<<database->DR9_10CT_DCU3EmUnlock_B1
            <<database->DR9_10CT_DCU3ObstacleDetcted_B1<<database->DR9_10CT_DCU3TotallyOpen_B1<<database->DR9_10CT_DCU3TotallyClose_B1;
    setDOORStatus(this->ui->Mp2Door3lbl,DOORstatus);
    DOORstatus.clear();

    DOORstatus<<database->DR9_10CT_DCU4Isolate_B1<<database->DR9_10CT_DCU4Fault_U8<<database->DR9_10CT_DCU4EmUnlock_B1
            <<database->DR9_10CT_DCU4ObstacleDetcted_B1<<database->DR9_10CT_DCU4TotallyOpen_B1<<database->DR9_10CT_DCU4TotallyClose_B1;
    setDOORStatus(this->ui->Mp2Door4lbl,DOORstatus);
    DOORstatus.clear();

    DOORstatus<<database->DR9_10CT_DCU5Isolate_B1<<database->DR9_10CT_DCU5Fault_U8<<database->DR9_10CT_DCU5EmUnlock_B1
            <<database->DR9_10CT_DCU5ObstacleDetcted_B1<<database->DR9_10CT_DCU5TotallyOpen_B1<<database->DR9_10CT_DCU5TotallyClose_B1;
    setDOORStatus(this->ui->Mp2Door5lbl,DOORstatus);
    DOORstatus.clear();

    DOORstatus<<database->DR9_10CT_DCU6Isolate_B1<<database->DR9_10CT_DCU6Fault_U8<<database->DR9_10CT_DCU6EmUnlock_B1
            <<database->DR9_10CT_DCU6ObstacleDetcted_B1<<database->DR9_10CT_DCU6TotallyOpen_B1<<database->DR9_10CT_DCU6TotallyClose_B1;
    setDOORStatus(this->ui->Mp2Door6lbl,DOORstatus);
    DOORstatus.clear();

    DOORstatus<<database->DR9_10CT_DCU7Isolate_B1<<database->DR9_10CT_DCU7Fault_U8<<database->DR9_10CT_DCU7EmUnlock_B1
            <<database->DR9_10CT_DCU7ObstacleDetcted_B1<<database->DR9_10CT_DCU7TotallyOpen_B1<<database->DR9_10CT_DCU7TotallyClose_B1;
    setDOORStatus(this->ui->Mp2Door7lbl,DOORstatus);
    DOORstatus.clear();

    DOORstatus<<database->DR9_10CT_DCU8Isolate_B1<<database->DR9_10CT_DCU8Fault_U8<<database->DR9_10CT_DCU8EmUnlock_B1
            <<database->DR9_10CT_DCU8ObstacleDetcted_B1<<database->DR9_10CT_DCU8TotallyOpen_B1<<database->DR9_10CT_DCU8TotallyClose_B1;
    setDOORStatus(this->ui->Mp2Door8lbl,DOORstatus);
    DOORstatus.clear();

    //Tc2
    DOORstatus<<database->DR11_12CT_DCU1Isolate_B1<<database->DR11_12CT_DCU1Fault_U8<<database->DR11_12CT_DCU1EmUnlock_B1
            <<database->DR11_12CT_DCU1ObstacleDetcted_B1<<database->DR11_12CT_DCU1TotallyOpen_B1<<database->DR11_12CT_DCU1TotallyClose_B1;
    setDOORStatus(this->ui->Tc2Door1lbl,DOORstatus);
    DOORstatus.clear();

    DOORstatus<<database->DR11_12CT_DCU2Isolate_B1<<database->DR11_12CT_DCU2Fault_U8<<database->DR11_12CT_DCU2EmUnlock_B1
            <<database->DR11_12CT_DCU2ObstacleDetcted_B1<<database->DR11_12CT_DCU2TotallyOpen_B1<<database->DR11_12CT_DCU2TotallyClose_B1;
    setDOORStatus(this->ui->Tc2Door2lbl,DOORstatus);
    DOORstatus.clear();

    DOORstatus<<database->DR11_12CT_DCU3Isolate_B1<<database->DR11_12CT_DCU3Fault_U8<<database->DR11_12CT_DCU3EmUnlock_B1
            <<database->DR11_12CT_DCU3ObstacleDetcted_B1<<database->DR11_12CT_DCU3TotallyOpen_B1<<database->DR11_12CT_DCU3TotallyClose_B1;
    setDOORStatus(this->ui->Tc2Door3lbl,DOORstatus);
    DOORstatus.clear();

    DOORstatus<<database->DR11_12CT_DCU4Isolate_B1<<database->DR11_12CT_DCU4Fault_U8<<database->DR11_12CT_DCU4EmUnlock_B1
            <<database->DR11_12CT_DCU4ObstacleDetcted_B1<<database->DR11_12CT_DCU4TotallyOpen_B1<<database->DR11_12CT_DCU4TotallyClose_B1;
    setDOORStatus(this->ui->Tc2Door4lbl,DOORstatus);
    DOORstatus.clear();

    DOORstatus<<database->DR11_12CT_DCU5Isolate_B1<<database->DR11_12CT_DCU5Fault_U8<<database->DR11_12CT_DCU5EmUnlock_B1
            <<database->DR11_12CT_DCU5ObstacleDetcted_B1<<database->DR11_12CT_DCU5TotallyOpen_B1<<database->DR11_12CT_DCU5TotallyClose_B1;
    setDOORStatus(this->ui->Tc2Door5lbl,DOORstatus);
    DOORstatus.clear();

    DOORstatus<<database->DR11_12CT_DCU6Isolate_B1<<database->DR11_12CT_DCU6Fault_U8<<database->DR11_12CT_DCU6EmUnlock_B1
            <<database->DR11_12CT_DCU6ObstacleDetcted_B1<<database->DR11_12CT_DCU6TotallyOpen_B1<<database->DR11_12CT_DCU6TotallyClose_B1;
    setDOORStatus(this->ui->Tc2Door6lbl,DOORstatus);
    DOORstatus.clear();

    DOORstatus<<database->DR11_12CT_DCU7Isolate_B1<<database->DR11_12CT_DCU7Fault_U8<<database->DR11_12CT_DCU7EmUnlock_B1
            <<database->DR11_12CT_DCU7ObstacleDetcted_B1<<database->DR11_12CT_DCU7TotallyOpen_B1<<database->DR11_12CT_DCU7TotallyClose_B1;
    setDOORStatus(this->ui->Tc2Door7lbl,DOORstatus);
    DOORstatus.clear();

    DOORstatus<<database->DR11_12CT_DCU8Isolate_B1<<database->DR11_12CT_DCU8Fault_U8<<database->DR11_12CT_DCU8EmUnlock_B1
            <<database->DR11_12CT_DCU8ObstacleDetcted_B1<<database->DR11_12CT_DCU8TotallyOpen_B1<<database->DR11_12CT_DCU8TotallyClose_B1;
    setDOORStatus(this->ui->Tc2Door8lbl,DOORstatus);
    DOORstatus.clear();

}
void VehiclePowerResetPage::setDOORStatus(QLabel* lbl,QList<bool> status)
{
    //  cutoff >>fault >> emlock >> fangjia >> open >> close >> unknown
    if(status.at(0))
    {
        lbl->setStyleSheet(DOORBYPASS);
    }else if(status.at(1))
    {
        lbl->setStyleSheet(DOORFAULT);
    }else if(status.at(2))
    {
        lbl->setStyleSheet(DOOREMLOCK);
    }else if(status.at(3))
    {
        lbl->setStyleSheet(DOORFANGJIA);
    }else if(status.at(4))
    {
        lbl->setStyleSheet(DOOROPEN);
    }else if(status.at(5))
    {
        lbl->setStyleSheet(DOORCLOSE);
    }else
    {
        lbl->setStyleSheet(DOORUNKNOW);
    }
}

void VehiclePowerResetPage::on_PowerOffPISBtn_pressed()
{
    this->ui->PowerOffPISBtn->setStyleSheet(VPBUTTON_SELECT);
    m_pispoweroff = true;
    this->ui->PowerOnPISBtn->setDisabled(true);
    this->ui->returnBtn->setDisabled(true);
    for(int i = 0; i < 6; i++)
    {
        this->database->HMiCT_PowerOFF_B1[i] = Buttonstatus[i];
    }
}

void VehiclePowerResetPage::on_PowerOnPISBtn_pressed()
{
    this->ui->PowerOnPISBtn->setStyleSheet(VPBUTTON_SELECT);
    m_pispoweron = true;
    this->ui->PowerOffPISBtn->setDisabled(true);
    this->ui->returnBtn->setDisabled(true);
    for(int i = 0; i < 6; i++)
    {
        this->database->HMiCT_PowerON_B1[i] = Buttonstatus[i];
    }
}

void VehiclePowerResetPage::on_PowerOffdoorBtn_pressed()
{
    this->ui->PowerOffdoorBtn->setStyleSheet(VPBUTTON_SELECT);
    m_doorpoweroff = true;
    this->ui->PowerOndoorBtn->setDisabled(true);
    this->ui->returnBtn->setDisabled(true);
    for(int i = 0; i < 6; i++)
    {
        this->database->HMiCT_PowerOFF_B1[i+6] = Buttonstatus[i];
    }
}

void VehiclePowerResetPage::on_PowerOndoorBtn_pressed()
{
    this->ui->PowerOndoorBtn->setStyleSheet(VPBUTTON_SELECT);
    m_doorpoweron = true;
    this->ui->PowerOffdoorBtn->setDisabled(true);
    this->ui->returnBtn->setDisabled(true);
    for(int i = 0; i < 6; i++)
    {
        this->database->HMiCT_PowerON_B1[i+6] = Buttonstatus[i];
    }
}
