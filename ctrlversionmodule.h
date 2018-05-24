#ifndef CTRLVERSIONMODULE_H
#define CTRLVERSIONMODULE_H

#include <QWidget>

namespace Ui {
    class CtrlVersionModule;
}

class CtrlVersionModule : public QWidget
{
    Q_OBJECT

public:
    explicit CtrlVersionModule(QWidget *parent = 0);
    ~CtrlVersionModule();
    void initDeviceName(QList<QString> &namelist);
    void updateVersion(QList<QString> &versionlist);

private:
    Ui::CtrlVersionModule *ui;
};

#endif // CTRLVERSIONMODULE_H
