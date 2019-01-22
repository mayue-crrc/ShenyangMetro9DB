#include "maintaincetrainnumsetpage.h"
#include "ui_maintaincetrainnumsetpage.h"

//#define INPUTBUTTONUP   "color:white;font:18px,\"微软雅黑\";border-top:2px solid  white;border-left: 2px solid white;border-bottom:2px solid transparent;border-right: 2px solid transparent;background:qlineargradient(spread:pad,x1:0,y1:0,x2:0,y2:1,stop:0 rgba(150,228,250,255),stop:0.7 rgba(20,108,140,255) ,stop:1 rgba(100,238,240,255));"
//#define INPUTBUTTONDOWN "color:white;font:18px,\"微软雅黑\";border-top:2px solid  transparent;border-left: 2px solid transparent;border-bottom:2px solid white;border-right: 2px solid white;background:qlineargradient(spread:pad,x1:0,y1:0,x2:0,y2:1,stop:0 rgba(20,108,140,255),stop:0.7 rgba(150,228,40,255) ,stop:1 rgba(20,108,140,255));"
#define INPUTBUTTONUP    "font: 20px, \"微软雅黑\";color: white;background-color: rgb(0, 128, 128);	border-radius:8px;border-top: 2px solid white;border-left: 2px solid white;"
//#define PButtonDOWN  "font: 20px, \"微软雅黑\";color: black;background-color: rgb(0, 255, 255);	border-radius:8px;border-top: 2px solid  rgb(0, 0, 255);border-left: 2px solid  rgb(0, 0, 255);border-bottom: 2px solid white;border-right: 2px solid white;"
#define INPUTBUTTONDOWN  "font: 20px, \"微软雅黑\";color: white;background-color: orange;	border-radius:8px;border-top: 2px solid  orange;border-left: orange;border-bottom: 2px solid white;border-right: 2px solid white;"


MaintainceTrainNumSetPage::MaintainceTrainNumSetPage(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::MaintainceTrainNumSetPage)
{
    ui->setupUi(this);

    this->ctrlNumInputModule = new CtrlNumInputModule(this);
    this->ctrlNumInputModule->setGeometry(350, 200, this->ctrlNumInputModule->width(), this->ctrlNumInputModule->height());
    connect(this->ctrlNumInputModule, SIGNAL(myKeyPress(QString)), this, SLOT(myKeyPressEvent(QString)));
    this->ctrlNumInputModule->show();

    warningdialog = new WarnningDialog(this);
    warningdialog->setGeometry(300,200,warningdialog->width(),warningdialog->height());
    warningdialog->setDialogstyle("车号设定错误！\n请重新设定","background-color: black;border:3px solid white;");
    warningdialog->hide();

    timer = new QTimer;
    connect(timer,SIGNAL(timeout()),this,SLOT(timer3sEvent()));
}

MaintainceTrainNumSetPage::~MaintainceTrainNumSetPage()
{
    delete ui;
}
void MaintainceTrainNumSetPage::updatePage()
{
    QString tmp ;
    tmp.sprintf("%02d",this->database->CTHM_TrainNum_U8);
    this->ui->CurrentNumlbl->setText(tmp);
}

void MaintainceTrainNumSetPage::on_returnBtn_pressed()
{
    this->timer->stop();
    this->ui->ConfirmBtn->setStyleSheet(INPUTBUTTONUP);
    this->database->HMiCT_SAVETrainNum_B1 = false;
    this->database->HMiCT_SetFlagChecker_U8 = 0x55;
    changePage(uVehicleMaintaincePage);
}
void MaintainceTrainNumSetPage::myKeyPressEvent(QString key)
{
    QString text = ui->SettingNumlbl->text();
    if(key.trimmed() == "C")
    {
        ui->SettingNumlbl->setText(text.left(text.length()-1));

    }else if(key.trimmed() == "")
    {
        return;
    }else
    {

        if(text.length()<2)
        {
            ui->SettingNumlbl->setText(text.append(key));
        }else
        {
            ui->SettingNumlbl->setText("");
        }

    }
    this->database->HMiCT_TrainNum_U8 = ui->SettingNumlbl->text().toInt();

}
void MaintainceTrainNumSetPage::timer3sEvent()
{
    this->timer->stop();
    this->ui->ConfirmBtn->setStyleSheet(INPUTBUTTONUP);
    this->database->HMiCT_SAVETrainNum_B1 = false;
    this->database->HMiCT_SetFlagChecker_U8 = 0x55;

}

void MaintainceTrainNumSetPage::on_ConfirmBtn_pressed()
{
    this->ui->ConfirmBtn->setStyleSheet(INPUTBUTTONDOWN);
    this->database->HMiCT_SAVETrainNum_B1 = true;
    this->database->HMiCT_SetFlagChecker_U8 = 0xaa;
    logger()->info("修改车号: "+QString::number(this->database->HMiCT_TrainNum_U8));
    timer->start(3000);

}
