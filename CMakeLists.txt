cmake_minimum_required(VERSION 3.26)
project(step1)

set(CMAKE_CXX_STANDARD 17)

add_executable(step1 main.cpp
        Farm.cpp
        Farm.h
        Cow.cpp
        Cow.h
        Chicken.cpp
        Chicken.h
        Animal.cpp
        Animal.h
        Skunk.cpp
        Skunk.h)
