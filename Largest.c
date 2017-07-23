#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("enter the three numbers \n");
scanf("%d %d %d",&a,&b,&c);
if(a>=b&&a>=c)
printf("the largest number is %d",a);
if(b>=a&&b>=c)
printf("the largest number is %d",b);
if(c>=a&&c>=b)
printf("the largest number is %d",c);
return 0;
}
