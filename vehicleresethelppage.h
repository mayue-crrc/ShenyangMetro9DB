#ifndef VEHICLERESETHELPPAGE_H
#define VEHICLERESETHELPPAGE_H

#include <QWidget>

namespace Ui {
    class VehicleResetHelpPage;
}

class VehicleResetHelpPage : public QWidget
{
    Q_OBJECT

public:
    explicit VehicleResetHelpPage(QWidget *parent = 0);
    ~VehicleResetHelpPage();

private:
    Ui::VehicleResetHelpPage *ui;

private slots:

private slots:
    void on_pushButton_pressed();
};

#endif // VEHICLERESETHELPPAGE_H
