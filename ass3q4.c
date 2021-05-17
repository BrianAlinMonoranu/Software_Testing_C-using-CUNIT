//
// Created by brian on 13/05/2021.
//
#include <stdio.h>
#include <stdlib.h>
#include <Basic.h>
#include <CUnit.h>
#include "avg_and_max.h"

//This function will basically contain the functions that will perform the tests
void max_test_same();

//Here we initiate the tests we need to perform
void runAllTests()
{
    CU_initialize_registry();
    CU_pSuite max_suite = CU_add_suite("max_suite", 0, 0);//Suite for max function
    CU_ADD_TEST(max_suite, max_test_same);
    CU_basic_set_mode(CU_BRM_VERBOSE);
    CU_basic_run_tests();
    CU_cleanup_registry();
}

int main()
{
    runAllTests();//We call this function
}

void max_test_same()
{
    double max_1[]={-1.3, -1.45, -220, -100, -0.1, -0.1234, -200};
    CU_ASSERT_DOUBLE_EQUAL(max_fixed(max_1, 7), -0.1, 0.0001);//first test
    double max_2[]={-1.3, 1.45, 220, 100, 0, 200, 0.1234};
    CU_ASSERT_DOUBLE_EQUAL(max_fixed(max_2, 7), 220, 0.0001);//second test
}

