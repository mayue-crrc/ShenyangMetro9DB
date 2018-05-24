#ifndef VEHICLEFAULTHELPPAGE_H
#define VEHICLEFAULTHELPPAGE_H

#include <QWidget>

namespace Ui {
    class VehicleFaultHelpPage;
}

class VehicleFaultHelpPage : public QWidget
{
    Q_OBJECT

public:
    explicit VehicleFaultHelpPage(QWidget *parent = 0);
    ~VehicleFaultHelpPage();

private:
    Ui::VehicleFaultHelpPage *ui;

private slots:
    void on_pushButton_pressed();
};

#endif // VEHICLEFAULTHELPPAGE_H
