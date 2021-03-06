#ifndef VEHICLECURRENTFAULTPAGE_H
#define VEHICLECURRENTFAULTPAGE_H

#include <mybase.h>
#include "crrcfault.h"
#include "qlabel.h"
namespace Ui {
    class VehicleCurrentFaultPage;
}

class VehicleCurrentFaultPage : public MyBase
{
    Q_OBJECT

public:
    explicit VehicleCurrentFaultPage(QWidget *parent = 0);
    ~VehicleCurrentFaultPage();
    void GetcrrcFaultInfo(CrrcFault* crrcFault);
    void updatePage();
private:
    Ui::VehicleCurrentFaultPage *ui;
    CrrcFault* m_crrcFault;
    int m_currentPageIndex,m_totalPageIndex,m_totalFaultNum,m_currentPageFaultNum;
    void setMetroStyle(QLabel* lbl,int cnt);
    int m_currentButtonsDown;
    void SetFaultFdetail(QString Fdetail);

private slots:
    void on_BTNClose_pressed();
    void on_NextPageBtn_pressed();
    void on_PrePageBtn_pressed();

    void ButtonsPressEvent();
};

#endif // VEHICLECURRENTFAULTPAGE_H
