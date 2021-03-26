//
// Created by Hamlet on 2021/3/25.
//

#ifndef PHANTOM3_DATABASE_H
#define PHANTOM3_DATABASE_H

#ifdef __GNUC__
#define API
#else
#define API _declspec(dllexport)
#endif

#include <QSqlDatabase>

namespace PhtDB {
//    class API Database {
//
//    };
    API void sayHello();
}

#endif //PHANTOM3_DATABASE_H
