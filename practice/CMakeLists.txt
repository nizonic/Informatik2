cmake_minimum_required(VERSION 3.21)
project(Informatik2 C)

set(CMAKE_C_STANDARD 11)

add_executable(test
        1_helloworld/test.c)

add_executable(1_helloworld
        1_helloworld/helloworld.c)

add_executable(2_variables
        2_variables/variables.c)

add_executable(3_grades
        3_grades/grades.c)

add_executable(4_arrays
        4_arrays/average.c)

add_executable(5_conditions
        5_conditions/conditions.c)

add_executable(6_strings
        6_strings/strings.c)

add_executable(7_for
        7_for/factorial.c)