#include <stdio.h>
 
long power (int, int);
 
void main()
{
    int power, num;
    long result;
 
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter it's power: ");
    scanf("%d", &power);
    result = power(num, power);
    printf("%d^%d is %ld", num, power, result);
   // return 0;
}
 
long power (int num, int power)
{
    if (power)
    {
        return (num * power(num, power - 1));
    }
    return 1;
}
