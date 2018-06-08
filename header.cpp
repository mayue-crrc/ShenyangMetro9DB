#include "header.h"
#include "ui_header.h"
#include "qdatetime.h"
#include "qdesktopwidget.h"
Header::Header(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::Header)
{
    ui->setupUi(this);
    helpPage = new VehicleHelpPage();
    helpPage->setGeometry(112,80,helpPage->width(),helpPage->height());
    helpPage->setWindowFlags(Qt::FramelessWindowHint);
    helpPage->move ((QApplication::desktop()->width() - helpPage->width())/2,(QApplication::desktop()->height() - helpPage->height())/2);
    helpPage->hide();
//
    cutoffhelpPage = new VehicleCutOffHelpPage();
    cutoffhelpPage->setGeometry(112,80,cutoffhelpPage->width(),cutoffhelpPage->height());
    cutoffhelpPage->setWindowFlags(Qt::FramelessWindowHint);
    cutoffhelpPage->move ((QApplication::desktop()->width() - cutoffhelpPage->width())/2,(QApplication::desktop()->height() - cutoffhelpPage->height())/2);
    cutoffhelpPage->hide();

    vehicleResetHelpPage = new VehicleResetHelpPage();
    vehicleResetHelpPage->setGeometry(112,80,cutoffhelpPage->width(),cutoffhelpPage->height());
    vehicleResetHelpPage->setWindowFlags(Qt::FramelessWindowHint);
    vehicleResetHelpPage->move ((QApplication::desktop()->width() - cutoffhelpPage->width())/2,(QApplication::desktop()->height() - cutoffhelpPage->height())/2);
    vehicleResetHelpPage->hide();

    powerresethelpPage = new VehiclePowerResetHelpPage();
    powerresethelpPage->setGeometry(112,80,powerresethelpPage->width(),powerresethelpPage->height());
    powerresethelpPage->setWindowFlags(Qt::FramelessWindowHint);
    powerresethelpPage->move ((QApplication::desktop()->width() - powerresethelpPage->width())/2,(QApplication::desktop()->height() - powerresethelpPage->height())/2);
    powerresethelpPage->hide();

    vehicleHVACHelpPage = new VehicleHVACHelpPage();
    vehicleHVACHelpPage->setGeometry(112,80,powerresethelpPage->width(),powerresethelpPage->height());
    vehicleHVACHelpPage->setWindowFlags(Qt::FramelessWindowHint);
    vehicleHVACHelpPage->move ((QApplication::desktop()->width() - powerresethelpPage->width())/2,(QApplication::desktop()->height() - powerresethelpPage->height())/2);
    vehicleHVACHelpPage->hide();

    vehicleBCUHelpPage = new VehicleBCUHelpPage();
    vehicleBCUHelpPage->setGeometry(112,80,powerresethelpPage->width(),powerresethelpPage->height());
    vehicleBCUHelpPage->setWindowFlags(Qt::FramelessWindowHint);
    vehicleBCUHelpPage->move ((QApplication::desktop()->width() - powerresethelpPage->width())/2,(QApplication::desktop()->height() - powerresethelpPage->height())/2);
    vehicleBCUHelpPage->hide();

    vehicleDCUHelpPage = new VehicleDCUHelpPage();
    vehicleDCUHelpPage->setGeometry(112,80,powerresethelpPage->width(),powerresethelpPage->height());
    vehicleDCUHelpPage->setWindowFlags(Qt::FramelessWindowHint);
    vehicleDCUHelpPage->move ((QApplication::desktop()->width() - powerresethelpPage->width())/2,(QApplication::desktop()->height() - powerresethelpPage->height())/2);
    vehicleDCUHelpPage->hide();

    vehicleACUHelpPage = new VehicleACUHelpPage();
    vehicleACUHelpPage->setGeometry(112,80,powerresethelpPage->width(),powerresethelpPage->height());
    vehicleACUHelpPage->setWindowFlags(Qt::FramelessWindowHint);
    vehicleACUHelpPage->move ((QApplication::desktop()->width() - powerresethelpPage->width())/2,(QApplication::desktop()->height() - powerresethelpPage->height())/2);
    vehicleACUHelpPage->hide();

    faulthelpPage = new VehicleFaultHelpPage();
    faulthelpPage->setGeometry(112,180,faulthelpPage->width(),faulthelpPage->height());
    faulthelpPage->setWindowFlags(Qt::FramelessWindowHint);
    faulthelpPage->move ((QApplication::desktop()->width() - faulthelpPage->width())/2,(QApplication::desktop()->height() - faulthelpPage->height())/2);
    faulthelpPage->hide();

    m_StationIDHash.insert(1,"怒江公园");
    m_StationIDHash.insert(2,"淮河街");
    m_StationIDHash.insert(3,"皇姑屯");
    m_StationIDHash.insert(4,"北一路");
    m_StationIDHash.insert(5,"北二路");
    m_StationIDHash.insert(6,"铁西广场");
    m_StationIDHash.insert(7,"兴华公园");
    m_StationIDHash.insert(8,"辽沈路");
    m_StationIDHash.insert(9,"滑翔");
    m_StationIDHash.insert(10,"吉力湖街");
    m_StationIDHash.insert(11,"汪河路");
    m_StationIDHash.insert(12,"曹仲");
    m_StationIDHash.insert(13,"沈苏西路");
    m_StationIDHash.insert(14,"胜利南街");
    m_StationIDHash.insert(15,"长白南");
    m_StationIDHash.insert(16,"榆树台");
    m_StationIDHash.insert(17,"金阳大街");
    m_StationIDHash.insert(18,"浑河堡");
    m_StationIDHash.insert(19,"奥体中心");
    m_StationIDHash.insert(20,"奥体东");
    m_StationIDHash.insert(21,"朗日街");
    m_StationIDHash.insert(22,"浑南大道");
    m_StationIDHash.insert(23,"建筑大学");

}

Header::~Header()
{
    delete ui;
}
void Header::getFaultObj(CrrcFault* crrcFault)
{
    m_crrcFault = crrcFault;
}

void Header::updatePage()
{
    if(m_crrcFault == NULL)
        return;
    this->ui->DateTime->setText(this->database->HMI_DateTime_foruse.date().toString("yyyy-MM-dd")+"\n"+this->database->HMI_DateTime_foruse.time().toString("hh:mm:ss"));
    this->ui->NetVoltage->setText(QString::number((float)this->database->CTHM_CatenaryVoltage_U16/10,10,1) + "V");
    this->ui->Speed->setText(QString::number(this->database->CTHM_TrainSpeed_U16/10)+"km/h");

    QString tmp ;
    if(this->database->CTHM_ATC1On_B1)
    {
        if(this->database->ATCT_ATBMode_B1)
        {
            tmp = "ATB";
        }else if (this->database->ATCT_ATOActive_B1)
        {
            tmp = "ATO";
        }else if (this->database->ATCT_CMMode_B1)
        {
            tmp = "CM";
        }else if (this->database->ATCT_RMFMode_B1)
        {
            tmp = "RMF";
        }else if (this->database->ATCT_RMRMode_B1)
        {
            tmp = "RMR";
        }else if (this->database->ATCT_BMMode_B1)
        {
            tmp = "BM";
        }else if (this->database->ATCT_CBTCMode_B1)
        {
            tmp = "CBTC";
        }else
        {
            tmp = "--";
        }
    }else
    {
        tmp = "--";
    }

    this->ui->DrivingMode->setText(tmp);

    tmp.clear();
    if(this->database->CTHM_EmgyBrake_B1)
    {
        tmp = "紧急制动";
        ui->Level->setStyleSheet("background-color:red;border: 2px solid rgb(255, 255, 255);font: 16px, \"微软雅黑\";");
    }
    else if(this->database->CTHM_FastBrake_B1)
    {
        tmp = "快速制动";
        ui->Level->setStyleSheet("background-color:red;border: 2px solid rgb(255, 255, 255);font: 16px, \"微软雅黑\";");
    }
    else if(this->database->CTHM_Traction_B1)
    {
        if(this->database->DICT_TC1DI1CH24Tractionsafe_B1 || this->database->DICT_TC2DI1CH24Tractionsafe_B1)
        {
            tmp = "牵引: "+QString::number(this->database->CTHM_Grade_U8);
            ui->Level->setStyleSheet("background-color:green;border: 2px solid rgb(255, 255, 255);font: 16px, \"微软雅黑\";");
        }else
        {
            tmp = "牵引: "+QString::number(this->database->CTHM_Grade_U8);
            ui->Level->setStyleSheet("background-color:gray;border: 2px solid rgb(255, 255, 255);font: 16px, \"微软雅黑\";");
        }


    }else if(this->database->CTHM_Brake_B1)
    {
        tmp = "制动: "+QString::number(this->database->CTHM_Grade_U8);
        ui->Level->setStyleSheet("background-color:red;border: 2px solid rgb(255, 255, 255);font: 16px, \"微软雅黑\";");
    }else
    {
        tmp = "0";
        ui->Level->setStyleSheet("background-color:black;border: 2px solid rgb(255, 255, 255);font: 16px, \"微软雅黑\";");

    }
    this->ui->Level->setText(tmp);

    if(!this->database->PUBPORT_CCUOnline_B1)
    {
        this->ui->CurrentFaultBtn->setStyleSheet("background-color:black;border:2px solid black;color: rgb(255, 0, 0);font: 24px, \"微软雅黑\";");
        static int blinkF = 0;
        if(blinkF++ > 2)
        {
            this->ui->CurrentFaultBtn->setText("通信\n中断");
            if(blinkF > 5)
            {
                blinkF = 0;
            }
        }else
        {
            this->ui->CurrentFaultBtn->setText("");
        }
    //}else if(this->m_crrcFault->getCurrentFaultListSize())
    }else if(CrrcFault::getCrrcFault()->getCurrentFaultListSize())
    {

        this->ui->CurrentFaultBtn->setText("");
        this->ui->CurrentFaultBtn->setStyleSheet("border-image: url(:/images/images/CurrentFaultItem.bmp)");

        this->ui->CurrentFaultBtn->show();
    }else
    {
        this->ui->CurrentFaultBtn->hide();

    }
    if(this->database->CTHM_CurrentStation_U8 >0 && this->database->CTHM_CurrentStation_U8 < 24)
    {
        this->ui->CurrentStation->setText(m_StationIDHash[this->database->CTHM_CurrentStation_U8]);
    }else
    {
        this->ui->CurrentStation->setText("- -");
    }
    if(this->database->CTHM_NextStation_U8 >0 && this->database->CTHM_NextStation_U8 < 24)
    {
        this->ui->NextStation->setText(m_StationIDHash[this->database->CTHM_NextStation_U8]);
    }else
    {
        this->ui->NextStation->setText("- -");
    }


}
void Header::showEvent(QShowEvent *)
{
    this->ui->PageName->setText("一般信息");
}

void Header::setPageName(QString name)
{
    this->ui->PageName->setText(name);
}


void Header::on_HelpItemBtn_pressed()
{
    if(this->currentPage == uVehicleRunStatePage)
    {
        if(!this->helpPage->isActiveWindow())
        {
            this->helpPage->close();
        }
        this->helpPage->show();
    }else
    {
        this->helpPage->close();
    }

    if(this->currentPage == uVehicleCutoffPage)
    {
        if(!this->cutoffhelpPage->isActiveWindow())
        {
            this->cutoffhelpPage->close();
        }
        this->cutoffhelpPage->show();
    }else
    {
        this->cutoffhelpPage->close();
    }

    if(this->currentPage == uVehicleResetPage)
    {
        if(!this->vehicleResetHelpPage->isActiveWindow())
        {
            this->vehicleResetHelpPage->close();
        }
        this->vehicleResetHelpPage->show();
    }else
    {
        this->vehicleResetHelpPage->close();
    }

    if(this->currentPage == uVehiclePowerResetPage)
    {
        if(!this->powerresethelpPage->isActiveWindow())
        {
            this->powerresethelpPage->close();
        }
        this->powerresethelpPage->show();
    }else
    {
        this->powerresethelpPage->close();
    }

    if(this->currentPage == uVehicleCurrentFaultPage || this->currentPage == uVehicleHistoryFaultPage)
    {
        if(!this->faulthelpPage->isActiveWindow())
        {
            this->faulthelpPage->close();
        }
        this->faulthelpPage->show();
    }else
    {
        this->faulthelpPage->close();
    }

    if(this->currentPage == uVehicleACPage || this->currentPage == uVehicleACPage2)
    {
        if(!this->vehicleHVACHelpPage->isActiveWindow())
        {
            this->vehicleHVACHelpPage->close();
        }
        this->vehicleHVACHelpPage->show();
    }else
    {
        this->vehicleHVACHelpPage->close();
    }

    if(this->currentPage == uVehicleEBCUPage || this->currentPage == uVehicleEBCUPage2)
    {
        if(!this->vehicleBCUHelpPage->isActiveWindow())
        {
            this->vehicleBCUHelpPage->close();
        }
        this->vehicleBCUHelpPage->show();
    }else
    {
        this->vehicleBCUHelpPage->close();
    }

    if(this->currentPage == uVehicleDCUPage)
    {
        if(!this->vehicleDCUHelpPage->isActiveWindow())
        {
            this->vehicleDCUHelpPage->close();
        }
        this->vehicleDCUHelpPage->show();
    }else
    {
        this->vehicleDCUHelpPage->close();
    }

    if(this->currentPage == uVehicleSIVPage)
    {
        if(!this->vehicleACUHelpPage->isActiveWindow())
        {
            this->vehicleACUHelpPage->close();
        }
        this->vehicleACUHelpPage->show();
    }else
    {
        this->vehicleACUHelpPage->close();
    }
}

void Header::on_CurrentFaultBtn_pressed()
{

}
