#include "versionhandler.h"
#include <QString>

QString VersionHandler::returnName()
{
    return "Vinylidene Master Server";
}

QString VersionHandler::returnVersion()
{
    QString TemplateString = "Applebucking Applejack (commit _COMMIT_)";
    return TemplateString.replace("_COMMIT_", /*BUILD*/"UNKNOWN");
}
