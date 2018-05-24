#ifndef MAINTAINCEWHEELSETPAGE_H
#define MAINTAINCEWHEELSETPAGE_H

#include "mybase.h"
#include "ctrlnuminputmodule.h"
#include "warnningdialog.h"
#include "qtimer.h"
enum WHEELSELECT
{

    TC1SELECT= 0,
    MP1SELECT,
    M1SELECT,
    M2SELECT,
    MP2SELECT,
    TC2SELECT,
    ALLSELECT,
    RESELECT,
}
;
namespace Ui {
    class MaintainceWheelsetPage;
}

class MaintainceWheelsetPage : public MyBase
{
    Q_OBJECT

public:
    explicit MaintainceWheelsetPage(QWidget *parent = 0);
    ~MaintainceWheelsetPage();
    void updatePage();

private:
    Ui::MaintainceWheelsetPage *ui;
    CtrlNumInputModule* ctrlNumInputModule;
    void setAllBtn(WHEELSELECT BtnID);
    void resetSaveFlg();
    WarnningDialog* warnningDialog;
    WHEELSELECT m_wheelselect;
    QTimer* timer;

public slots:
    void myKeyPressEvent(QString key);


private slots:
    void on_ReSeleclBtn_pressed();
    void on_confirmBtn_pressed();
    void on_ALLSelectBtn_pressed();
    void on_TC2SelectBtn_pressed();
    void on_MP2SelectBtn_pressed();
    void on_M2SelectBtn_pressed();
    void on_M1SelectBtn_pressed();
    void on_MP1SelectBtn_pressed();
    void on_TC1SelectBtn_pressed();
    void on_returnBtn_pressed();

    void timer3sEvent();

};

#endif // MAINTAINCEWHEELSETPAGE_H
