cmake_minimum_required(VERSION 3.21)
project(Informatik2 C)

set(CMAKE_C_STANDARD 11)

add_executable(test
        helloworld/test.c)

add_executable(Variables
        variables/variables.c)

add_executable(helloworld
        helloworld/helloworld.c)

add_executable(grades
        grades/grades.c)