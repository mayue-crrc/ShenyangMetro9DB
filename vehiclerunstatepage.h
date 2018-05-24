#ifndef VEHICLERUNSTATEPAGE_H
#define VEHICLERUNSTATEPAGE_H

#include "mybase.h"
#include "qlabel.h"
#include "crrcfault.h"
#include "ctrlfaultdetailconfirm.h"
namespace Ui {
    class VehicleRunStatePage;
}

class VehicleRunStatePage : public MyBase
{
    Q_OBJECT

public:
    explicit VehicleRunStatePage(QWidget *parent = 0);
    ~VehicleRunStatePage();

    void updatePage();
    void showEvent(QShowEvent *);

private:
    Ui::VehicleRunStatePage *ui;
    void updateTrainStatus();
    void updateRunStatus();
    void setPBStatus(QLabel* lbl,QList<bool> status);
    void setBStatus(QLabel* lbl,QList<bool> status);
    void setMotorStatus(QLabel* lbl,bool isunknown,signed short int status);
    void setHSCBStatus(QLabel* lbl,bool isunknown,bool status);
    void setACPStatus(QLabel* lbl,QList<bool> status);
    void setSIVStatus(QLabel* lbl,bool isunknown,signed short int status);
    void setBCMStatus(QLabel* lbl,QList<bool> status);
    void setDOORStatus(QLabel* lbl,QList<bool> status);
    void setDOORsubStatus(QLabel* lbl,bool status);
    void setFireStatus(QLabel* lbl,bool status,bool fault);

    CrrcFault* m_crrcFault;
    CtrlFaultDetailConfirm* ctrlFaultDetailConfirm;

private slots:
    void on_BuzzerBtn_pressed();
    void on_FirePageBtn_pressed();
    void on_CutPageBtn_pressed();
    void on_ResetPageBtn_pressed();
    void on_ByPassPageBtn_pressed();
    void on_LMResetPageBtn_pressed();
signals:
    void changePWPage(int);
};

#endif // VEHICLERUNSTATEPAGE_H
