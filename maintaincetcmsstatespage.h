#ifndef MAINTAINCETCMSSTATESPAGE_H
#define MAINTAINCETCMSSTATESPAGE_H

#include <mybase.h>
#include "QLabel"
namespace Ui {
    class MaintainceTCMSStatesPage;
}

class MaintainceTCMSStatesPage : public MyBase
{
    Q_OBJECT

public:
    explicit MaintainceTCMSStatesPage(QWidget *parent = 0);
    ~MaintainceTCMSStatesPage();
    void updatePage();
private:
    Ui::MaintainceTCMSStatesPage *ui;
    void setlabelstates(QLabel* lbl,bool state);
    void setlabelstates(QLabel* lbl,QList<bool> state);
    void setlabelstates(QLabel* lbl,bool state1,bool state2);
    void setlabelstates(QLabel* lbl,bool state,int runstate);

private slots:
    void on_returnBtn_pressed();
};

#endif // MAINTAINCETCMSSTATESPAGE_H
