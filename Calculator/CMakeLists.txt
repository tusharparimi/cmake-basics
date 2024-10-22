cmake_minimum_required(VERSION 3.15)

project(Calculator LANGUAGES CXX)

set(ProjectType STATIC) #options are STATIC and SHARED

set(SourceFiles
    src/add.cpp
    src/sub.cpp
)

add_executable(calc apps/calc.cpp)
target_link_libraries(calc ${PROJECT_NAME})

add_library(${PROJECT_NAME} ${ProjectType} ${SourceFiles})
target_include_directories(${PROJECT_NAME} PUBLIC include)
