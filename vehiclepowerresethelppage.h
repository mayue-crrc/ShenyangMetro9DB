#ifndef VEHICLEPOWERRESETHELPPAGE_H
#define VEHICLEPOWERRESETHELPPAGE_H

#include <QWidget>

namespace Ui {
    class VehiclePowerResetHelpPage;
}

class VehiclePowerResetHelpPage : public QWidget
{
    Q_OBJECT

public:
    explicit VehiclePowerResetHelpPage(QWidget *parent = 0);
    ~VehiclePowerResetHelpPage();

private:
    Ui::VehiclePowerResetHelpPage *ui;

private slots:
    void on_pushButton_pressed();
};

#endif // VEHICLEPOWERRESETHELPPAGE_H
