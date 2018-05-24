#ifndef AXCONTROL_H
#define AXCONTROL_H

#include <QWidget>

namespace Ui {
    class AxControl;
}

class AxControl : public QWidget
{
    Q_OBJECT

public:
    explicit AxControl(QWidget *parent = 0);
    ~AxControl();
    void updateAx(QList<QString> &state);
    void initialName(QList<QString> &names);

private:
    Ui::AxControl *ui;
};

#endif // AXCONTROL_H
