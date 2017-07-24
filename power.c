#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,result=1,i;
clrscr();
printf("enter the value of a and b:\n");
scanf("%d %d",&a,&b);
for(i=1;i<=b;i++)
{
result=result*a;
}
printf(" %d  power of %d=%d" a,b, result);
getch();
}
