cmake_minimum_required(VERSION 3.17)
project(Phantom3)

set(PROJECT_DIR "D:/Codebase/Phantom3/Phantom3")

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_PREFIX_PATH "C:/Qt/6.0.2/msvc2019_64/lib/cmake")
set(QT_VERSION 6)

set(DEBUG_SUFFIX)
if (CMAKE_BUILD_TYPE MATCHES "Debug")
    set(DEBUG_SUFFIX "d")
endif ()

add_subdirectory(PhantomEditor)