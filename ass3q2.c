//
// Created by brian on 13/05/2021.
//
#include <Basic.h>
#include <CUnit.h>
#include "avg_and_max.h"

//This function basically will call the tests that will be accomplished in this program
void average_tests_same();

//In this function we initiate the tests
void runAllTests()
{
    CU_initialize_registry();
    CU_pSuite average_suite = CU_add_suite("average_suite", 0, 0);//Suite for average function
    CU_ADD_TEST(average_suite, average_tests_same);
    CU_basic_set_mode(CU_BRM_VERBOSE);
    CU_basic_run_tests();
    CU_cleanup_registry();
}

int main()
{
    runAllTests();//calls this function

}
void average_tests_same()
{
    double question_1[] ={-1.3, -1.45, -220, -100, -0.1, -0.1234, -200}; //inserting numbers into the array
    CU_ASSERT_DOUBLE_EQUAL(average_fixed(question_1, 7), -74.710485714286,0.0001);//test->1
    double question_1_2[] = {-1.3, 1.45, 220, 100, 0, 200, 0.1234};
    CU_ASSERT_DOUBLE_EQUAL(average_fixed(question_1_2, 7), 74.324771428571,0.0001);//test->2
}
