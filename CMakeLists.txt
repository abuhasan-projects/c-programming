cmake_minimum_required(VERSION 3.22)
project(C_Programming C)

set(CMAKE_C_STANDARD 11)

add_executable(C_Programming
        #        c_01_start.c
        #        c_02_var.c
        #        c_03_data-type.c
        #        c_04_constants_scanF.c
        #        c_05_sizeOf.c
        #        c_06_Operators.c
        #        c_07_condition_ifElse.c
        #        c_08_arrays.c
        #        c_09_function.c

        #data structure/algorithms folder
        #        ./DS/c_01_time_complexity.c
        ./DS/c_02_linear_search.c

        #leetcode problem solving
        #        ./leetcode/c01_towSum.c
        #        ./leetcode/c02_addTowNum.c

        )
