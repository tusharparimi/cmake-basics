cmake_minimum_required(VERSION 3.15)
project(Main)

set(SubProjects
    Calculator
    Image
)

add_executable(${PROJECT_NAME} main.cpp)

foreach(Project IN LISTS SubProjects)
    include_directories(${Project})
    if(NOT TARGET ${Project})
        add_subdirectory(${Project})        
    endif()
    target_link_libraries(${PROJECT_NAME} ${Project})
endforeach()

