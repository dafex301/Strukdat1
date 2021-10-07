cmake_minimum_required(VERSION 3.20)
project(Prak_6 C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(Prak_6
        boolean.h
        lstack.c
        lstack.h
        mainlstack.c)
