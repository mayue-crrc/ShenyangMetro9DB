#ifndef VEHICLEMAINTAINCEPAGE_H
#define VEHICLEMAINTAINCEPAGE_H

#include "mybase.h"

namespace Ui {
    class VehicleMaintaincePage;
}

class VehicleMaintaincePage : public MyBase
{
    Q_OBJECT

public:
    explicit VehicleMaintaincePage(QWidget *parent = 0);
    ~VehicleMaintaincePage();

private:
    Ui::VehicleMaintaincePage *ui;

private slots:


private slots:

    void on_TestPageBtn_released();
    void on_TestPageBtn_pressed();
    void on_TrainNumBtn_clicked();
    void on_AllDataBtn_pressed();
    void on_DataManagementBtn_released();
    void on_DataManagementBtn_pressed();
    void on_HMIInitBtn_released();
    void on_TCMSStateBtn_pressed();
    void on_RuntestBtn_pressed();
    void on_BrakeTestBtn_pressed();
    void on_LoadBtn_pressed();
    void on_SystimeSetBtn_pressed();
    void on_WheelSetBtn_pressed();
    void on_HMICheckBtn_pressed();
    void on_RIOMIOBtn_pressed();
    void on_PortsDataBtn_pressed();
    void on_TCMSVisionBtn_pressed();
    void on_DistainceBtn_pressed();
    void on_Consumption_pressed();
    void on_APRunningTimeBtn_pressed();
    void on_FaultRecordBtn_pressed();

    void on_TCMSStateBtn_released();
    void on_RuntestBtn_released();
    void on_BrakeTestBtn_released();
    void on_LoadBtn_released();
    void on_SystimeSetBtn_released();
    void on_WheelSetBtn_released();
    void on_HMICheckBtn_released();
    void on_RIOMIOBtn_released();
    void on_PortsDataBtn_released();
    void on_TCMSVisionBtn_released();
    void on_DistainceBtn_released();
    void on_Consumption_released();
    void on_APRunningTimeBtn_released();
    void on_FaultRecordBtn_released();
signals:
    void changePWPage(int);
};

#endif // VEHICLEMAINTAINCEPAGE_H
