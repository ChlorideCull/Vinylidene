#ifndef FLUORIDEMASTERSERVER_H
#include <QString>
#include <QtSql/QSqlDatabase>
#define FLUORIDEMASTERSERVER_H

class fluorideMasterServer
{
public:
    fluorideMasterServer(QString mysqlHostName, QString mysqlDatabase, QString mysqlUsername, QString mysqlPassword);
    bool openConnection();
private:
    QSqlDatabase msqldb;
};

#endif // FLUORIDEMASTERSERVER_H
