#ifndef MAINTAINCEHMICHECKPAGE_H
#define MAINTAINCEHMICHECKPAGE_H

#include "mybase.h"

namespace Ui {
    class MaintainceHMICheckPage;
}

class MaintainceHMICheckPage : public MyBase
{
    Q_OBJECT

public:
    explicit MaintainceHMICheckPage(QWidget *parent = 0);
    ~MaintainceHMICheckPage();

private:
    Ui::MaintainceHMICheckPage *ui;
    void showEvent(QShowEvent *);
private slots:
    void on_ColorCheckBtn_pressed();
};

#endif // MAINTAINCEHMICHECKPAGE_H
