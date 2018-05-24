#ifndef VEHICLEHELPPAGE_H
#define VEHICLEHELPPAGE_H

#include <QWidget>

namespace Ui {
    class VehicleHelpPage;
}

class VehicleHelpPage : public QWidget
{
    Q_OBJECT

public:
    explicit VehicleHelpPage(QWidget *parent = 0);
    ~VehicleHelpPage();

private:
    Ui::VehicleHelpPage *ui;

private slots:
    void on_pushButton_pressed();
};

#endif // VEHICLEHELPPAGE_H
