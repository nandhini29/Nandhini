#include<stdio.h>
#include<conio.h>
void main()
{
double n;
printf("enter a number \n");
scanf("%lf",&n);
if(n<0.0)
printf("the number is negative\n");
else if(n>0.0)
printf("the number is positive\n");
else
printf("the given number is zero");
return 0;
}
