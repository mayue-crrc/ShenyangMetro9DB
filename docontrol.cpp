#include "docontrol.h"
#include "ui_docontrol.h"
#include <QDebug>
#include "global.h"

DoControl::DoControl(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DoControl)
{
    ui->setupUi(this);
}

DoControl::~DoControl()
{
    delete ui;
}
void DoControl::initialName(QList<QString> &names,QString str,QString traintype)
{
    if (names.length() != DO_LENGTH)
    {
        _LOG << "the length do not equal to" << DI_LENGTH;

        return;
    }

    QList<QLabel *> labels;

    labels << ui->CH1Namelbl << ui->CH2Namelbl << ui->CH3Namelbl << ui->CH4Namelbl
           << ui->CH5Namelbl << ui->CH6Namelbl << ui->CH7Namelbl << ui->CH8Namelbl
           << ui->CH9Namelbl << ui->CH10Namelbl << ui->CH11Namelbl << ui->CH12Namelbl
           << ui->CH13Namelbl << ui->CH14Namelbl << ui->CH15Namelbl << ui->CH16Namelbl;
    for (int i = 0; i < names.length(); i ++)
    {
        labels.at(i)->setText(names.at(i));
    }
    QList<QLabel *> labelsname;

    labelsname << ui->CH1lbl << ui->CH2lbl << ui->CH3lbl << ui->CH4lbl << ui->CH5lbl << ui->CH6lbl
            << ui->CH7lbl << ui->CH8lbl << ui->CH9lbl << ui->CH10lbl << ui->CH11lbl << ui->CH12lbl
            << ui->CH13lbl << ui->CH14lbl << ui->CH15lbl << ui->CH16lbl ;
    for (int i = 0; i < names.length(); i ++)
    {
        labelsname.at(i)->setText(str+"-"+QString::number(i+1));
    }

    if(traintype == "TC")
    {
        ui->TrainType1->setText("TC1");
        ui->TrainType2->setText("TC2");
        ui->TrainType3->setText("TC1");
        ui->TrainType4->setText("TC2");
    }else if(traintype == "MP")
    {
        ui->TrainType1->setText("MP1");
        ui->TrainType2->setText("MP2");
        ui->TrainType3->setText("MP1");
        ui->TrainType4->setText("MP2");
    }else if(traintype == "M")
    {
        ui->TrainType1->setText("M1");
        ui->TrainType2->setText("M2");
        ui->TrainType3->setText("M1");
        ui->TrainType4->setText("M2");
    }
}

void DoControl::updateDo(QList<bool> &state)
{
    if (state.length() != DO_LENGTH*2)
    {
        _LOG << "the length do not equal to" <<  DO_LENGTH*2;

        return;
    }

    QList<QLabel *> labels;

    labels << ui->CH1ASIgnallbl << ui->CH2ASIgnallbl << ui->CH3ASIgnallbl << ui->CH4ASIgnallbl
            << ui->CH5ASIgnallbl << ui->CH6ASIgnallbl << ui->CH7ASIgnallbl << ui->CH8ASIgnallbl
            << ui->CH9ASIgnallbl << ui->CH10ASIgnallbl << ui->CH11ASIgnallbl << ui->CH12ASIgnallbl
            << ui->CH13ASIgnallbl << ui->CH14ASIgnallbl << ui->CH15ASIgnallbl << ui->CH16ASIgnallbl
            << ui->CH1BSIgnallbl << ui->CH2BSIgnallbl << ui->CH3BSIgnallbl << ui->CH4BSIgnallbl
            << ui->CH5BSIgnallbl << ui->CH6BSIgnallbl << ui->CH7BSIgnallbl << ui->CH8BSIgnallbl
            << ui->CH9BSIgnallbl << ui->CH10BSIgnallbl << ui->CH11BSIgnallbl << ui->CH12BSIgnallbl
            << ui->CH13BSIgnallbl << ui->CH14BSIgnallbl << ui->CH15BSIgnallbl << ui->CH16BSIgnallbl;

    for (int i = 0; i < state.length(); i ++)
    {
        if (state.at(i))
        {
            labels.at(i)->setStyleSheet(ON_STATE);
        }
        else
        {
            labels.at(i)->setStyleSheet(OFF_STATE);
        }
    }
}

