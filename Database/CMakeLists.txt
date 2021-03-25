project(phtdatabase${DEBUG_SUFFIX})

# Required Qt Libraries
set(REQUIRED_LIBS Core Sql)
set(REQUIRED_LIBS_QUALIFIED Qt6::Core Qt6::Sql)

# Required Phantom3 Libraries
set(LIB_INCLUDE ${PROJECT_DIR}/Core)
set(LIB_LINK phtcore${DEBUG_SUFFIX})

# Project sources
set(PROJECT_SOURCES
        phtdatabase.h
        database.cpp database.h)

add_library(${PROJECT_NAME} SHARED ${PROJECT_SOURCES})

# Find package & Include directory & link
find_package(Qt${QT_VERSION} COMPONENTS ${REQUIRED_LIBS} REQUIRED)
include_directories(${LIB_INCLUDE})
target_link_libraries(${PROJECT_NAME} ${REQUIRED_LIBS_QUALIFIED} ${LIB_LINK})

include(${PROJECT_DIR}/copy_dlls.cmake)
if (NOT EXISTS "$<TARGET_FILE_DIR:${PROJECT_NAME}>/plugins/sqldrivers/qsqlite${DEBUG_SUFFIX}.dll")
    add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
            COMMAND ${CMAKE_COMMAND} -E make_directory
            "$<TARGET_FILE_DIR:${PROJECT_NAME}>/plugins/sqldrivers/")
    add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
            COMMAND ${CMAKE_COMMAND} -E copy
            "${QT_INSTALL_PATH}/plugins/sqldrivers/qsqlite${DEBUG_SUFFIX}.dll"
            "$<TARGET_FILE_DIR:${PROJECT_NAME}>/plugins/sqldrivers/qsqlite${DEBUG_SUFFIX}.dll")
endif ()