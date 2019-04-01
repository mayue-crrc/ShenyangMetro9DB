#include "maintaincefaultquerypage.h"
#include "ui_maintaincefaultquerypage.h"
#include "crrcfault.h"
#include "qdebug.h"
#define FAULTEXISTS    "font: 20px, \"微软雅黑\";color: white;background-color: rgb(0, 128, 128);border-top: 2px solid white;border-left: 2px solid white;border-radius:8px;"
#define FAULTNOTEXISTS "font: 20px, \"微软雅黑\";color: white;background-color: gray;border-top: 2px solid white;border-left: 2px solid white;border-radius:8px;"
MaintainceFaultQueryPage::MaintainceFaultQueryPage(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::MaintainceFaultQueryPage)
{
    ui->setupUi(this);
    QList <QPushButton* >TrainBtnList;

    TrainBtnList<<this->ui->TC1<<this->ui->MP1<<this->ui->M1<<this->ui->M2<<this->ui->MP2<<this->ui->TC2;
    foreach (QPushButton *button, TrainBtnList)
    {
        connect(button, SIGNAL(clicked()), this, SLOT(TrainSelectEvent()));
    }

    QList <QPushButton* >SysBtnList;
    SysBtnList<<this->ui->TCMS<<this->ui->BCU<<this->ui->DCU
            <<this->ui->ACM<<this->ui->EDCU<<this->ui->PIS
            <<this->ui->WMS<<this->ui->HVAC;
    foreach (QPushButton *button, SysBtnList)
    {
        connect(button, SIGNAL(clicked()), this, SLOT(SystemSelectEvent()));
    }

    m_TrainSelect = "";
    m_SysSelect = "";
}

MaintainceFaultQueryPage::~MaintainceFaultQueryPage()
{
    delete ui;
}

void MaintainceFaultQueryPage::TrainSelectEvent()
{
    m_TrainSelect = ((QPushButton *)this->sender())->objectName();
    emit QueryFault(m_TrainSelect,Positon);
    //CrrcFault::getCrrcFault()->getQueryFaultOfEachVehicle(m_TrainSelect);
    changePage(uMaintainceFaultShowPage);

}
void MaintainceFaultQueryPage::SystemSelectEvent()
{
    m_SysSelect = ((QPushButton *)this->sender())->objectName();
    emit QueryFault(m_SysSelect,System);
    //CrrcFault::getCrrcFault()->getQueryFaultOfEachSystem(m_SysSelect);
    changePage(uMaintainceFaultShowPage);

}
void MaintainceFaultQueryPage::on_returnBtn_pressed()
{
    changePage(uVehicleMaintaincePage);
}
void MaintainceFaultQueryPage::updatePage()
{
    if(CrrcFault::getCrrcFault()->isRunning())
    {
        setBtnsStyle(this->ui->TC1,CrrcFault::getCrrcFault()->getFaultCntOfEachVehicle("TC1"));
        setBtnsStyle(this->ui->MP1,CrrcFault::getCrrcFault()->getFaultCntOfEachVehicle("MP1"));
        setBtnsStyle(this->ui->M1,CrrcFault::getCrrcFault()->getFaultCntOfEachVehicle("M1"));
        setBtnsStyle(this->ui->M2,CrrcFault::getCrrcFault()->getFaultCntOfEachVehicle("M2"));
        setBtnsStyle(this->ui->MP2,CrrcFault::getCrrcFault()->getFaultCntOfEachVehicle("MP2"));
        setBtnsStyle(this->ui->TC2,CrrcFault::getCrrcFault()->getFaultCntOfEachVehicle("TC2"));

        setBtnsStyle(this->ui->TCMS,CrrcFault::getCrrcFault()->getFaultCntOfEachSystem("TCMS"));
        setBtnsStyle(this->ui->BCU,CrrcFault::getCrrcFault()->getFaultCntOfEachSystem("BCU"));
        setBtnsStyle(this->ui->DCU,CrrcFault::getCrrcFault()->getFaultCntOfEachSystem("DCU"));
        setBtnsStyle(this->ui->ACM,CrrcFault::getCrrcFault()->getFaultCntOfEachSystem("ACM"));
        setBtnsStyle(this->ui->EDCU,CrrcFault::getCrrcFault()->getFaultCntOfEachSystem("EDCU"));
        setBtnsStyle(this->ui->PIS,CrrcFault::getCrrcFault()->getFaultCntOfEachSystem("PIS"));
        setBtnsStyle(this->ui->WMS,CrrcFault::getCrrcFault()->getFaultCntOfEachSystem("WMS"));
        setBtnsStyle(this->ui->HVAC,CrrcFault::getCrrcFault()->getFaultCntOfEachSystem("HVAC"));
    }

    if(this->database->CTHM_Forward_B1)
    {
        this->ui->tc1directionlbl->show();
        this->ui->tc2directionlbl->hide();
    }else if(this->database->CTHM_Backward_B1)
    {
        this->ui->tc2directionlbl->show();
        this->ui->tc1directionlbl->hide();
    }else
    {
        this->ui->tc1directionlbl->hide();
        this->ui->tc2directionlbl->hide();
    }

    //钥匙激活
    if(this->database->CTHM_TC1Active_B1)
    {
        this->ui->tc1keylbl->setStyleSheet(KEYACTIVETC1);
    }else
    {
        this->ui->tc1keylbl->setStyleSheet(KEYNOACTIVETC1);
    }

    if(this->database->CTHM_TC2Active_B1)
    {
        this->ui->tc2keylbl->setStyleSheet(KEYACTIVETC2);
    }else
    {
        this->ui->tc2keylbl->setStyleSheet(KEYNOACTIVETC2);
    }

    QString tmp;
    tmp.sprintf("%02d",this->database->CTHM_TrainNum_U8);
    this->ui->tc1lbl->setText("09"+tmp+"1");
    this->ui->mp1lbl->setText("09"+tmp+"2");
    this->ui->m1lbl->setText("09"+tmp+"3");
    this->ui->m2lbl->setText("09"+tmp+"4");
    this->ui->mp2lbl->setText("09"+tmp+"5");
    this->ui->tc2lbl->setText("09"+tmp+"6");
}
void MaintainceFaultQueryPage::setBtnsStyle(QPushButton* btn,int cnt)
{
    if(cnt>0)
    {
        btn->setStyleSheet(FAULTEXISTS);
        btn->setDisabled(false);
    }else
    {
        btn->setStyleSheet(FAULTNOTEXISTS);
        btn->setDisabled(true);

    }
}
