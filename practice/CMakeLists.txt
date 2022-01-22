cmake_minimum_required(VERSION 3.21)
project(Informatik2 C)

set(CMAKE_C_STANDARD 11)

add_executable(test
        01_helloworld/test.c)

add_executable(01_helloworld
        01_helloworld/helloworld.c)

add_executable(02_variables
        02_variables/variables.c)

add_executable(03_grades
        03_grades/grades.c)

add_executable(04_arrays
        04_arrays/average.c)

add_executable(05_conditions
        05_conditions/conditions.c)

add_executable(06_strings
        06_strings/strings.c)

add_executable(07_for
        07_for/factorial.c)

add_executable(08_while
        08_while/while.c)

add_executable(09_func
        09_func/bigprint.c)

add_executable(10_static
        10_static/static.c)

