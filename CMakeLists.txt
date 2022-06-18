cmake_minimum_required(VERSION 3.22)
project(CardManager)

set(CMAKE_CXX_STANDARD 20)

add_executable(CardManager main.cpp DatabaseReader.cpp DatabaseReader.h Card.cpp Card.h utils.h utils.cpp)
