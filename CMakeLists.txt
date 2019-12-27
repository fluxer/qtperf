cmake_minimum_required(VERSION 2.8.12.2 FATAL_ERROR)

project(qtperf CXX)

include(FeatureSummary)

set(CMAKE_AUTOMOC TRUE)
set(CMAKE_AUTOUIC TRUE)
set(CMAKE_AUTORCC TRUE)

find_package(Katie REQUIRED)

add_definitions(${KATIE_DEFINITIONS})

include_directories(
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_CURRENT_BINARY_DIR}
    ${KATIE_INCLUDES}
)

set(qtperf_SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/mainwindow.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/testwidget.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/mainwindow.h
    ${CMAKE_CURRENT_SOURCE_DIR}/testwidget.h
)

add_executable(qtperf ${qtperf_SOURCES})
target_link_libraries(qtperf ${KATIE_CORE_LIBRARIES} ${KATIE_GUI_LIBRARIES})

feature_summary(WHAT ALL FATAL_ON_MISSING_REQUIRED_PACKAGES)
