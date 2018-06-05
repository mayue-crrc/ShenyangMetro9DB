#ifndef VEHICLEACUHELPPAGE_H
#define VEHICLEACUHELPPAGE_H

#include <QWidget>

namespace Ui {
    class VehicleACUHelpPage;
}

class VehicleACUHelpPage : public QWidget
{
    Q_OBJECT

public:
    explicit VehicleACUHelpPage(QWidget *parent = 0);
    ~VehicleACUHelpPage();

private:
    Ui::VehicleACUHelpPage *ui;

private slots:
    void on_pushButton_pressed();
};

#endif // VEHICLEACUHELPPAGE_H
