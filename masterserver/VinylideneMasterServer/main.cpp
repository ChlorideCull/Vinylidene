#include <QCoreApplication>
#include <QTextStream>
#include <iostream>
#include "versionhandler.h"
#include "fluoridemasterserver.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    a.setApplicationName(VersionHandler::returnName());
    a.setApplicationVersion(VersionHandler::returnVersion());
    QTextStream out(stdout);
    out << a.applicationName() << endl << "Version " << a.applicationVersion() << endl << endl;
    out << "Starting up Vinylidene Flouride Master Server..." << endl;
    fluorideMasterServer fMS ("localhost", "vinylplayer", "root", "myleetzpasswort");
    fMS.openConnection();
    return a.exec();
}
