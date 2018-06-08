#ifndef CTRLBRIGHTNESSADJUST_H
#define CTRLBRIGHTNESSADJUST_H

#include <QWidget>

namespace Ui {
    class CtrlBrightnessAdjust;
}

class CtrlBrightnessAdjust : public QWidget
{
    Q_OBJECT

public:
    explicit CtrlBrightnessAdjust(QWidget *parent = 0);
    ~CtrlBrightnessAdjust();

private:
    Ui::CtrlBrightnessAdjust *ui;
    float m_BrightValuefactor;

private slots:
    void on_BTNReturn_pressed();
    void on_BTNPlus_pressed();
    void on_BTNMinus_pressed();
    void on_BTNAuto_pressed();
    void on_BTNMannal_pressed();
};

#endif // CTRLBRIGHTNESSADJUST_H
