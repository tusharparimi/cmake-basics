cmake_minimum_required(VERSION 3.15)

project(Image LANGUAGES CXX)

find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})
include_directories(include)

set(SourceFiles
    src/read_image.cpp
)

set(ProjectType STATIC) #options are STATIC or SHARED

add_library(${PROJECT_NAME} ${ProjectType} ${SourceFiles})
target_link_libraries(${PROJECT_NAME} ${OpenCV_LIBS})