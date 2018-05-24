#ifndef MAINTAINCEFAULTSHOWPAGE_H
#define MAINTAINCEFAULTSHOWPAGE_H

#include <mybase.h>

namespace Ui {
    class MaintainceFaultShowPage;
}

class MaintainceFaultShowPage : public MyBase
{
    Q_OBJECT

public:
    explicit MaintainceFaultShowPage(QWidget *parent = 0);
    ~MaintainceFaultShowPage();
    void updatePage();
private:
    Ui::MaintainceFaultShowPage *ui;
    int m_currentPageIndex,m_totalPageIndex,m_totalFaultNum,m_currentPageFaultNum;

private slots:
    void on_NextPageBtn_pressed();
    void on_PrePageBtn_pressed();
    void on_returnBtn_pressed();
};

#endif // MAINTAINCEFAULTSHOWPAGE_H
