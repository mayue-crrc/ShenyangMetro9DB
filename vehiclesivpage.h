#ifndef VEHICLESIVPAGE_H
#define VEHICLESIVPAGE_H

#include "mybase.h"
#include "qlabel.h"
namespace Ui {
    class VehicleSIVPage;
}

class VehicleSIVPage : public MyBase
{
    Q_OBJECT

public:
    explicit VehicleSIVPage(QWidget *parent = 0);
    ~VehicleSIVPage();
    void updatePage();
private:
    Ui::VehicleSIVPage *ui;
    void setlabelstates(QLabel* lbl,bool state,bool isonline);
    void setlabelstates(QLabel* lbl,bool state1,bool state2,bool isonline);

    void setlabelstates(QLabel* lbl,int states,bool isonline,bool selftest);
    void setlabelstates(QLabel* lbl,bool valid,float value,int per,bool isonline);
};

#endif // VEHICLESIVPAGE_H
