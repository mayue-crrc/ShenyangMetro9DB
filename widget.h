#ifndef WIDGET_H
#define WIDGET_H

#include <QtGui>
#include <QWidget>
#include <QMap>
#include "logger.h"

namespace Ui {
    class Widget;
}
class MyBase;
class Header;
class QTimer;
class Database;
class Navigator;
class CtrlTraingraph;
class Simulation;
class CrrcMvb;
class CrrcFault;
class VehicleRunStatePage;
class VehicleMaintaincePage;
class MaintaincePortsDataPage;
class MaintainceHMICheckPage;
class MaintainceTCMSStatesPage;
class MaintainceHMIInitsetPage;
class MaintainceVersionPage;
class MaintainceWheelsetPage;
class MaintainceDatetimesetPage;
class MaintainceLoadPage;
class MaintainceRunDistancePage;
class MaintainceConsumptionPage;
class MaintainceACPRunPage;
class MaintainceBCUTestPage;
class VehicleCutoffPage;
class VehicleResetPage;
class VehiclePowerResetPage;
class MaintainceAllPortsPage;
class VehicleEBCUPage;
class VehicleEBCUPage2;
class VehicleDCUPage;
class VehicleSIVPage;
class VehicleACPage;
class VehicleACPage2;
class MaintainceRIOMDetailPage;
class VehiclePasswordPage;
class VehicleBypassPage;
class MaintainceTrainNumSetPage;
class VehicleWMSPage;
class MaintainceDataManagementPage;
class VehicleCurrentFaultPage;
class MaintainceTestPage;
class VehicleHistoryFaultPage;
class VehicleUnactivePage;
class CtrlFaultDetailConfirm;
class MaintainceFaultShowPage;
class MaintainceFaultQueryFault;
class MaintainceFaultQueryPage;
class VehicleSIVPage2;

class Widget : public QWidget
{
    Q_OBJECT
    LOG4QT_DECLARE_QCLASS_LOGGER
public:
    explicit Widget(QWidget *parent = 0);
    void keyPressEvent(QKeyEvent *event);
    void mousePressEvent(QMouseEvent *event);
    void showEvent(QShowEvent *);
    QMap<int, MyBase *> widgets;
    bool systimeset(unsigned short int year,unsigned short int month,unsigned short int day,
                     unsigned short int hour,unsigned short int min,unsigned short int sec);


    ~Widget();

public slots:
    void changePage(int page);
    void updatePage();
    void changeUnactivePage();
private:
    Ui::Widget *ui;
    QTimer* timer;
    Database* database;
    Navigator* navigator;
    VehicleRunStatePage* vehicleRunStatePage;
    Header *header;
    CtrlTraingraph* ctrlTraingraph;
//    CtrlFaultDetailConfirm* ctrlFaultDetailConfirm;
    VehicleMaintaincePage* vehicleMaintaincePage;
    MaintaincePortsDataPage* maintaincePortsDataPage;
    MaintainceHMICheckPage* maintainceHMICheckPage;
    MaintainceTCMSStatesPage* maintainceTCMSStatesPage;
    CrrcMvb* crrcMvb;
    CrrcFault* crrcFault;

    Simulation *simulation;
    MaintainceHMIInitsetPage* maintainceHMIInitsetPage;
    MaintainceVersionPage* maintainceVersionPage;
    MaintainceWheelsetPage* maintainceWheelsetPage;
    MaintainceDatetimesetPage* maintainceDatetimesetPage;
    MaintainceLoadPage* maintainceLoadPage;
    MaintainceRunDistancePage* maintainceRunDistancePage;
    MaintainceConsumptionPage* maintainceConsumptionPage;
    MaintainceACPRunPage* maintainceACPRunPage;
    MaintainceBCUTestPage* maintainceBCUTestPage;
    VehicleCutoffPage* vehicleCutoffPage;
    VehicleResetPage* vehicleResetPage;
    VehiclePowerResetPage* vehiclePowerResetPage;
    MaintainceAllPortsPage* maintainceAllPortsPage;
    VehicleEBCUPage* vehicleEBCUPage;
    VehicleEBCUPage2* vehicleEBCUPage2;
    VehicleDCUPage* vehicleDCUPage;
    VehicleSIVPage* vehicleSIVPage;
    VehicleACPage* vehicleACPage;
    VehicleACPage2* vehicleACPage2;
    MaintainceRIOMDetailPage* maintainceRIOMDetailPage;
    VehiclePasswordPage* vehiclePasswordPage;
    VehicleBypassPage* vehicleBypassPage;
    MaintainceTrainNumSetPage* maintainceTrainNumSetPage;
    VehicleWMSPage* vehicleWMSPage;
    MaintainceDataManagementPage* maintainceDataManagementPage;
    VehicleCurrentFaultPage* vehicleCurrentFaultPage;
    MaintainceTestPage* maintainceTestPage;
    VehicleHistoryFaultPage* vehicleHistoryFaultPage;
    VehicleUnactivePage* vehicleUnactivePage;
    MaintainceFaultShowPage* maintainceFaultShowPage;
    MaintainceFaultQueryPage* maintainceFaultQueryPage;
    VehicleSIVPage2* vehicleSIVPage2;
    void VCUtime2HMI10s();

    QTimer* UnactiveTimer60s;
    bool isHMIUnactive;


public:

};

#endif // WIDGET_H
