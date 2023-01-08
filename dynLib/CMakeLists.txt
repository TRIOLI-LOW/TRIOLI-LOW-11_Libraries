cmake_minimum_requirerd(VERSION 3.10)

project(mylib)

add_library(mylib SHARED dynLib.h dynLib.cpp)
