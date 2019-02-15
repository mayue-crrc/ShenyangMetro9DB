#include "maintainceallportspage.h"
#include "ui_maintainceallportspage.h"
#include "qpainter.h"
#include "qpushbutton.h"


MaintainceAllPortsPage::MaintainceAllPortsPage(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::MaintainceAllPortsPage)
{
    ui->setupUi(this);

    RIOMPorts<<0x110<<0x111<<0x112
            <<0x120<<0x121<<0x130<<0x131
            <<0x140<<0x141<<0x150<<0x151
            <<0x160<<0x161<<0x162;

    HMIPorts<<0x200<<0x201<<0x202<<0x203
            <<0x280<<0x281<<0x282<<0x283;

    ERMPorts<<0x310<<0x311<<0x312<<0x313
            <<0x320<<0x321<<0x322<<0x323;


    DCUPorts<<0x490<<0x491<<0x492<<0x493<<0x494
            <<0x4C0<<0x4C1<<0x4C2<<0x4C3<<0x4C4
            <<0x4D0<<0x4D1<<0x4D2<<0x4D3<<0x4D4
            <<0x480<<0x481<<0x482<<0x483<<0x484;

    SIVPorts<<0x501<<0x502<<0x503<<0x504
            <<0x511<<0x512<<0x513<<0x514
            <<0x531<<0x532<<0x533<<0x534
            <<0x521<<0x522<<0x523<<0x524;

    EBCUPorts<<0x610<<0x611<<0x612<<0x613<<0x614<<0x615<<0x616
             <<0x630<<0x631<<0x632<<0x633<<0x634<<0x635<<0x636
             <<0x640<<0x641<<0x642<<0x643<<0x644<<0x645<<0x646
             <<0x660<<0x661<<0x662<<0x663<<0x664<<0x665<<0x666;

    WMSATCPorts<<0xA60<<0xA61<<0xB10<<0xB11;

    EDCUPorts<<0x710<<0x711<<0x720<<0x721<<0x730<<0x731<<0x740<<0x741<<0x750<<0x751<<0x760<<0x761
             <<0x770<<0x771<<0x780<<0x781<<0x790<<0x791<<0x7A0<<0x7A1<<0x7B0<<0x7B1<<0x7C0<<0x7C1;

    ACUPorts<<0x910<<0x920<<0x930<<0x940<<0x950<<0x960;

    PIDSPorts<<0xC10<<0xC11<<0xC60<<0xC61;

    CCUDPorts<<0x818<<0x828;

    CCUAPorts<<0x0FF<<0x0F1<<0x0F2<<0x0F3<<0x0F4<<0x0F5<<0x0F6<<0x800
            <<0x118<<0x128<<0x138<<0x148<<0x158<<0x168<<0x218<<0x219<<0x318
             <<0x509<<0x50A<<0x519<<0x51A<<0x539<<0x53A<<0x529<<0x52A
             ;

    CCUBPorts<<0x498<<0x499<<0x49A<<0x4C8<<0x4C9<<0x4CA<<0x4D8<<0x4D9<<0x4DA<<0x488<<0x489<<0x48A
            <<0x618<<0x628<<0x638
            <<0xB18
            <<0x918<<0x928<<0x938<<0x948<<0x958<<0x968
            <<0xC18
            <<0x810;

    this->m_PortsList = CCUAPorts;
    ui->CCUABtn->setStyleSheet(PButtonDOWN);

    buttons<<ui->CCUABtn<<ui->CCUBBtn<<ui->RIOMBtn<<ui->HMIBtn<<ui->ERMBtn<<ui->SIVBtn<<ui->DCUBtn
           <<ui->ACUBtn<<ui->EBCUBtn<<ui->PIDSBtn<<ui->EDCUBtn<<ui->CCUDBtn<<ui->WMSATCBtn;

    foreach (QPushButton *button, buttons)
    {
        connect(button, SIGNAL(clicked()), this, SLOT(ButtonsPressEvent()));
    }
}

MaintainceAllPortsPage::~MaintainceAllPortsPage()
{
    delete ui;
}

void MaintainceAllPortsPage::on_returnBtn_pressed()
{
    changePage(uVehicleMaintaincePage);
}
void MaintainceAllPortsPage::installMvb(CrrcMvb* crrcMvb)
{
    this->crrcMvb = crrcMvb;
}
void MaintainceAllPortsPage::updatePage()
{
    this->update();
}
void MaintainceAllPortsPage::ButtonsPressEvent()
{
    QString BtnName = ((QPushButton *)this->sender())->text();
    if(BtnName == "CCUA")
    {
        this->m_PortsList = CCUAPorts;
    }else if(BtnName == "CCUB")
    {
        this->m_PortsList = CCUBPorts;

    }else if(BtnName == "RIOM")
    {
        this->m_PortsList = RIOMPorts;

    }else if(BtnName == "HMI")
    {
        this->m_PortsList = HMIPorts;

    }else if(BtnName == "ERM")
    {
        this->m_PortsList = ERMPorts;

    }else if(BtnName == "ACM")
    {
        this->m_PortsList = SIVPorts;

    }else if(BtnName == "DCU")
    {
        this->m_PortsList = DCUPorts;

    }else if(BtnName == "ACU")
    {
        this->m_PortsList = ACUPorts;

    }else if(BtnName == "BCU")
    {
        this->m_PortsList = EBCUPorts;

    }else if(BtnName == "PIDS")
    {
        this->m_PortsList = PIDSPorts;

    }else if(BtnName == "EDCU")
    {
        this->m_PortsList = EDCUPorts;

    }else if(BtnName == "CCU-D")
    {
        this->m_PortsList = CCUDPorts;

    }else if(BtnName == "WMS\nATC")
    {
        this->m_PortsList = WMSATCPorts;

    }


    for(int i = 0; i < buttons.size();i++)
    {
       buttons[i]->setStyleSheet(PButtonUP);
    }
    ((QPushButton *)this->sender())->setStyleSheet(PButtonDOWN);


}
void MaintainceAllPortsPage::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    QFont font;
    font.setFamily("微软雅黑");
    font.setPixelSize(13);
    painter.setFont(font);
    painter.setPen(QPen(Qt::white,2));
    painter.setBrush(QBrush(Qt::transparent));

    // draw title
    for(int i = 0; i < 34 ; i++)
    {

        QString text1;
        QRect rect1;
        if(i == 0)
        {
            text1 = "port";
            rect1 = QRect(1,2,39,25);
            painter.drawRect(rect1);

        }else if(i == 33)
        {
            text1 = "cycle";
            rect1 = QRect(26*32+40,2,50,25);

        }else
        {
            QString tmp;
            tmp.sprintf("%02d",i-1);
            text1 = tmp;
            rect1 = QRect(i*26+14,2,26,25);

        }


        if(i%2==1)
        {
            painter.drawRect(QRect(i*26+14,2,52,25));
        }
        painter.drawText(rect1,Qt::AlignCenter,text1);

    }



    //draw data
    for(int j = 0 ;j < 28 ;j++)
    {
        for(int i = 0; i < 34 ; i++)
        {
            QString text2;
            QRect rect2,rect3;

            if(j%3 == 0)// set pen color
            {
                painter.setPen(QPen(QColor(255,128,0),2));
            }else if(j%3 == 1)
            {
                painter.setPen(QPen(Qt::lightGray,2));
            }else
            {
                painter.setPen(QPen(QColor(0, 255, 255),2));
            }
            //portaddress
            if(i == 0)
            {
                if(j<m_PortsList.size())
                {
                    QString tmp;
                    tmp.sprintf("%03x",m_PortsList[j]);

                    text2 = tmp.toUpper();
                }else
                {
                    text2 = "";
                }
                rect2 = QRect(1,2+(j+1)*24,39,25);
                painter.drawRect(rect2);
                painter.drawText(rect2,Qt::AlignCenter,text2);
            }else if(i == 33)//cycle
            {
                painter.save();
                painter.setPen(QPen(Qt::white,2));

                if(j<m_PortsList.size())
                {
                    QString tmp;
                    tmp.sprintf("%02d",crrcMvb->getPortCycle(m_PortsList[j]));


                    if(crrcMvb->isPortTimeout(m_PortsList[j]))
                    {
                        painter.setBrush(QBrush(Qt::red));
                    }else
                    {
                        painter.setBrush(QBrush(Qt::transparent));
                    }
                    text2 = tmp.toUpper();
                }else
                {
                    painter.setBrush(QBrush(Qt::transparent));
                    text2 = "";
                }
                rect2 = QRect(32*26+40,2+(j+1)*24,51,25);

                painter.drawRect(rect2);
                painter.drawText(rect2,Qt::AlignCenter,text2);
                painter.restore();

            }else//data
            {
                QString tmp;

                if(j<m_PortsList.size())
                {
                    tmp.sprintf("%02x",crrcMvb->getUnsignedChar(m_PortsList[j],i-1));

                    text2 = tmp.toUpper();
                }else
                {
                    text2 = "";
                }
                rect3 = QRect(i*26+14,2+(j+1)*24,26,25);
                painter.drawText(rect3,Qt::AlignCenter,text2);
            }


            if(i%2==1)
            {
                painter.drawRect(QRect(i*26+14,2+(j+1)*24,52,25));
            }

        }
    }




}

