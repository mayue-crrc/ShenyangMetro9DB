#ifndef MAINTAINCEVERSIONPAGE_H
#define MAINTAINCEVERSIONPAGE_H

#include "mybase.h"
#include "qpushbutton.h"


enum VPAGES
{
    VTCMSPAGE = 0,
    VTCUPAGE,
    VEDCUPAGE,
    VOTHERPAGE,

};
namespace Ui {
    class MaintainceVersionPage;
}

class MaintainceVersionPage : public MyBase
{
    Q_OBJECT

public:
    explicit MaintainceVersionPage(QWidget *parent = 0);
    ~MaintainceVersionPage();
    void updatePage();

private:
    Ui::MaintainceVersionPage *ui;

    QList<QPushButton*> buttons;
    VPAGES m_CurrentPage;

private slots:
    void ButtonsPressEvent();
    void on_returnBtn_pressed();
};

#endif // MAINTAINCEVERSIONPAGE_H
