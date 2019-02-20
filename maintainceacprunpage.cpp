#include "maintainceacprunpage.h"
#include "ui_maintainceacprunpage.h"

#define MABUTTON_UP "font: 20px, \"微软雅黑\";color: white;background-color: rgb(0, 128, 128);border-top: 2px solid white;border-left: 2px solid white;"
#define MABUTTON_DOWN "font: 20px, \"微软雅黑\";color: white;background-color: rgb(0, 255, 255);border-top: 2px solid  rgb(0, 0, 255);border-left: 2px solid ;border-bottom: 2px solid white;border-right: 2px solid white;"


MaintainceACPRunPage::MaintainceACPRunPage(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::MaintainceACPRunPage)
{
    ui->setupUi(this);
    timer2s = new QTimer;

    connect(timer2s,SIGNAL(timeout()),this,SLOT(timer2sEvent()));
    this->ui->MP1ClearBtn->hide();
    this->ui->MP2ClearBtn->hide();

}

MaintainceACPRunPage::~MaintainceACPRunPage()
{
    delete ui;
}
void MaintainceACPRunPage::updatePage()
{
    QString t_year,t_month,t_day;
    t_year.sprintf("%04d",this->database->DT1CT_AP1ClearTimeYear_U8+2000);
    t_month.sprintf("%02d",this->database->DT1CT_AP1ClearTimeMonth_U8);
    t_day.sprintf("%02d",this->database->DT1CT_AP1ClearTimeDay_U8);
    this->ui->MP1ACPStarttimelbl->setText(t_year+"/"+t_month+"/"+t_day);

    t_year.sprintf("%04d",this->database->DT1CT_AP2ClearTimeYear_U8+2000);
    t_month.sprintf("%02d",this->database->DT1CT_AP2ClearTimeMonth_U8);
    t_day.sprintf("%02d",this->database->DT1CT_AP2ClearTimeDay_U8);
    this->ui->MP2ACPStarttimelbl->setText(t_year+"/"+t_month+"/"+t_day);

    this->ui->MP1ACPTotaltimelbl->setText(QString::number(this->database->DT1CT_TC1APRunTime_U32));
    this->ui->MP2ACPTotaltimelbl->setText(QString::number(this->database->DT1CT_TC2APRunTime_U32));
}
void MaintainceACPRunPage::on_returnBtn_pressed()
{
//    this->database->HMiCT_TC1APClear_B1 = false;
//    this->database->HMiCT_TC2APClear_B1 = false;
//    this->ui->MP1ClearBtn->setStyleSheet(PButtonUP);
//    this->ui->MP2ClearBtn->setStyleSheet(PButtonUP);
//    this->database->HMiCT_SetFlagChecker_U8 = 0x55;

//    timer2s->stop();
    changePage(uVehicleMaintaincePage);
}

void MaintainceACPRunPage::on_MP1ClearBtn_pressed()
{
    if(timer2s->isActive())
    {

    }else
    {
        this->database->HMiCT_TC1APClear_B1 = true;
        logger()->info("空压机1计数清零");
        this->database->HMiCT_SetFlagChecker_U8 = 0xaa;
        this->ui->MP1ClearBtn->setStyleSheet(PButtonDOWN);
        timer2s->start(2000);
    }
}

void MaintainceACPRunPage::on_MP2ClearBtn_pressed()
{
    if(timer2s->isActive())
    {

    }else
    {
        this->database->HMiCT_TC2APClear_B1 = true;
        this->ui->MP2ClearBtn->setStyleSheet(PButtonDOWN);
        logger()->info("空压机2计数清零");
        this->database->HMiCT_SetFlagChecker_U8 = 0xaa;
        timer2s->start(2000);

    }
}
void MaintainceACPRunPage::timer2sEvent()
{
    this->database->HMiCT_TC1APClear_B1 = false;
    this->database->HMiCT_TC2APClear_B1 = false;
    this->ui->MP1ClearBtn->setStyleSheet(PButtonUP);
    this->ui->MP2ClearBtn->setStyleSheet(PButtonUP);
    this->database->HMiCT_SetFlagChecker_U8 = 0x55;

    timer2s->stop();
}
