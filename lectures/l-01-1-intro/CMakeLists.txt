cmake_minimum_required(VERSION 3.5.1)
project(simple)

# in case you decide to use gcc
IF(CMAKE_COMPILER_IS_GNUCC)
  SET(CMAKE_CXX_FLAGS "--std=c++14 -pedantic -Wall -Wextra")
ENDIF(CMAKE_COMPILER_IS_GNUCC)

add_executable(hello hello.cpp)
add_executable(vector vector.cpp)
add_executable(string string.cpp)
