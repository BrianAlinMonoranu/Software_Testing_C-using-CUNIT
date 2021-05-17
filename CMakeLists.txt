cmake_minimum_required(VERSION 3.15)
project(UnitTesting C)

set(CMAKE_C_STANDARD 99)

find_library(CUNIT libcunit.dll.a C:\\Users\\brian\\Desktop\\cygwin_2\\lib)

include_directories(C:\\Users\\brian\\Desktop\\cygwin_2\\usr\\include\\CUnit .)

add_executable(UnitTesting test-max-main.c avg_and_max.h avg_and_max.c gcd.c factorial.c)

target_link_libraries(UnitTesting PUBLIC ${CUNIT})
