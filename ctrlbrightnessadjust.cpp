#include "ctrlbrightnessadjust.h"
#include "ui_ctrlbrightnessadjust.h"
#include "h8.h"

#include "qdebug.h"
#define PButtonUP    "font: 20px, \"微软雅黑\";color: white;background-color: rgb(0, 128, 128);	border-radius:8px;border-top: 2px solid white;border-left: 2px solid white;"
#define PButtonDOWN  "font: 20px, \"微软雅黑\";color: black;background-color: rgb(0, 255, 255);	border-radius:8px;border-top: 2px solid  rgb(0, 0, 255);border-left: 2px solid  rgb(0, 0, 255);border-bottom: 2px solid white;border-right: 2px solid white;"

#define BRIGHTNESSSCALE  255
#define BRIGHTNESSBAR  297

CtrlBrightnessAdjust::CtrlBrightnessAdjust(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CtrlBrightnessAdjust)
{
    ui->setupUi(this);
    m_BrightValuefactor = 0.8;
    this->ui->LBLBar->setGeometry(162,172,m_BrightValuefactor*300,47);
    this->ui->LBLValue->setText(QString::number(m_BrightValuefactor*100));
    this->ui->BTNMinus->hide();
    this->ui->BTNPlus->hide();
    this->ui->LBLBar->hide();
    this->ui->LBLValue->hide();
    this->ui->BTNAuto->setStyleSheet(PButtonDOWN);
}

CtrlBrightnessAdjust::~CtrlBrightnessAdjust()
{
    delete ui;
}

void CtrlBrightnessAdjust::on_BTNMannal_pressed()
{
    this->ui->BTNAuto->setStyleSheet(PButtonUP);
    this->ui->BTNMannal->setStyleSheet(PButtonDOWN);

    this->ui->BTNMinus->show();
    this->ui->BTNPlus->show();
    this->ui->LBLBar->show();
    this->ui->LBLValue->show();
    H8::getH8()->setBrightness((int)BRIGHTNESSSCALE*m_BrightValuefactor);

}
void CtrlBrightnessAdjust::on_BTNAuto_pressed()
{
    this->ui->BTNAuto->setStyleSheet(PButtonDOWN);
    this->ui->BTNMannal->setStyleSheet(PButtonUP);

    H8::getH8()->setBrightness(0);
    this->ui->BTNMinus->hide();
    this->ui->BTNPlus->hide();
    this->ui->LBLBar->hide();
    this->ui->LBLValue->hide();
}

void CtrlBrightnessAdjust::on_BTNMinus_pressed()
{
    if(m_BrightValuefactor > 0.1)
    {
        m_BrightValuefactor -= 0.1;
    }
    int tmp = m_BrightValuefactor*100+1;
    this->ui->LBLBar->setGeometry(162,172,m_BrightValuefactor*BRIGHTNESSBAR,47);
    this->ui->LBLValue->setText(QString::number(tmp));
    H8::getH8()->setBrightness((int)BRIGHTNESSSCALE*m_BrightValuefactor);
}

void CtrlBrightnessAdjust::on_BTNPlus_pressed()
{
    if(m_BrightValuefactor < 1)
    {
        m_BrightValuefactor += 0.1;
    }
    this->ui->LBLBar->setGeometry(162,172,m_BrightValuefactor*BRIGHTNESSBAR,47);
    this->ui->LBLValue->setText(QString::number(m_BrightValuefactor*100));
    H8::getH8()->setBrightness((int)BRIGHTNESSSCALE*m_BrightValuefactor);
}

void CtrlBrightnessAdjust::on_BTNReturn_pressed()
{
    this->close();
}
