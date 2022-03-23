cmake_minimum_required(VERSION 3.21)
project(Informatik2 C)

set(CMAKE_C_STANDARD 11)

add_subdirectory(Exercises)

add_subdirectory(Lecture)

add_executable(test
        Practice/01_helloworld/test.c)

add_executable(01_helloworld
        Practice/01_helloworld/helloworld.c)

add_executable(02_variables
        Practice/02_variables/variables.c)

add_executable(03_grades
        Practice/03_grades/grades.c)

add_executable(04_arrays
        Practice/04_arrays/average.c)

add_executable(05_conditions
        Practice/05_conditions/conditions.c)

add_executable(06_strings
        Practice/06_strings/strings.c)

add_executable(07_for
        Practice/07_for/factorial.c)

add_executable(08_while
        Practice/08_while/while.c)

add_executable(09_func
        Practice/09_func/bigprint.c)

add_executable(10_static
        Practice/10_static/static.c)

add_executable(enum
        Practice/enum.c)

add_executable(mergesort
        Practice/mergeSort.c)