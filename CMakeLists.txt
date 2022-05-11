cmake_minimum_required(VERSION 3.22)
project(flat)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(flat
        main.cpp
        room.cpp
        room.h
        wallpaper.cpp
        wallpaper.h
        flat.cpp
        flat.h)
