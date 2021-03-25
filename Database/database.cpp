//
// Created by Hamlet on 2021/3/25.
//

#include "database.h"

void PhtDB::sayHello() {
    QSqlDatabase db =QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(R"(D:\Codebase\Phantom3\PhantomDataLoader\data.db)");
    if (db.open())
        qDebug("Successfully connected database.");
    db.close();
}
