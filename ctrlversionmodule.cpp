#include "ctrlversionmodule.h"
#include "ui_ctrlversionmodule.h"
#include "qdebug.h"
CtrlVersionModule::CtrlVersionModule(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CtrlVersionModule)
{
    ui->setupUi(this);
}

CtrlVersionModule::~CtrlVersionModule()
{
    delete ui;
}
void CtrlVersionModule::initDeviceName(QList<QString> &namelist)
{
    if(namelist.size() != 5)
    {
        qDebug() << "namelist size" << namelist.size()  << "is not 5";
        return;
    }else
    {
        this->ui->titlelbl->setText(namelist.at(0));
        this->ui->device1lbl->setText(namelist.at(1));
        this->ui->device2lbl->setText(namelist.at(2));
        this->ui->device3lbl->setText(namelist.at(3));
        this->ui->device4lbl->setText(namelist.at(4));
    }


}
void CtrlVersionModule::updateVersion(QList<QString> &versionlist)
{
    if(versionlist.size() > 24)
    {
        qDebug() << "versionlist size" << versionlist.size()  << "larger than 24";
        return;
    }else
    {
        QList<QLabel*> labels;
        labels <<ui->TC1Version1lbl<<ui->MP1Version1lbl<<ui->M1Version1lbl<<ui->M2Version1lbl<<ui->MP2Version1lbl<<ui->TC2Version1lbl
                <<ui->TC1Version2lbl<<ui->MP1Version2lbl<<ui->M1Version2lbl<<ui->M2Version2lbl<<ui->MP2Version2lbl<<ui->TC2Version2lbl
                <<ui->TC1Version3lbl<<ui->MP1Version3lbl<<ui->M1Version3lbl<<ui->M2Version3lbl<<ui->MP2Version3lbl<<ui->TC2Version3lbl
                <<ui->TC1Version4lbl<<ui->MP1Version4lbl<<ui->M1Version4lbl<<ui->M2Version4lbl<<ui->MP2Version4lbl<<ui->TC2Version4lbl;
        for(int i = 0; i <versionlist.size();i++)
        {
            labels.at(i)->setText(versionlist.at(i));
        }
    }


}
