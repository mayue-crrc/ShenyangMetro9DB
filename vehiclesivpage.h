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
    void setlabelstates(QLabel* lbl,bool state);
    void setlabelstates(QLabel* lbl,int states);
    void setlabelstates(QLabel* lbl,bool valid,float value,int per);
};

#endif // VEHICLESIVPAGE_H
