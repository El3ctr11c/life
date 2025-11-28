cmake_minimum_required(VERSION 3.10)

project(GameOfLife)

set(CMAKE_CXX_STANDARD 17)

add_executable(game_of_life
    src/main.cpp
    src/life.cpp
)

