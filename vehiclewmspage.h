#ifndef VEHICLEWMSPAGE_H
#define VEHICLEWMSPAGE_H

#include <mybase.h>
#include "qlabel.h"
namespace Ui {
    class VehicleWMSPage;
}

class VehicleWMSPage : public MyBase
{
    Q_OBJECT

public:
    explicit VehicleWMSPage(QWidget *parent = 0);
    ~VehicleWMSPage();
    void updatePage();

private:
    Ui::VehicleWMSPage *ui;
    void setlabelstatus(QLabel* label, bool status);
    void setlabelstatus(QLabel* label,bool status1, bool status2);

    void setlabelstatus1(QLabel* label, bool status);
    void setlabelstatus2(QLabel* label, bool status);

private slots:
    void on_returnBtn_pressed();
};

#endif // VEHICLEWMSPAGE_H
