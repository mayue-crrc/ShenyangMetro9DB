#ifndef MAINTAINCEFAULTQUERYPAGE_H
#define MAINTAINCEFAULTQUERYPAGE_H

#include <mybase.h>
#include "qpushbutton.h"
namespace Ui {
    class MaintainceFaultQueryPage;
}

class MaintainceFaultQueryPage : public MyBase
{
    Q_OBJECT

public:
    explicit MaintainceFaultQueryPage(QWidget *parent = 0);
    ~MaintainceFaultQueryPage();
    void updatePage();
    QString m_TrainSelect,m_SysSelect;

private:
    Ui::MaintainceFaultQueryPage *ui;

    void setBtnsStyle(QPushButton* btn,int cnt);
private slots:
    void on_returnBtn_pressed();

    void TrainSelectEvent();
    void SystemSelectEvent();
signals:
    void QueryFault(QString,QueryType);
};

#endif // MAINTAINCEFAULTQUERYPAGE_H
