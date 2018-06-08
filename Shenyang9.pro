#-------------------------------------------------
#
# Project created by QtCreator 2017-07-25T15:35:43
#
#-------------------------------------------------

QT       += core gui
QT += sql
QT += network
TARGET = Shenyang9
TEMPLATE = app
DEPENDPATH += . log4qt log4qt/helpers log4qt/spi log4qt/varia
INCLUDEPATH += . log4qt log4qt/helpers log4qt/spi log4qt/varia

LIBS += -lPixyMvb
LIBS += -lsqlite3

SOURCES += main.cpp\
        widget.cpp \
    mybase.cpp \
    database.cpp \
    header.cpp \
    MainGetDefaultPara.cpp \
    navigator.cpp \
    vehiclerunstatepage.cpp \
    vehiclemaintaincepage.cpp \
    maintainceportsdatapage.cpp \
    maintaincehmicheckpage.cpp \
    maintaincetcmsstatespage.cpp \
    simulation.cpp \
    crrcmvb.cpp \
    maintaincehmiinitsetpage.cpp \
    ctrltraingraph.cpp \
    maintainceversionpage.cpp \
    maintaincewheelsetpage.cpp \
    ctrlnuminputmodule.cpp \
    maintaincedatetimesetpage.cpp \
    maintainceloadpage.cpp \
    maintaincerundistancepage.cpp \
    maintainceconsumptionpage.cpp \
    maintainceacprunpage.cpp \
    maintaincebcutestpage.cpp \
    vehiclecutoffpage.cpp \
    vehicleresetpage.cpp \
    vehiclepowerresetpage.cpp \
    maintainceallportspage.cpp \
    vehicleebcupage.cpp \
    vehicleebcupage2.cpp \
    vehicledcupage.cpp \
    vehiclesivpage.cpp \
    vehicleacpage.cpp \
    vehicleacpage2.cpp \
    docontrol.cpp \
    dicontrol.cpp \
    axcontrol.cpp \
    ctrlversionmodule.cpp \
    maintainceriomdetailpage.cpp \
    vehiclepasswordpage.cpp \
    warnningdialog.cpp \
    vehiclebypasspage.cpp \
    maintaincetrainnumsetpage.cpp \
    vehiclewmspage.cpp \
    maintaincedatamanagementpage.cpp \
    vehiclehelppage.cpp \
    vehiclecurrentfaultpage.cpp \
    maintaincetestpage.cpp \
    crrcfault.cpp \
    vehiclehistoryfaultpage.cpp \
    ctrlfaultdetailconfirm.cpp \
    faulttypebean.cpp \
    faultbean.cpp \
    crrcfaultmapper.cpp \
    log4qt/writerappender.cpp \
    log4qt/ttcclayout.cpp \
    log4qt/simplelayout.cpp \
    log4qt/rollingfileappender.cpp \
    log4qt/propertyconfigurator.cpp \
    log4qt/patternlayout.cpp \
    log4qt/ndc.cpp \
    log4qt/mdc.cpp \
    log4qt/logmanager.cpp \
    log4qt/loggingevent.cpp \
    log4qt/loggerrepository.cpp \
    log4qt/logger.cpp \
    log4qt/log4qt.cpp \
    log4qt/level.cpp \
    log4qt/layout.cpp \
    log4qt/hierarchy.cpp \
    log4qt/fileappender.cpp \
    log4qt/dailyrollingfileappender.cpp \
    log4qt/consoleappender.cpp \
    log4qt/basicconfigurator.cpp \
    log4qt/appenderskeleton.cpp \
    log4qt/helpers/properties.cpp \
    log4qt/helpers/patternformatter.cpp \
    log4qt/helpers/optionconverter.cpp \
    log4qt/helpers/logobjectptr.cpp \
    log4qt/helpers/logobject.cpp \
    log4qt/helpers/logerror.cpp \
    log4qt/helpers/initialisationhelper.cpp \
    log4qt/helpers/factory.cpp \
    log4qt/helpers/datetime.cpp \
    log4qt/helpers/configuratorhelper.cpp \
    log4qt/helpers/classlogger.cpp \
    log4qt/spi/filter.cpp \
    log4qt/varia/stringmatchfilter.cpp \
    log4qt/varia/nullappender.cpp \
    log4qt/varia/listappender.cpp \
    log4qt/varia/levelrangefilter.cpp \
    log4qt/varia/levelmatchfilter.cpp \
    log4qt/varia/denyallfilter.cpp \
    log4qt/varia/debugappender.cpp \
    vehiclecutoffhelppage.cpp \
    vehiclepowerresethelppage.cpp \
    vehiclefaulthelppage.cpp \
    vehicleunactivepage.cpp \
    serial.c \
    h8.cpp \
    command.c \
    maintaincefaultshowpage.cpp \
    maintaincefaultquerypage.cpp \
    vehiclehvachelppage.cpp \
    vehiclebcuhelppage.cpp \
    vehicledcuhelppage.cpp \
    vehicleacuhelppage.cpp \
    vehicleresethelppage.cpp

HEADERS  += widget.h \
    mybase.h \
    database.h \
    global.h \
    header.h \
    MainGetDefaultPara.h \
    navigator.h \
    vehiclerunstatepage.h \
    vehiclemaintaincepage.h \
    maintainceportsdatapage.h \
    maintaincehmicheckpage.h \
    maintaincetcmsstatespage.h \
    simulation.h \
    PixyTypes.h \
    PixyMvbLib.h \
    crrcmvb.h \
    maintaincehmiinitsetpage.h \
    ctrltraingraph.h \
    maintainceversionpage.h \
    maintaincewheelsetpage.h \
    ctrlnuminputmodule.h \
    maintaincedatetimesetpage.h \
    maintainceloadpage.h \
    maintaincerundistancepage.h \
    maintainceconsumptionpage.h \
    maintainceacprunpage.h \
    maintaincebcutestpage.h \
    vehiclecutoffpage.h \
    vehicleresetpage.h \
    vehiclepowerresetpage.h \
    maintainceallportspage.h \
    vehicleebcupage.h \
    vehicleebcupage2.h \
    vehicledcupage.h \
    vehiclesivpage.h \
    vehicleacpage.h \
    vehicleacpage2.h \
    docontrol.h \
    dicontrol.h \
    axcontrol.h \
    MaintainceDIOheader.h \
    ctrlversionmodule.h \
    maintainceriomdetailpage.h \
    vehiclepasswordpage.h \
    warnningdialog.h \
    vehiclebypasspage.h \
    maintaincetrainnumsetpage.h \
    vehiclewmspage.h \
    maintaincedatamanagementpage.h \
    vehiclehelppage.h \
    vehiclecurrentfaultpage.h \
    maintaincetestpage.h \
    crrcfault.h \
    vehiclehistoryfaultpage.h \
    ctrlfaultdetailconfirm.h \
    faulttypebean.h \
    faultbean.h \
    crrcfaultmapper.h \
    log4qt/writerappender.h \
    log4qt/ttcclayout.h \
    log4qt/simplelayout.h \
    log4qt/rollingfileappender.h \
    log4qt/propertyconfigurator.h \
    log4qt/patternlayout.h \
    log4qt/ndc.h \
    log4qt/mdc.h \
    log4qt/logmanager.h \
    log4qt/loggingevent.h \
    log4qt/loggerrepository.h \
    log4qt/logger.h \
    log4qt/log4qt.h \
    log4qt/level.h \
    log4qt/layout.h \
    log4qt/hierarchy.h \
    log4qt/fileappender.h \
    log4qt/dailyrollingfileappender.h \
    log4qt/consoleappender.h \
    log4qt/basicconfigurator.h \
    log4qt/appenderskeleton.h \
    log4qt/appender.h \
    log4qt/helpers/properties.h \
    log4qt/helpers/patternformatter.h \
    log4qt/helpers/optionconverter.h \
    log4qt/helpers/logobjectptr.h \
    log4qt/helpers/logobject.h \
    log4qt/helpers/logerror.h \
    log4qt/helpers/initialisationhelper.h \
    log4qt/helpers/factory.h \
    log4qt/helpers/datetime.h \
    log4qt/helpers/configuratorhelper.h \
    log4qt/helpers/classlogger.h \
    log4qt/spi/filter.h \
    log4qt/varia/stringmatchfilter.h \
    log4qt/varia/nullappender.h \
    log4qt/varia/listappender.h \
    log4qt/varia/levelrangefilter.h \
    log4qt/varia/levelmatchfilter.h \
    log4qt/varia/denyallfilter.h \
    log4qt/varia/debugappender.h \
    vehiclecutoffhelppage.h \
    vehiclepowerresethelppage.h \
    vehiclefaulthelppage.h \
    vehicleunactivepage.h \
    serial.h \
    h8.h \
    command.h \
    maintaincefaultshowpage.h \
    maintaincefaultquerypage.h \
    vehiclehvachelppage.h \
    vehiclebcuhelppage.h \
    vehicledcuhelppage.h \
    vehicleacuhelppage.h \
    vehicleresethelppage.h

FORMS    += widget.ui \
    header.ui \
    navigator.ui \
    vehiclerunstatepage.ui \
    vehiclemaintaincepage.ui \
    maintainceportsdatapage.ui \
    maintaincehmicheckpage.ui \
    maintaincetcmsstatespage.ui \
    simulation.ui \
    maintaincehmiinitsetpage.ui \
    ctrltraingraph.ui \
    maintainceversionpage.ui \
    maintaincewheelsetpage.ui \
    ctrlnuminputmodule.ui \
    maintaincedatetimesetpage.ui \
    maintainceloadpage.ui \
    maintaincerundistancepage.ui \
    maintainceconsumptionpage.ui \
    maintainceacprunpage.ui \
    maintaincebcutestpage.ui \
    vehiclecutoffpage.ui \
    vehicleresetpage.ui \
    vehiclepowerresetpage.ui \
    maintainceallportspage.ui \
    vehicleebcupage.ui \
    vehicleebcupage2.ui \
    vehicledcupage.ui \
    vehiclesivpage.ui \
    vehicleacpage.ui \
    vehicleacpage2.ui \
    docontrol.ui \
    dicontrol.ui \
    axcontrol.ui \
    ctrlversionmodule.ui \
    maintainceriomdetailpage.ui \
    vehiclepasswordpage.ui \
    warnningdialog.ui \
    vehiclebypasspage.ui \
    maintaincetrainnumsetpage.ui \
    vehiclewmspage.ui \
    maintaincedatamanagementpage.ui \
    vehiclehelppage.ui \
    vehiclecurrentfaultpage.ui \
    maintaincetestpage.ui \
    vehiclehistoryfaultpage.ui \
    ctrlfaultdetailconfirm.ui \
    vehiclecutoffhelppage.ui \
    vehiclepowerresethelppage.ui \
    vehiclefaulthelppage.ui \
    vehicleunactivepage.ui \
    maintaincefaultshowpage.ui \
    maintaincefaultquerypage.ui \
    vehiclehvachelppage.ui \
    vehiclebcuhelppage.ui \
    vehicledcuhelppage.ui \
    vehicleacuhelppage.ui \
    vehicleresethelppage.ui

RESOURCES += \
    Resource.qrc

OTHER_FILES += \
    log4qt/log4qt.pri
