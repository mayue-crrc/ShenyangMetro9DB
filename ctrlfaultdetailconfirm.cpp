#include "ctrlfaultdetailconfirm.h"
#include "ui_ctrlfaultdetailconfirm.h"
#include "qdebug.h"
#include "global.h"

CtrlFaultDetailConfirm::CtrlFaultDetailConfirm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CtrlFaultDetailConfirm)
{
    ui->setupUi(this);
    m_firsttimeshow = true;

    updateTimer = new QTimer;
    connect(updateTimer,SIGNAL(timeout()),this,SLOT(updateWidget()));

    this->m_crrcFault = CrrcFault::getCrrcFault();
}

CtrlFaultDetailConfirm::~CtrlFaultDetailConfirm()
{
    delete ui;
}

void CtrlFaultDetailConfirm::on_FaultConfirmBtn_pressed()
{
    if(this->m_crrcFault->getConfirmFaultListSize()>1)
    {
        this->m_crrcFault->deleteConfirmFault();
        this->ui->Faultname->setText("故障名称: "+this->m_crrcFault->getConfirmFaultCode(this->m_crrcFault->getConfirmFaultListSize()-1)+"  "+
                                     this->m_crrcFault->getConfirmFaultName(this->m_crrcFault->getConfirmFaultListSize()-1));
        this->ui->FaultConfirmBtn->setText("确认"+QString::number(this->m_crrcFault->getConfirmFaultListSize()));
        SetFaultFdetail(this->m_crrcFault->getConfirmFaultDescription(this->m_crrcFault->getConfirmFaultListSize()-1));

    }else
    {
        this->m_crrcFault->deleteConfirmFault();
        this->updateTimer->stop();
        this->close();
    }
}
void CtrlFaultDetailConfirm::showFaultDetail()
{
    if(m_crrcFault->getConfirmFaultListSize()>0)
    {
        this->show();

        this->ui->Faultname->setText("故障名称: "+this->m_crrcFault->getConfirmFaultCode(this->m_crrcFault->getConfirmFaultListSize()-1)+"  "+
                                     this->m_crrcFault->getConfirmFaultName(this->m_crrcFault->getConfirmFaultListSize()-1));
        this->ui->FaultConfirmBtn->setText("确认"+QString::number(this->m_crrcFault->getConfirmFaultListSize()));
        SetFaultFdetail(this->m_crrcFault->getConfirmFaultDescription(this->m_crrcFault->getConfirmFaultListSize()-1));

        this->updateTimer->start(1000);
    }

}
void CtrlFaultDetailConfirm::updateWidget()
{

    static int oldIndex = 0;
    if(this->m_crrcFault->getConfirmFaultListSize() > 0)
    {
        if(this->m_firsttimeshow)
        {
            this->ui->Faultname->setText("故障名称: "+this->m_crrcFault->getConfirmFaultCode(this->m_crrcFault->getConfirmFaultListSize()-1)+"  "+
                                         this->m_crrcFault->getConfirmFaultName(this->m_crrcFault->getConfirmFaultListSize()-1));
            this->ui->FaultConfirmBtn->setText("确认"+QString::number(this->m_crrcFault->getConfirmFaultListSize()));
            SetFaultFdetail(this->m_crrcFault->getConfirmFaultDescription(this->m_crrcFault->getConfirmFaultListSize()-1));
            this->m_firsttimeshow = false ;

        }else if(oldIndex != this->m_crrcFault->getConfirmFaultListSize()-1)
        {
            this->ui->Faultname->setText("故障名称: "+this->m_crrcFault->getConfirmFaultCode(this->m_crrcFault->getConfirmFaultListSize()-1)
                                         +"  "+
                                         this->m_crrcFault->getConfirmFaultName(this->m_crrcFault->getConfirmFaultListSize()-1));
            this->ui->FaultConfirmBtn->setText("确认"+QString::number(this->m_crrcFault->getConfirmFaultListSize()));
            SetFaultFdetail(this->m_crrcFault->getConfirmFaultDescription(this->m_crrcFault->getConfirmFaultListSize()-1));
        }
        oldIndex = this->m_crrcFault->getConfirmFaultListSize();
    }else
    {
        oldIndex = 0;
        this->updateTimer->stop();
        this->close();
    }



}
void CtrlFaultDetailConfirm::SetFaultFdetail(QString Fdetail)
{
    QStringList stringList = Fdetail.split("|");
    QString t_detail = "";
    if(stringList.size() > 1)
    {
        for(int i = 0; i < stringList.size();i++)
        {
            t_detail = t_detail + stringList.at(i)+"\n";
        }
        ui->FaultTips->setText(t_detail);//Fdetail);
    }else
    {
        ui->FaultTips->setText(Fdetail);

    }

}

void CtrlFaultDetailConfirm::on_FaultAllConfirmBtn_pressed()
{
    this->m_crrcFault->deleteAllconfirmFault();
    this->updateTimer->stop();
    this->close();
}
