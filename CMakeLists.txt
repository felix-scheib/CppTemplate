cmake_minimum_required(VERSION 3.20)
project(template CXX)

set(CMAKE_CXX_STANDARD 23)

include(${CMAKE_HOME_DIRECTORY}/cmake/CPM.cmake)
include(${CMAKE_HOME_DIRECTORY}/cmake/libraries.cmake)

add_library(factorial
    ${CMAKE_HOME_DIRECTORY}/source/factorial/factorial.h
    ${CMAKE_HOME_DIRECTORY}/source/factorial/factorial.cpp
)

add_executable(${PROJECT_NAME} source/main.cpp source/main.cpp)

target_link_libraries(${PROJECT_NAME} PRIVATE spdlog::spdlog fmt::fmt CLI11::CLI11 factorial)