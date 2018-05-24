#ifndef MAINTAINCETESTPAGE_H
#define MAINTAINCETESTPAGE_H

#include "mybase.h"
#include "qlabel.h"
#include "qpushbutton.h"
namespace Ui {
    class MaintainceTestPage;
}

class MaintainceTestPage : public MyBase
{
    Q_OBJECT

public:
    explicit MaintainceTestPage(QWidget *parent = 0);
    ~MaintainceTestPage();
    void updatePage();
private:
    Ui::MaintainceTestPage *ui;
    void setlabelstates(QLabel* lbl,bool valid,int value);

private slots:
    void on_StopTestBtn_pressed();
    void on_StartTestBtn_pressed();
    void on_returnBtn_pressed();
};

#endif // MAINTAINCETESTPAGE_H
