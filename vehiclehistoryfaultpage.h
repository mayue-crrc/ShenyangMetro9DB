#ifndef VEHICLEHISTORYFAULTPAGE_H
#define VEHICLEHISTORYFAULTPAGE_H

#include <mybase.h>
#include "crrcfault.h"
#include "qlabel.h"

namespace Ui {
    class VehicleHistoryFaultPage;
}

class VehicleHistoryFaultPage : public MyBase
{
    Q_OBJECT

public:
    explicit VehicleHistoryFaultPage(QWidget *parent = 0);
    ~VehicleHistoryFaultPage();
    void GetcrrcFaultInfo(CrrcFault* crrcFault);
    void updatePage();
private:
    Ui::VehicleHistoryFaultPage *ui;
    CrrcFault* m_crrcFault;
    int m_currentPageIndex,m_totalPageIndex,m_totalFaultNum,m_currentPageFaultNum;

private slots:
    void on_NextPageBtn_pressed();
    void on_PrePageBtn_pressed();
};

#endif // VEHICLEHISTORYFAULTPAGE_H
