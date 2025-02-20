cmake_minimum_required(VERSION 3.30)
project(SnakeGame)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(SnakeGame
    console.cpp
    console.h
    figure.cpp
    figure.h
    horizontalLine.cpp
    horizontalLine.h
    point.cpp
    point.h
    SnakeGame.cpp
    verticalLine.cpp
    verticalLine.h)
