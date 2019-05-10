cmake_minimum_required(VERSION 3.13)
project(PC2)

set(CMAKE_CXX_STANDARD 14)

add_executable(PC2 main.cpp fighter.cpp fighter.h attack.h attack.cpp Defense.h Defense.cpp fight.cpp fight.h Arena.cpp Arena.h)