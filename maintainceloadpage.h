#ifndef MAINTAINCELOADPAGE_H
#define MAINTAINCELOADPAGE_H

#include "mybase.h"

namespace Ui {
    class MaintainceLoadPage;
}

class MaintainceLoadPage : public MyBase
{
    Q_OBJECT

public:
    explicit MaintainceLoadPage(QWidget *parent = 0);
    ~MaintainceLoadPage();
    void updatePage();
private:
    Ui::MaintainceLoadPage *ui;
    QString DefaultLoadTC1,DefaultLoadMP1,DefaultLoadM1,DefaultLoadM2,DefaultLoadMP2,DefaultLoadTC2;
    QString DefaultFullLoadTC1,DefaultFullLoadMP1,DefaultFullLoadM1,DefaultFullLoadM2,DefaultFullLoadMP2,DefaultFullLoadTC2;
private slots:
    void on_returnBtn_pressed();
};

#endif // MAINTAINCELOADPAGE_H
