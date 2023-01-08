cmake_minimum_required(VERSION 3.10)
project(homework3)

set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

add_library(mylib SHARED ../dynLib/dynLib.h ../dynLib/dynLib.cpp)

add_executable(homework3 home_work_3.cpp) 

target_link_libraries(homework3 mylib)