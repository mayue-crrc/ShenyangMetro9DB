#ifndef VEHICLEACPAGE2_H
#define VEHICLEACPAGE2_H

#include "mybase.h"
#include "qpushbutton.h"
#include "qlabel.h"




namespace Ui {
    class VehicleACPage2;
}

class VehicleACPage2 : public MyBase
{
    Q_OBJECT

public:
    explicit VehicleACPage2(QWidget *parent = 0);
    ~VehicleACPage2();
    void updatePage();

private:
    Ui::VehicleACPage2 *ui;
    QList<QPushButton* > SelectButtons,ModeButtons;
    void setlabelstates(QLabel* lbl,bool states);
    void setlabelctrl(QLabel* lbl,bool net,bool local);
    void setlabelstates(QLabel* lbl,QList<bool> states);

    bool m_confirmclick;
    QString BtnName,TrainBtnName;
private slots:
    void on_ConfirmBtn_pressed();
    void on_Tempplus1Btn_pressed();
    void on_Tempminus1Btn_pressed();
    void on_NextPageBtn_pressed();
    void onSelectClkEvent();
    void onModeClkEvent();

};

#endif // VEHICLEACPAGE2_H
