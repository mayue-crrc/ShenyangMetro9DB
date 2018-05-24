#ifndef VEHICLECUTOFFHELPPAGE_H
#define VEHICLECUTOFFHELPPAGE_H

#include <QWidget>

namespace Ui {
    class VehicleCutOffHelpPage;
}

class VehicleCutOffHelpPage : public QWidget
{
    Q_OBJECT

public:
    explicit VehicleCutOffHelpPage(QWidget *parent = 0);
    ~VehicleCutOffHelpPage();

private:
    Ui::VehicleCutOffHelpPage *ui;

private slots:
    void on_pushButton_pressed();
};

#endif // VEHICLECUTOFFHELPPAGE_H
