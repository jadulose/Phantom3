project(phtcore${DEBUG_SUFFIX})

# Project sources
set(PROJECT_SOURCES
        phtcore.h
        phantom.cpp phantom.h)

add_library(${PROJECT_NAME} SHARED ${PROJECT_SOURCES})