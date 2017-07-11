#include<stdio.h>
void main()
{
int a,b,c;
printf("Enter 3 nos");
scanf("%d%d%d",&a,&b,&c);
if(a>b && a>c)
printf("A is big");
else if(b>a && b>c)
prinft("B is big");
else
printf("C is big");
}
