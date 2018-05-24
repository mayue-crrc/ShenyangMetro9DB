#include "vehiclecurrentfaultpage.h"
#include "ui_vehiclecurrentfaultpage.h"

#define MAXCNTPERPAGE 9

VehicleCurrentFaultPage::VehicleCurrentFaultPage(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::VehicleCurrentFaultPage)
{
    ui->setupUi(this);
    m_currentPageIndex  = 1;
    m_totalPageIndex = 1;
    m_currentPageFaultNum = 0;
    m_totalFaultNum = 0;
}
void VehicleCurrentFaultPage::GetcrrcFaultInfo(CrrcFault* crrcFault)
{
    m_crrcFault = crrcFault;
}
VehicleCurrentFaultPage::~VehicleCurrentFaultPage()
{
    delete ui;
}
void VehicleCurrentFaultPage::updatePage()
{


    m_totalFaultNum = this->m_crrcFault->getCurrentFaultListSize();

    this->ui->faultcntlbl->setText(QString::number(m_totalFaultNum)+" 条故障记录");



    m_totalPageIndex = (m_crrcFault->getCurrentFaultListSize()-1)/MAXCNTPERPAGE+1;
    if(m_crrcFault->getCurrentFaultListSize()%MAXCNTPERPAGE == 0 )
    {
        if(m_crrcFault->getCurrentFaultListSize() == 0)
            m_currentPageFaultNum = 0;
        else
            m_currentPageFaultNum = MAXCNTPERPAGE;

    }else
    {
        m_currentPageFaultNum = m_crrcFault->getCurrentFaultListSize()%MAXCNTPERPAGE;
    }


    QList<QLabel* > t_MetroCode,t_FaultCode,t_FaultLevel,t_FaultName,t_FaultStarttime;
    t_MetroCode<<this->ui->metroCode_row1<<this->ui->metroCode_row1_2<<this->ui->metroCode_row1_3<<this->ui->metroCode_row1_4<<this->ui->metroCode_row1_5
              <<this->ui->metroCode_row1_6<<this->ui->metroCode_row1_7<<this->ui->metroCode_row1_8<<this->ui->metroCode_row1_9;
    t_FaultCode<<this->ui->faultCode_row1<<this->ui->faultCode_row2<<this->ui->faultCode_row3<<this->ui->faultCode_row4<<this->ui->faultCode_row5
              <<this->ui->faultCode_row6<<this->ui->faultCode_row7<<this->ui->faultCode_row8<<this->ui->faultCode_row9;
    t_FaultLevel<<this->ui->faultLevel_row1<<this->ui->faultLevel_row2<<this->ui->faultLevel_row3<<this->ui->faultLevel_row4<<this->ui->faultLevel_row5
              <<this->ui->faultLevel_row6<<this->ui->faultLevel_row7<<this->ui->faultLevel_row8<<this->ui->faultLevel_row9;
    t_FaultName<<this->ui->faultName_row1<<this->ui->faultName_row2<<this->ui->faultName_row3<<this->ui->faultName_row4<<this->ui->faultName_row5
              <<this->ui->faultName_row6<<this->ui->faultName_row7<<this->ui->faultName_row8<<this->ui->faultName_row9;
    t_FaultStarttime<<this->ui->faultStarttime_row1<<this->ui->faultStarttime_row2<<this->ui->faultStarttime_row3<<this->ui->faultStarttime_row4<<this->ui->faultStarttime_row5
            <<this->ui->faultStarttime_row6<<this->ui->faultStarttime_row7<<this->ui->faultStarttime_row8<<this->ui->faultStarttime_row9;

    if(m_currentPageIndex>m_totalPageIndex)
    {
        m_currentPageIndex = m_totalPageIndex;
    }
    else if(m_currentPageIndex<m_totalPageIndex)//not last page
    {
        for(int i = 0; i< MAXCNTPERPAGE;i++)
        {
            t_MetroCode[i]->setText(this->m_crrcFault->getCurrentFaultPosition(i+(m_currentPageIndex-1)*MAXCNTPERPAGE));
            t_FaultCode[i]->setText(this->m_crrcFault->getCurrentFaultCode(i+(m_currentPageIndex-1)*MAXCNTPERPAGE));
            t_FaultLevel[i]->setText(this->m_crrcFault->getCurrentFaultLevel(i+(m_currentPageIndex-1)*MAXCNTPERPAGE));
            t_FaultName[i]->setText(this->m_crrcFault->getCurrentFaultName(i+(m_currentPageIndex-1)*MAXCNTPERPAGE));
            t_FaultStarttime[i]->setText(this->m_crrcFault->getCurrentFaultDate(i+(m_currentPageIndex-1)*MAXCNTPERPAGE)+"\n"+
                                         this->m_crrcFault->getCurrentFaultTime(i+(m_currentPageIndex-1)*MAXCNTPERPAGE));
        }
    }else//last page
    {
        for(int i = 0; i< MAXCNTPERPAGE;i++)
        {
            if(i < m_currentPageFaultNum)//draw fault
            {
                t_MetroCode[i]->setText(this->m_crrcFault->getCurrentFaultPosition(i+(m_currentPageIndex-1)*MAXCNTPERPAGE));
                t_FaultCode[i]->setText(this->m_crrcFault->getCurrentFaultCode(i+(m_currentPageIndex-1)*MAXCNTPERPAGE));
                t_FaultLevel[i]->setText(this->m_crrcFault->getCurrentFaultLevel(i+(m_currentPageIndex-1)*MAXCNTPERPAGE));
                t_FaultName[i]->setText(this->m_crrcFault->getCurrentFaultName(i+(m_currentPageIndex-1)*MAXCNTPERPAGE));
                t_FaultStarttime[i]->setText(this->m_crrcFault->getCurrentFaultDate(i+(m_currentPageIndex-1)*MAXCNTPERPAGE)+"\n"+
                                             this->m_crrcFault->getCurrentFaultTime(i+(m_currentPageIndex-1)*MAXCNTPERPAGE));
            }else//draw block
            {
                t_MetroCode[i]->setText("");
                t_FaultCode[i]->setText("");
                t_FaultLevel[i]->setText("");
                t_FaultName[i]->setText("");
                t_FaultStarttime[i]->setText("");
            }
        }
    }

    this->ui->faultpagelbl->setText("第"+QString::number(m_currentPageIndex)+"页/共"+QString::number(m_totalPageIndex)+"页");

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

    int t_tc1cnt,t_mp1cnt,t_m1cnt,t_m2cnt,t_mp2cnt,t_tc2cnt;
    t_tc1cnt=t_mp1cnt=t_m1cnt=t_m2cnt=t_mp2cnt=t_tc2cnt=0;
    for(int i = 0; i < m_totalFaultNum;i++)
    {
        if(this->m_crrcFault->getCurrentFaultPosition(i) == "TC1")
            t_tc1cnt++;
        if(this->m_crrcFault->getCurrentFaultPosition(i) == "MP1")
            t_mp1cnt++;
        if(this->m_crrcFault->getCurrentFaultPosition(i) == "M1")
            t_m1cnt++;
        if(this->m_crrcFault->getCurrentFaultPosition(i) == "M2")
            t_m2cnt++;
        if(this->m_crrcFault->getCurrentFaultPosition(i) == "MP2")
            t_mp2cnt++;
        if(this->m_crrcFault->getCurrentFaultPosition(i) == "TC2")
            t_tc2cnt++;

    }
    setMetroStyle(this->ui->tc1lbl,t_tc1cnt);
    setMetroStyle(this->ui->mp1lbl,t_mp1cnt);
    setMetroStyle(this->ui->m1lbl,t_m1cnt);
    setMetroStyle(this->ui->m2lbl,t_m2cnt);
    setMetroStyle(this->ui->mp2lbl,t_mp2cnt);
    setMetroStyle(this->ui->tc2lbl,t_tc2cnt);


}

void VehicleCurrentFaultPage::on_PrePageBtn_pressed()
{
    if(m_currentPageIndex>1)
        m_currentPageIndex--;
}

void VehicleCurrentFaultPage::on_NextPageBtn_pressed()
{
    if(m_currentPageIndex<m_totalPageIndex)
        m_currentPageIndex++;
}
void VehicleCurrentFaultPage::setMetroStyle(QLabel* lbl,int cnt)
{
    if(cnt > 0)
    {
        lbl->setStyleSheet("font:20px \"微软雅黑\";border:2px solid white;background-color: red;color:black;");
    }else
    {
        lbl->setStyleSheet("font:20px \"微软雅黑\";border:2px solid white;background-color: rgb(255,255,153);color:black;");
    }
}
