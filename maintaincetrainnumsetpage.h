#ifndef MAINTAINCETRAINNUMSETPAGE_H
#define MAINTAINCETRAINNUMSETPAGE_H

#include <mybase.h>
#include "ctrlnuminputmodule.h"
#include "warnningdialog.h"
#include "QTimer"

namespace Ui {
    class MaintainceTrainNumSetPage;
}

class MaintainceTrainNumSetPage : public MyBase
{
    Q_OBJECT

public:
    explicit MaintainceTrainNumSetPage(QWidget *parent = 0);
    ~MaintainceTrainNumSetPage();
    void updatePage();
private:
    Ui::MaintainceTrainNumSetPage *ui;
    CtrlNumInputModule* ctrlNumInputModule;
    WarnningDialog* warningdialog;
    QTimer* timer;
private slots:
    void on_ConfirmBtn_pressed();
    void on_returnBtn_pressed();
public slots:
    void myKeyPressEvent(QString key);
    void timer3sEvent();

};

#endif // MAINTAINCETRAINNUMSETPAGE_H
