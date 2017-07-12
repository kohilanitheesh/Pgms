#include<stdio.h>
int main(){
    char s[50];
    char r[50];
    int i=-1,j=0;

    printf("Enter any string : ");
    scanf("%s",s);
   
    while(s[++i]!='\0');

    while(i>=0)
     r[j++] = s[--i];

    r[j]='\0';
  
    printf("Reverse of string is : %s",r);
  
    return 0;
}
