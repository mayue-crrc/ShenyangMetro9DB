#ifndef MAINTAINCEALLPORTSPAGE_H
#define MAINTAINCEALLPORTSPAGE_H

#include "mybase.h"
#include "crrcmvb.h"
#include "qlist.h"
#include "qpushbutton.h"

namespace Ui {
    class MaintainceAllPortsPage;
}

class MaintainceAllPortsPage : public MyBase
{
    Q_OBJECT

public:
    explicit MaintainceAllPortsPage(QWidget *parent = 0);
    ~MaintainceAllPortsPage();
    void updatePage();
    void paintEvent(QPaintEvent *);
    void installMvb(CrrcMvb* crrcMvb);

private:
    Ui::MaintainceAllPortsPage *ui;
    CrrcMvb* crrcMvb;
    QList <int>m_PortsList;
    QList <int> CCUAPorts,CCUBPorts,ERMPorts,RIOMPorts,SIVPorts,WMSATCPorts,EBCUPorts,ACUPorts,PIDSPorts,EDCUPorts,DCUPorts,HMIPorts,CCUDPorts;
    QList<QPushButton*> buttons;

private slots:
    void ButtonsPressEvent();
    void on_returnBtn_pressed();
};

#endif // MAINTAINCEALLPORTSPAGE_H
