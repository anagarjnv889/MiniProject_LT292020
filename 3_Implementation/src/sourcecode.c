/**
 * @file sourcecode.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "head.h"
#include <stdlib.h>
#include <string.h>
#include<stdio.h>
#include <math.h>
/**
 * @brief 
 * 
 * @param a 
 * @param b 
 * @return int 
 */
int addition(int a,int b)
{
    int ans= a+b;
    return ans;
}
/**
 * @brief 
 * 
 * @param a 
 * @param b 
 * @return int 
 */
int subtraction(int a,int b)
{
    int ans= a-b;
    return ans;
}
/**
 * @brief 
 * 
 * @param a 
 * @param b 
 * @return int 
 */
int multiplication(int a,int b)
{
    int ans= a*b;
    return ans;
}
/**
 * @brief 
 * 
 * @param a 
 * @param b 
 * @return int 
 */
int dividion(int a,int b)
{
    if(b==0)
    {
        return -1;
    }
    int ans= a/b;
    return ans;
}
/**
 * @brief 
 * 
 * @param a 
 * @param b 
 * @return int 
 */
int modulus(int a,int b)
{
    if(b==0)
    {
        return -1;
    }
    int ans= a%b;
    return ans;
}
/**
 * @brief 
 * 
 * @param a 
 * @param b 
 * @return int 
 */
int gcd(int a,int b)
{
    int gc=1;
   for(int i=0;i<=a && i<=b;i++)
   {
    if(a%i==0 && b%i==0)
    {
      gc=i;
    }
   }
   return gc;
     
}
/**
 * @brief 
 * 
 * @param a 
 * @return int 
 */
int factorial(int a)
{              
    if(a==0 || a==1)
    {
        return 1;
    }
    return factorial(a-1)*a;
}
/**
 * @brief 
 * 
 * @param a 
 * @return int 
 */
int sumofdigit(int a)
{
    int sum=0;
    while(a>0)
    {
        int rem=a%10;
        sum+=rem;
        a=a/10;
    }
    return sum;
}