#ifndef CTRLNUMINPUTMODULE_H
#define CTRLNUMINPUTMODULE_H

#include <QWidget>
#include "qpushbutton.h"

namespace Ui {
    class CtrlNumInputModule;
}

class CtrlNumInputModule : public QWidget
{
    Q_OBJECT

public:
    explicit CtrlNumInputModule(QWidget *parent = 0);
    ~CtrlNumInputModule();

private:
    Ui::CtrlNumInputModule *ui;

public slots:
    void NumKeyboardEvent();
    void NumKeyboardPressEvent();

signals:
    void myKeyPress(QString key);
};

#endif // CTRLNUMINPUTMODULE_H
