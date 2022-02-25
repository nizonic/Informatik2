cmake_minimum_required(VERSION 3.21)
project(Informatik2 C)

set(CMAKE_C_STANDARD 11)

add_subdirectory(Exercises)

add_executable(test
        practice/01_helloworld/test.c)

add_executable(01_helloworld
        practice/01_helloworld/helloworld.c)

add_executable(02_variables
        practice/02_variables/variables.c)

add_executable(03_grades
        practice/03_grades/grades.c)

add_executable(04_arrays
        practice/04_arrays/average.c)

add_executable(05_conditions
        practice/05_conditions/conditions.c)

add_executable(06_strings
        practice/06_strings/strings.c)

add_executable(07_for
        practice/07_for/factorial.c)

add_executable(08_while
        practice/08_while/while.c)

add_executable(09_func
        practice/09_func/bigprint.c)

add_executable(10_static
        practice/10_static/static.c)

add_executable(enum
        practice/enum.c)
