#ifndef VEHICLEACUHELPPAGE2_H
#define VEHICLEACUHELPPAGE2_H

#include <QWidget>

namespace Ui {
    class VehicleACUHelpPage2;
}

class VehicleACUHelpPage2 : public QWidget
{
    Q_OBJECT

public:
    explicit VehicleACUHelpPage2(QWidget *parent = 0);
    ~VehicleACUHelpPage2();

private:
    Ui::VehicleACUHelpPage2 *ui;

private slots:
    void on_pushButton_pressed();
};

#endif // VEHICLEACUHELPPAGE2_H
