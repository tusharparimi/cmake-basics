cmake_minimum_required(VERSION 3.15)

project(MyProject VERSION 1.0
                  DESCRIPTION "very nice project"
                  LANGUAGES CXX)

add_library(one STATIC two.cpp three.h)
target_include_directories(one PUBLIC include)

add_library(another another.cpp another.h)
target_link_libraries(another PUBLIC one)
