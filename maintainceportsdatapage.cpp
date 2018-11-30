#include "maintainceportsdatapage.h"
#include "ui_maintainceportsdatapage.h"
#include "qpainter.h"
MaintaincePortsDataPage::MaintaincePortsDataPage(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::MaintaincePortsDataPage)
{
    ui->setupUi(this);
    this->m_address="FF";
    this->m_addressInput = "FF";

    QList<QPushButton *> buttons;

    buttons << ui->Num0 << ui->Num1 << ui->Num2 << ui->Num3 << ui->Num4 << ui->Num5 << ui->Num6 << ui->Num7 << ui->Num8
            << ui->Num9 << ui->NumA << ui->NumB << ui->NumC << ui->NumD << ui->NumE << ui->NumF <<ui->CancelBtn;

    foreach (QPushButton *button, buttons)
    {
        connect(button, SIGNAL(clicked()), this, SLOT(NumKeyboardEvent()));
    }
    this->crrcMvb = NULL;

}

MaintaincePortsDataPage::~MaintaincePortsDataPage()
{
    delete ui;
}

void MaintaincePortsDataPage::installMvb(CrrcMvb* crrcMvb)
{
    this->crrcMvb = crrcMvb;
}

void MaintaincePortsDataPage::updatePage()
{
    this->update();
}
void MaintaincePortsDataPage::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    QFont font;
    font.setFamily("微软雅黑");
    font.setPixelSize(15);
    painter.setFont(font);

    //draw form1
    for(int i = 0; i < 17 ;i++)
    {
        QString text;
        QRect rect(50,10+i*33,50,30);

        if(0 == i)
        {
            painter.setPen(QPen(Qt::white,1));
            painter.setBrush(QBrush(QColor(0,255,255)));
            text = "0x"+this->m_address;

        }else
        {
            painter.setPen(QPen(Qt::white,1));
            painter.setBrush(QBrush(QColor(255,165,0)));
            text = QString::number(i-1)+"X";
        }
        painter.drawRect(rect);
        painter.drawText(rect, Qt::AlignCenter,text);
    }
    //draw form2

    for(int i = 0; i < 17 ;i++)
    {
        QString text;
        QRect rect(101,10+i*33,60,30);
        painter.drawRect(rect);

        if(0 == i)
        {
            painter.setPen(QPen(Qt::white,1));
            painter.drawRect(rect);

            painter.setBrush(QBrush(Qt::black));
            text = "Word";

        }else
        {
            painter.setPen(QPen(Qt::white,1));
            painter.drawRect(rect);

            painter.setPen(QPen(Qt::green,1));
            painter.setBrush(QBrush(Qt::black));
            text = QString::number(i-1);
        }
        painter.drawText(rect, Qt::AlignCenter,text);
    }

    //draw high-value form2

    for(int i = 0; i < 17 ;i++)
    {
        QString text;
        QRect rect(161,10+i*33,60,30);
        painter.drawRect(rect);

        if(0 == i)
        {
            painter.setPen(QPen(Qt::white,1));
            painter.setBrush(QBrush(Qt::blue));
            painter.drawRect(rect);

            text = "Value";

        }else
        {
            painter.setBrush(QBrush(Qt::black));
            painter.setPen(QPen(Qt::white,1));
            painter.drawRect(rect);

            painter.setPen(QPen(Qt::yellow,1));
            text.sprintf("%2X",this->crrcMvb->getUnsignedChar(this->m_address.toUInt(NULL, 16),(i-1)*2));
        }
        painter.drawText(rect, Qt::AlignCenter,text);
    }

    //draw low-value form2

    for(int i = 0; i < 17 ;i++)
    {
        QString text;
        QRect rect(557,10+i*33,60,30);
        painter.drawRect(rect);

        if(0 == i)
        {
            painter.setPen(QPen(Qt::white,1));
            painter.setBrush(QBrush(Qt::blue));
            painter.drawRect(rect);

            text = "Value";

        }else
        {
            painter.setBrush(QBrush(Qt::black));
            painter.setPen(QPen(Qt::white,1));
            painter.drawRect(rect);

            painter.setPen(QPen(Qt::yellow,1));
            text.sprintf("%2X",this->crrcMvb->getUnsignedChar(this->m_address.toUInt(NULL, 16),(i-1)*2+1));
        }
        painter.drawText(rect, Qt::AlignCenter,text);
    }

    //draw data
    painter.setBrush(QBrush(Qt::black));
    painter.setPen(QPen(Qt::white,1));
    for(int i = 0; i < 17 ;i++)
    {

        for(int j = 0; j <16;j++)
        {
            QRect rect;
            QString text;


            if(i == 0)
            {
                text = "B"+QString::number(15-j);
                if(j<8)
                {
                    rect.setRect(221+42*j,10+i*33,40,30);

                }else
                {
                    rect.setRect(221+60+42*j,10+i*33,40,30);
                }
            }else
            {
                if(j<8)
                {
                    rect.setRect(221+42*j,10+i*33,40,30);
                    text = this->crrcMvb->getBool(this->m_address.toUInt(NULL,16),(i-1)*2,j)?"1":"0";

                }else
                {
                    rect.setRect(221+60+42*j,10+i*33,40,30);
                    text = this->crrcMvb->getBool(this->m_address.toUInt(NULL,16),(i-1)*2+1,j-8)?"1":"0";
                }
            }

            painter.drawRect(rect);
            painter.drawText(rect, Qt::AlignCenter,text);

        }
    }

}


void MaintaincePortsDataPage::on_returnBtn_pressed()
{
    changePage(uVehicleRunStatePage);
}
void MaintaincePortsDataPage::NumKeyboardEvent()
{

    QString text = ((QPushButton *)this->sender())->text();
    if (text == QString("取消"))
    {
        this->m_addressInput.clear();
    }
    else if (this->m_addressInput.size()<3)
    {
        this->m_addressInput.append(text);
    }
    this->ui->PortAddressLbl->setText("0x"+this->m_addressInput);

}

void MaintaincePortsDataPage::on_ConfirmBtn_pressed()
{
    this->ui->ConfirmBtn->setStyleSheet(PButtonDOWN);
}

void MaintaincePortsDataPage::on_ConfirmBtn_released()
{
    this->ui->ConfirmBtn->setStyleSheet(PButtonUP);
    this->m_address = this->m_addressInput;
    this->m_addressInput.clear();
    this->ui->PortAddressLbl->setText("0x"+this->m_addressInput);


}
