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
 * @param nagar 
 * @return int 
 */
int addition(ajay *nagar)
{
    int ans= nagar->a+nagar->b;
    return ans;
}
/**
 * @brief 
 * 
 * @param nagar 
 * @return int 
 */
int subtraction(ajay *nagar)
{
    int ans=(nagar->a)-(nagar->b);
    return ans;
}
/**
 * @brief 
 * 
 * @param nagar 
 * @return int 
 */
int multiplication(ajay *nagar)
{
    int ans=(nagar->a)*(nagar->b);
    return ans;
}
/**
 * @brief 
 * 
 * @param nagar 
 * @return int 
 */
int subtraction(ajay *nagar)
{
    int ans=nagar->a - nagar->b;
    return ans;
}
/**
 * @brief 
 * 
 * @param nagar 
 * @return int 
 */
int division(ajay *nagar)
{
    if(nagar->b!=0)
    {
        int ans=(nagar->a)/(nagar->b);
    return ans;

    }
    else{
        printf("\nEnter a valid input!!!! Divisor can not be zero\n");
        return -1;
    }
     
}
/**
 * @brief 
 * 
 * @param nagar 
 * @return int 
 */
int modulus(ajay *nagar)
{
    if(nagar->b!=0)
    {
        int ans=(nagar->a)%(nagar->b);
    return ans;

    }
    else{
        printf("\nEnter a valid input!!!! Divisor can not be zero\n");
        return -1;
    }
}
/**
 * @brief 
 * 
 * @param nagar 
 * @return int 
 */
int power(ajay *nagar)
{
    int ans=pow(nagar->a,nagar->b);
    return ans;
}
/**
 * @brief 
 * 
 * @param nagar 
 * @return int 
 */
int gcd(ajay *nagar)
{
     int ans=1;
     for(int i=2;i<=(nagar->a) && i<=(nagar->b);i++)
     {
         if(i%(nagar->a)==0 && i%(nagar->b)==0)
         {
             ans=1;
         }
     }
     return ans;
}
int factorial(ajay1 *nagar1)
{
    if(nagar1->n < 0)
    {
        printf("\nEnter a positie number \n");
        return -1;
    }
    if(nagar1->n==0)
    {
        return 1;
    }
    long long int f=1;
    for(int i=1;i<= nagar1->n;i++)
    {
        f=f*i;
    }
    return f;
}
/**
 * @brief 
 * 
 * @param nagar1 
 * @return int 
 */
int sumofdigit(ajay1 *nagar1)
{
    int ans=0;
    while((nagar1->n) > 0)
    {
        int rem=(nagar1->n)%10;
        ans+=rem;
    nagar1->n=(nagar1->n)/10;
    }
    return ans;
}