#include<stdio.h>
#include<conio.h>
void main()
{
int a;
printf("enter the year \n");
scanf("%d",&a);
if(a%4==0)
{
if(a%100==0)
{
printf("%d is a leap year",a);
else
printf("%d is not a leap year",a);
}
else
printf("%d is a leap year",a);
else
print("%d is not a leap year",a);
return 0;
}
}
