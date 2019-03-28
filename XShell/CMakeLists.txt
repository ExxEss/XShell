cmake_minimum_required(VERSION 3.13)
project(XShell)

set(CMAKE_CXX_STANDARD 14)


set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set (CMAKE_PREFIX_PATH "/usr/local/Cellar/qt/5.12.0/lib/cmake")

find_package(Qt5Core REQUIRED)
find_package(Qt5Widgets REQUIRED)
find_package(Qt5Quick REQUIRED)

add_executable(XShell main.cpp)

target_link_libraries(XShell Qt5::Core)
target_link_libraries(XShell Qt5::Widgets)
target_link_libraries(XShell Qt5::Quick)
