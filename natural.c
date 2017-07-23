#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,sum=0;
printf("enter a positive integer \n");
scanf("%d",&n);
for(i=1;i<n;i++)
{
sum=sum+i;
}
printf("sum of natural numbers are %d",sum);
}
