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
    CrrcFault* m_crrcFault;
    QHash<int, QString> m_StationIDHash;
private slots:
    void on_CurrentFaultBtn_pressed();
    void on_HelpItemBtn_pressed();
};

#endif // HEADER_H
