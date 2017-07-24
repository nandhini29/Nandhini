#include<stdio.h>
#include<conio.h>
void main()
{
int n,sum=0,temp=n;
printf("enter the number\n");
scanf("%d",&n);
while(temp!=0)
{
int units=temp%10;
sum=sum+units*units*units;
temp=temp\10;
}
if(sum==n)
{
printf("%d is an amstrong number \n",n);
else
printf("%d is not an amstrong number\n",n);
}
}
