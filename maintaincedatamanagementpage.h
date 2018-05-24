#ifndef MAINTAINCEDATAMANAGEMENTPAGE_H
#define MAINTAINCEDATAMANAGEMENTPAGE_H

#include <mybase.h>
#include "qpushbutton.h"
#include "qtimer.h"
namespace Ui {
    class MaintainceDataManagementPage;
}

class MaintainceDataManagementPage : public MyBase
{
    Q_OBJECT

public:
    explicit MaintainceDataManagementPage(QWidget *parent = 0);
    ~MaintainceDataManagementPage();

private:
    Ui::MaintainceDataManagementPage *ui;
    QList<QPushButton *> inputbuttons;
    QString m_Inputvalue;
    QPushButton *m_inputbutton;

    QTimer* timer;
private slots:
    void on_ConfirmBtn_pressed();
    void on_returnBtn_pressed();
    void NumKeyboardEvent();
    void InputButtonsEvent();
    void timer2sout();
};

#endif // MAINTAINCEDATAMANAGEMENTPAGE_H
