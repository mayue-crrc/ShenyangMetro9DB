#ifndef MAINTAINCERUNDISTANCEPAGE_H
#define MAINTAINCERUNDISTANCEPAGE_H

#include "mybase.h"

namespace Ui {
    class MaintainceRunDistancePage;
}

class MaintainceRunDistancePage : public MyBase
{
    Q_OBJECT

public:
    explicit MaintainceRunDistancePage(QWidget *parent = 0);
    ~MaintainceRunDistancePage();
    void updatePage();
private:
    Ui::MaintainceRunDistancePage *ui;

private slots:
    void on_returnBtn_pressed();
};

#endif // MAINTAINCERUNDISTANCEPAGE_H
