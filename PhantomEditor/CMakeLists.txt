project(PhantomEditor${DEBUG_SUFFIX})

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

# Required Qt Libraries
set(REQUIRED_LIBS Core Gui Widgets)
set(REQUIRED_LIBS_QUALIFIED Qt6::Core Qt6::Gui Qt6::Widgets)

# Required Phantom3 Libraries
set(LIB_INCLUDE ${PROJECT_DIR}/Core ${PROJECT_DIR}/Database)
set(LIB_LINK phtcore${DEBUG_SUFFIX} phtdatabase${DEBUG_SUFFIX})

# Project sources
set(PROJECT_SOURCES
        main.cpp
        phantomeditor.cpp phantomeditor.h phantomeditor.ui)

if (NOT DEBUG_SUFFIX MATCHES "d")
    set(PROJECT_SOURCES WIN32 ${PROJECT_SOURCES})
endif()

add_executable(${PROJECT_NAME} ${PROJECT_SOURCES})

# Find package & Include directory & link
find_package(Qt${QT_VERSION} COMPONENTS ${REQUIRED_LIBS} REQUIRED)
include_directories(${LIB_INCLUDE})
target_link_libraries(${PROJECT_NAME} ${REQUIRED_LIBS_QUALIFIED} ${LIB_LINK})

include(${PROJECT_DIR}/copy_dlls.cmake)