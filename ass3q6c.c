//
// Created by brian on 13/05/2021.
//
#include <stdio.h>
#include <stdlib.h>
#include <Basic.h>
#include <CUnit.h>
#include "avg_and_max.h"
//This program is used to check gcd3 which is the recursive method for the gcd and checking if all tests pass below
void gcd_function();

void runAllTests()
{
    CU_initialize_registry();
    CU_pSuite gcd_suite = CU_add_suite("gcd_suite", 0, 0);//Suite for gcd function

    CU_ADD_TEST(gcd_suite, gcd_function );
    CU_basic_set_mode(CU_BRM_VERBOSE);
    CU_basic_run_tests();
    CU_cleanup_registry();
}

int main()
{
    runAllTests();
}
//In this function the gcd1 will be tested which is the division recursive method method of getting the gcd and we have 6 tests we will test
void gcd_function()
{
    CU_ASSERT_EQUAL(gcd3(42,56),14);
    CU_ASSERT_EQUAL(gcd3(48,18),6);
    CU_ASSERT_EQUAL(gcd3(270,192),6);
    CU_ASSERT_EQUAL(gcd3(1237,24),1);
    CU_ASSERT_EQUAL(gcd3(4200000, 3780000), 420000);
    CU_ASSERT_EQUAL(gcd3(0,0),0);
}


