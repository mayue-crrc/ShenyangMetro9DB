#ifndef VEHICLEPASSWORDPAGE_H
#define VEHICLEPASSWORDPAGE_H

#include "mybase.h"
#include "MainGetDefaultPara.h"
#include "vehiclerunstatepage.h"

namespace Ui {
    class VehiclePasswordPage;
}

class VehiclePasswordPage : public MyBase
{
    Q_OBJECT

public:
    explicit VehiclePasswordPage(QWidget *parent = 0);
    ~VehiclePasswordPage();
    void showEvent(QShowEvent *);
private:
    Ui::VehiclePasswordPage *ui;
    QString m_password;
    int m_NextPageID;


private slots:
    void on_returnBtn_pressed();
    void on_confirmBtn_pressed();
    void NumKeyboardEvent();
    void getPage(int);
};

#endif // VEHICLEPASSWORDPAGE_H
