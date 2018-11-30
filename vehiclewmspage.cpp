#include "vehiclewmspage.h"
#include "ui_vehiclewmspage.h"

#define WMSLABELGREEN "border-radius:8px;color:white;background-color:green;font:20px  \"微软雅黑\";"
#define WMSLABELRED "border-radius:8px;color:white;background-color:red;font:20px  \"微软雅黑\";"

VehicleWMSPage::VehicleWMSPage(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::VehicleWMSPage)
{
    ui->setupUi(this);
}

VehicleWMSPage::~VehicleWMSPage()
{
    delete ui;
}

void VehicleWMSPage::updatePage()
{
    setlabelstatus(this->ui->Area1TC1lbl,this->database->WSCT_Car1Zone1DetecterFlt_B1,this->database->WSCT_Car1Zone1HeavyFire_B1||this->database->WSCT_Car1Zone1LightFire_B1);
    setlabelstatus(this->ui->Area2TC1lbl,this->database->WSCT_Car1Zone2DetecterFlt_B1,this->database->WSCT_Car1Zone2HeavyFire_B1||this->database->WSCT_Car1Zone2LightFire_B1);
    setlabelstatus(this->ui->HBOXTC1lbl,this->database->WSCT_Car1HDetecterFlt_B1,this->database->WSCT_Car1HFire_B1);
    setlabelstatus(this->ui->RBOXTC1lbl,this->database->WSCT_Car1RDetecterFlt_B1,this->database->WSCT_Car1RFire_B1);
    setlabelstatus(this->ui->DBOXTC1lbl,this->database->WSCT_Car1DDetecterFlt_B1,this->database->WSCT_Car1DFire_B1);
    setlabelstatus(this->ui->FBOXTC1lbl,this->database->WSCT_Car1FDetecterFlt_B1,this->database->WSCT_Car1FFire_B1);

    setlabelstatus(this->ui->Area1TC2lbl,this->database->WSCT_Car6Zone1DetecterFlt_B1,this->database->WSCT_Car6Zone1HeavyFire_B1||this->database->WSCT_Car6Zone1LightFire_B1);
    setlabelstatus(this->ui->Area2TC2lbl,this->database->WSCT_Car6Zone2DetecterFlt_B1,this->database->WSCT_Car6Zone2HeavyFire_B1||this->database->WSCT_Car6Zone2LightFire_B1);
    setlabelstatus(this->ui->HBOXTC2lbl,this->database->WSCT_Car6HDetecterFlt_B1,this->database->WSCT_Car6HFire_B1);
    setlabelstatus(this->ui->RBOXTC2lbl,this->database->WSCT_Car6RDetecterFlt_B1,this->database->WSCT_Car6RFire_B1);
    setlabelstatus(this->ui->DBOXTC2lbl,this->database->WSCT_Car6DDetecterFlt_B1,this->database->WSCT_Car6DFire_B1);
    setlabelstatus(this->ui->FBOXTC2lbl,this->database->WSCT_Car6FDetecterFlt_B1,this->database->WSCT_Car6FFire_B1);

    setlabelstatus(this->ui->Area1MP1lbl,this->database->WSCT_Car2Zone1DetecterFlt_B1,this->database->WSCT_Car2Zone1HeavyFire_B1||this->database->WSCT_Car2Zone1LightFire_B1);
    setlabelstatus(this->ui->Area2MP1lbl,this->database->WSCT_Car2Zone2DetecterFlt_B1,this->database->WSCT_Car2Zone2HeavyFire_B1||this->database->WSCT_Car2Zone2LightFire_B1);
    setlabelstatus(this->ui->RBOXMP1lbl,this->database->WSCT_Car2RDetecterFlt_B1,this->database->WSCT_Car2RFire_B1);
    setlabelstatus(this->ui->FBOXMP1lbl,this->database->WSCT_Car2FDetecterFlt_B1,this->database->WSCT_Car2FFire_B1);

    setlabelstatus(this->ui->Area1M1lbl,this->database->WSCT_Car3Zone1DetecterFlt_B1,this->database->WSCT_Car3Zone1HeavyFire_B1||this->database->WSCT_Car3Zone1LightFire_B1);
    setlabelstatus(this->ui->Area2M1lbl,this->database->WSCT_Car3Zone2DetecterFlt_B1,this->database->WSCT_Car3Zone2HeavyFire_B1||this->database->WSCT_Car3Zone2LightFire_B1);
    setlabelstatus(this->ui->RBOXM1lbl,this->database->WSCT_Car3RDetecterFlt_B1,this->database->WSCT_Car3RFire_B1);
    setlabelstatus(this->ui->FBOXM1lbl,this->database->WSCT_Car3FDetecterFlt_B1,this->database->WSCT_Car3FFire_B1);

    setlabelstatus(this->ui->Area1M2lbl,this->database->WSCT_Car4Zone1DetecterFlt_B1,this->database->WSCT_Car4Zone1HeavyFire_B1||this->database->WSCT_Car4Zone1LightFire_B1);
    setlabelstatus(this->ui->Area2M2lbl,this->database->WSCT_Car4Zone2DetecterFlt_B1,this->database->WSCT_Car4Zone2HeavyFire_B1||this->database->WSCT_Car4Zone2LightFire_B1);
    setlabelstatus(this->ui->RBOXM2lbl,this->database->WSCT_Car4RDetecterFlt_B1,this->database->WSCT_Car4RFire_B1);
    setlabelstatus(this->ui->FBOXM2lbl,this->database->WSCT_Car4FDetecterFlt_B1,this->database->WSCT_Car4FFire_B1);

    setlabelstatus(this->ui->Area1MP2lbl,this->database->WSCT_Car5Zone1DetecterFlt_B1,this->database->WSCT_Car5Zone1HeavyFire_B1||this->database->WSCT_Car5Zone1LightFire_B1);
    setlabelstatus(this->ui->Area2MP2lbl,this->database->WSCT_Car5Zone2DetecterFlt_B1,this->database->WSCT_Car5Zone2HeavyFire_B1||this->database->WSCT_Car5Zone2LightFire_B1);
    setlabelstatus(this->ui->RBOXMP2lbl,this->database->WSCT_Car5RDetecterFlt_B1,this->database->WSCT_Car5RFire_B1);
    setlabelstatus(this->ui->FBOXMP2lbl,this->database->WSCT_Car5FDetecterFlt_B1,this->database->WSCT_Car5FFire_B1);

    setlabelstatus(this->ui->ABTC1lbl,false,this->database->DICT_TC1DI5CH6ABFire1_B1&&this->database->DICT_TC1DI5CH7ABFire2_B1);
    setlabelstatus(this->ui->ABTC2lbl,false,this->database->DICT_TC2DI5CH6ABFire1_B1&&this->database->DICT_TC2DI5CH7ABFire2_B1);
    setlabelstatus(this->ui->PHMP1lbl,false,this->database->DICT_MP1DI1CH22PHFire1_B1&&this->database->DICT_MP1DI1CH23PHFire2_B1);
    setlabelstatus(this->ui->PHMP2lbl,false,this->database->DICT_MP2DI1CH22PHFire1_B1&&this->database->DICT_MP2DI1CH23PHFire2_B1);
    setlabelstatus(this->ui->PBM1lbl,false,this->database->DICT_M1DI1CH13PHFire1_B1&&this->database->DICT_M1DI1CH14PHFire2_B1);
    setlabelstatus(this->ui->PBM2lbl,false,this->database->DICT_M2DI1CH13PHFire1_B1&&this->database->DICT_M2DI1CH14PHFire2_B1);

    setlabelstatus1(this->ui->S1Albl,this->database->WSCT_FrameAWaterInTapStatus_B1);
    setlabelstatus1(this->ui->S1Blbl,this->database->WSCT_FrameBWaterInTapStatus_B1);
    setlabelstatus1(this->ui->S2Albl,this->database->WSCT_FrameAWaterOutTapStatus_B1);
    setlabelstatus1(this->ui->S2Blbl,this->database->WSCT_FrameBWaterOutTapStatus_B1);

    setlabelstatus2(this->ui->S3Albl,this->database->WSCT_FrameANi1PressureStatus_B1);
    setlabelstatus2(this->ui->S3Blbl,this->database->WSCT_FrameBNi1PressureStatus_B1);
    setlabelstatus2(this->ui->S4Albl,this->database->WSCT_FrameANi2PressureStatus_B1);
    setlabelstatus2(this->ui->S4Blbl,this->database->WSCT_FrameBNi2PressureStatus_B1);

    setlabelstatus1(this->ui->S5Albl,this->database->WSCT_FrameAWaterHeaterStatus_B1);
    setlabelstatus1(this->ui->S5Blbl,this->database->WSCT_FrameBWaterHeaterStatus_B1);
    setlabelstatus2(this->ui->S6Albl,this->database->WSCT_FrameAWaterStatus_B1);
    setlabelstatus2(this->ui->S6Blbl,this->database->WSCT_FrameBWaterStatus_B1);

    setlabelstatus(this->ui->cabTC1lbl,this->database->WSCT_Car1CabDetecterFlt_B1,this->database->WSCT_Car1CabFire_B1);
    setlabelstatus(this->ui->cabTC2lbl,this->database->WSCT_Car6CabDetecterFlt_B1,this->database->WSCT_Car6CabFire_B1);

    this->ui->S7Albl->setText(QString::number((float)this->database->WSCT_ATemperature_U16)+"℃");
    this->ui->S7Blbl->setText(QString::number((float)this->database->WSCT_BTemperature_U16)+"℃");

    if(this->database->CTHM_Forward_B1)
    {
        this->ui->Tc1Directionlbl->show();
        this->ui->Tc2Directionlbl->hide();
    }else if(this->database->CTHM_Backward_B1)
    {
        this->ui->Tc2Directionlbl->show();
        this->ui->Tc1Directionlbl->hide();
    }else
    {
        this->ui->Tc1Directionlbl->hide();
        this->ui->Tc2Directionlbl->hide();
    }
    //钥匙激活
    if(this->database->CTHM_TC1Active_B1)
    {
        this->ui->Tc1Cablbl->setStyleSheet(KEYACTIVE);
    }else
    {
        this->ui->Tc1Cablbl->setStyleSheet(KEYNOACTIVE);
    }

    if(this->database->CTHM_TC2Active_B1)
    {
        this->ui->Tc2Cablbl->setStyleSheet(KEYACTIVE);
    }else
    {
        this->ui->Tc2Cablbl->setStyleSheet(KEYNOACTIVE);
    }
    QString tmp;
    tmp.sprintf("%02d",this->database->CTHM_TrainNum_U8);
    this->ui->TrainNumTC1lbl->setText("09"+tmp+"1\n\n");
    this->ui->TrainNumMP1lbl->setText("09"+tmp+"2\n\n");
    this->ui->TrainNumM1lbl->setText("09"+tmp+"3\n\n");
    this->ui->TrainNumM2lbl->setText("09"+tmp+"4\n\n");
    this->ui->TrainNumMP2lbl->setText("09"+tmp+"5\n\n");
    this->ui->TrainNumTC2lbl->setText("09"+tmp+"6\n\n");

}
void VehicleWMSPage::setlabelstatus(QLabel* label, bool status1,bool status2)
{
    if(status2)
    {
        label->setStyleSheet(LABELRED);
    }else if(status1)
    {
        label->setStyleSheet(LABELYELLOW);
    }
    else
    {
        label->setStyleSheet(LABELGREEN);
    }
}
void VehicleWMSPage::setlabelstatus1(QLabel* label, bool status)
{
    if(status)
    {
        label->setStyleSheet(WMSLABELRED);
        label->setText("打开");
    }else
    {
        label->setText("关闭");
        label->setStyleSheet(WMSLABELGREEN);
    }
}
void VehicleWMSPage::setlabelstatus2(QLabel* label, bool status)
{
    if(status)
    {
        label->setText("低");
        label->setStyleSheet(WMSLABELRED);
    }else
    {
        label->setText("正常");
        label->setStyleSheet(WMSLABELGREEN);
    }
}


void VehicleWMSPage::on_returnBtn_pressed()
{
    changePage(uVehicleRunStatePage);
}
