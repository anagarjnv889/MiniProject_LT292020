/**
 * @file unit_test.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "unity.h"
#include "head.h"
#define PROJECT_NAME    "Calculator"
void setUp(){}
/**
 * @brief 
 * 
 */
void tearDown(){}
/**
 * @brief 
 * 
 */
 void test_sourcecode(void){

    int a = 65;
    int b = 2;
    
    TEST_ASSERT_EQUAL(130,addition(a, b));

}
int main(void)
{
UNITY_BEGIN();
RUN_TEST(test_sourcecode); 
return UNITY_END();
}

 