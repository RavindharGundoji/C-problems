#include<stdio.h>
#include<ctype.h>

int main()
{
 char ch;
 
 printf("enter a character :");
 scanf("%c",&ch);
 
 if(isxdigit(ch)){
     printf("is a hexadecimal digit");
 }
 else
 {
   printf("is not a hexadecimal digit");
 }
 return 0;
}
