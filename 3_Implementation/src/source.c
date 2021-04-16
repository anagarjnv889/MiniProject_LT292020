/**
 * @file source.c
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
 * @param nagar1 
 * @return int 
 */
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
    for(int i=1;i<= nagar->n;i++)
    {
        f=f*i;
    }
    return fact;
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
        sum+=rem;
    nagar1->n=(nagar1->n)/10;
    }
    return ans;
}