#include "widget.h"
#include "ui_widget.h"
#include "mybase.h"
#include "header.h"
#include "qtimer.h"
#include "database.h"
#include "navigator.h"
#include "simulation.h"
#include "vehiclerunstatepage.h"
#include "vehiclemaintaincepage.h"
#include "maintainceportsdatapage.h"
#include "maintaincehmicheckpage.h"
#include "maintaincetcmsstatespage.h"
#include "crrcmvb.h"
#include "crrcfault.h"
#include "maintaincehmiinitsetpage.h"
#include "ctrltraingraph.h"
#include "maintainceversionpage.h"
#include "maintaincewheelsetpage.h"
#include "maintaincedatetimesetpage.h"
#include "maintainceloadpage.h"
#include "maintaincerundistancepage.h"
#include "maintainceconsumptionpage.h"
#include "maintainceacprunpage.h"
#include "maintaincebcutestpage.h"
#include "vehiclecutoffpage.h"
#include "vehicleresetpage.h"
#include "vehiclepowerresetpage.h"
#include "maintainceallportspage.h"
#include "vehicleebcupage.h"
#include "vehicleebcupage2.h"
#include "vehicledcupage.h"
#include "vehiclesivpage.h"
#include "vehicleacpage.h"
#include "vehicleacpage2.h"
#include "maintainceriomdetailpage.h"
#include "vehiclepasswordpage.h"
#include "vehiclebypasspage.h"
#include "maintaincetrainnumsetpage.h"
#include "vehiclewmspage.h"
#include "maintaincedatamanagementpage.h"
#include "vehiclecurrentfaultpage.h"
#include "maintaincetestpage.h"
#include "vehiclehistoryfaultpage.h"
#include "vehicleunactivepage.h"
#include "ctrlfaultdetailconfirm.h"
#include "maintaincefaultquerypage.h"
#include "maintaincefaultshowpage.h"
#include "vehiclesivpage2.h"
#include "h8.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    QDesktopWidget *desktop = QApplication::desktop();

    if (desktop->width() == 800 && desktop->height() == 600)
    {
        this->showFullScreen();
    }
    else
    {
        this->move((desktop->width() - this->width()) / 2, (desktop->height() - this->height()) / 2);
    }
    //初始化配置类
    if(MainGetDefaultPara::configureValid())
    {
        logger()->info("配置文件读取成功");
    }else
    {
        logger()->info("configure.ini文件错误");
    }

    if(CrrcFault::initCrrcFault("fault_type_SY9.db","fault_DB_SY9.db"))
    {
        crrcFault = CrrcFault::getCrrcFault();
    }else
    {
        logger()->error("故障文件初始化错误");
    }

    this->timer = new QTimer;
    connect(timer, SIGNAL(timeout()), this, SLOT(updatePage()));

    this->UnactiveTimer60s = new QTimer;
    connect(UnactiveTimer60s, SIGNAL(timeout()), this, SLOT(changeUnactivePage()));
    isHMIUnactive = false;

    //init H8 config
    H8::initH8("/dev/ttyUSB_SC");
    H8::getH8()->setBrightness(0);

    this->simulation = new Simulation();
    this->simulation->hide();

    this->header = new Header(this);
    this->header->setMyBase(uTop,QString("标题栏"));
    this->header->getFaultObj(crrcFault);
    this->header->show();

    this->ctrlTraingraph = new CtrlTraingraph(this);
    this->ctrlTraingraph->setMyBase(uTrainGraph,QString("车体栏"));
    this->ctrlTraingraph->hide();

    this->navigator = new Navigator(this);
    this->navigator->setMyBase(uBottom,QString("导航栏"));
    this->navigator->show();

    this->vehicleRunStatePage = new VehicleRunStatePage(this);
    this->vehicleRunStatePage->setMyBase(uMiddle,QString("一般\n信息"));
    this->vehicleRunStatePage->show();

    this->vehicleMaintaincePage = new VehicleMaintaincePage(this);
    this->vehicleMaintaincePage->setMyBase(uMiddle,QString("维护\n菜单"));
    this->vehicleMaintaincePage->hide();

    this->maintaincePortsDataPage = new MaintaincePortsDataPage(this);
    this->maintaincePortsDataPage->setMyBase(uLargeMiddle,QString("数据\n传输"));
    this->maintaincePortsDataPage->hide();

    this->maintainceHMICheckPage = new MaintainceHMICheckPage(this);
    this->maintainceHMICheckPage->setMyBase(uHuge,QString("像素\n检查"));
    this->maintainceHMICheckPage->hide();

    this->maintainceTCMSStatesPage = new MaintainceTCMSStatesPage(this);
    this->maintainceTCMSStatesPage->setMyBase(uLargeMiddleTrainGraph,QString("传输\n检查"));
    this->maintainceTCMSStatesPage->hide();

    this->maintainceHMIInitsetPage = new MaintainceHMIInitsetPage(this);
    this->maintainceHMIInitsetPage->setMyBase(uLargeMiddle,QString("HMI\n设置"));
    this->maintainceHMIInitsetPage->hide();



    this->maintainceVersionPage = new MaintainceVersionPage(this);
    this->maintainceVersionPage->setMyBase(uLargeMiddleTrainGraph,QString("软件\n版本"));
    this->maintainceVersionPage->hide();

    this->maintainceWheelsetPage = new MaintainceWheelsetPage(this);
    this->maintainceWheelsetPage->setMyBase(uLargeMiddleTrainGraph,QString("轮径\n设置"));
    this->maintainceWheelsetPage->hide();

    this->maintainceDatetimesetPage = new MaintainceDatetimesetPage(this);
    this->maintainceDatetimesetPage->setMyBase(uLargeMiddle,QString("时间\n设定"));
    this->maintainceDatetimesetPage->hide();

    this->maintainceLoadPage = new MaintainceLoadPage(this);
    this->maintainceLoadPage->setMyBase(uLargeMiddleTrainGraph,QString("载荷"));
    this->maintainceLoadPage->hide();

    this->maintainceRunDistancePage = new MaintainceRunDistancePage(this);
    this->maintainceRunDistancePage->setMyBase(uLargeMiddleTrainGraph,QString("行驶\n距离"));
    this->maintainceRunDistancePage->hide();

    this->maintainceConsumptionPage = new MaintainceConsumptionPage(this);
    this->maintainceConsumptionPage->setMyBase(uLargeMiddleTrainGraph,QString("能耗"));
    this->maintainceConsumptionPage->hide();

    this->maintainceACPRunPage = new MaintainceACPRunPage(this);
    this->maintainceACPRunPage->setMyBase(uLargeMiddleTrainGraph,QString("空压机\n运行"));
    this->maintainceACPRunPage->hide();

    this->maintainceBCUTestPage = new MaintainceBCUTestPage(this);
    this->maintainceBCUTestPage->setMyBase(uLargeMiddleTrainGraph,QString("制动\n自检"));
    this->maintainceBCUTestPage->hide();

    this->vehicleCutoffPage = new VehicleCutoffPage(this);
    this->vehicleCutoffPage->setMyBase(uLargeMiddle,QString("切除\n页面"));
    this->vehicleCutoffPage->hide();

    this->vehicleResetPage = new VehicleResetPage(this);
    this->vehicleResetPage->setMyBase(uLargeMiddle,QString("复位\n页面"));
    this->vehicleResetPage->hide();

    this->vehiclePowerResetPage = new VehiclePowerResetPage(this);
    this->vehiclePowerResetPage->setMyBase(uLargeMiddle,QString("液磁\n复位"));
    this->vehiclePowerResetPage->hide();

    this->maintainceAllPortsPage = new MaintainceAllPortsPage(this);
    this->maintainceAllPortsPage->setMyBase(uHuge,QString("数据\n端口"));
    this->maintainceAllPortsPage->hide();

    this->vehicleEBCUPage = new VehicleEBCUPage(this);
    this->vehicleEBCUPage->setMyBase(uMiddleTrainGraph,QString("制动"));
    this->vehicleEBCUPage->hide();

    this->vehicleEBCUPage2 = new VehicleEBCUPage2(this);
    this->vehicleEBCUPage2->setMyBase(uMiddleTrainGraph,QString("制动"));
    this->vehicleEBCUPage2->hide();

    this->vehicleDCUPage = new VehicleDCUPage(this);
    this->vehicleDCUPage->setMyBase(uMiddleTrainGraph,QString("牵引"));
    this->vehicleDCUPage->hide();

    this->vehicleSIVPage = new VehicleSIVPage(this);
    this->vehicleSIVPage->setMyBase(uMiddleTrainGraph,QString("辅助"));
    this->vehicleSIVPage->hide();

    this->vehicleSIVPage2 = new VehicleSIVPage2(this);
    this->vehicleSIVPage2->setMyBase(uMiddleTrainGraph,QString("辅助"));
    this->vehicleSIVPage2->hide();

    this->vehicleACPage = new VehicleACPage(this);
    this->vehicleACPage->setMyBase(uMiddleTrainGraph,QString("空调1"));
    this->vehicleACPage->hide();

    this->vehicleACPage2 = new VehicleACPage2(this);
    this->vehicleACPage2->setMyBase(uMiddleTrainGraph,QString("空调2"));
    this->vehicleACPage2->hide();

    this->maintainceRIOMDetailPage = new MaintainceRIOMDetailPage(this);
    this->maintainceRIOMDetailPage->setMyBase(uLargeMiddle,QString("接口\n信号"));
    this->maintainceRIOMDetailPage->hide();

    this->vehiclePasswordPage = new VehiclePasswordPage(this);
    this->vehiclePasswordPage->setMyBase(uLargeMiddle,QString("密码\n页面"));
    this->vehiclePasswordPage->hide();

    this->vehicleBypassPage = new VehicleBypassPage(this);
    this->vehicleBypassPage->setMyBase(uMiddleTrainGraph,QString("旁路\n页面"));
    this->vehicleBypassPage->hide();

    this->maintainceTrainNumSetPage = new MaintainceTrainNumSetPage(this);
    this->maintainceTrainNumSetPage->setMyBase(uMiddleTrainGraph,QString("车号\n设定"));
    this->maintainceTrainNumSetPage->hide();

    this->vehicleWMSPage = new VehicleWMSPage(this);
    this->vehicleWMSPage->setMyBase(uLargeMiddle,QString("火灾\n报警"));
    this->vehicleWMSPage->hide();

    this->maintainceDataManagementPage = new MaintainceDataManagementPage(this);
    this->maintainceDataManagementPage->setMyBase(uLargeMiddle,QString("数据\n管理"));
    this->maintainceDataManagementPage->hide();

    this->vehicleCurrentFaultPage = new VehicleCurrentFaultPage(this);
    this->vehicleCurrentFaultPage->setMyBase(uMiddle,QString("当前\n车况"));
    this->vehicleCurrentFaultPage->GetcrrcFaultInfo(crrcFault);
    this->vehicleCurrentFaultPage->hide();

    this->vehicleHistoryFaultPage = new VehicleHistoryFaultPage(this);
    this->vehicleHistoryFaultPage->setMyBase(uMiddle,QString("故障\n履历"));
    this->vehicleHistoryFaultPage->GetcrrcFaultInfo(crrcFault);
    this->vehicleHistoryFaultPage->hide();

    this->maintainceTestPage = new MaintainceTestPage(this);
    this->maintainceTestPage->setMyBase(uLargeMiddleTrainGraph,QString("试运行"));
    this->maintainceTestPage->hide();

    this->vehicleUnactivePage = new VehicleUnactivePage(this);
    this->vehicleUnactivePage->setMyBase(uHuge,QString("非激活"));
    this->vehicleUnactivePage->hide();

    this->maintainceFaultShowPage = new MaintainceFaultShowPage(this);
    this->maintainceFaultShowPage->setMyBase(uLargeMiddle,QString("故障\n记录"));
    this->maintainceFaultShowPage->hide();

    this->maintainceFaultQueryPage = new MaintainceFaultQueryPage(this);
    this->maintainceFaultQueryPage->setMyBase(uLargeMiddle,QString("故障\n记录"));
    this->maintainceFaultQueryPage->hide();

    connect(this->maintainceFaultQueryPage,SIGNAL(QueryFault(QString,QueryType)),
            this->maintainceFaultShowPage,SLOT(getQueryStr(QString,QueryType)));


    this->widgets.insert(uVehicleRunStatePage,this->vehicleRunStatePage);
    this->widgets.insert(uVehicleMaintaincePage,this->vehicleMaintaincePage);
    this->widgets.insert(uMaintaincePortsDataPage,this->maintaincePortsDataPage);
    this->widgets.insert(uMaintainceHMICheckPage,this->maintainceHMICheckPage);
    this->widgets.insert(uMaintainceTCMSStatePages,this->maintainceTCMSStatesPage);
    this->widgets.insert(uMaintainceHMIInitsetPage,this->maintainceHMIInitsetPage);
    this->widgets.insert(uMaintainceVersionPage,this->maintainceVersionPage);
    this->widgets.insert(uMaintainceWheelsetPage,this->maintainceWheelsetPage);
    this->widgets.insert(uMaintainceDatetimesetPage,this->maintainceDatetimesetPage);
    this->widgets.insert(uMaintainceLoadPage,this->maintainceLoadPage);
    this->widgets.insert(uMaintainceRunDistancePage,this->maintainceRunDistancePage);
    this->widgets.insert(uMaintainceConsumptionPage,this->maintainceConsumptionPage);
    this->widgets.insert(uMaintainceACPRunPage,this->maintainceACPRunPage);
    this->widgets.insert(uMaintainceBCUTestPage,this->maintainceBCUTestPage);
    this->widgets.insert(uVehicleCutoffPage,this->vehicleCutoffPage);
    this->widgets.insert(uVehicleResetPage,this->vehicleResetPage);
    this->widgets.insert(uVehiclePowerResetPage,this->vehiclePowerResetPage);
    this->widgets.insert(uMaintainceAllPortsPage,this->maintainceAllPortsPage);
    this->widgets.insert(uVehicleEBCUPage,this->vehicleEBCUPage);
    this->widgets.insert(uVehicleEBCUPage2,this->vehicleEBCUPage2);
    this->widgets.insert(uVehicleDCUPage,this->vehicleDCUPage);
    this->widgets.insert(uVehicleSIVPage,this->vehicleSIVPage);
    this->widgets.insert(uVehicleSIVPage2,this->vehicleSIVPage2);
    this->widgets.insert(uVehicleACPage,this->vehicleACPage);
    this->widgets.insert(uVehicleACPage2,this->vehicleACPage2);
    this->widgets.insert(uMaintainceRIOMDetailPage,this->maintainceRIOMDetailPage);
    this->widgets.insert(uVehiclePasswordPage,this->vehiclePasswordPage);
    this->widgets.insert(uVehicleBypassPage,this->vehicleBypassPage);
    this->widgets.insert(uMaintainceTrainNumSetPage,this->maintainceTrainNumSetPage);
    this->widgets.insert(uVehicleWMSPage,this->vehicleWMSPage);
    this->widgets.insert(uMaintainceDataManagementPage,this->maintainceDataManagementPage);
    this->widgets.insert(uVehicleCurrentFaultPage,this->vehicleCurrentFaultPage);
    this->widgets.insert(uMaintainceTestPage,this->maintainceTestPage);
    this->widgets.insert(uVehicleHistoryFaultPage,this->vehicleHistoryFaultPage);
    this->widgets.insert(uVehicleUnactivePage,this->vehicleUnactivePage);
    this->widgets.insert(uMaintainceFaultShowPage,this->maintainceFaultShowPage);
    this->widgets.insert(uMaintainceFaultQureyPage,this->maintainceFaultQueryPage);


    //this->widgets.insert(uCtrlTraingraph,this->ctrlTraingraph);


//    this->ctrlFaultDetailConfirm = new CtrlFaultDetailConfirm(this);
//    this->ctrlFaultDetailConfirm->getFaultObj(crrcFault);
//    this->ctrlFaultDetailConfirm->setGeometry(212,220,ctrlFaultDetailConfirm->width(),ctrlFaultDetailConfirm->height());
//    this->ctrlFaultDetailConfirm->hide();
    connect(vehicleRunStatePage,SIGNAL(changePWPage(int)),vehiclePasswordPage,SLOT(getPage(int)));
    connect(navigator,SIGNAL(changePWPage(int)),vehiclePasswordPage,SLOT(getPage(int)));
    connect(vehicleMaintaincePage,SIGNAL(changePWPage(int)),vehiclePasswordPage,SLOT(getPage(int)));


    crrcMvb = CrrcMvb::getCrrcMvb();

    this->database = new Database();
    MyBase::database = this->database;
}

Widget::~Widget()
{
    this->crrcFault->closeDB();
    delete ui;
}
void Widget::updatePage()
{
    static QTime timeStart(QTime::currentTime());

    static int counter = 1;

    this->header->updatePage();
    this->navigator->updatePage();
    this->ctrlTraingraph->updatePage();
    this->widgets[MyBase::currentPage]->updatePage();

    // refresh the mvb port every 0.66 second, the code which occupies cpu time a lot should not execute at the same cycle
    if (counter % 2 == 0)
    {
        this->crrcMvb->synchronizeMvbData();

        this->database->updateDatabse(crrcMvb);
        this->maintaincePortsDataPage->installMvb(crrcMvb);
        this->maintainceAllPortsPage->installMvb(crrcMvb);
        this->simulation->installMvb(crrcMvb);


    }


    // define local time for recording and showing
    QDateTime dateTimeLocal;
    if(this->database->PUBPORT_CCUOnline_B1)
    {
        VCUtime2HMI10s();

        QDate date( this->database->PUBPORT_SysTimeYear_U8+2000,this->database->PUBPORT_SysTimeMonth_U8,this->database->PUBPORT_SysTimeDay_U8  );
        QTime time( this->database->PUBPORT_SysTimeHour_U8, this->database->PUBPORT_SysTimeMinute_U8, this->database->PUBPORT_SysTimeSecond_U8);
        this->database->HMI_DateTime_foruse.setDate(date);
        this->database->HMI_DateTime_foruse.setTime(time);
        if(this->database->HMI_DateTime_foruse.isValid())
        {

        }else
        {
            this->database->HMI_DateTime_foruse.setDate(dateTimeLocal.currentDateTime().date());
            this->database->HMI_DateTime_foruse.setTime(dateTimeLocal.currentDateTime().time());
        }
    }else
    {
        this->database->HMI_DateTime_foruse.setDate(dateTimeLocal.currentDateTime().date());
        this->database->HMI_DateTime_foruse.setTime(dateTimeLocal.currentDateTime().time());
    }
    this->crrcFault->getLocalDateTime(this->database->HMI_DateTime_foruse);

    // refresh the fault list every 2/3 second, the code which occupies cpu time a lot should not execute at the same cycle
    static int faultdelaycnt = 45;//0;
    // fault scan delay 15s, then start thread!!

    if ((faultdelaycnt++ > 45) && counter%2 == 1
#ifndef USER_DEBUG_MODE
        && this->database->PUBPORT_CCUOnline_B1
#endif
        )
    {
        crrcFault->start();
        faultdelaycnt = 60;
    }

    // 2018/4/12 add unactive page logic
    if((this->database->HMIPosition == 1 && this->database->CTHM_TC2Active_B1 == true)||
       (this->database->HMIPosition == 2 && this->database->CTHM_TC1Active_B1 == true))
    {
        if(UnactiveTimer60s->isActive() || this->isHMIUnactive == true) //已经熄屏或者定时器已经激活，则不再开启定时器
        {

        }else
        {
            this->UnactiveTimer60s->start(60000);
        }
    }else
    {
        //当无钥匙激活或者本端钥匙激活时，停止定时器，且恢复屏幕亮度
        this->UnactiveTimer60s->stop();

        if(this->isHMIUnactive == true)
        {
            H8::getH8()->setBrightness(0);
            this->isHMIUnactive = false;
            changePage(uVehicleRunStatePage);
        }

    }

    counter >= 100 ? (counter = 1) : (counter ++);

    if (timeStart.msecsTo(QTime::currentTime()) > 500)
    {
        _LOG << "update page time out fault" << timeStart.msecsTo(QTime::currentTime()) << ", please check it";
    }

    timeStart = QTime::currentTime();

}
void Widget::changePage(int page)
{

    foreach (int key, this->widgets.keys())
    {
        if (key == page)
        {
            MyBase::currentPage = page;
            this->widgets[page]->show();

            this->header->setPageName(this->widgets[page]->name);
            if(this->widgets[page]->Position == uHuge)
            {
                this->navigator->hide();
                this->ctrlTraingraph->hide();
                this->header->hide();
            }else if(this->widgets[page]->Position == uLargeMiddle)
            {
                this->header->show();
                this->navigator->hide();
                this->ctrlTraingraph->hide();

            }else if(this->widgets[page]->Position == uLargeMiddleTrainGraph)
            {
                this->header->show();
                this->navigator->hide();
                this->ctrlTraingraph->show();

            }else if(this->widgets[page]->Position == uMiddleTrainGraph)
            {
                this->header->show();
                this->navigator->show();
                this->ctrlTraingraph->show();
            }else
            {
                this->header->show();
                this->navigator->show();
                this->ctrlTraingraph->hide();

            }

            logger()->info("切换页面到"+this->widgets[page]->name);
            //_LOG << "change page to" << this->widgets[page]->name;
        }
        else
        {
            this->widgets[key]->hide();
        }
    }
}
void Widget::showEvent(QShowEvent *)
{

#ifndef WINDOWS_MODE
        if(database->HMIPosition == 1)//config  sourcePORT and IP
        {
            system("ifconfig eth0 192.168.2.3");

            if(!crrcMvb->initializeMvb(0x31))
            {
                //logger()->error("MVB板卡初始化失败");
            }

            //HMI-CCU
            crrcMvb->addSourcePort(0x200,uFCode4,256);
            crrcMvb->addSourcePort(0x201,uFCode4,256);
            crrcMvb->addSourcePort(0x202,uFCode4,256);
            crrcMvb->addSourcePort(0x203,uFCode4,256);

            crrcMvb->addSinkPort(0x280,uFCode4,256);
            crrcMvb->addSinkPort(0x281,uFCode4,256);
            crrcMvb->addSinkPort(0x282,uFCode4,256);
            crrcMvb->addSinkPort(0x283,uFCode4,256);

        }else if(database->HMIPosition == 2)
        {
            system("ifconfig eth0 192.168.2.4");
            if(!crrcMvb->initializeMvb(0x32))
            {
                //logger()->error("MVB板卡初始化失败");
            }
            //HMI-CCU
            crrcMvb->addSinkPort(0x200,uFCode4,256);
            crrcMvb->addSinkPort(0x201,uFCode4,256);
            crrcMvb->addSinkPort(0x202,uFCode4,256);
            crrcMvb->addSinkPort(0x203,uFCode4,256);

            crrcMvb->addSourcePort(0x280,uFCode4,256);
            crrcMvb->addSourcePort(0x281,uFCode4,256);
            crrcMvb->addSourcePort(0x282,uFCode4,256);
            crrcMvb->addSourcePort(0x283,uFCode4,256);
        }
        //add ports
        {
            //null port
            crrcMvb->addSinkPort(0xfff,uFCode4,256);
            //CCU-ALL
            crrcMvb->addSinkPort(0x0FF,uFCode2,256);
            crrcMvb->addSinkPort(0x800,uFCode2,512);

            crrcMvb->addSinkPort(0x0F1,uFCode1,1024);
            crrcMvb->addSinkPort(0x0F2,uFCode1,1024);
            crrcMvb->addSinkPort(0x0F3,uFCode1,1024);
            crrcMvb->addSinkPort(0x0F4,uFCode1,1024);
            crrcMvb->addSinkPort(0x0F5,uFCode1,1024);
            crrcMvb->addSinkPort(0x0F6,uFCode1,1024);

            //RIOM-CCU
            crrcMvb->addSinkPort(0x110,uFCode4,64);
            crrcMvb->addSinkPort(0x111,uFCode4,64);
            crrcMvb->addSinkPort(0x112,uFCode4,64);

            crrcMvb->addSinkPort(0x120,uFCode4,64);
            crrcMvb->addSinkPort(0x121,uFCode4,64);

            crrcMvb->addSinkPort(0x130,uFCode4,64);
            crrcMvb->addSinkPort(0x131,uFCode4,64);

            crrcMvb->addSinkPort(0x140,uFCode4,64);
            crrcMvb->addSinkPort(0x141,uFCode4,64);

            crrcMvb->addSinkPort(0x150,uFCode4,64);
            crrcMvb->addSinkPort(0x151,uFCode4,64);

            crrcMvb->addSinkPort(0x160,uFCode4,64);
            crrcMvb->addSinkPort(0x161,uFCode4,64);
            crrcMvb->addSinkPort(0x162,uFCode4,64);

            //CCU-RIOM
            crrcMvb->addSinkPort(0x118,uFCode4,64);
            crrcMvb->addSinkPort(0x128,uFCode4,64);
            crrcMvb->addSinkPort(0x138,uFCode4,64);
            crrcMvb->addSinkPort(0x148,uFCode4,64);
            crrcMvb->addSinkPort(0x158,uFCode4,64);
            crrcMvb->addSinkPort(0x168,uFCode4,64);

            //CCU-HMI
            crrcMvb->addSinkPort(0x218,uFCode4,256);
            crrcMvb->addSinkPort(0x219,uFCode4,256);
            crrcMvb->addSinkPort(0x21A,uFCode4,256);

            //ERM-CCU
            crrcMvb->addSinkPort(0x310,uFCode4,256);
            crrcMvb->addSinkPort(0x311,uFCode4,256);
            crrcMvb->addSinkPort(0x312,uFCode4,256);
            crrcMvb->addSinkPort(0x313,uFCode4,256);

            crrcMvb->addSinkPort(0x320,uFCode4,256);
            crrcMvb->addSinkPort(0x321,uFCode4,256);
            crrcMvb->addSinkPort(0x322,uFCode4,256);
            crrcMvb->addSinkPort(0x323,uFCode4,256);

            //CCU-ERM
            crrcMvb->addSinkPort(0x318,uFCode4,256);

            //SIV-CCU
            crrcMvb->addSinkPort(0x501,uFCode4,64);
            crrcMvb->addSinkPort(0x502,uFCode4,1024);
            crrcMvb->addSinkPort(0x503,uFCode4,1024);
            crrcMvb->addSinkPort(0x504,uFCode3,1024);

            crrcMvb->addSinkPort(0x511,uFCode4,64);
            crrcMvb->addSinkPort(0x512,uFCode4,1024);
            crrcMvb->addSinkPort(0x513,uFCode4,1024);
            crrcMvb->addSinkPort(0x514,uFCode3,1024);

            crrcMvb->addSinkPort(0x531,uFCode4,64);
            crrcMvb->addSinkPort(0x532,uFCode4,1024);
            crrcMvb->addSinkPort(0x533,uFCode4,1024);
            crrcMvb->addSinkPort(0x534,uFCode3,1024);

            crrcMvb->addSinkPort(0x521,uFCode4,64);
            crrcMvb->addSinkPort(0x522,uFCode4,1024);
            crrcMvb->addSinkPort(0x523,uFCode4,1024);
            crrcMvb->addSinkPort(0x524,uFCode3,1024);

            //CCU-SIV
            crrcMvb->addSinkPort(0x509,uFCode3,64);
            crrcMvb->addSinkPort(0x50A,uFCode3,1024);

            crrcMvb->addSinkPort(0x519,uFCode3,64);
            crrcMvb->addSinkPort(0x51A,uFCode3,1024);

            crrcMvb->addSinkPort(0x539,uFCode3,64);
            crrcMvb->addSinkPort(0x53A,uFCode3,1024);

            crrcMvb->addSinkPort(0x529,uFCode3,64);
            crrcMvb->addSinkPort(0x52A,uFCode3,1024);

            //DCU-CCU
            crrcMvb->addSinkPort(0x490,uFCode3,32);
            crrcMvb->addSinkPort(0x491,uFCode4,64);
            crrcMvb->addSinkPort(0x492,uFCode4,512);
            crrcMvb->addSinkPort(0x493,uFCode4,512);
            crrcMvb->addSinkPort(0x494,uFCode3,512);

            crrcMvb->addSinkPort(0x4C0,uFCode3,32);
            crrcMvb->addSinkPort(0x4C1,uFCode4,64);
            crrcMvb->addSinkPort(0x4C2,uFCode4,512);
            crrcMvb->addSinkPort(0x4C3,uFCode4,512);
            crrcMvb->addSinkPort(0x4C4,uFCode3,512);

            crrcMvb->addSinkPort(0x4D0,uFCode3,32);
            crrcMvb->addSinkPort(0x4D1,uFCode4,64);
            crrcMvb->addSinkPort(0x4D2,uFCode4,512);
            crrcMvb->addSinkPort(0x4D3,uFCode4,512);
            crrcMvb->addSinkPort(0x4D4,uFCode3,512);

            crrcMvb->addSinkPort(0x480,uFCode3,32);
            crrcMvb->addSinkPort(0x481,uFCode4,64);
            crrcMvb->addSinkPort(0x482,uFCode4,512);
            crrcMvb->addSinkPort(0x483,uFCode4,512);
            crrcMvb->addSinkPort(0x484,uFCode3,512);

            //CCU-DCU
            crrcMvb->addSinkPort(0x498,uFCode3,32);
            crrcMvb->addSinkPort(0x499,uFCode4,64);
            crrcMvb->addSinkPort(0x49A,uFCode4,512);

            crrcMvb->addSinkPort(0x4C8,uFCode3,32);
            crrcMvb->addSinkPort(0x4C9,uFCode4,64);
            crrcMvb->addSinkPort(0x4CA,uFCode4,512);

            crrcMvb->addSinkPort(0x4D8,uFCode3,32);
            crrcMvb->addSinkPort(0x4D9,uFCode4,64);
            crrcMvb->addSinkPort(0x4DA,uFCode4,512);

            crrcMvb->addSinkPort(0x488,uFCode3,32);
            crrcMvb->addSinkPort(0x489,uFCode4,64);
            crrcMvb->addSinkPort(0x48A,uFCode4,512);

            //EBCU-CCU 1－6架 edcu1 0X610－0X616 edcu2 0X630－0X636 7－12架 edcu3 0X640－0X646 edcu4 0X660－0X666
            crrcMvb->addSinkPort(0x610,uFCode4,64);
            crrcMvb->addSinkPort(0x611,uFCode4,64);
            crrcMvb->addSinkPort(0x612,uFCode4,64);
            crrcMvb->addSinkPort(0x613,uFCode4,64);
            crrcMvb->addSinkPort(0x614,uFCode4,64);
            crrcMvb->addSinkPort(0x615,uFCode4,64);
            crrcMvb->addSinkPort(0x616,uFCode4,64);

            crrcMvb->addSinkPort(0x630,uFCode4,64);
            crrcMvb->addSinkPort(0x631,uFCode4,64);
            crrcMvb->addSinkPort(0x632,uFCode4,64);
            crrcMvb->addSinkPort(0x633,uFCode4,64);
            crrcMvb->addSinkPort(0x634,uFCode4,64);
            crrcMvb->addSinkPort(0x635,uFCode4,64);
            crrcMvb->addSinkPort(0x636,uFCode4,64);

            crrcMvb->addSinkPort(0x640,uFCode4,64);
            crrcMvb->addSinkPort(0x641,uFCode4,64);
            crrcMvb->addSinkPort(0x642,uFCode4,64);
            crrcMvb->addSinkPort(0x643,uFCode4,64);
            crrcMvb->addSinkPort(0x644,uFCode4,64);
            crrcMvb->addSinkPort(0x645,uFCode4,64);
            crrcMvb->addSinkPort(0x646,uFCode4,64);

            crrcMvb->addSinkPort(0x660,uFCode4,64);
            crrcMvb->addSinkPort(0x661,uFCode4,64);
            crrcMvb->addSinkPort(0x662,uFCode4,64);
            crrcMvb->addSinkPort(0x663,uFCode4,64);
            crrcMvb->addSinkPort(0x664,uFCode4,64);
            crrcMvb->addSinkPort(0x665,uFCode4,64);
            crrcMvb->addSinkPort(0x666,uFCode4,64);

            //add virtual port
            crrcMvb->addVirtualPort(0xf610,uFCode4);
            crrcMvb->addVirtualPort(0xf611,uFCode4);
            crrcMvb->addVirtualPort(0xf612,uFCode4);
            crrcMvb->addVirtualPort(0xf613,uFCode4);
            crrcMvb->addVirtualPort(0xf614,uFCode4);
            crrcMvb->addVirtualPort(0xf615,uFCode4);
            crrcMvb->addVirtualPort(0xf616,uFCode4);
            crrcMvb->addVirtualPort(0xf640,uFCode4);
            crrcMvb->addVirtualPort(0xf641,uFCode4);
            crrcMvb->addVirtualPort(0xf642,uFCode4);
            crrcMvb->addVirtualPort(0xf643,uFCode4);
            crrcMvb->addVirtualPort(0xf644,uFCode4);
            crrcMvb->addVirtualPort(0xf645,uFCode4);
            crrcMvb->addVirtualPort(0xf646,uFCode4);

            //CCU-EBCU
            crrcMvb->addSinkPort(0x618,uFCode4,32);
            crrcMvb->addSinkPort(0x628,uFCode3,512);
            crrcMvb->addSinkPort(0x638,uFCode4,1024);

            //ATC-CCU
            crrcMvb->addSinkPort(0xB10,uFCode1,32);
            crrcMvb->addSinkPort(0xB11,uFCode4,128);

            //CCU-ATC
            crrcMvb->addSinkPort(0xB18,uFCode3,128);

            //EDCU-CCU
            crrcMvb->addSinkPort(0x710,uFCode4,256);
            crrcMvb->addSinkPort(0x711,uFCode4,256);

            crrcMvb->addSinkPort(0x720,uFCode4,256);
            crrcMvb->addSinkPort(0x721,uFCode4,256);

            crrcMvb->addSinkPort(0x730,uFCode4,256);
            crrcMvb->addSinkPort(0x731,uFCode4,256);

            crrcMvb->addSinkPort(0x740,uFCode4,256);
            crrcMvb->addSinkPort(0x741,uFCode4,256);

            crrcMvb->addSinkPort(0x750,uFCode4,256);
            crrcMvb->addSinkPort(0x751,uFCode4,256);

            crrcMvb->addSinkPort(0x760,uFCode4,256);
            crrcMvb->addSinkPort(0x761,uFCode4,256);

            crrcMvb->addSinkPort(0x770,uFCode4,256);
            crrcMvb->addSinkPort(0x771,uFCode4,256);

            crrcMvb->addSinkPort(0x780,uFCode4,256);
            crrcMvb->addSinkPort(0x781,uFCode4,256);

            crrcMvb->addSinkPort(0x790,uFCode4,256);
            crrcMvb->addSinkPort(0x791,uFCode4,256);

            crrcMvb->addSinkPort(0x7A0,uFCode4,256);
            crrcMvb->addSinkPort(0x7A1,uFCode4,256);

            crrcMvb->addSinkPort(0x7B0,uFCode4,256);
            crrcMvb->addSinkPort(0x7B1,uFCode4,256);

            crrcMvb->addSinkPort(0x7C0,uFCode4,256);
            crrcMvb->addSinkPort(0x7C1,uFCode4,256);

            //virtual edcu ports
            crrcMvb->addVirtualPort(0xf710,uFCode4);
            crrcMvb->addVirtualPort(0xf711,uFCode4);
            crrcMvb->addVirtualPort(0xf730,uFCode4);
            crrcMvb->addVirtualPort(0xf731,uFCode4);
            crrcMvb->addVirtualPort(0xf750,uFCode4);
            crrcMvb->addVirtualPort(0xf751,uFCode4);
            crrcMvb->addVirtualPort(0xf770,uFCode4);
            crrcMvb->addVirtualPort(0xf771,uFCode4);
            crrcMvb->addVirtualPort(0xf790,uFCode4);
            crrcMvb->addVirtualPort(0xf791,uFCode4);
            crrcMvb->addVirtualPort(0xf7b0,uFCode4);
            crrcMvb->addVirtualPort(0xf7b1,uFCode4);


            //ACU-CCU
            crrcMvb->addSinkPort(0x910,uFCode4,512);
            crrcMvb->addSinkPort(0x920,uFCode4,512);
            crrcMvb->addSinkPort(0x930,uFCode4,512);
            crrcMvb->addSinkPort(0x940,uFCode4,512);
            crrcMvb->addSinkPort(0x950,uFCode4,512);
            crrcMvb->addSinkPort(0x960,uFCode4,512);

            //CCU-ACU
            crrcMvb->addSinkPort(0x918,uFCode3,512);
            crrcMvb->addSinkPort(0x928,uFCode3,512);
            crrcMvb->addSinkPort(0x938,uFCode3,512);
            crrcMvb->addSinkPort(0x948,uFCode3,512);
            crrcMvb->addSinkPort(0x958,uFCode3,512);
            crrcMvb->addSinkPort(0x968,uFCode3,512);

            //PIDS-CCU
            crrcMvb->addSinkPort(0xC10,uFCode4,256);
            crrcMvb->addSinkPort(0xC11,uFCode4,256);

            crrcMvb->addSinkPort(0xC60,uFCode4,256);
            crrcMvb->addSinkPort(0xC61,uFCode4,256);

            //add pids virtual ports
            crrcMvb->addVirtualPort(0xFC10,uFCode4);
            crrcMvb->addVirtualPort(0xFC11,uFCode4);

            //CCU-PIDS   C28 C38 预留
            crrcMvb->addSinkPort(0xC18,uFCode4,128);
            //crrcMvb->addSinkPort(0xC28,uFCode4,128);
            //crrcMvb->addSinkPort(0xC38,uFCode4,128);

            //CCU-CCUD
            crrcMvb->addSinkPort(0x810,uFCode2,512);

            //CCUD-CCU
            crrcMvb->addSinkPort(0x818,uFCode3,512);
            crrcMvb->addSinkPort(0x828,uFCode3,512);

            //WMS-CCU
            crrcMvb->addSinkPort(0xA60,uFCode4,256);
            crrcMvb->addSinkPort(0xA61,uFCode4,256);


        }
#endif

        if(crrcMvb->setMvbOperation())
        {
            logger()->error("MVB板卡设置操作模式失败");
        }

        timer->start(333);


}
void Widget::keyPressEvent(QKeyEvent *event)
{

    if (event->key() == Qt::Key_Escape)
    {
        this->close();
    }
    else if (event->key() == Qt::Key_S)
    {
        QDesktopWidget *desktop = QApplication::desktop();

        // show a window uesd to manipulate the mvb ports and change page

        simulation->move((desktop->width() - simulation->width()) / 2, (desktop->height() - simulation->height()) / 2);
        simulation->show();
    }
}
void Widget::mousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton)
    {

        if(this->isHMIUnactive == true)// 当屏幕熄灭时，点击唤醒HMI
        {
            H8::getH8()->setBrightness(0);
            this->isHMIUnactive = false;
            changePage(uVehicleRunStatePage);
        }else if((this->database->HMIPosition == 1 && this->database->CTHM_TC2Active_B1 == true)||
                 (this->database->HMIPosition == 2 && this->database->CTHM_TC1Active_B1 == true))// 当屏幕未熄灭，点击重启定时器
        {
            this->UnactiveTimer60s->start(60000);

        }
    }
}
void Widget::changeUnactivePage()
{
    this->UnactiveTimer60s->stop();
    H8::getH8()->setBrightness(25);
    this->isHMIUnactive  = true;
    changePage(uVehicleUnactivePage);
}
void Widget::VCUtime2HMI10s()
{
    static int count10stimer = 0;
    QDateTime dateTimeSystem;
    QDateTime dateTimeCcu;
    QDate date( this->database->PUBPORT_SysTimeYear_U8+2000, this->database->PUBPORT_SysTimeMonth_U8, this->database->PUBPORT_SysTimeDay_U8 );
    QTime time( this->database->PUBPORT_SysTimeHour_U8, this->database->PUBPORT_SysTimeMinute_U8, this->database->PUBPORT_SysTimeSecond_U8);
    dateTimeCcu.setDate(date);
    dateTimeCcu.setTime(time);
//    qDebug()<< "CCU TIME: " <<dateTimeCcu.date().year()<<dateTimeCcu.date().month()<<dateTimeCcu.date().day() << dateTimeCcu.toTime_t()
//            << "IDU TIME: " << dateTimeSystem.currentDateTime().date().year()<<dateTimeSystem.currentDateTime().date().month()<<dateTimeSystem.currentDateTime().date().day()
//            << dateTimeSystem.currentDateTime().toTime_t();

    if((bool(dateTimeCcu.date().year() > 1999) && bool(dateTimeCcu.date().year() < 2038)))
    {
        int timeDiff = ( dateTimeCcu.toTime_t()-dateTimeSystem.currentDateTime().toTime_t());



        if(bool(bool(timeDiff<-6 )||bool(timeDiff>6))  )
        {
            if(count10stimer > 0)
            {
                if(count10stimer++ >30)
                {
                    count10stimer = 0;
                }
            }else
            {
                logger()->info("执行自动校时，与CCU时间差为: "+QString::number(timeDiff)+" s");

                count10stimer = 1;
#ifndef USER_DEBUG_MODE
                systimeset(this->database->PUBPORT_SysTimeYear_U8+2000,this->database->PUBPORT_SysTimeMonth_U8,this->database->PUBPORT_SysTimeDay_U8
                           ,this->database->PUBPORT_SysTimeHour_U8,this->database->PUBPORT_SysTimeMinute_U8,this->database->PUBPORT_SysTimeSecond_U8);
#endif
            }
        }else
        {
            count10stimer = 0;
        }

    }
}
bool Widget::systimeset(unsigned short int year,unsigned short int month,unsigned short int day,
                             unsigned short int hour,unsigned short int minute,unsigned short int second)
{
#ifndef WINDOWS_MODE

    time_t t;
    struct tm nowtime;
    nowtime.tm_sec = second; // second
    nowtime.tm_min = minute; ///*       Minutes.[0-59]
    nowtime.tm_hour = hour;  ///*       Hours.   [0-23]
    nowtime.tm_mday = day;   ///*       Day.[1-31]
    nowtime.tm_mon = month - 1; ///*       Month.   [0-11]
    nowtime.tm_year = year - 1900; ///*       Year-       1900.
    nowtime.tm_isdst = -1;    ///*       DST.[-1/0/1]
    t = mktime(&nowtime);
    stime(&t);

    QDate date( year, month, day );
    QTime time( hour, minute, second );
    QString dateStr = date.toString( "yyyy-MM-dd" );
    QString timeStr = time.toString( "hh:mm:ss" );
    QString hwclockStr = "hwclock --set --date \"";
    dateStr.replace(QRegExp("-"), "");
    timeStr.replace(QRegExp("-"), ":");
    hwclockStr = hwclockStr + dateStr + " " + timeStr + "\"";
    char *c=hwclockStr.toAscii().data();
    system(c);
#endif
    return true;
}

