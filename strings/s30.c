#include<stdio.h>
#include<ctype.h>

int main()
{
 char ch;
 
 printf("enter a character :");
 scanf("%c",&ch);
 
 if( isdigit(ch)){
         printf("entered character is a digit ");
         }
  else    
  {     printf("entered character is not a digit");}
}
