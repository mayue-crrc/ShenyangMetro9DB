#ifndef GLOBAL_H
#define GLOBAL_H

#define USER_DEBUG_MODE

//#define WINDOWS_MODE

#include <stdlib.h>

#ifndef WINDOWS_MODE
#include <PixyMvbLib.h>
#include <PixyTypes.h>
#endif

#include <string.h>
#include "qdatetime.h"
#include "qdebug.h"



#define NButtonUP    "font: 20px, \"微软雅黑\";color: white;background-color: rgb(0, 100, 255);	border-radius:8px;border-top: 2px solid white;border-left: 2px solid white;"
#define NButtonDOWN  "font: 20px, \"微软雅黑\";color: white;background-color: rgb(0, 0, 255);	border-radius:8px;border-top: 2px solid  rgb(0, 0, 255);border-left: 2px solid  rgb(0, 0, 255);border-bottom: 2px solid white;border-right: 2px solid white;"

#define INPUTBUTTONUP   "color:white;font:18px,\"微软雅黑\";border-top:2px solid  white;border-left: 2px solid white;border-bottom:2px solid transparent;border-right: 2px solid transparent;background:qlineargradient(spread:pad,x1:0,y1:0,x2:0,y2:1,stop:0 rgba(150,228,250,255),stop:0.7 rgba(20,108,140,255) ,stop:1 rgba(100,238,240,255));"
#define INPUTBUTTONDOWN "color:white;font:18px,\"微软雅黑\";border-top:2px solid  transparent;border-left: 2px solid transparent;border-bottom:2px solid white;border-right: 2px solid white;background:qlineargradient(spread:pad,x1:0,y1:0,x2:0,y2:1,stop:0 rgba(20,108,140,255),stop:0.7 rgba(150,228,40,255) ,stop:1 rgba(20,108,140,255));"

#define PButtonUP    "font: 20px, \"微软雅黑\";color: white;background-color: rgb(0, 128, 128);	border-radius:8px;border-top: 2px solid white;border-left: 2px solid white;"
#define PButtonDOWN  "font: 20px, \"微软雅黑\";color: black;background-color: rgb(0, 255, 255);	border-radius:8px;border-top: 2px solid  rgb(0, 0, 255);border-left: 2px solid  rgb(0, 0, 255);border-bottom: 2px solid white;border-right: 2px solid white;"

#define TC1DIRECT "border-image: url(:/images/images/TC1traingraphDirection.bmp);"
#define TC2DIRECT "border-image: url(:/images/images/TC2traingraphDirection.bmp);"

#define KEYNOACTIVETC1 "border-image: url(:/images/images/TC1traingraphKeynoact.bmp);"
#define KEYACTIVETC1 "border-image: url(:/images/images/TC1traingraphKeyact.bmp);"

#define KEYNOACTIVETC2 "border-image: url(:/images/images/TC2traingraphKeynoact.bmp);"
#define KEYACTIVETC2 "border-image: url(:/images/images/TC2traingraphKeyact.bmp);"


#define KEYNOACTIVE "background-color:rgb(255,255,133);"
#define KEYACTIVE "background-color:orange;"

#define DI_LENGTH (24 )
#define DO_LENGTH (16 )
#define AX_LENGTH (8 )

#define ON_STATE ("border-radius: 12px; border: 1px groove yellow; background-color: rgb(0,255,0);")
#define OFF_STATE ("border-radius: 12px; border: 1px groove yellow; background-color: gray;")

#define LABELYELLOW "	font: 20px, \"微软雅黑\";color:white;background-color:yellow;"
#define LABELGREEN "	font: 20px, \"微软雅黑\";color:white;background-color:green;"
#define LABELBLUE "	font: 20px, \"微软雅黑\";color:white;background-color:blue;"
#define LABELGRAY "	font: 20px, \"微软雅黑\";color:white;background-color:gray;"
#define LABELRED "	font: 20px, \"微软雅黑\";color:black;background-color:red;"
#define LABELORANGE "	font: 20px, \"微软雅黑\";color:white;background-color:orange;"
#define LABELWHITE "	font: 20px, \"微软雅黑\";color:black;background-color:white;"
#define LABELBLACK "	font: 20px, \"微软雅黑\";color:white;background-color:black;"

enum pagePosition
{
    uTop = 0,
    uMiddle,
    uBottom,
    uHuge,
    uLargeMiddle,
    uTrainGraph,
    uLargeMiddleTrainGraph,
    uMiddleTrainGraph
};
enum pageIndex
{
    uVehicleRunStatePage = 0,
    uVehicleEBCUPage,
    uVehicleDCUPage,
    uVehicleSIVPage,
    uVehicleACPage,
    uVehicleHistoryFaultPage,
    uVehicleCurrentFaultPage,
    uVehiclePasswordPage,
    uVehicleMaintaincePage,
    uMaintaincePortsDataPage,
    uMaintainceHMICheckPage,
    uMaintainceTCMSStatePages,
    uMaintainceHMIInitsetPage,
    uMaintainceVersionPage,
    uMaintainceWheelsetPage,
    uMaintainceDatetimesetPage,
    uMaintainceLoadPage,
    uMaintainceRunDistancePage,
    uMaintainceConsumptionPage,
    uMaintainceACPRunPage,
    uMaintainceBCUTestPage,
    uVehicleCutoffPage,
    uVehicleResetPage,
    uVehiclePowerResetPage,
    uMaintainceAllPortsPage,
    uVehicleEBCUPage2,
    uVehicleACPage2,
    uMaintainceRIOMDetailPage,
    uVehicleBypassPage,
    uMaintainceTrainNumSetPage,
    uVehicleWMSPage,
    uMaintainceDataManagementPage,
    uMaintainceTestPage,
    uVehicleUnactivePage,
    uMaintainceFaultQureyPage,
    uMaintainceFaultShowPage,

};

#define _LOG qDebug() << QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss") << __FILE__ << __LINE__

#endif // GLOBAL_H
