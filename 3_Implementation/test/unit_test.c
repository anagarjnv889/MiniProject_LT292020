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
ajay testcal={10,5};
ajay1 testo={4};
ajay testcal1={-3,-2} /* negative number input  */,testdiv0={3,0};
ajay1 testf1={0};
ajay1 testf2={-5}; /* negative number input  */
/* Prototypes for all the test functions */
void test_addition(void);
void test_substraction(void);
void test_multiplication(void);
void test_division(void);
  
void test_factorial(void);
void test_zero_factorial(void);
void test_negative_factorial(void);
void test_division_byZero(void);
void test_division_byZero(void);
 
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_addition);
  RUN_TEST(test_substraction);
  RUN_TEST(test_multiplication);
  RUN_TEST(test_division);
  RUN_TEST(test_division_byZero);
  RUN_TEST(test_power);
  RUN_TEST(test_exponent);
  RUN_TEST(test_factorial);
  RUN_TEST(test_zero_factorial);
  RUN_TEST(test_negative_factorial);

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* all test functions */ 
void test_addition(void) {
  TEST_ASSERT_EQUAL(15,addition(&testcal));
   TEST_ASSERT_EQUAL(-5,addition(&testcal1)); /* negative number input case  */
   }
void test_substraction(void) {
  TEST_ASSERT_EQUAL(5,substraction(&testcal));
  TEST_ASSERT_EQUAL(-1,substraction(&testcal1)); /* negative number input case  */
}
void test_multiplication(void) {
  TEST_ASSERT_EQUAL(50,multiplication(&testcal));
  TEST_ASSERT_EQUAL(6,multiplication(&testcal1)); /* negative number input case  */
}
void test_division(void) {
  TEST_ASSERT_EQUAL(2,division(&testcal));
  TEST_ASSERT_EQUAL(1,division(&testcal1)); /* negative number input case  */
}
/*division when divisor is 0 */
void test_division_byZero(void){
   TEST_ASSERT_EQUAL(-1, division(&testdiv0));
}
void test_power(void) {
  TEST_ASSERT_EQUAL(100000,power(&testcal));
   TEST_ASSERT_EQUAL(-0.111,power(&testcal1)); /* negative number input case  */
}

void test_factorial(void) {
  TEST_ASSERT_EQUAL(24,factorial(&testo));
  TEST_ASSERT_EQUAL(-1,factorial(&testf2)); /* negative number input case  */
}

/*factorial of 0*/
void test_zero_factorial(void)
{
  TEST_ASSERT_EQUAL(1, factorial(&testf1));
}

/*factorial of negative numbers */
void test_negative_factorial(void)
{
  TEST_ASSERT_EQUAL(-1, factorial(&testf2));
}

 