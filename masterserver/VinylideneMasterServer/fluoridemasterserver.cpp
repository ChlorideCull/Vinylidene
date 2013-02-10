#include "fluoridemasterserver.h"

flourideMasterServer::fluorideMasterServer(QString mysqlHostName, QString mysqlDatabase, QString mysqlUsername, QString mysqlPassword)
{
    QSqlDatabase msqldb = QSqlDatabase::addDatabase("QMYSQL", "msqldbconn");
    msqldb.setHostName(mysqlHostName);
    msqldb.setDatabaseName(mysqlDatabase);
    msqldb.setUserName(mysqlUsername);
    msqldb.setPassword(mysqlPassword);
}

bool flourideMasterServer::openConnection()
{
    return msqldb.open();
}
