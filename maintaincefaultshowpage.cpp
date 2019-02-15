#include "maintaincefaultshowpage.h"
#include "ui_maintaincefaultshowpage.h"
#include "crrcfault.h"

#define MAXCNTPERPAGE 9

MaintainceFaultShowPage::MaintainceFaultShowPage(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::MaintainceFaultShowPage)
{
    ui->setupUi(this);
    m_currentPageIndex  = 1;
    m_totalPageIndex = 1;
    m_currentPageFaultNum = 0;
    m_totalFaultNum = 0;
    m_currentButtonsDown = 0;
    this->ui->BTNClose_2->raise();
    this->ui->GROUPBOXFault->hide();

    QList<QPushButton* > m_buttons;
    m_buttons<< this->ui->BTNRow<<this->ui->BTNRow_2<<this->ui->BTNRow_3<<this->ui->BTNRow_4<<this->ui->BTNRow_5<<
              this->ui->BTNRow_6<<this->ui->BTNRow_7<<this->ui->BTNRow_8<<this->ui->BTNRow_9;

    foreach(QPushButton* btn,m_buttons)
    {
        connect(btn,SIGNAL(pressed()),this,SLOT(ButtonsPressEvent()));
    }

}
void MaintainceFaultShowPage::getQueryStr(QString str, QueryType type)
{
    this->m_QueryStr = str;
    this->m_type = type;
}
void MaintainceFaultShowPage::showEvent(QShowEvent *)
{
    qDebug()<<m_QueryStr;
    switch (this->m_type){
    case System:
        CrrcFault::getCrrcFault()->getQueryFaultOfEachSystem(m_QueryStr);
        break;
    case Positon:
        CrrcFault::getCrrcFault()->getQueryFaultOfEachVehicle(m_QueryStr);
        break;
    }
}

void MaintainceFaultShowPage::SetFaultFdetail(QString Fdetail)
{
    QStringList stringList = Fdetail.split("|");
    QString t_detail = "";
    if(stringList.size() > 1)
    {
        for(int i = 0; i < stringList.size();i++)
        {
            t_detail = t_detail + stringList.at(i)+"\n";
        }
        ui->FaultTips_2->setText(t_detail);//Fdetail);
    }else
    {
        ui->FaultTips_2->setText(Fdetail);

    }


}
void MaintainceFaultShowPage::ButtonsPressEvent()
{
    if(m_currentPageIndex<m_totalPageIndex)//not last page
        {
            m_currentButtonsDown = ((QPushButton*)this->sender())->whatsThis().toInt();

            this->ui->GROUPBOXFault->show();
            this->SetFaultFdetail(CrrcFault::getCrrcFault()->getHistoryFaultDescription(CrrcFault::getCrrcFault()->getQueryFault()[m_currentButtonsDown+(m_currentPageIndex-1)*MAXCNTPERPAGE]));
            this->ui->Faultname_2->setText("故障名称: "+CrrcFault::getCrrcFault()->getHistoryFaultCode(CrrcFault::getCrrcFault()->getQueryFault()[m_currentButtonsDown+(m_currentPageIndex-1)*MAXCNTPERPAGE])+"  "+
                                         CrrcFault::getCrrcFault()->getHistoryFaultName(CrrcFault::getCrrcFault()->getQueryFault()[m_currentButtonsDown+(m_currentPageIndex-1)*MAXCNTPERPAGE]));
        }else//last page
        {

            if(((QPushButton*)this->sender())->whatsThis().toInt() < m_currentPageFaultNum)//draw fault
            {
                m_currentButtonsDown = ((QPushButton*)this->sender())->whatsThis().toInt();

                this->ui->GROUPBOXFault->show();
                this->SetFaultFdetail(CrrcFault::getCrrcFault()->getHistoryFaultDescription(CrrcFault::getCrrcFault()->getQueryFault()[m_currentButtonsDown+(m_currentPageIndex-1)*MAXCNTPERPAGE]));
                this->ui->Faultname_2->setText("故障名称: "+CrrcFault::getCrrcFault()->getHistoryFaultCode(CrrcFault::getCrrcFault()->getQueryFault()[m_currentButtonsDown+(m_currentPageIndex-1)*MAXCNTPERPAGE])+"  "+
                                             CrrcFault::getCrrcFault()->getHistoryFaultName(CrrcFault::getCrrcFault()->getQueryFault()[m_currentButtonsDown+(m_currentPageIndex-1)*MAXCNTPERPAGE]));
            }

        }
}
MaintainceFaultShowPage::~MaintainceFaultShowPage()
{
    delete ui;
}

void MaintainceFaultShowPage::on_returnBtn_pressed()
{
    m_currentPageIndex  = 1;
    changePage(uMaintainceFaultQureyPage);
}
void MaintainceFaultShowPage::updatePage()
{
    if(!CrrcFault::getCrrcFault()->isRunning())
        return;

    switch (this->m_type){
    case System:
        CrrcFault::getCrrcFault()->getQueryFaultOfEachSystem(m_QueryStr);
        break;
    case Positon:
        CrrcFault::getCrrcFault()->getQueryFaultOfEachVehicle(m_QueryStr);
        break;
    }

    CrrcFault* m_crrcFault = CrrcFault::getCrrcFault();
    m_totalFaultNum = m_crrcFault->getQueryFault().size();

    this->ui->faultcntlbl->setText(QString::number(m_totalFaultNum)+" 条故障记录");




    if(m_totalFaultNum%MAXCNTPERPAGE == 0)
    {
        m_totalPageIndex = m_totalFaultNum/MAXCNTPERPAGE;
        m_currentPageFaultNum = MAXCNTPERPAGE;
    }
    else
    {
        m_totalPageIndex = m_totalFaultNum/MAXCNTPERPAGE+1;
        m_currentPageFaultNum = m_totalFaultNum%MAXCNTPERPAGE;
    }
    this->ui->faultpagelbl->setText("第"+QString::number(m_currentPageIndex)+"页/共"+QString::number(m_totalPageIndex)+"页");

    QList<QLabel* > t_MetroCode,t_FaultCode,t_FaultLevel,t_FaultName,t_StartTime,t_EndTime;
    t_MetroCode<<this->ui->metroCode_row1<<this->ui->metroCode_row1_2<<this->ui->metroCode_row1_3<<this->ui->metroCode_row1_4<<this->ui->metroCode_row1_5
              <<this->ui->metroCode_row1_6<<this->ui->metroCode_row1_7<<this->ui->metroCode_row1_8<<this->ui->metroCode_row1_9;
    t_FaultCode<<this->ui->faultCode_row1<<this->ui->faultCode_row2<<this->ui->faultCode_row3<<this->ui->faultCode_row4<<this->ui->faultCode_row5
              <<this->ui->faultCode_row6<<this->ui->faultCode_row7<<this->ui->faultCode_row8<<this->ui->faultCode_row9;
    t_FaultLevel<<this->ui->faultLevel_row1<<this->ui->faultLevel_row2<<this->ui->faultLevel_row3<<this->ui->faultLevel_row4<<this->ui->faultLevel_row5
              <<this->ui->faultLevel_row6<<this->ui->faultLevel_row7<<this->ui->faultLevel_row8<<this->ui->faultLevel_row9;
    t_FaultName<<this->ui->faultName_row1<<this->ui->faultName_row2<<this->ui->faultName_row3<<this->ui->faultName_row4<<this->ui->faultName_row5
              <<this->ui->faultName_row6<<this->ui->faultName_row7<<this->ui->faultName_row8<<this->ui->faultName_row9;
    t_StartTime<<this->ui->startTime_row1<<this->ui->startTime_row2<<this->ui->startTime_row3<<this->ui->startTime_row4<<this->ui->startTime_row5
            <<this->ui->startTime_row6<<this->ui->startTime_row7<<this->ui->startTime_row8<<this->ui->startTime_row9;
    t_EndTime<<this->ui->endTime_row1<<this->ui->endTime_row2<<this->ui->endTime_row3<<this->ui->endTime_row4<<this->ui->endTime_row5
            <<this->ui->endTime_row6<<this->ui->endTime_row7<<this->ui->endTime_row8<<this->ui->endTime_row9;

    //当前无故障，clear页面
    if(m_totalFaultNum < 1)
    {
        for(int i = 0; i< MAXCNTPERPAGE;i++)
        {
            t_MetroCode[i]->setText("");
            t_FaultCode[i]->setText("");
            t_FaultLevel[i]->setText("");
            t_FaultName[i]->setText("");
            t_StartTime[i]->setText("");
            t_EndTime[i]->setText("");
        }

        return ;
    }

    if(m_currentPageIndex<m_totalPageIndex)//not last page
    {
        for(int i = 0; i< MAXCNTPERPAGE;i++)
        {
            t_MetroCode[i]->setText(m_crrcFault->getHistoryFaultPosition(m_crrcFault->getQueryFault()[i+(m_currentPageIndex-1)*MAXCNTPERPAGE]));
            t_FaultCode[i]->setText(m_crrcFault->getHistoryFaultCode(m_crrcFault->getQueryFault()[i+(m_currentPageIndex-1)*MAXCNTPERPAGE]));
            t_FaultLevel[i]->setText(m_crrcFault->getHistoryFaultLevel(m_crrcFault->getQueryFault()[i+(m_currentPageIndex-1)*MAXCNTPERPAGE]));
            t_FaultName[i]->setText(m_crrcFault->getHistoryFaultName(m_crrcFault->getQueryFault()[i+(m_currentPageIndex-1)*MAXCNTPERPAGE]));
            t_StartTime[i]->setText(m_crrcFault->getHistoryFaultStartDate(m_crrcFault->getQueryFault()[i+(m_currentPageIndex-1)*MAXCNTPERPAGE])+"\n"+
                                    m_crrcFault->getHistoryFaultStartTime(m_crrcFault->getQueryFault()[i+(m_currentPageIndex-1)*MAXCNTPERPAGE]));
            t_EndTime[i]->setText(m_crrcFault->getHistoryFaultEndDate(m_crrcFault->getQueryFault()[i+(m_currentPageIndex-1)*MAXCNTPERPAGE])+"\n"+
                                    m_crrcFault->getHistoryFaultEndTime(m_crrcFault->getQueryFault()[i+(m_currentPageIndex-1)*MAXCNTPERPAGE]));
        }

    }else//last page
    {
        for(int i = 0; i< MAXCNTPERPAGE;i++)
        {
            if(i < m_currentPageFaultNum)//draw fault
            {
                t_MetroCode[i]->setText(m_crrcFault->getHistoryFaultPosition(m_crrcFault->getQueryFault()[i+(m_currentPageIndex-1)*MAXCNTPERPAGE]));
                t_FaultCode[i]->setText(m_crrcFault->getHistoryFaultCode(m_crrcFault->getQueryFault()[i+(m_currentPageIndex-1)*MAXCNTPERPAGE]));
                t_FaultLevel[i]->setText(m_crrcFault->getHistoryFaultLevel(m_crrcFault->getQueryFault()[i+(m_currentPageIndex-1)*MAXCNTPERPAGE]));
                t_FaultName[i]->setText(m_crrcFault->getHistoryFaultName(m_crrcFault->getQueryFault()[i+(m_currentPageIndex-1)*MAXCNTPERPAGE]));
                t_StartTime[i]->setText(m_crrcFault->getHistoryFaultStartDate(m_crrcFault->getQueryFault()[i+(m_currentPageIndex-1)*MAXCNTPERPAGE])+"\n"+
                                        m_crrcFault->getHistoryFaultStartTime(m_crrcFault->getQueryFault()[i+(m_currentPageIndex-1)*MAXCNTPERPAGE]));
                t_EndTime[i]->setText(m_crrcFault->getHistoryFaultEndDate(m_crrcFault->getQueryFault()[i+(m_currentPageIndex-1)*MAXCNTPERPAGE])+"\n"+
                                        m_crrcFault->getHistoryFaultEndTime(m_crrcFault->getQueryFault()[i+(m_currentPageIndex-1)*MAXCNTPERPAGE]));
            }else//draw block
            {
                t_MetroCode[i]->setText("");
                t_FaultCode[i]->setText("");
                t_FaultLevel[i]->setText("");
                t_FaultName[i]->setText("");
                t_StartTime[i]->setText("");
                t_EndTime[i]->setText("");

            }
        }
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

void MaintainceFaultShowPage::on_PrePageBtn_pressed()
{
    if(m_currentPageIndex>1)
        m_currentPageIndex--;
}

void MaintainceFaultShowPage::on_NextPageBtn_pressed()
{
    if(m_currentPageIndex<m_totalPageIndex)
        m_currentPageIndex++;
}

void MaintainceFaultShowPage::on_BTNClose_2_pressed()
{
    this->ui->GROUPBOXFault->hide();
}
