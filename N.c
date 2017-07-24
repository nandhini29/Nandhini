#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,sum=0;
printf("enter the numbers\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
sum=sum+i;
}
printf("the sum of N numbers are %d",sum);
return 0;
}
