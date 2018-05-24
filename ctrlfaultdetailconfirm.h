#ifndef CTRLFAULTDETAILCONFIRM_H
#define CTRLFAULTDETAILCONFIRM_H

#include <QWidget>
#include "crrcfault.h"
#include "qtimer.h"
namespace Ui {
    class CtrlFaultDetailConfirm;
}

class CtrlFaultDetailConfirm : public QWidget
{
    Q_OBJECT

public:
    explicit CtrlFaultDetailConfirm(QWidget *parent = 0);
    ~CtrlFaultDetailConfirm();
    void showFaultDetail();
    void SetFaultFdetail(QString Fdetail);

private:
    Ui::CtrlFaultDetailConfirm *ui;
    CrrcFault* m_crrcFault;
    QTimer* updateTimer;
    bool m_firsttimeshow;
private slots:
    void on_FaultAllConfirmBtn_pressed();
    void on_FaultConfirmBtn_pressed();

    void updateWidget();
};

#endif // CTRLFAULTDETAILCONFIRM_H
