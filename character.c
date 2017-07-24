#include<stdio.h>
#include<conio.h>
void main()
{
char a;
printf("enter the character\n");
scanf("%c",&a);
if((a>='a' && a<='z')||(a>='A' && a<='Z'))
printf("%a ia an alphabet",a)
else
printf("%a is not an alphabet",a);
return 0;
}
