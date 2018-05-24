#ifndef MAINTAINCEBCUTESTPAGE_H
#define MAINTAINCEBCUTESTPAGE_H

#include "mybase.h"
#include "qlabel.h"
namespace Ui {
    class MaintainceBCUTestPage;
}

class MaintainceBCUTestPage : public MyBase
{
    Q_OBJECT

public:
    explicit MaintainceBCUTestPage(QWidget *parent = 0);
    ~MaintainceBCUTestPage();
    void updatePage();
private:
    Ui::MaintainceBCUTestPage *ui;
    void setlabelstates(QLabel* lbl,bool states);
    void setlabelstates(QLabel* lbl,QList<bool> states);
    bool m_selftestready;
private slots:
    void on_pushButton_pressed();
    void on_returnBtn_pressed();
};

#endif // MAINTAINCEBCUTESTPAGE_H
