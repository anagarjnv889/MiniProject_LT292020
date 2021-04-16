/**
 * @file head.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __head_H__
#define __head_H__
#include <stdio.h>
#include <math.h>
#include<stdlib.h>
/**
 * @brief 
 * 
 */
typedef struct ajay{
    int a;
    int b;
}ajay;
 
/**
 * @brief 
 * 
 */
typedef struct ajay1{
    int n;
}ajay1;
 /**
  * @brief 
  * 
  * @param nagar 
  * @return int 
  */
int addition(ajay *nagar);
/**
 * @brief 
 * 
 * @param nagar 
 * @return int 
 */
 
int subtraction(ajay *nagar);
/**
 * @brief 
 * 
 * @param nagar 
 * @return int 
 */
int multiplication(ajay *nagar);
/**
 * @brief 
 * 
 * @param nagar 
 * @return int 
 */
int division(ajay *nagar);
/**
 * @brief 
 * 
 * @param nagar 
 * @return int 
 */
int modulus(ajay *nagar);
/**
 * @brief 
 * 
 * @param nagar 
 * @return int 
 */
int gcd(ajay *nagar);
/**
 * @brief 
 * 
 * @param nagar 
 * @return int 
 */
int power(ajay *nagar);
/**
 * @brief 
 * 
 * @param nagar1 
 * @return int 
 */
int factorial(ajay1 *nagar1);
/**
 * @brief 
 * 
 * @param nagar1 
 * @return int 
 */

int sumofdigit(ajay1 *nagar1);
 
#endif
/**
 * @End
 * 
 */