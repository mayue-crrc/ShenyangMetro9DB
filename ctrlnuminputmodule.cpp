#include "ctrlnuminputmodule.h"
#include "ui_ctrlnuminputmodule.h"

CtrlNumInputModule::CtrlNumInputModule(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CtrlNumInputModule)
{
    ui->setupUi(this);

    QList<QPushButton *> buttons;

    buttons<<ui->Num<<ui->Num0<<ui->Num1<<ui->Num2<<ui->Num3<<ui->Num4<<ui->Num5<<ui->Num6<<ui->Num7<<ui->Num8<<ui->Num9<<ui->Numc;

    foreach (QPushButton *button, buttons)
    {
        connect(button, SIGNAL(clicked()), this, SLOT(NumKeyboardEvent()));
    }
}

CtrlNumInputModule::~CtrlNumInputModule()
{
    delete ui;
}
void CtrlNumInputModule::NumKeyboardEvent()
{
    QString key = ((QPushButton *)this->sender())->text();

    emit this->myKeyPress(key);
}
