#include "maintaincehmiinitsetpage.h"
#include "ui_maintaincehmiinitsetpage.h"
#include "crrcfault.h"
MaintainceHMIInitsetPage::MaintainceHMIInitsetPage(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::MaintainceHMIInitsetPage)
{
    ui->setupUi(this);
    if(MainGetDefaultPara::getInt("/Position/HMI") == 1)
    {
        ui->backgroundlbl->setText("\n\n当前位置 ： TC1");
        this->ui->TC1HMIDBVlbl->setText("TC1 HMI DBVersion:"+CrrcFault::getCrrcFault()->getFaultTypeVersion());
        this->ui->TC2HMIDBVlbl->hide();

        ui->TC1Btn->setStyleSheet(PButtonDOWN);
    }else if(MainGetDefaultPara::getInt("/Position/HMI") == 2)
    {
        ui->backgroundlbl->setText("\n\n当前位置 ： TC2");
        this->ui->TC2HMIDBVlbl->setText("TC2 HMI DBVersion:"+CrrcFault::getCrrcFault()->getFaultTypeVersion());
        this->ui->TC1HMIDBVlbl->hide();

        ui->TC2Btn->setStyleSheet(PButtonDOWN);

    }else
    {
        ui->backgroundlbl->setText("配置文件错误");
    }
    this->ui->TC1HMIDBVlbl->setText("TC1 HMI DBVersion:"+CrrcFault::getCrrcFault()->getFaultTypeVersion());
}

MaintainceHMIInitsetPage::~MaintainceHMIInitsetPage()
{
    delete ui;
}

void MaintainceHMIInitsetPage::on_TC1Btn_pressed()
{
    ui->TC1Btn->setStyleSheet(PButtonDOWN);
    ui->TC2Btn->setStyleSheet(PButtonUP);
    MainGetDefaultPara::set("/Position/HMI",1);
    ui->backgroundlbl->setText("\n\n当前位置 ： TC1");
}

void MaintainceHMIInitsetPage::on_TC2Btn_pressed()
{
    ui->TC2Btn->setStyleSheet(PButtonDOWN);
    ui->TC1Btn->setStyleSheet(PButtonUP);
    MainGetDefaultPara::set("/Position/HMI",2);
    ui->backgroundlbl->setText("\n\n当前位置 ： TC2");
}

void MaintainceHMIInitsetPage::on_returnBtn_pressed()
{
    changePage(uVehicleMaintaincePage);
}



void MaintainceHMIInitsetPage::on_HMIReboot_pressed()
{
    logger()->info("人工重启！");
    system("reboot");
}
