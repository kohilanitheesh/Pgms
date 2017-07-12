#include <stdio.h>

int main() {
   int a = 153; 
   int check, r, s = 0;

   check = a;

   while(check != 0) {
      rem = check % 10;
      s = s + (r * r * r);
      check = check / 10;
   }

   if(s == a) 
      printf("%d is an armstrong number.", a);
   else 
      printf("%d is not an armstrong number.", a);

   return 0;
}
