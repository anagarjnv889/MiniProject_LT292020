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
    int ans=(nagar->a)-(nagar->b);
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
        Printf("\nEnter a valid input!!!! Divisor can not be zero\n");
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
        Printf("\nEnter a valid input!!!! Divisor can not be zero\n");
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