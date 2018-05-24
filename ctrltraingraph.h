#ifndef CTRLTRAINGRAPH_H
#define CTRLTRAINGRAPH_H

#include "mybase.h"

namespace Ui {
    class CtrlTraingraph;
}

class CtrlTraingraph : public MyBase
{
    Q_OBJECT

public:
    explicit CtrlTraingraph(QWidget *parent = 0);
    ~CtrlTraingraph();
    void updatePage();
private:
    Ui::CtrlTraingraph *ui;
};

#endif // CTRLTRAINGRAPH_H
