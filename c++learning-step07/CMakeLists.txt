cmake_minimum_required(VERSION 3.8)
project(c__learning_step07)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp calculator.cpp calculator.h add.cpp add.h Date.cpp Date1.cpp Date2.cpp Date2.h)
add_executable(c__learning_step07 ${SOURCE_FILES})