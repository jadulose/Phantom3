cmake_minimum_required(VERSION 3.17)

# Configure by yourself
project(Phantom3)

# Your config.cmake should contain at least the following properties:
#set(PROJECT_DIR "~/repository/Phantom3")
#set(CMAKE_CXX_STANDARD 20)
#set(CMAKE_PREFIX_PATH "~/package/Qt/6.0.3/gcc_64/lib/cmake")
#set(QT_VERSION 6)
include(config.cmake)

# Debug suffix
set(DEBUG_SUFFIX)
if (CMAKE_BUILD_TYPE MATCHES "Debug")
    set(DEBUG_SUFFIX "d")
endif ()

# Target directory
if (DEBUG_SUFFIX MATCHES "d")
    set(EXECUTABLE_OUTPUT_PATH ${PROJECT_DIR}/target/debug)
    set(LIBRARY_OUTPUT_PATH ${PROJECT_DIR}/target/debug)
else()
    set(EXECUTABLE_OUTPUT_PATH ${PROJECT_DIR}/target/release)
    set(LIBRARY_OUTPUT_PATH ${PROJECT_DIR}/target/release)
endif ()

# Subdirectories
add_subdirectory(Core)
add_subdirectory(Database)
add_subdirectory(PhantomEditor)