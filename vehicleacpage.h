#ifndef VEHICLEACPAGE_H
#define VEHICLEACPAGE_H

#include "mybase.h"
#include "qlabel.h"


namespace Ui {
    class VehicleACPage;
}

class VehicleACPage : public MyBase
{
    Q_OBJECT

public:
    explicit VehicleACPage(QWidget *parent = 0);
    ~VehicleACPage();
    void updatePage();

private:
    Ui::VehicleACPage *ui;
    void setlabelstates(QLabel* lbl,bool states,bool isonline);
    void setlabelstates(QLabel* lbl,bool states1,bool states2,bool isonline);
    void setlabelctrl(QLabel* lbl,bool net,bool local,bool isonline);
    void setlabelstates(QLabel* lbl,QList<bool> states);
    void setlabelvalue(QLabel* lbl,signed char value,bool isonline);

private slots:
    void on_NextPageBtn_pressed();
};

#endif // VEHICLEACPAGE_H
