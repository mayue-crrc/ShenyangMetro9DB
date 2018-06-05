#ifndef VEHICLEHVACHELPPAGE_H
#define VEHICLEHVACHELPPAGE_H

#include <QWidget>

namespace Ui {
    class VehicleHVACHelpPage;
}

class VehicleHVACHelpPage : public QWidget
{
    Q_OBJECT

public:
    explicit VehicleHVACHelpPage(QWidget *parent = 0);
    ~VehicleHVACHelpPage();

private:
    Ui::VehicleHVACHelpPage *ui;

private slots:
    void on_pushButton_pressed();
};

#endif // VEHICLEHVACHELPPAGE_H
