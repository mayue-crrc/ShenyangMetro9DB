#include "mybase.h"


MyBase::MyBase(QWidget *parent) :
    QWidget(parent)
{
    if (parent != NULL)
    {
        connect(this, SIGNAL(changePage(int)), parent, SLOT(changePage(int)));
    }
}

int MyBase::currentPage = uVehicleRunStatePage;
Database *MyBase::database = NULL;

void MyBase::setMyBase(pagePosition position, QString name)
{
    if (position == uTop)
    {
        this->setGeometry(0, 0, this->width(), this->height());
    }
    else if (position == uMiddle)
    {
        this->setGeometry(0, 82, this->width(), this->height());
    }
    else if (position == uLargeMiddle)
    {
        this->setGeometry(0, 82, this->width(), this->height());
    }else if (position == uTrainGraph)
    {
        this->setGeometry(90, 82, this->width(), this->height());
    }else if (position == uMiddleTrainGraph)
    {
        this->setGeometry(0, 82+91, this->width(), this->height());
    }else if (position == uLargeMiddleTrainGraph)
    {
        this->setGeometry(0, 82+91, this->width(), this->height());
    }else if (position == uBottom)
    {
        this->setGeometry(0, 686, this->width(), this->height());
    }
    else if (position == uHuge)
    {
        this->setGeometry(0, 0, this->width(), this->height());
    }

    this->name = name;

    this->Position = position;

    this->hide();
}

void MyBase::updatePage()
{

}
