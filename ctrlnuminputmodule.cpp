#include "ctrlnuminputmodule.h"
#include "ui_ctrlnuminputmodule.h"
#include "global.h"
CtrlNumInputModule::CtrlNumInputModule(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CtrlNumInputModule)
{
    ui->setupUi(this);

    QList<QPushButton *> buttons;

    buttons<<ui->Num<<ui->Num0<<ui->Num1<<ui->Num2<<ui->Num3<<ui->Num4<<ui->Num5<<ui->Num6<<ui->Num7<<ui->Num8<<ui->Num9<<ui->Numc;

    foreach (QPushButton *button, buttons)
    {
        connect(button, SIGNAL(released()), this, SLOT(NumKeyboardEvent()));
    }

    foreach (QPushButton *button, buttons)
    {
        connect(button, SIGNAL(pressed()), this, SLOT(NumKeyboardPressEvent()));
    }
}

CtrlNumInputModule::~CtrlNumInputModule()
{
    delete ui;
}
void CtrlNumInputModule::NumKeyboardEvent()
{
    (   (QPushButton *)this->sender())->setStyleSheet(PButtonUP);
    QString key = ((QPushButton *)this->sender())->text();

    emit this->myKeyPress(key);
}
void CtrlNumInputModule::NumKeyboardPressEvent()
{
(   (QPushButton *)this->sender())->setStyleSheet(PButtonDOWN);
}
