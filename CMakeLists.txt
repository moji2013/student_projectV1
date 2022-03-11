cmake_minimum_required(VERSION 3.20)
project(student_projectV1)

set(CMAKE_CXX_STANDARD 14)

add_executable(student_projectV1 main.cpp list.h list.cpp empty.cpp empty.h file_missing.cpp file_missing.h friend_global_funcs.h)
