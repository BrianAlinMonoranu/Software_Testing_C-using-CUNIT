//
// Created by brian on 13/05/2021.
//
#include <stdio.h>
#include <stdlib.h>
#include <Basic.h>
#include <CUnit.h>
#include "avg_and_max.h"


void factorial_function();

void runAllTests()
{
    CU_initialize_registry();
    CU_pSuite factorial_suite = CU_add_suite("factorial_suite", 0, 0);//Suite for factorial function

    CU_ADD_TEST(factorial_suite, factorial_function );
    CU_basic_set_mode(CU_BRM_VERBOSE);
    CU_basic_run_tests();
    CU_cleanup_registry();
}

int main()
{
    runAllTests();

}

void factorial_function()
{
    CU_ASSERT_EQUAL(factorial(0), 1);//First case if n =0
    CU_ASSERT_EQUAL(factorial(1), 1);//Second case if n = 1
    CU_ASSERT_EQUAL(factorial(4),24);//Third case if n = 4
    CU_ASSERT_EQUAL(factorial(6), 720);//Fourth case if n = 6
}

