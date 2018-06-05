#ifndef VEHICLEBCUHELPPAGE_H
#define VEHICLEBCUHELPPAGE_H

#include <QWidget>

namespace Ui {
    class VehicleBCUHelpPage;
}

class VehicleBCUHelpPage : public QWidget
{
    Q_OBJECT

public:
    explicit VehicleBCUHelpPage(QWidget *parent = 0);
    ~VehicleBCUHelpPage();

private:
    Ui::VehicleBCUHelpPage *ui;

private slots:
    void on_pushButton_pressed();
};

#endif // VEHICLEBCUHELPPAGE_H
