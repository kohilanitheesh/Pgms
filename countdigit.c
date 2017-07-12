#include <stdio.h>
 
void main()
{
    long  n;
    int c = 0;
 
    printf("Enter any number: ");
    scanf("%lld", &n);
 
    while(n != 0)
    {
        c++;
        n /= 10;
    }
 
    printf("Total digits: %d", c);
 
    //return 0;
}
