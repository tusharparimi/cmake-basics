cmake_minimum_required(VERSION 3.15)

project(DisplayImage LANGUAGES CXX)

find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

add_executable(DisplayImage apps/DisplayImage.cpp)

target_link_libraries(DisplayImage ${OpenCV_LIBS})