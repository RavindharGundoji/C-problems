#include<stdio.h>
#include<ctype.h>

int main()
{
 char ch;
 
 printf("enter a character :");
 scanf("%c",&ch);
 
 if(isupper(ch)){
     printf("is in upper case");
 }
 else
 {
   printf("is not in uppercase");
 }
 return 0;
}
