#ifndef MAINTAINCERIOMDETAILPAGE_H
#define MAINTAINCERIOMDETAILPAGE_H

#include "mybase.h"
#include "dicontrol.h"
#include "docontrol.h"
#include "axcontrol.h"

enum CurrentForm
{
    TC_DI1 = 0,
    TC_DI2,
    TC_DI3,
    TC_DI4,
    TC_DI5,
    TC_DO,
    TC_AIM,
    MP_DI,
    MP_DO,
    M_DI,
    M_DO


};

namespace Ui {
    class MaintainceRIOMDetailPage;
}

class MaintainceRIOMDetailPage : public MyBase
{
    Q_OBJECT

public:
    explicit MaintainceRIOMDetailPage(QWidget *parent = 0);
    ~MaintainceRIOMDetailPage();
    void updatePage();

private:
    Ui::MaintainceRIOMDetailPage *ui;
    DiControl *di1;
    DoControl *do1;
    DoControl *do2;
    AxControl *ax;
    CurrentForm currentform;

    QList <QString> TC1AXData,TC2AXData;
    void setDataType();
private slots:
    void on_returnBtn_pressed();
    void ButtonsPressEvent();
};

#endif // MAINTAINCERIOMDETAILPAGE_H
