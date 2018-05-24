#ifndef NAVIGATOR_H
#define NAVIGATOR_H

#include <QWidget>
#include "mybase.h"
#include "qvector.h"
#include "qpushbutton.h"
namespace Ui {
    class Navigator;
}

class Navigator : public MyBase
{
    Q_OBJECT

public:
    explicit Navigator(QWidget *parent = 0);
    ~Navigator();
    void updatePage();
    QVector<QPushButton *> buttons;
    bool eventFilter(QObject *target, QEvent *event);

private:
    Ui::Navigator *ui;
    int m_BtnStates;
    void setButtonState(int index);
signals:
    void changePWPage(int);

};

#endif // NAVIGATOR_H
