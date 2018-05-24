#ifndef MAINTAINCEHMIINITSETPAGE_H
#define MAINTAINCEHMIINITSETPAGE_H

#include <mybase.h>
#include "MainGetDefaultPara.h"

namespace Ui {
    class MaintainceHMIInitsetPage;
}

class MaintainceHMIInitsetPage : public MyBase
{
    Q_OBJECT

public:
    explicit MaintainceHMIInitsetPage(QWidget *parent = 0);
    ~MaintainceHMIInitsetPage();

private:
    Ui::MaintainceHMIInitsetPage *ui;

private slots:
    void on_HMIReboot_pressed();
    void on_returnBtn_pressed();
    void on_TC2Btn_pressed();
    void on_TC1Btn_pressed();
};

#endif // MAINTAINCEHMIINITSETPAGE_H
