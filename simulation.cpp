#include "simulation.h"
#include "ui_simulation.h"
#include "QKeyEvent"
Simulation::Simulation(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::Simulation)
{
    ui->setupUi(this);

    this->setWindowTitle(QString("Simulation"));
    this->crrcMvb = NULL;

    timer = new QTimer;
    connect(timer,SIGNAL(timeout()),this,SLOT(updatePage()));
    timer->start(500);
}

Simulation::~Simulation()
{
    delete ui;
}
void Simulation::installMvb(CrrcMvb *crrcMvb)
{
    this->crrcMvb = crrcMvb;
}
void Simulation::on_btnClose_clicked()
{
    this->close();
}
void Simulation::keyPressEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_Escape)
    {
        this->close();
    }
}

void Simulation::updatePage()
{
    if(this->crrcMvb == NULL)
        return;
    QList<unsigned short int> sendports;
    if(this->database->HMIPosition == 1)
    {
        sendports<<0x200<<0x201<<0x202<<0x203;
    }else if(this->database->HMIPosition == 2)
    {
        sendports<<0x280<<0x281<<0x282<<0x283;
    }
    QString sendport,port1,port2,port3,port4;
    for(int i = 0 ; i<32 ; i++)
    {
        QString tmp;
        tmp.sprintf("%02x",this->crrcMvb->getUnsignedChar(sendports.at(0),i));

        port1.append(tmp+",");
        tmp.sprintf("%02x",this->crrcMvb->getUnsignedChar(sendports.at(1),i));
        port2.append(tmp+",");
        tmp.sprintf("%02x",this->crrcMvb->getUnsignedChar(sendports.at(2),i));
        port3.append(tmp+",");
        tmp.sprintf("%02x",this->crrcMvb->getUnsignedChar(sendports.at(3),i));
        port4.append(tmp+",");
    }
    sendport = QString::number(sendports.at(0),16)+":"+port1+"\n"+
               QString::number(sendports.at(1),16)+":"+port2+"\n"+
               QString::number(sendports.at(2),16)+":"+port3+"\n"+
               QString::number(sendports.at(3),16)+":"+port4;
    this->ui->sendMessage->setText(sendport);
}

void Simulation::on_btnConfirm_clicked()
{
    unsigned short int port = 0, byteOffset = 0, bitOffset = 0, value = 0;

    if (ui->lndPort->text().isEmpty() == false)
    {
        port = ui->lndPort->text().toInt(0, 16);
    }
    else
    {
        this->setMessage(QString("the port is invalid"));

        return;
    }

    if (ui->lndByteOffset->text().isEmpty() == false)
    {
        byteOffset = ui->lndByteOffset->text().toInt(0, 10);
    }
    else
    {
        this->setMessage(QString("the byte offset is invalid"));

        return;
    }

//    if (this->crrcMvb->contains(port) == false)
//    {
//        this->setMessage(QString("the port is not is the list"));

//        return;
//    }
//    else if (byteOffset > 32)
//    {
//        this->setMessage(QString("the byte offset is out of range"));

//        return;
//    }

    if (ui->lndBitOffset->text().isEmpty() == true)
    {
        if (ui->lndValue->text().isEmpty() == true)
        {
            this->setMessage(QString("the value is invalid"));
        }
        else
        {
            // can not judge the value type of the variable
            // value = ui->lndValue->text().toInt(0, 10);

            if (ui->cbType->itemText(ui->cbType->currentIndex()) == QString("char"))
            {
                this->crrcMvb->setUnsignedChar(port, byteOffset, ui->lndValue->text().toInt());

                QString text;
                this->setMessage(text.sprintf("Port %03x ByteOffset %d = %d", port, byteOffset, ui->lndValue->text().toInt(0, 10)));
            }
            else if (ui->cbType->itemText(ui->cbType->currentIndex()) == QString("int"))
            {
                this->crrcMvb->setSignedInt(port, byteOffset, ui->lndValue->text().toInt(0, 10));

                QString text;
                this->setMessage(text.sprintf("Port %03x ByteOffset %d = %d", port, byteOffset, ui->lndValue->text().toInt(0, 10)));
            }
            else if (ui->cbType->itemText(ui->cbType->currentIndex()) == QString("uint"))
            {
                this->crrcMvb->setUnsignedInt(port, byteOffset, ui->lndValue->text().toUInt(0, 10));

                QString text;
                this->setMessage(text.sprintf("Port %03x ByteOffset %d = %d", port, byteOffset, ui->lndValue->text().toUInt(0, 10)));
            }
        }
    }
    else
    {
        value = ui->lndValue->text().toInt(0, 10);
        bitOffset = ui->lndBitOffset->text().toInt(0, 10);

        this->crrcMvb->setBool(port, byteOffset, bitOffset, value != 0);

        QString text;

        this->setMessage(text.sprintf("Port %03x ByteOffset %d  BitOffset %d = %d", port, byteOffset, bitOffset, value));
    }
}

void Simulation::setMessage(QString message)
{
    ui->txtMessage->textCursor().insertText(QString("\n") + message);
    ui->txtMessage->moveCursor(QTextCursor::End);
}
