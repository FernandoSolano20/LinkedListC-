cmake_minimum_required(VERSION 3.19)
project(Lista)

set(CMAKE_CXX_STANDARD 14)

add_executable(Lista main.cpp MyList.cpp MyList.h Node.cpp Node.h)