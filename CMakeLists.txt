cmake_minimum_required(VERSION 3.24)
project(Vapor_main C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(Vapor_main
        main.c
        Payment_options.c
        Payment_options.h
        Stock.c
        Stock.h
        User.c
        User.h main.c Relatorio.c Relatorio.h)
