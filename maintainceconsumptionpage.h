#ifndef MAINTAINCECONSUMPTIONPAGE_H
#define MAINTAINCECONSUMPTIONPAGE_H

#include "mybase.h"
#include "qtimer.h"

namespace Ui {
    class MaintainceConsumptionPage;
}

class MaintainceConsumptionPage : public MyBase
{
    Q_OBJECT

public:
    explicit MaintainceConsumptionPage(QWidget *parent = 0);
    ~MaintainceConsumptionPage();

private:
    Ui::MaintainceConsumptionPage *ui;
    void updatePage();
    QTimer* timer2s;
    bool m_VVVFClear,m_SIVClear;
private slots:
    void on_ConfirmBtn_pressed();
    void on_SIVClearBtn_pressed();
    void on_VVVFClearBtn_pressed();
    void on_returnBtn_pressed();
    void timer2sEvent();
};

#endif // MAINTAINCECONSUMPTIONPAGE_H
