#include "navigator.h"
#include "ui_navigator.h"

Navigator::Navigator(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::Navigator)
{
    ui->setupUi(this);
    ui->NButton1->installEventFilter(this);
    ui->NButton2->installEventFilter(this);
    ui->NButton3->installEventFilter(this);
    ui->NButton4->installEventFilter(this);
    ui->NButton5->installEventFilter(this);
    ui->NButton6->installEventFilter(this);
    ui->NButton7->installEventFilter(this);
    ui->NButton8->installEventFilter(this);

    this->buttons.append(ui->NButton1);
    this->buttons.append(ui->NButton2);
    this->buttons.append(ui->NButton3);
    this->buttons.append(ui->NButton4);
    this->buttons.append(ui->NButton5);
    this->buttons.append(ui->NButton6);
    this->buttons.append(ui->NButton7);
    this->buttons.append(ui->NButton8);

    ui->NButton1->setStyleSheet(NButtonDOWN);

}

Navigator::~Navigator()
{
    delete ui;
}

bool Navigator::eventFilter(QObject *target, QEvent *event)
{
    if (event->type() != QEvent::MouseButtonPress)
    {
        return false;
    }

    for (int i = 0; i < this->buttons.size(); i ++)
    {
        if (target == buttons.at(i))
        {
            if(i == 7)
            {
                emit this->changePWPage(uVehicleMaintaincePage);
            }
            emit this->changePage(i);
            this->setButtonState(i);
        }

    }


    return true;
}
void Navigator::updatePage()
{
    if(uVehicleRunStatePage == this->currentPage)
    {
        setButtonState(uVehicleRunStatePage);
    }
}
void Navigator::setButtonState(int index)
{
    QList<QPushButton *> buttons;

    buttons  << ui->NButton1 << ui->NButton2 << ui->NButton3 << ui->NButton4 << ui->NButton5 << ui->NButton6 << ui->NButton7 << ui->NButton8;
    for(int i = 0; i < buttons.size();i++)
    {
        if(i == index)
            buttons[i]->setStyleSheet(NButtonDOWN);
        else
            buttons[i]->setStyleSheet(NButtonUP);
    }

}
