#ifndef VEHICLEPOWERRESETPAGE_H
#define VEHICLEPOWERRESETPAGE_H

#include "mybase.h"
#include "QList"
#include "QPushButton"
#include "qlabel.h"
enum buttons
{
    PISPowerTC1Btn = 0,
    PISPowerMP1Btn,
    PISPowerM1Btn,
    PISPowerM2Btn,
    PISPowerMP2Btn,
    PISPowerTC2Btn,
    DOORPowerTC1Btn,
    DOORPowerMP1Btn,
    DOORPowerM1Btn,
    DOORPowerM2Btn,
    DOORPowerMP2Btn,
    DOORPowerTC2Btn
};

namespace Ui {
    class VehiclePowerResetPage;
}

class VehiclePowerResetPage : public MyBase
{
    Q_OBJECT

public:
    explicit VehiclePowerResetPage(QWidget *parent = 0);
    ~VehiclePowerResetPage();
    void updatePage();

private:
    Ui::VehiclePowerResetPage *ui;
    QList<QPushButton *> buttons;

    bool Buttonstatus[6];
    bool m_pispoweroff,m_pispoweron,m_doorpoweroff,m_doorpoweron;
    int m_BtnID;
    void updateDoorStatus();
    void setDOORStatus(QLabel* lbl,QList<bool> status);
private slots:
    void on_PowerOndoorBtn_pressed();
    void on_PowerOffdoorBtn_pressed();
    void on_PowerOnPISBtn_pressed();
    void on_PowerOffPISBtn_pressed();
    void on_returnBtn_pressed();
    void ButtonsPressEvent();
};

#endif // VEHICLEPOWERRESETPAGE_H
