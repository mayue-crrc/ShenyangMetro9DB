#ifndef DICONTROL_H
#define DICONTROL_H

#include <QWidget>

namespace Ui {
    class DiControl;
}

class DiControl : public QWidget
{
    Q_OBJECT

public:
    explicit DiControl(QWidget *parent = 0);
    ~DiControl();
    void initialName(QList<QString> &names,QString str,QString traintype);
    void updateDi(QList<bool> &state);

private:
    Ui::DiControl *ui;
};

#endif // DICONTROL_H
