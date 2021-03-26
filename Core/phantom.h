//
// Created by Hamlet on 2021/3/25.
//

#ifndef PHANTOM3_PHANTOM_H
#define PHANTOM3_PHANTOM_H

#ifdef __GNUC__
#define API
#else
#define API _declspec(dllexport) // only use this on msvc
#endif

namespace PhtCore {
//    class API Phantom {
//
//    };

    API void sayHello();
}

#endif //PHANTOM3_PHANTOM_H
