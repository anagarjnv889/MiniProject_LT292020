/**
 * @file main.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "head.h"
#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int addition(int a, int b)
{
    int sum=0, i=0, num;
    sum=a+b;
    return sum;
}
 
int subtraction(int a,int b)
{ 
  int sub=0;
    
    sub = a-b; 
    return sub; 
}
 
int multiplication(int a,int b)
{
    int mul=1; 
   mul=a*b;
 
     return mul;
    }
 
int division(int a,int b)
{
    int div=0; 
    div=a/b;
    return div;
}
int modulus(int a,int b)
{
    int d=0; 
     
    d=a%b;
     return d;
   }
int factorial(int num)
{
                 
    if(num==0 || num==1)
    {
        return 1;
    }
    return factorial(num-1)*num;
     
}
int gcd(int a,int b) {
   int gcd=1;
   for(int i=0;i<=a && i<=b;i++)
   {
    if(a%i==0 && b%i==0)
    {
      gcd=i;
    }
   }
   return gcd;
}

int sumofdigit(int num)
{
    int sum=0;
    while(num>0)
    {
        int rem=num%10;
        sum+=rem;
        num=num/10;
    }
    return sum;
}
int ARITHMATIC_OPERATION()
{
    int n;
 printf("IF YOU WANT TO PERFORM ADDITION PRESS 1 ->\n");
 printf("IF YOU WANT TO PERFORM SUBTRACTION PRESS 2 ->\n");
 printf("IF YOU WANT TO PERFORM MULTIPLICATION PRESS 3 ->\n");
 printf("IF YOU WANT TO PERFORM DIVISION PRESS 4 ->\n");
  printf("IF YOU WANT TO PERFORM MODULUS PRESS 5 ->\n");
 scanf("%d",&n);
 switch(n){
 case 1:
 {
   int a,b;
   printf("\n Enter two number");
   scanf("%d %d",&a,&b);
    printf("Sum of numbers is -> %d \n",addition(a,b));
     break;
 }
 case 2:
 {
    int n1,n2;
    printf("\nEnter first number  -> \n"); 
    scanf("%d", &n1); 
    printf("\nEnter second number -> \n"); 
    scanf("%d", &n2); 
    printf("\nDifference of two number %d - %d is -> = %d\n",n1,n2,subtraction(n1,n2));
     break;
 }
 case 3:
 {
  int n1,n2;
    printf("\nEnter first number  -> \n"); 
    scanf("%d", &n1); 
    printf("\nEnter second number -> \n"); 
    scanf("%d", &n2); 
    printf("Multiplication of numbers is -> %d \n",multiplication(n1,n2));
     break;
 }
 case 4:
 {
  int a,b;
  printf("\nEnter first number  -> "); 
    scanf("%d", &a); 
    printf("Enter second number -> "); 
    scanf("%d", &b);
    if(b==0)
    {
      printf("\nEnter a valid input. Divisor can not be negative ");
    }
    else
    {
 printf("\nDivision of entered numbers is -> %d\n",division(a,b));
    }
     
     break;
 }
 case 5:
 {
  int a,b;
  printf("\nEnter first number -> "); 
    scanf("%d", &a); 
    printf("Enter second number -> "); 
    scanf("%d", &b);
    if(b==0)
    {
      printf("\nEnter a valid input. Divisor can not be negative ");
    }
    else
    {
      printf("\nModulus of entered numbers ->  %d\n",modulus(a,b));

    }
     break;
 }
 default:
 {
      printf("WRONG INPUT TRY AGAIN!!!!!!!!\n");
      break;
  }
 return 0;
}
}

int ADVANCE_OPERATION()
{
int n;
printf("IF YOU WANT TO FIND FACTORIAL OF A NUMBER PRESS 1 ->\n");
printf("IF YOU WANT TO FIND HCF OF TWO NUMBER PRESS 2 ->\n");
printf("IF YOU WANT TO CHECK WHETHER A NUMBER IS PRIME/COMPOSITE PRESS 3 ->\n");
printf("IF YOU WANT TO FIND POWER A NUMBER PRESS 4 ->\n");
printf("IF YOU WANT TO FIND SUM OF DIGITS OF A NUMBER PRESS 5 ->\n");
 scanf("%d",&n);
 switch(n){
 case 1:
 {
    printf("\nENTER A NUMBER TO FIND FACTORIAL -> \n");
    int num;
    scanf("%d",&num);
    if(num<0)
    {
      printf("\nEnter a valid input");
    }
    else
    {
       printf("\nFACTORIAL OF %d IS -> %d",num,factorial(num));

    }
     break;
 }
 case 2:
 {
    int a,b;
    printf("\nENTER TWO NUMBER FOR WHICH YOU WANT TO FIND HCF/GCD");
    printf("\nENTER FIRST NUMBER ->\n");
    scanf("%d",&a);
    printf("\nENTER SECOND NUMBER ->\n");
    scanf("%d",&b);
    printf("HCF of %d and %d is ->%d",a,b,gcd(a,b));
     break;
 }
 case 3:
 {
    int po,num, powerresult;
    printf("\nEnter two numbers to find the power \n");
    printf("Enter number -> \n");
    scanf("%d",&num);
    printf("\nEnter power -> \n");
    scanf("%d",&po);
    powerresult=pow(num,po);
    printf("\n%d to the power %d = %d \n",po,num,powerresult);
     break;
 }
 case 4:
 {
    printf("\nENTER A NUMBER TO FIND THE SUM OF ITS DIGIT \n");
    int digit;
    scanf("%d",&digit);
    printf("\nTHE SUM OF DIGIT is -> %d",sumofdigit(digit));
     break;
 }
 default:
 {
      printf("WRONG INPUT TRY AGAIN!!!!!!!!\n");
      break;
  }
 return 0;
}
}

 
int main()
{
    printf("           ------------------------------------------");
    printf("\n           WELCOME TO NAGAR'S ADVANCE CALCULATOR");
    printf("\n        ------------------------------------------");    
xy:{
printf("\nIF YOU WANT TO PERFORM ARITHMATIC OPERATIONS PRESS 1\n");
printf("IF YOU WANT TO PERFORM SOME ADVANCE OPERATION PRESS 2\n");
int choice,x;
scanf("%d",&choice);
if(choice>=1 && choice<=2)
{
    switch(choice)
    {
        case 1:
               ARITHMATIC_OPERATION();
               break;
        case 2:
        {
            ADVANCE_OPERATION();
            break;
        }

    }
}
else
{
    printf("Enter a valid input");
     goto xy;
}
}
int x;
printf("\nDO YOU WANT TO PERFORM SOME MORE OPERATION ?? (Yes=1/No=0) \n");
 scanf("%d",&x);
 if(x==1)
 {
    goto xy;
 }
 else
 {
printf("\nTHANK YOU \n");
 }
}