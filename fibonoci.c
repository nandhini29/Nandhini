#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,t1=0,t2=1,c;
printf("enter the number of terms\n");
scanf("%d",&n);
printf("fibonacci series:\n");
for(i=0;i<n;i++)
{
printf("%d",t1);
c=t1+t2;
t1=t2;
t2=c;
}
return 0;
}
