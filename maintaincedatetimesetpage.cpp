#include "maintaincedatetimesetpage.h"
#include "ui_maintaincedatetimesetpage.h"

#define DATEBUTTONDOWN "background-color:blue;color:rgb(30,200,200);border:2px  solid white;font: 28px, \"微软雅黑\""
#define DATEBUTTONUP "background-color:black;color:rgb(30,200,200);border:2px  solid white;font: 28px, \"微软雅黑\""

//#define INPUTBUTTONUP   "color:white;font:18px,\"微软雅黑\";border-top:2px solid  white;border-left: 2px solid white;border-bottom:2px solid transparent;border-right: 2px solid transparent;background:qlineargradient(spread:pad,x1:0,y1:0,x2:0,y2:1,stop:0 rgba(150,228,250,255),stop:0.7 rgba(20,108,140,255) ,stop:1 rgba(100,238,240,255));"
//#define INPUTBUTTONDOWN "color:white;font:18px,\"微软雅黑\";border-top:2px solid  transparent;border-left: 2px solid transparent;border-bottom:2px solid white;border-right: 2px solid white;background:qlineargradient(spread:pad,x1:0,y1:0,x2:0,y2:1,stop:0 rgba(20,108,140,255),stop:0.7 rgba(150,228,40,255) ,stop:1 rgba(20,108,140,255));"
#define INPUTBUTTONUP    "font: 20px, \"微软雅黑\";color: white;background-color: rgb(0, 128, 128);	border-radius:8px;border-top: 2px solid white;border-left: 2px solid white;"
//#define PButtonDOWN  "font: 20px, \"微软雅黑\";color: black;background-color: rgb(0, 255, 255);	border-radius:8px;border-top: 2px solid  rgb(0, 0, 255);border-left: 2px solid  rgb(0, 0, 255);border-bottom: 2px solid white;border-right: 2px solid white;"
#define INPUTBUTTONDOWN  "font: 20px, \"微软雅黑\";color: white;background-color: orange;	border-radius:8px;border-top: 2px solid  orange;border-left: orange;border-bottom: 2px solid white;border-right: 2px solid white;"


MaintainceDatetimesetPage::MaintainceDatetimesetPage(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::MaintainceDatetimesetPage)
{
    ui->setupUi(this);

    this->ctrlNumInputModule = new CtrlNumInputModule(this);
    this->ctrlNumInputModule->setGeometry(350, 280, this->ctrlNumInputModule->width(), this->ctrlNumInputModule->height());
    connect(this->ctrlNumInputModule, SIGNAL(myKeyPress(QString)), this, SLOT(myKeyPressEvent(QString)));
    this->ctrlNumInputModule->show();
    m_BtnPress = 0;
    ui->YearBtn->setStyleSheet(DATEBUTTONDOWN);

    warningdialog = new WarnningDialog(this);
    warningdialog->setGeometry(300,200,warningdialog->width(),warningdialog->height());
    warningdialog->setDialogstyle("时间设定错误！\n请重新设定","background-color: black;border:3px solid white;");
    warningdialog->hide();

    timer = new QTimer;
    connect(timer,SIGNAL(timeout()),this,SLOT(timer3sEvent()));
}

MaintainceDatetimesetPage::~MaintainceDatetimesetPage()
{
    delete ui;
}
void MaintainceDatetimesetPage::myKeyPressEvent(QString key)
{

    QPushButton *buttons[] = {ui->YearBtn,ui->MonthBtn,ui->DayBtn,ui->HourBtn,ui->MinuteBtn,ui->SecondBtn};
    QString text = buttons[m_BtnPress]->text();
    if(key.trimmed() == "C")
    {
        buttons[m_BtnPress]->setText(text.left(text.length()-1));

    }else if(key.trimmed() == "")
    {
        return;
    }else
    {

        if(text.length()<2)
        {
            buttons[m_BtnPress]->setText(text.append(key));
        }else
        {
            buttons[m_BtnPress]->setText("");
        }

    }

    this->database->HMiCT_Year_U8 = ui->YearBtn->text().toInt();
    this->database->HMiCT_Month_U8 = ui->MonthBtn->text().toInt();
    this->database->HMiCT_Day_U8 = ui->DayBtn->text().toInt();
    this->database->HMiCT_Hour_U8 = ui->HourBtn->text().toInt();
    this->database->HMiCT_Minute_U8 = ui->MinuteBtn->text().toInt();
    this->database->HMiCT_Second_U8 = ui->SecondBtn->text().toInt();
}
void MaintainceDatetimesetPage::timer3sEvent()
{
    this->timer->stop();
    this->ui->ConfirmBtn->setStyleSheet(INPUTBUTTONUP);
    this->database->HMiCT_SAVETime_B1 = false;
    this->database->HMiCT_SetFlagChecker_U8 = 0x55;


}
void MaintainceDatetimesetPage::showEvent(QShowEvent *)
{
    ui->YearBtn->setText(QString::number(QDateTime::currentDateTime().date().year()-2000));
    ui->MonthBtn->setText(QString::number(QDateTime::currentDateTime().date().month()));
    ui->DayBtn->setText(QString::number(QDateTime::currentDateTime().date().day()));
    ui->HourBtn->setText(QString::number(QDateTime::currentDateTime().time().hour()));
    ui->MinuteBtn->setText(QString::number(QDateTime::currentDateTime().time().minute()));
    ui->SecondBtn->setText(QString::number(QDateTime::currentDateTime().time().second()));

    this->database->HMiCT_Year_U8 = ui->YearBtn->text().toInt();
    this->database->HMiCT_Month_U8 = ui->MonthBtn->text().toInt();
    this->database->HMiCT_Day_U8 = ui->DayBtn->text().toInt();
    this->database->HMiCT_Hour_U8 = ui->HourBtn->text().toInt();
    this->database->HMiCT_Minute_U8 = ui->MinuteBtn->text().toInt();
    this->database->HMiCT_Second_U8 = ui->SecondBtn->text().toInt();

}
void MaintainceDatetimesetPage::on_returnBtn_pressed()
{
    this->timer->stop();
    this->ui->ConfirmBtn->setStyleSheet(INPUTBUTTONUP);
    this->database->HMiCT_SAVETime_B1 = false;
    this->database->HMiCT_SetFlagChecker_U8 = 0x55;
    changePage(uVehicleMaintaincePage);
}

void MaintainceDatetimesetPage::on_YearBtn_pressed()
{
    setAllBtn(YEARBTN);
}

void MaintainceDatetimesetPage::on_MonthBtn_pressed()
{
    setAllBtn(MONTHBTN);

}

void MaintainceDatetimesetPage::on_DayBtn_pressed()
{
    setAllBtn(DAYBTN);

}

void MaintainceDatetimesetPage::on_HourBtn_pressed()
{
    setAllBtn(HOURBTN);

}

void MaintainceDatetimesetPage::on_MinuteBtn_pressed()
{
    setAllBtn(MINUTEBTN);

}

void MaintainceDatetimesetPage::on_SecondBtn_pressed()
{
    setAllBtn(SECONDBTN);

}
void MaintainceDatetimesetPage::setAllBtn(int BtnID)
{
    QPushButton *buttons[] = {ui->YearBtn,ui->MonthBtn,ui->DayBtn,ui->HourBtn,ui->MinuteBtn,ui->SecondBtn};

    for(int i = 0; i < (sizeof buttons) / (sizeof buttons[0]);i++)
    {
        if( i == BtnID)
        {
            buttons[i]->setStyleSheet(DATEBUTTONDOWN);
        }else
        {
            buttons[i]->setStyleSheet(DATEBUTTONUP);
        }
    }
    m_BtnPress = BtnID;
}



void MaintainceDatetimesetPage::on_ConfirmBtn_pressed()
{


    QDateTime HMItoVCUtime;
    QDate date( this->database->HMiCT_Year_U8+2000, this->database->HMiCT_Month_U8, this->database->HMiCT_Day_U8);
    QTime time( this->database->HMiCT_Hour_U8, this->database->HMiCT_Minute_U8, this->database->HMiCT_Second_U8);
    HMItoVCUtime.setDate(date);
    HMItoVCUtime.setTime(time);

    if(HMItoVCUtime.isValid())
    {
        this->database->HMiCT_SAVETime_B1 = true;
        this->ui->ConfirmBtn->setStyleSheet(INPUTBUTTONDOWN);

        this->database->HMiCT_SetFlagChecker_U8 = 0xaa;


        if(!timer->isActive())
        {
            this->timer->start(3000);
        }

    }else
    {
        this->database->HMiCT_SAVETime_B1 = false;
        warningdialog->show();
    }

}
