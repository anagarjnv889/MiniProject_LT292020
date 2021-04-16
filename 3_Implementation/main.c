#include "head.h"
#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int addition(int a);
int subtraction(int a,int b);
int multiplication(int a);
int division(int a,int b);
int modulus(int a,int b);
int ARITHMATIC_OPERATION();
int ADVANCE_OPERATION();
int factorial(int a);
long gcd(int a,int b);
int prime(int a);
int sumofdigit(int a);
int sum=0;
double addsum=0.0; 

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
//end of main

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
  int n;
  printf("\nEnter the number of elements you want to add -> \n");
  scanf("%d",&n);
    printf("Sum of %d numbers is -> %d \n",n,addition(n));
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
  int n;
    printf("\nEnter the number of elements you want to add -> \n");
    scanf("%d",&n);
     
    printf("Multiplication of %d numbers is -> %d \n",n,multiplication(n));
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
    printf("HCF of %d and %d is ->%ld",a,b,gcd(a,b));
     break;
 }
 case 3:
 {
    int p;
    printf("\nENTER A NUMBER TO CHECK WHEATHER PRIME/COMPOSITE -> \n");
    scanf("%d",&p);
    if(p<0)
    {
      printf("\nEnter a valid input");
    }
    else if(p==0)
    {
      printf("\n Zero is neither prime nor composite");
    }
    else if(p==1)
    {
      printf("\n %d IS NOT A PRIME NUMBER  ",p);
    }
    else
    {
    int flag=prime(p);
    if(flag==1)
    {
        printf("\n%d IS A PRIME NUMBER \n",p);
    }
    else
    {
        printf("%d IS NOT A PRIME NUMBER\n",p);
    }
  }
     break;
    
 }
 case 4:
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
 case 5:
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

int addition(int n)
{
    int sum=0, i=0, num;
    printf("\nEnter %d numbers one by one -> \n",n);
    while(i<n)
    { 
        scanf("%d",&num);
        sum=sum+num;
        i=i+1;
    }
    return sum;
}
 
int subtraction(int a,int b)
{ 
  int sub=0;
    
    sub = a-b; 
    return sub; 
}
 
int multiplication(int n)
{
    int num, mul=1,i=0; 
   
 printf("\nEnter %d numbers one by one -> \n",n);
    while(i<n)
    { 
        scanf("%d",&num);
        mul*=num;
        i=i+1;
    }
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
long gcd(int a,int b) {
  if (b == 0)
    return a;
  else
    return gcd(b, a % b);
}
int prime(int num)
{           
     int f=1;
     for(int i=2;i<sqrt(num);i++)
     {
         if(num%i==0)
         {
             f=0;
         }
     }
     return f;  
}
int sumofdigit(int num)
{
    
    while(num>0)
    {
        int rem=num%10;
        sum+=rem;
        num=num/10;
    }
    return sum;
}