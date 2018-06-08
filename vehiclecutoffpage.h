#ifndef VEHICLECUTOFFPAGE_H
#define VEHICLECUTOFFPAGE_H

#include "mybase.h"
#include "qlabel.h"
#include "qpushbutton.h"
namespace Ui {
    class VehicleCutoffPage;
}

class VehicleCutoffPage : public MyBase
{
    Q_OBJECT

public:
    explicit VehicleCutoffPage(QWidget *parent = 0);
    ~VehicleCutoffPage();

private:
    Ui::VehicleCutoffPage *ui;
    void updatePage();
    void setlabelstates(QLabel* lbl,int states,bool isonline);
    void setlabelstates(QLabel* lbl,bool state,bool state2,bool isonline);
    void setlabelstates(QLabel* lbl,bool state);

    QList<QPushButton *> buttons;

    bool Buttonstatus[6];
    int m_BtnID;
private slots:

    void on_ResetACMBtn_released();
    void on_ResetACMBtn_pressed();
    void on_CutoffACMBtn_released();
    void on_CutoffACMBtn_pressed();
    void on_ResetEBBtn_released();
    void on_ResetEBBtn_pressed();
    void on_CutoffEBBtn_released();
    void on_CutoffEBBtn_pressed();
    void ButtonsPressEvent();
    void on_returnBtn_pressed();
};

#endif // VEHICLECUTOFFPAGE_H
