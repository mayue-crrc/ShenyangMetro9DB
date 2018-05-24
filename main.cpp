#include <QApplication>
#include <QWSServer>
#include "widget.h"
#include <QTextCodec>
#include "global.h"
#include "log4qt/propertyconfigurator.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF-8"));
    QTextCodec::setCodecForCStrings(QTextCodec::codecForName("UTF-8"));
    QTextCodec::setCodecForTr(QTextCodec::codecForName("UTF-8"));

    QDir tempDir;
    if(!tempDir.exists("OperationRecord/"))
    {
        tempDir.mkpath("OperationRecord/");
    }

    Log4Qt::PropertyConfigurator::configure(a.applicationDirPath()+ "/log4j.properties");

#ifndef USER_DEBUG_MODE
    QApplication::setOverrideCursor(QCursor(Qt::BlankCursor));

    if (QWSServer::isCursorVisible())
    {
        QWSServer::setCursorVisible(false);
    }

    // a recall function used by QDebug
    //qInstallMsgHandler(customMessageHandler);
#endif

    Widget w;
    w.setWindowFlags(Qt::FramelessWindowHint);
    w.show();

    return a.exec();
}
