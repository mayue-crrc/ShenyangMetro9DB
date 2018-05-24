#include "axcontrol.h"
#include "ui_axcontrol.h"
#include "global.h"
#include <QDebug>

AxControl::AxControl(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AxControl)
{
    ui->setupUi(this);
}

AxControl::~AxControl()
{
    delete ui;
}

void AxControl::initialName(QList<QString> &names)
{
    if (names.length() != AX_LENGTH)
    {
        _LOG << "the length ax not equal to" << AX_LENGTH;

        return;
    }

    QList<QLabel *> labels;

    labels << ui->CH1Namelbl << ui->CH2Namelbl << ui->CH3Namelbl << ui->CH4Namelbl
           << ui->CH5Namelbl << ui->CH6Namelbl << ui->CH7Namelbl << ui->CH8Namelbl;

    for (int i = 0; i < names.length(); i ++)
    {
        labels.at(i)->setText(names.at(i));
    }

}

void AxControl::updateAx(QList<QString> &state)
{
    if (state.length() != (AX_LENGTH ) * 2)
    {
        _LOG <<"the length ax"<< state.size()<< "not equal to" << (AX_LENGTH ) * 2;

        return;
    }

    QList<QLabel *> labels;

    labels << ui->CH1ASIgnallbl
            << ui->CH2ASIgnallbl
            << ui->CH3ASIgnallbl
            << ui->CH4ASIgnallbl
            << ui->CH5ASIgnallbl
            << ui->CH6ASIgnallbl
            << ui->CH7ASIgnallbl
            << ui->CH8ASIgnallbl
            << ui->CH1BSIgnallbl
            << ui->CH2BSIgnallbl
            << ui->CH3BSIgnallbl
            << ui->CH4BSIgnallbl
            << ui->CH5BSIgnallbl
            << ui->CH6BSIgnallbl
            << ui->CH7BSIgnallbl
            << ui->CH8BSIgnallbl;
    for (int i = 0; i < state.length(); i ++)
    {
        labels.at(i)->setText(state.at(i));
    }
}
