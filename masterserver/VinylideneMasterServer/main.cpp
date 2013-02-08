#include <QCoreApplication>
#include <QTextStream>
#include <iostream>
#include "versionhandler.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    a.setApplicationName(VersionHandler::returnName());
    a.setApplicationVersion(VersionHandler::returnVersion());
    QTextStream out(stdout);
    out << a.applicationName() << endl << "Version " << a.applicationVersion() << endl << endl;
    return a.exec();
}
