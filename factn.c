#include <stdio.h>

long int multiplyNumbers(int n);


int main()

{
   
 int num;
   
 printf("Enter a positive integer: ");

    scanf("%d", &num);
  
  printf("Factorial of %d = %ld", num, multiplyNumbers(n));
  
  return 0;

}

long int multiplyNumbers(int num)

{
 
   if (num >= 1)
   
     return num*multiplyNumbers(num-1);
   
 else
   
     return 1;

}
