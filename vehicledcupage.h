#ifndef VEHICLEDCUPAGE_H
#define VEHICLEDCUPAGE_H

#include "mybase.h"
#include "qlabel.h"

namespace Ui {
    class VehicleDCUPage;
}

class VehicleDCUPage : public MyBase
{
    Q_OBJECT

public:
    explicit VehicleDCUPage(QWidget *parent = 0);
    ~VehicleDCUPage();
    void updatePage();

private:
    Ui::VehicleDCUPage *ui;
    void setlabelstates(QLabel* lbl,bool state,bool isonline);
    void setlabelstates(QLabel* lbl,int status,bool isonline,bool ebapply);
    void setlabelstates(QLabel* lbl,bool valid,float value,int per,bool isonline);
};

#endif // VEHICLEDCUPAGE_H
