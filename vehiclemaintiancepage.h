#ifndef VEHICLEMAINTIANCEPAGE_H
#define VEHICLEMAINTIANCEPAGE_H

#include <QWidget>
#include "mybase.h"

namespace Ui {
    class VehicleMaintiancePage;
}

class VehicleMaintiancePage : public MyBase
{
    Q_OBJECT

public:
    explicit VehicleMaintiancePage(QWidget *parent = 0);
    ~VehicleMaintiancePage();

    void updatePage();
    void showEvent(QShowEvent *);

private:
    Ui::VehicleMaintiancePage *ui;
};

#endif // VEHICLERUNSTATEPAGE_H

#endif // VEHICLEMAINTIANCEPAGE_H
