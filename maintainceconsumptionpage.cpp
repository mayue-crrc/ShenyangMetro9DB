#include "maintainceconsumptionpage.h"
#include "ui_maintainceconsumptionpage.h"


#define MCBUTTON_UP "border-radius:8px;font: 20px, \"微软雅黑\";color: white;background-color: rgb(0, 128, 128);border-top: 2px solid white;border-left: 2px solid white;"
#define MCBUTTON_DOWN "border-radius:8px;font: 20px, \"微软雅黑\";color: white;background-color:red;border-top: 2px solid;border-left: 2px solid ;border-bottom: 2px solid white;border-right: 2px solid white;"

MaintainceConsumptionPage::MaintainceConsumptionPage(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::MaintainceConsumptionPage)
{
    ui->setupUi(this);
    m_VVVFClear = m_SIVClear = false;
    timer2s = new QTimer;
    connect(timer2s,SIGNAL(timeout()),this,SLOT(timer2sEvent()));
}

MaintainceConsumptionPage::~MaintainceConsumptionPage()
{
    delete ui;
}

void MaintainceConsumptionPage::on_returnBtn_pressed()
{
    this->m_VVVFClear = false;
    this->database->HMiCT_DCURunClear_B1 = false;

    this->m_SIVClear = false;
    this->database->HMiCT_ACMRunClear_B1 = false;

    this->database->HMiCT_SetFlagChecker_U8 = 0x55;

    this->ui->ConfirmBtn->setStyleSheet(MCBUTTON_UP);
    this->ui->VVVFClearBtn->setStyleSheet(MCBUTTON_UP);
    this->ui->SIVClearBtn->setStyleSheet(MCBUTTON_UP);
    this->timer2s->stop();
    changePage(uVehicleMaintaincePage);
}

void MaintainceConsumptionPage::on_VVVFClearBtn_pressed()
{
    this->ui->VVVFClearBtn->setStyleSheet(MCBUTTON_DOWN);
    this->m_VVVFClear = true;
}

void MaintainceConsumptionPage::on_SIVClearBtn_pressed()
{
    this->ui->SIVClearBtn->setStyleSheet(MCBUTTON_DOWN);
    this->m_SIVClear = true;

}

void MaintainceConsumptionPage::on_ConfirmBtn_pressed()
{
    if(this->timer2s->isActive())
    {

    }else
    {
        this->ui->ConfirmBtn->setStyleSheet(MCBUTTON_DOWN);
        QString tmp_record;
        if(this->m_VVVFClear)
        {
            this->database->HMiCT_DCURunClear_B1 = true;
            tmp_record = "牵引计数器 ";
        }

        if(this->m_SIVClear)
        {
            tmp_record = tmp_record+"辅助计数器 ";
            this->database->HMiCT_ACMRunClear_B1 = true;

        }
        logger()->info(tmp_record+"清零");
        this->database->HMiCT_SetFlagChecker_U8 = 0xaa;
        this->timer2s->start(2000);
    }



}
void MaintainceConsumptionPage::updatePage()
{
    QString t_year,t_month,t_day;
    t_year.sprintf("%04d",this->database->DT1CT_RunStatClearTimeYear_U8+2000);
    t_month.sprintf("%02d",this->database->DT1CT_RunStatClearTimeMonth_U8);
    t_day.sprintf("%02d",this->database->DT1CT_RunStatClearTimeDay_U8);

    this->ui->Starttimelbl->setText(t_year+"/"+t_month+"/"+t_day);

    this->ui->VVVFTCUMP1lbl->setText(QString::number(this->database->DT1CT_DCU1ConsEnergy_U32));
    this->ui->VVVFTCUM1lbl->setText(QString::number(this->database->DT1CT_DCU2ConsEnergy_U32));
    this->ui->VVVFTCUM2lbl->setText(QString::number(this->database->DT1CT_DCU3ConsEnergy_U32));
    this->ui->VVVFTCUMP2lbl->setText(QString::number(this->database->DT1CT_DCU4ConsEnergy_U32));

    this->ui->VVVFBCUMP1lbl->setText(QString::number(this->database->DT1CT_DCU1RegBrkEnergy_U32));
    this->ui->VVVFBCUM1lbl->setText(QString::number(this->database->DT1CT_DCU2RegBrkEnergy_U32));
    this->ui->VVVFBCUM2lbl->setText(QString::number(this->database->DT1CT_DCU3RegBrkEnergy_U32));
    this->ui->VVVFBCUMP2lbl->setText(QString::number(this->database->DT1CT_DCU4RegBrkEnergy_U32));

    this->ui->SIVTC1lbl->setText(QString::number(this->database->DT1CT_ACM1ConsEnergy_U32));
    this->ui->SIVM1lbl->setText(QString::number(this->database->DT1CT_ACM2ConsEnergy_U32));
    this->ui->SIVM2lbl->setText(QString::number(this->database->DT1CT_ACM3ConsEnergy_U32));
    this->ui->SIVTC2lbl->setText(QString::number(this->database->DT1CT_ACM4ConsEnergy_U32));


    this->ui->VVVFRMP1lbl->setText(QString::number(this->database->DT1CT_DCU1RhBrkConsEnergy_U32));
    this->ui->VVVFRM1lbl->setText(QString::number(this->database->DT1CT_DCU2RhBrkConsEnergy_U32));
    this->ui->VVVFRM2lbl->setText(QString::number(this->database->DT1CT_DCU3RhBrkConsEnergy_U32));
    this->ui->VVVFRMP2lbl->setText(QString::number(this->database->DT1CT_DCU4RhBrkConsEnergy_U32));

    this->ui->TotalConsumptionlbl->setText(QString::number(this->database->DT1CT_DCU1ConsEnergy_U32+
                                                           this->database->DT1CT_DCU2ConsEnergy_U32+
                                                           this->database->DT1CT_DCU3ConsEnergy_U32+
                                                           this->database->DT1CT_DCU4ConsEnergy_U32+
                                                           this->database->DT1CT_DCU1RhBrkConsEnergy_U32+
                                                           this->database->DT1CT_DCU2RhBrkConsEnergy_U32+
                                                           this->database->DT1CT_DCU3RhBrkConsEnergy_U32+
                                                           this->database->DT1CT_DCU4RhBrkConsEnergy_U32+
                                                           this->database->DT1CT_ACM1ConsEnergy_U32+
                                                           this->database->DT1CT_ACM3ConsEnergy_U32+
                                                           this->database->DT1CT_ACM2ConsEnergy_U32+
                                                           this->database->DT1CT_ACM4ConsEnergy_U32-
                                                           this->database->DT1CT_DCU1RegBrkEnergy_U32-
                                                           this->database->DT1CT_DCU2RegBrkEnergy_U32-
                                                           this->database->DT1CT_DCU3RegBrkEnergy_U32-
                                                           this->database->DT1CT_DCU4RegBrkEnergy_U32));

}
void MaintainceConsumptionPage::timer2sEvent()
{
    this->m_VVVFClear = false;
    this->database->HMiCT_DCURunClear_B1 = false;

    this->m_SIVClear = false;
    this->database->HMiCT_ACMRunClear_B1 = false;

    this->database->HMiCT_SetFlagChecker_U8 = 0x55;

    this->ui->ConfirmBtn->setStyleSheet(MCBUTTON_UP);
    this->ui->VVVFClearBtn->setStyleSheet(MCBUTTON_UP);
    this->ui->SIVClearBtn->setStyleSheet(MCBUTTON_UP);
    this->timer2s->stop();

}
