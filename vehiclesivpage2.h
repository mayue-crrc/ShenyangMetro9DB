#ifndef VEHICLESIVPAGE2_H
#define VEHICLESIVPAGE2_H

#include <mybase.h>
#include "qlabel.h"
namespace Ui {
    class VehicleSIVPage2;
}

class VehicleSIVPage2 : public MyBase
{
    Q_OBJECT

public:
    explicit VehicleSIVPage2(QWidget *parent = 0);
    ~VehicleSIVPage2();
    void updatePage();
private:
    Ui::VehicleSIVPage2 *ui;

    void setlabelstates(QLabel* lbl,bool valid,float value,int per,bool isonline);


private slots:
    void on_NextPageBtn_pressed();
};

#endif // VEHICLESIVPAGE2_H
