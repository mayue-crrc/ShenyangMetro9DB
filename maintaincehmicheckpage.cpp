#include "maintaincehmicheckpage.h"
#include "ui_maintaincehmicheckpage.h"

#define BTN_HMICHECK1 "border-image: url(:/images/images/colorCheck1.png);"
#define BTN_HMICHECK2 "border-image: url(:/images/images/colorCheck2.png);"
#define BTN_HMICHECK3 "border-image: url(:/images/images/colorCheck3.png);"


MaintainceHMICheckPage::MaintainceHMICheckPage(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::MaintainceHMICheckPage)
{
    ui->setupUi(this);
}

MaintainceHMICheckPage::~MaintainceHMICheckPage()
{
    delete ui;
}
void MaintainceHMICheckPage::showEvent(QShowEvent *)
{
    this->ui->ColorCheckBtn->setStyleSheet(BTN_HMICHECK1);
}
void MaintainceHMICheckPage::on_ColorCheckBtn_pressed()
{
    static int cnt = 0;
    if(cnt == 0)
    {
        cnt = 1;
        this->ui->ColorCheckBtn->setStyleSheet(BTN_HMICHECK2);
    }else if(cnt == 1)
    {
        cnt = 2;
        this->ui->ColorCheckBtn->setStyleSheet(BTN_HMICHECK3);

    }else if(cnt == 2)
    {
        cnt = 0;
        changePage(uVehicleMaintaincePage);
    }
}
