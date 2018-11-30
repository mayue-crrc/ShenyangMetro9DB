#include "maintaincedatamanagementpage.h"
#include "ui_maintaincedatamanagementpage.h"

#define SELECTBUTTONDOWN "background-color:blue;color:rgb(30,200,200);border:2px  solid white"
#define SELECTBUTTONUP "background-color:black;color:rgb(30,200,200);border:2px  solid white"

MaintainceDataManagementPage::MaintainceDataManagementPage(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::MaintainceDataManagementPage)
{
    ui->setupUi(this);

    m_inputbutton = new QPushButton;
//    Confirm = new QPushButton;

    QList<QPushButton *> buttons;

    buttons << ui->Num0 << ui->Num1 << ui->Num2 << ui->Num3 << ui->Num4 << ui->Num5 << ui->Num6 << ui->Num7 << ui->Num8
            << ui->Num9 << ui->NumC;

    foreach (QPushButton *button, buttons)
    {
        connect(button, SIGNAL(clicked()), this, SLOT(NumKeyboardEvent()));
    }

//    confirmbuttons << ui->ConfirmRecordtimeBtn << ui->ConfirmDistanceBtn << ui->ConfirmTEDCU1Btn
//            << ui->ConfirmTEDCU2Btn << ui->ConfirmTEDCU3Btn << ui->ConfirmTEDCU4Btn << ui->ConfirmSESIV1Btn << ui->ConfirmSESIV2Btn
//            << ui->ConfirmSESIV3Btn << ui->ConfirmSESIV4Btn << ui->ConfirmBEDCU1Btn << ui->ConfirmBEDCU2Btn
//            << ui->ConfirmBEDCU3Btn << ui->ConfirmBEDCU4Btn << ui->ConfirmREDCU1Btn << ui->ConfirmREDCU2Btn
//            << ui->ConfirmREDCU3Btn << ui->ConfirmREDCU4Btn << ui->ConfirmACP1RuntimeBtn << ui->ConfirmACP2RuntimeBtn;

//    foreach (QPushButton *button, confirmbuttons)
//    {
//        connect(button, SIGNAL(clicked()), this, SLOT(ConfirmButtonsEvent()));
//    }


    inputbuttons << ui->InputRecordtimeBtn << ui->InputDistanceBtn << ui->InputTEDCU1Btn
            << ui->InputTEDCU2Btn << ui->InputTEDCU3Btn << ui->InputTEDCU4Btn << ui->InputSESIV1Btn << ui->InputSESIV2Btn
            << ui->InputSESIV3Btn << ui->InputSESIV4Btn << ui->InputBEDCU1Btn << ui->InputBEDCU2Btn
            << ui->InputBEDCU3Btn << ui->InputBEDCU4Btn << ui->InputREDCU1Btn << ui->InputREDCU2Btn
            << ui->InputREDCU3Btn << ui->InputREDCU4Btn << ui->InputACP1RuntimeBtn << ui->InputACP2RuntimeBtn;

    foreach (QPushButton *button, inputbuttons)
    {
        connect(button, SIGNAL(clicked()), this, SLOT(InputButtonsEvent()));
    }



    m_Inputvalue = "";

    timer = new QTimer;
    connect(timer,SIGNAL(timeout()),this,SLOT(timer2sout()));
}

MaintainceDataManagementPage::~MaintainceDataManagementPage()
{
    delete ui;
}

void MaintainceDataManagementPage::on_returnBtn_pressed()
{
    ui->ConfirmBtn->setDisabled(false);
    ui->ConfirmBtn->setStyleSheet(PButtonUP);
    this->database->HMiCT_RunStatSetFlag_B1 = false;
    this->database->HMiCT_SetFlagChecker_U8 = 0x55;

    timer->stop();
    changePage(uVehicleRunStatePage);
}
void MaintainceDataManagementPage::InputButtonsEvent()
{
    for(int i = 0; i < inputbuttons.size();i++)
    {
        inputbuttons.at(i)->setStyleSheet(SELECTBUTTONUP);
    }
    ((QPushButton *)this->sender())->setStyleSheet(SELECTBUTTONDOWN);

    QString BtnName = ((QPushButton *)this->sender())->objectName();


    if(BtnName == "InputRecordtimeBtn")
    {
        this->database->HMiCT_RunStatSetType_U8 = 1;
    }else if(BtnName == "InputDistanceBtn")
    {
        this->database->HMiCT_RunStatSetType_U8 = 2;

    }else if(BtnName == "InputTEDCU1Btn")
    {
        this->database->HMiCT_RunStatSetType_U8 = 3;

    }else if(BtnName == "InputTEDCU2Btn")
    {
        this->database->HMiCT_RunStatSetType_U8 = 4;

    }else if(BtnName == "InputTEDCU3Btn")
    {
        this->database->HMiCT_RunStatSetType_U8 = 5;

    }else if(BtnName == "InputTEDCU4Btn")
    {
        this->database->HMiCT_RunStatSetType_U8 = 6;

    }else if(BtnName == "InputSESIV1Btn")
    {
        this->database->HMiCT_RunStatSetType_U8 = 7;

    }else if(BtnName == "InputSESIV2Btn")
    {
        this->database->HMiCT_RunStatSetType_U8 = 8;

    }else if(BtnName == "InputSESIV3Btn")
    {
        this->database->HMiCT_RunStatSetType_U8 = 9;

    }else if(BtnName == "InputSESIV4Btn")
    {
        this->database->HMiCT_RunStatSetType_U8 = 10;

    }else if(BtnName == "InputBEDCU1Btn")
    {
        this->database->HMiCT_RunStatSetType_U8 = 11;

    }else if(BtnName == "InputBEDCU2Btn")
    {
        this->database->HMiCT_RunStatSetType_U8 = 12;

    }else if(BtnName == "InputBEDCU3Btn")
    {
        this->database->HMiCT_RunStatSetType_U8 = 13;

    }else if(BtnName == "InputBEDCU4Btn")
    {
        this->database->HMiCT_RunStatSetType_U8 = 14;

    }else if(BtnName == "InputREDCU1Btn")
    {
        this->database->HMiCT_RunStatSetType_U8 = 15;

    }else if(BtnName == "InputREDCU2Btn")
    {
        this->database->HMiCT_RunStatSetType_U8 = 16;

    }else if(BtnName == "InputREDCU3Btn")
    {
        this->database->HMiCT_RunStatSetType_U8 = 17;

    }else if(BtnName == "InputREDCU4Btn")
    {
        this->database->HMiCT_RunStatSetType_U8 = 18;

    }else if(BtnName == "InputACP1RuntimeBtn")
    {
        this->database->HMiCT_RunStatSetType_U8 = 19;

    }else if(BtnName == "InputACP2RuntimeBtn")
    {
        this->database->HMiCT_RunStatSetType_U8 = 20;

    }else
    {
        this->database->HMiCT_RunStatSetType_U8 = 0;

        return ;
    }
    m_inputbutton = ((QPushButton *)this->sender());
    m_Inputvalue.clear();
    m_Inputvalue = m_inputbutton->text();
}

void MaintainceDataManagementPage::NumKeyboardEvent()
{

    if(((QPushButton *)this->sender())->text() == "C")
    {
        if(m_Inputvalue.size()>0)
        m_Inputvalue = m_Inputvalue.left(m_Inputvalue.length()-1);
    }else
    {
        m_Inputvalue.append(((QPushButton *)this->sender())->text());
    }
    m_inputbutton->setText(m_Inputvalue);
}
void MaintainceDataManagementPage::timer2sout()
{
    ui->ConfirmBtn->setDisabled(false);
    ui->ConfirmBtn->setStyleSheet(PButtonUP);
    this->database->HMiCT_RunStatSetFlag_B1 = false;
    this->database->HMiCT_SetFlagChecker_U8 = 0x55;

    timer->stop();
}

void MaintainceDataManagementPage::on_ConfirmBtn_pressed()
{

    if(timer->isActive())
    {

    }else
    {
        ui->ConfirmBtn->setDisabled(true);
        ui->ConfirmBtn->setStyleSheet(PButtonDOWN);
        this->database->HMiCT_RunStatSetFlag_B1 = true;
        this->database->HMiCT_RunStatSetData_U32 = m_Inputvalue.toInt();
        logger()->info("修改累计数据类型: "+QString::number(this->database->HMiCT_RunStatSetType_U8)+
                       "   数值:"+ QString::number(this->database->HMiCT_RunStatSetData_U32));

        this->database->HMiCT_SetFlagChecker_U8 = 0xaa;
        timer->start(2000);

    }
}
