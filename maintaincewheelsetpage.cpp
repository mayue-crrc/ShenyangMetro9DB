#include "maintaincewheelsetpage.h"
#include "ui_maintaincewheelsetpage.h"



MaintainceWheelsetPage::MaintainceWheelsetPage(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::MaintainceWheelsetPage)
{
    ui->setupUi(this);

    this->ctrlNumInputModule = new CtrlNumInputModule(this);
    this->ctrlNumInputModule->setGeometry(350, 220, this->ctrlNumInputModule->width(), this->ctrlNumInputModule->height());
    connect(this->ctrlNumInputModule, SIGNAL(myKeyPress(QString)), this, SLOT(myKeyPressEvent(QString)));
    this->ctrlNumInputModule->show();

    warnningDialog = new WarnningDialog(this);
    warnningDialog->setGeometry(300,100,warnningDialog->width(),warnningDialog->height());
    warnningDialog->setDialogstyle("轴轮设定错误！\n请重新设定","background-color: black;border:3px solid white;");
    warnningDialog->hide();

    setAllBtn(ALLSELECT);

    timer = new QTimer;
    connect(timer,SIGNAL(timeout()),this,SLOT(timer3sEvent()));
}

MaintainceWheelsetPage::~MaintainceWheelsetPage()
{
    delete ui;
}

void MaintainceWheelsetPage::myKeyPressEvent(QString key)
{

    QString text = this->ui->WheelVallbl->text();
    if(key.trimmed() == "C")
    {
        this->ui->WheelVallbl->setText(text.left(text.length()-1));
    }else if(key.trimmed() == "")
    {
        return;
    }else
    {
        if(text.length()<3)
        {
            this->ui->WheelVallbl->setText(text.append(key));
        }
    }

}
void MaintainceWheelsetPage::timer3sEvent()
{
    this->timer->stop();
    this->ui->confirmBtn->setStyleSheet(INPUTBUTTONUP);
    this->database->HMiCT_SetFlagChecker_U8 = 0x55;

    resetSaveFlg();
}

void MaintainceWheelsetPage::updatePage()
{
    this->ui->TC1Wheellbl->setText(QString::number(this->database->CTHM_WheelDig1FedBk_U8+770));
    this->ui->TC2Wheellbl->setText(QString::number(this->database->CTHM_WheelDig6FedBk_U8+770));
    this->ui->MP1Wheellbl->setText(QString::number(this->database->CTHM_WheelDig2FedBk_U8+770));
    this->ui->MP2Wheellbl->setText(QString::number(this->database->CTHM_WheelDig5FedBk_U8+770));
    this->ui->M1Wheellbl->setText(QString::number(this->database->CTHM_WheelDig3FedBk_U8+770));
    this->ui->M2Wheellbl->setText(QString::number(this->database->CTHM_WheelDig4FedBk_U8+770));
    this->ui->ReWheellbl->setText(QString::number(this->database->CTHM_WheelDigReFedBk_U8+770));

}

void MaintainceWheelsetPage::on_returnBtn_pressed()
{
    this->timer->stop();
    this->ui->confirmBtn->setStyleSheet(INPUTBUTTONUP);
    this->database->HMiCT_SetFlagChecker_U8 = 0x55;
    resetSaveFlg();
    changePage(uVehicleMaintaincePage);
}

void MaintainceWheelsetPage::on_TC1SelectBtn_pressed()
{
    setAllBtn(TC1SELECT);
}

void MaintainceWheelsetPage::on_MP1SelectBtn_pressed()
{
    setAllBtn(MP1SELECT);

}

void MaintainceWheelsetPage::on_M1SelectBtn_pressed()
{
    setAllBtn(M1SELECT);

}

void MaintainceWheelsetPage::on_M2SelectBtn_pressed()
{
    setAllBtn(M2SELECT);

}

void MaintainceWheelsetPage::on_MP2SelectBtn_pressed()
{
    setAllBtn(MP2SELECT);

}

void MaintainceWheelsetPage::on_TC2SelectBtn_pressed()
{
    setAllBtn(TC2SELECT);

}
void MaintainceWheelsetPage::on_ALLSelectBtn_pressed()
{
    setAllBtn(ALLSELECT);

}
void MaintainceWheelsetPage::setAllBtn(WHEELSELECT BtnID)
{
    ui->WheelVallbl->clear();
    m_wheelselect = BtnID;
    QPushButton *buttons[] = {ui->TC1SelectBtn,ui->MP1SelectBtn,ui->M1SelectBtn,ui->M2SelectBtn,ui->MP2SelectBtn,ui->TC2SelectBtn};
    if(BtnID == ALLSELECT)
    {
        for(int i = 0; i < (sizeof buttons) / (sizeof buttons[0]);i++)
        {
            buttons[i]->setStyleSheet(INPUTBUTTONDOWN);
        }
        this->ui->ReSeleclBtn->setStyleSheet(INPUTBUTTONUP);

    }else if(BtnID == RESELECT)
    {
        for(int i = 0; i < (sizeof buttons) / (sizeof buttons[0]);i++)
        {
            buttons[i]->setStyleSheet(INPUTBUTTONUP);
        }
        this->ui->ReSeleclBtn->setStyleSheet(INPUTBUTTONDOWN);
    }
    else
    {
        for(int i = 0; i < (sizeof buttons) / (sizeof buttons[0]);i++)
        {
            if( i == BtnID)
            {
                buttons[i]->setStyleSheet(INPUTBUTTONDOWN);
            }else
            {
                buttons[i]->setStyleSheet(INPUTBUTTONUP);
            }
        }
        this->ui->ReSeleclBtn->setStyleSheet(INPUTBUTTONUP);

    }

    QString tmp;
    switch (BtnID)
    {
    case ALLSELECT:
        tmp = "所有轴";

        break;
    case TC1SELECT:
        tmp = "1轴";
        break;
    case TC2SELECT:
        tmp = "6轴";
        break;
    case MP1SELECT:
        tmp = "2轴";
        break;
    case M1SELECT:
        tmp = "3轴";
        break;
    case M2SELECT:
        tmp = "4轴";
        break;
    case MP2SELECT:
        tmp = "5轴";
        break;
    case RESELECT:
        tmp = "参考";
        break;
    }
    this->ui->Trainlbl->setText(tmp+"\n(mm)");
}



void MaintainceWheelsetPage::on_confirmBtn_pressed()
{
    int tmp_value = this->ui->WheelVallbl->text().toInt();
    if(tmp_value > 845 || tmp_value < 770)
    {
        this->warnningDialog->show();
        return;
    }else
    {
        this->ui->confirmBtn->setStyleSheet(INPUTBUTTONDOWN);


        switch (m_wheelselect)
        {
        case RESELECT:
            resetSaveFlg();
            this->database->HMiCT_WheelDiaRe_U8 = tmp_value-770;
            this->database->HMiCT_SAVEWheelDigRe_B1 = true;
            this->ui->ReWheelinputlbl->setText(this->ui->WheelVallbl->text());

            logger()->info("修改参考轮径: "+QString::number(tmp_value));

            break;
        case ALLSELECT:
            this->database->HMiCT_SAVEWheelDig1_B1 = true;
            this->database->HMiCT_SAVEWheelDig2_B1 = true;
            this->database->HMiCT_SAVEWheelDig3_B1 = true;
            this->database->HMiCT_SAVEWheelDig4_B1 = true;
            this->database->HMiCT_SAVEWheelDig5_B1 = true;
            this->database->HMiCT_SAVEWheelDig6_B1 = true;
            this->database->HMiCT_SAVEWheelDigRe_B1 = false;

            this->database->HMiCT_WheelDia1_U8 = tmp_value-770;
            this->database->HMiCT_WheelDia2_U8 = tmp_value-770;
            this->database->HMiCT_WheelDia3_U8 = tmp_value-770;
            this->database->HMiCT_WheelDia4_U8 = tmp_value-770;
            this->database->HMiCT_WheelDia5_U8 = tmp_value-770;
            this->database->HMiCT_WheelDia6_U8 = tmp_value-770;

            this->ui->TC1Wheelinputlbl->setText(this->ui->WheelVallbl->text());
            this->ui->TC2Wheelinputlbl->setText(this->ui->WheelVallbl->text());
            this->ui->MP1Wheelinputlbl->setText(this->ui->WheelVallbl->text());
            this->ui->MP2Wheelinputlbl->setText(this->ui->WheelVallbl->text());
            this->ui->M1Wheelinputlbl->setText(this->ui->WheelVallbl->text());
            this->ui->M2Wheelinputlbl->setText(this->ui->WheelVallbl->text());
            logger()->info("修改所有轮径: "+QString::number(tmp_value));

            break;
        case TC1SELECT:
            resetSaveFlg();
            this->database->HMiCT_SAVEWheelDig1_B1 = true;
            this->database->HMiCT_WheelDia1_U8 = tmp_value-770;
            this->ui->TC1Wheelinputlbl->setText(this->ui->WheelVallbl->text());
            logger()->info("修改TC1轮径: "+QString::number(tmp_value));
            break;
        case TC2SELECT:
            resetSaveFlg();
            this->database->HMiCT_SAVEWheelDig6_B1 = true;
            this->database->HMiCT_WheelDia6_U8 = tmp_value-770;
            this->ui->TC2Wheelinputlbl->setText(this->ui->WheelVallbl->text());
            logger()->info("修改TC2轮径: "+QString::number(tmp_value));
            break;
        case MP1SELECT:
            resetSaveFlg();
            this->database->HMiCT_SAVEWheelDig2_B1 = true;
            this->database->HMiCT_WheelDia2_U8 = tmp_value-770;
            this->ui->MP1Wheelinputlbl->setText(this->ui->WheelVallbl->text());
            logger()->info("修改MP1轮径: "+QString::number(tmp_value));
            break;
        case M1SELECT:
            resetSaveFlg();
            this->database->HMiCT_SAVEWheelDig3_B1 = true;
            this->database->HMiCT_WheelDia3_U8 = tmp_value-770;
            this->ui->M1Wheelinputlbl->setText(this->ui->WheelVallbl->text());
            logger()->info("修改M1轮径: "+QString::number(tmp_value));
            break;
        case M2SELECT:
            resetSaveFlg();
            this->database->HMiCT_SAVEWheelDig4_B1 = true;
            this->database->HMiCT_WheelDia4_U8 = tmp_value-770;
            this->ui->M2Wheelinputlbl->setText(this->ui->WheelVallbl->text());
            logger()->info("修改M2轮径: "+QString::number(tmp_value));
            break;
        case MP2SELECT:
            resetSaveFlg();
            this->database->HMiCT_SAVEWheelDig5_B1 = true;
            this->database->HMiCT_WheelDia5_U8 = tmp_value-770;
            this->ui->MP2Wheelinputlbl->setText(this->ui->WheelVallbl->text());
            logger()->info("修改MP2轮径: "+QString::number(tmp_value));
            break;
        }


        this->database->HMiCT_SetFlagChecker_U8 = 0xaa;
        if(!timer->isActive())
        {
            this->timer->start(3000);
        }
    }

}
void MaintainceWheelsetPage::resetSaveFlg()
{
    this->database->HMiCT_SAVEWheelDig1_B1 = false;
    this->database->HMiCT_SAVEWheelDig2_B1 = false;
    this->database->HMiCT_SAVEWheelDig3_B1 = false;
    this->database->HMiCT_SAVEWheelDig4_B1 = false;
    this->database->HMiCT_SAVEWheelDig5_B1 = false;
    this->database->HMiCT_SAVEWheelDig6_B1 = false;
    this->database->HMiCT_SAVEWheelDigRe_B1 = false;

}

void MaintainceWheelsetPage::on_ReSeleclBtn_pressed()
{
    setAllBtn(RESELECT);

}
