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
    void showEvent(QShowEvent *);
private:
    Ui::MaintainceFaultShowPage *ui;
    int m_currentPageIndex,m_totalPageIndex,m_totalFaultNum,m_currentPageFaultNum;
    int m_currentButtonsDown;
    void SetFaultFdetail(QString Fdetail);
    QString m_QueryStr;
    QueryType m_type;
private slots:
    void on_BTNClose_2_pressed();
    void on_NextPageBtn_pressed();
    void on_PrePageBtn_pressed();
    void on_returnBtn_pressed();
    void ButtonsPressEvent();

public slots:
    void getQueryStr(QString str,QueryType type);

};

#endif // MAINTAINCEFAULTSHOWPAGE_H
