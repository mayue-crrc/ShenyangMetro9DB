#include "maintaincebcutestpage.h"
#include "ui_maintaincebcutestpage.h"

MaintainceBCUTestPage::MaintainceBCUTestPage(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::MaintainceBCUTestPage)
{
    ui->setupUi(this);
    m_selftestready = false;
}

MaintainceBCUTestPage::~MaintainceBCUTestPage()
{
    delete ui;
}
void MaintainceBCUTestPage::updatePage()
{
    setlabelstates(ui->testconditionTC1J1lbl,this->database->BR1CT_TC1Bg1BCUSelfTestReady_B1);
    setlabelstates(ui->testconditionTC1J2lbl,this->database->BR1CT_TC1Bg2BCUSelfTestReady_B1);
    setlabelstates(ui->testconditionMP1J1lbl,this->database->BR1CT_MP1Bg1BCUSelfTestReady_B1);
    setlabelstates(ui->testconditionMP1J2lbl,this->database->BR1CT_MP1Bg2BCUSelfTestReady_B1);
    setlabelstates(ui->testconditionM1J1lbl,this->database->BR1CT_M1Bg1BCUSelfTestReady_B1);
    setlabelstates(ui->testconditionM1J2lbl,this->database->BR1CT_M1Bg2BCUSelfTestReady_B1);

    setlabelstates(ui->testconditionTC2J1lbl,this->database->BR2CT_TC2Bg1BCUSelfTestReady_B1);
    setlabelstates(ui->testconditionTC2J2lbl,this->database->BR2CT_TC2Bg2BCUSelfTestReady_B1);
    setlabelstates(ui->testconditionMP2J1lbl,this->database->BR2CT_MP2Bg1BCUSelfTestReady_B1);
    setlabelstates(ui->testconditionMP2J2lbl,this->database->BR2CT_MP2Bg2BCUSelfTestReady_B1);
    setlabelstates(ui->testconditionM2J1lbl,this->database->BR2CT_M2Bg1BCUSelfTestReady_B1);
    setlabelstates(ui->testconditionM2J2lbl,this->database->BR2CT_M2Bg2BCUSelfTestReady_B1);

    m_selftestready = this->database->BR1CT_TC1Bg1BCUSelfTestReady_B1&&
                      this->database->BR1CT_TC1Bg2BCUSelfTestReady_B1&&
                      this->database->BR1CT_MP1Bg1BCUSelfTestReady_B1&&
                      this->database->BR1CT_MP1Bg2BCUSelfTestReady_B1&&
                      this->database->BR1CT_M1Bg1BCUSelfTestReady_B1&&
                      this->database->BR1CT_M1Bg2BCUSelfTestReady_B1&&
                      this->database->BR2CT_TC2Bg1BCUSelfTestReady_B1&&
                     this->database->BR2CT_TC2Bg2BCUSelfTestReady_B1&&
                     this->database->BR2CT_MP2Bg1BCUSelfTestReady_B1&&
                     this->database->BR2CT_MP2Bg2BCUSelfTestReady_B1&&
                     this->database->BR2CT_M2Bg1BCUSelfTestReady_B1&&
                     this->database->BR2CT_M2Bg2BCUSelfTestReady_B1;
//    if(m_selftestready)
//    {
//        ui->pushButton->setDisabled(false);
//    }else{
//        ui->pushButton->setDisabled(true);
//    }

    if(this->database->BR1CT_24HourNoSelfTest_B1)
    {
        ui->untestin24hourTC1lbl->setStyleSheet(LABELRED);
    }else
    {
        ui->untestin24hourTC1lbl->setStyleSheet(LABELWHITE);
    }

    if(this->database->BR2CT_24HourNoSelfTest_B1)
    {
        ui->untestin24hourTC2lbl->setStyleSheet(LABELRED);
    }else
    {
        ui->untestin24hourTC2lbl->setStyleSheet(LABELWHITE);
    }

    QList<bool> tmp;
    tmp<<this->database->BR1CT_TC1Bg1BCUSTInterrupted_B1<<this->database->BR1CT_TC1Bg1BCUSelfTestFailed_B1<<
            this->database->BR1CT_TC1Bg1BCUSelfTestPass_B1<<this->database->BR1CT_TC1Bg1BCUSelfTesting_B1;
    setlabelstates(this->ui->testresTC1J1lbl,tmp);

    tmp.clear();
    tmp<<this->database->BR1CT_TC1Bg2BCUSTInterrupted_B1<<this->database->BR1CT_TC1Bg2BCUSelfTestFailed_B1<<
            this->database->BR1CT_TC1Bg2BCUSelfTestPass_B1<<this->database->BR1CT_TC1Bg2BCUSelfTesting_B1;
    setlabelstates(this->ui->testresTC1J2lbl,tmp);

    tmp.clear();
    tmp<<this->database->BR2CT_TC2Bg1BCUSTInterrupted_B1<<this->database->BR2CT_TC2Bg1BCUSelfTestFailed_B1<<
            this->database->BR2CT_TC2Bg1BCUSelfTestPass_B1<<this->database->BR2CT_TC2Bg1BCUSelfTesting_B1;
    setlabelstates(this->ui->testresTC2J1lbl,tmp);

    tmp.clear();
    tmp<<this->database->BR2CT_TC2Bg2BCUSTInterrupted_B1<<this->database->BR2CT_TC2Bg2BCUSelfTestFailed_B1<<
            this->database->BR2CT_TC2Bg2BCUSelfTestPass_B1<<this->database->BR2CT_TC2Bg2BCUSelfTesting_B1;
    setlabelstates(this->ui->testresTC2J2lbl,tmp);

    tmp.clear();
    tmp<<this->database->BR1CT_MP1Bg1BCUSTInterrupted_B1<<this->database->BR1CT_MP1Bg1BCUSelfTestFailed_B1<<
            this->database->BR1CT_MP1Bg1BCUSelfTestPass_B1<<this->database->BR1CT_MP1Bg1BCUSelfTesting_B1;
    setlabelstates(this->ui->testresMP1J1lbl,tmp);

    tmp.clear();
    tmp<<this->database->BR1CT_MP1Bg2BCUSTInterrupted_B1<<this->database->BR1CT_MP1Bg2BCUSelfTestFailed_B1<<
            this->database->BR1CT_MP1Bg2BCUSelfTestPass_B1<<this->database->BR1CT_MP1Bg2BCUSelfTesting_B1;
    setlabelstates(this->ui->testresMP1J2lbl,tmp);

    tmp.clear();
    tmp<<this->database->BR2CT_MP2Bg1BCUSTInterrupted_B1<<this->database->BR2CT_MP2Bg1BCUSelfTestFailed_B1<<
            this->database->BR2CT_MP2Bg1BCUSelfTestPass_B1<<this->database->BR2CT_MP2Bg1BCUSelfTesting_B1;
    setlabelstates(this->ui->testresMP2J1lbl,tmp);

    tmp.clear();
    tmp<<this->database->BR2CT_MP2Bg2BCUSTInterrupted_B1<<this->database->BR2CT_MP2Bg2BCUSelfTestFailed_B1<<
            this->database->BR2CT_MP2Bg2BCUSelfTestPass_B1<<this->database->BR2CT_MP2Bg2BCUSelfTesting_B1;
    setlabelstates(this->ui->testresMP2J2lbl,tmp);

    tmp.clear();
    tmp<<this->database->BR1CT_M1Bg1BCUSTInterrupted_B1<<this->database->BR1CT_M1Bg1BCUSelfTestFailed_B1<<
            this->database->BR1CT_M1Bg1BCUSelfTestPass_B1<<this->database->BR1CT_M1Bg1BCUSelfTesting_B1;
    setlabelstates(this->ui->testresM1J1lbl,tmp);

    tmp.clear();
    tmp<<this->database->BR1CT_M1Bg2BCUSTInterrupted_B1<<this->database->BR1CT_M1Bg2BCUSelfTestFailed_B1<<
            this->database->BR1CT_M1Bg2BCUSelfTestPass_B1<<this->database->BR1CT_M1Bg2BCUSelfTesting_B1;
    setlabelstates(this->ui->testresM1J2lbl,tmp);

    tmp.clear();
    tmp<<this->database->BR2CT_M2Bg1BCUSTInterrupted_B1<<this->database->BR2CT_M2Bg1BCUSelfTestFailed_B1<<
            this->database->BR2CT_M2Bg1BCUSelfTestPass_B1<<this->database->BR2CT_M2Bg1BCUSelfTesting_B1;
    setlabelstates(this->ui->testresM2J1lbl,tmp);

    tmp.clear();
    tmp<<this->database->BR2CT_M2Bg2BCUSTInterrupted_B1<<this->database->BR2CT_M2Bg2BCUSelfTestFailed_B1<<
            this->database->BR2CT_M2Bg2BCUSelfTestPass_B1<<this->database->BR2CT_M2Bg2BCUSelfTesting_B1;
    setlabelstates(this->ui->testresM2J2lbl,tmp);

    static int timer2s = 0;
    if(this->database->HMiCT_BCUSelfTestReq_B1)
    {
        if(timer2s++>6 )
        {
            timer2s = 0;
            this->ui->pushButton->setStyleSheet(PButtonUP);
            this->database->HMiCT_BCUSelfTestReq_B1 = false;
        }
    }

}

void MaintainceBCUTestPage::on_returnBtn_pressed()
{
    changePage(uVehicleRunStatePage);
}
void MaintainceBCUTestPage::setlabelstates(QLabel* lbl,bool states)
{
    if(states)
    {
        lbl->setStyleSheet(LABELGREEN);
    }else
    {
        lbl->setStyleSheet(LABELRED);
    }
}
void MaintainceBCUTestPage::setlabelstates(QLabel* lbl,QList<bool> states)
{
    //自检中断－－自检失败－－自检完成－－自检中－－
    if(states.at(0))
    {
        lbl->setText("自检中断");
        lbl->setStyleSheet("color:white");
    }else if(states.at(1))
    {
        lbl->setText("自检失败");
        lbl->setStyleSheet("color:red");
    }else if(states.at(2))
    {
        lbl->setText("自检成功");
        lbl->setStyleSheet("color:green");
    }else if(states.at(3))
    {
        lbl->setText("自检中");
        lbl->setStyleSheet("color:white");
    }else
    {
        lbl->setText("--");
        lbl->setStyleSheet("color:white");
    }
}

void MaintainceBCUTestPage::on_pushButton_pressed()
{
    this->database->HMiCT_BCUSelfTestReq_B1 = true;
    logger()->info("发送制动自检请求");
    this->ui->pushButton->setStyleSheet(PButtonDOWN);
}
