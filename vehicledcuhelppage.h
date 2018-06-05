#ifndef VEHICLEDCUHELPPAGE_H
#define VEHICLEDCUHELPPAGE_H

#include <QWidget>

namespace Ui {
    class VehicleDCUHelpPage;
}

class VehicleDCUHelpPage : public QWidget
{
    Q_OBJECT

public:
    explicit VehicleDCUHelpPage(QWidget *parent = 0);
    ~VehicleDCUHelpPage();

private:
    Ui::VehicleDCUHelpPage *ui;

private slots:
    void on_pushButton_pressed();
};

#endif // VEHICLEDCUHELPPAGE_H
