#include<stdio.h>
void main()
{
int a,b;
b=0;
printf("Enter n");
scanf("%d",&a);
for(int i=1;i<=a;i++)
{
b=b+i;
}
printf("Sum = %d",b);
}
