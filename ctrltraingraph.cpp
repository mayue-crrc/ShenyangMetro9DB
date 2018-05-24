#include "ctrltraingraph.h"
#include "ui_ctrltraingraph.h"

CtrlTraingraph::CtrlTraingraph(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::CtrlTraingraph)
{
    ui->setupUi(this);
}

CtrlTraingraph::~CtrlTraingraph()
{
    delete ui;
}
void CtrlTraingraph::updatePage()
{
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
