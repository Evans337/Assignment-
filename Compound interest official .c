// program to calculate compound intrest 
/*
Athor: evans
Date: 16/10/2024
*/
// preprocessor directive 
#include<stdio.h>
#include<math.h>
int main()
{
// declaration and initialization 
 float principal, rate,time,compoundinterest,period;
 int n;
 
printf("enter principal amount \n");
scanf("%f",&principal);
printf("enter rate of interest \n");
scanf("%f",&rate);
printf ("enter  time in period (in years)\n");
scanf("%f",&time);
printf ("Enter the number of time compounding is done in a year\n");
scanf("%d",&n);
period =n* time;
compoundinterest= principal* pow(1+(rate/100)/n,period);
printf ("Compound interest =%.2f",compoundinterest);
return 0;
}