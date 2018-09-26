#ifndef VEHICLEBCUHELPPAGE2_H
#define VEHICLEBCUHELPPAGE2_H

#include <QWidget>

namespace Ui {
    class VehicleBCUHelpPage2;
}

class VehicleBCUHelpPage2 : public QWidget
{
    Q_OBJECT

public:
    explicit VehicleBCUHelpPage2(QWidget *parent = 0);
    ~VehicleBCUHelpPage2();

private:
    Ui::VehicleBCUHelpPage2 *ui;

private slots:
    void on_pushButton_pressed();
};

#endif // VEHICLEBCUHELPPAGE2_H
