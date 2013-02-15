#include "fluoridemasterserver.h"

fluorideMasterServer::fluorideMasterServer(QString mysqlHostName, QString mysqlDatabase, QString mysqlUsername, QString mysqlPassword)
{
    msqldb = QSqlDatabase::addDatabase("QMYSQL", "msqldbconn");
    msqldb.setHostName(mysqlHostName);
    msqldb.setDatabaseName(mysqlDatabase);
    msqldb.setUserName(mysqlUsername);
    msqldb.setPassword(mysqlPassword);
}

bool fluorideMasterServer::openConnection()
{
    return msqldb.open();
}
