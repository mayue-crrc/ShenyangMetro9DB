#ifndef MAINTAINCEPORTSDATAPAGE_H
#define MAINTAINCEPORTSDATAPAGE_H

#include "mybase.h"
#include "crrcmvb.h"

namespace Ui {
    class MaintaincePortsDataPage;
}

class MaintaincePortsDataPage : public MyBase
{
    Q_OBJECT

public:
    explicit MaintaincePortsDataPage(QWidget *parent = 0);
    ~MaintaincePortsDataPage();
    void updatePage();
    void paintEvent(QPaintEvent *);
    void installMvb(CrrcMvb* crrcMvb);
private:
    Ui::MaintaincePortsDataPage *ui;
    QString m_address,m_addressInput;
    CrrcMvb* crrcMvb;

private slots:
    void on_ConfirmBtn_released();
    void on_ConfirmBtn_pressed();
    void on_returnBtn_pressed();
    void NumKeyboardEvent();
};

#endif // MAINTAINCEPORTSDATAPAGE_H
