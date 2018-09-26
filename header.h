#ifndef HEADER_H
#define HEADER_H

#include <QWidget>
#include "mybase.h"
#include "vehiclehelppage.h"
#include "crrcfault.h"
#include "vehiclecutoffhelppage.h"
#include "vehiclepowerresethelppage.h"
#include "vehiclefaulthelppage.h"
#include "qhash.h"
#include "vehiclehvachelppage.h"
#include "vehiclebcuhelppage.h"
#include "vehicledcuhelppage.h"
#include "vehicleacuhelppage.h"
#include "vehicleresethelppage.h"
#include "ctrlbrightnessadjust.h"
#include "vehiclebcuhelppage2.h"
namespace Ui {
    class Header;
}

class Header : public MyBase
{
    Q_OBJECT

public:
    explicit Header(QWidget *parent = 0);
    void updatePage();
    void showEvent(QShowEvent *);
    void setPageName(QString name);
    void getFaultObj(CrrcFault* crrcFault);
    ~Header();

private:
    Ui::Header *ui;
    VehicleHelpPage* helpPage;
    VehicleCutOffHelpPage* cutoffhelpPage;
    VehiclePowerResetHelpPage* powerresethelpPage;
    VehicleFaultHelpPage* faulthelpPage;
    VehicleHVACHelpPage* vehicleHVACHelpPage;
    VehicleBCUHelpPage* vehicleBCUHelpPage;
    VehicleBCUHelpPage2* vehicleBCUHelpPage2;

    VehicleDCUHelpPage* vehicleDCUHelpPage;
    VehicleACUHelpPage* vehicleACUHelpPage;
    VehicleResetHelpPage* vehicleResetHelpPage;
    CtrlBrightnessAdjust* ctrlBrightnessAdjust;
    CrrcFault* m_crrcFault;
    QHash<int, QString> m_StationIDHash;
private slots:
    void on_LogoBtn_pressed();
    void on_CurrentFaultBtn_pressed();
    void on_HelpItemBtn_pressed();
};

#endif // HEADER_H
