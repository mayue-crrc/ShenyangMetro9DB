#ifndef MAINTAINCEDATETIMESETPAGE_H
#define MAINTAINCEDATETIMESETPAGE_H

#include "mybase.h"
#include "ctrlnuminputmodule.h"
#include "warnningdialog.h"
#include "QTimer"


enum DATESELECT
{
    YEARBTN = 0,
    MONTHBTN,
    DAYBTN,
    HOURBTN,
    MINUTEBTN,
    SECONDBTN
};


namespace Ui {
    class MaintainceDatetimesetPage;
}

class MaintainceDatetimesetPage : public MyBase
{
    Q_OBJECT

public:
    explicit MaintainceDatetimesetPage(QWidget *parent = 0);
    ~MaintainceDatetimesetPage();
    void showEvent(QShowEvent *);

private:
    Ui::MaintainceDatetimesetPage *ui;
    CtrlNumInputModule* ctrlNumInputModule;
    int m_BtnPress;
    void setAllBtn(int BtnID);
    WarnningDialog* warningdialog;
    QTimer* timer;

public slots:
    void myKeyPressEvent(QString key);
    void timer3sEvent();

private slots:
    void on_ConfirmBtn_pressed();
    void on_SecondBtn_pressed();
    void on_MinuteBtn_pressed();
    void on_HourBtn_pressed();
    void on_DayBtn_pressed();
    void on_MonthBtn_pressed();
    void on_YearBtn_pressed();
    void on_returnBtn_pressed();

};

#endif // MAINTAINCEDATETIMESETPAGE_H
