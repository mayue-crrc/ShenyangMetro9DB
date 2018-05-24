#ifndef MAINTAINCEACPRUNPAGE_H
#define MAINTAINCEACPRUNPAGE_H

#include "mybase.h"
#include "qtimer.h"
namespace Ui {
    class MaintainceACPRunPage;
}

class MaintainceACPRunPage : public MyBase
{
    Q_OBJECT

public:
    explicit MaintainceACPRunPage(QWidget *parent = 0);
    ~MaintainceACPRunPage();
    void updatePage();
private:
    Ui::MaintainceACPRunPage *ui;
    QTimer* timer2s;
private slots:
    void on_MP2ClearBtn_pressed();
    void on_MP1ClearBtn_pressed();
    void on_returnBtn_pressed();
    void timer2sEvent();
};

#endif // MAINTAINCEACPRUNPAGE_H
