#include<stdio.h>
#include<string.h>
#include<ctype.h>
 int main()
 {
   char str[100];
   int i,alphabets = 0, digits = 0, special = 0, len;
   printf("Enter a string :");
   fgets(str,sizeof(str),stdin);
  
   len = strlen(str);
    
    
    for(int i=0; i<len ; i++)
    {
      if(isalpha(str[i]))
      {
        alphabets++;
      }
      else if(isdigit(str[i]))
      {
         digits++;
      }
      else if(ispunct(str[i]))
      {
       special++;
      }
    }
   printf("no of alphabets : %d\n",alphabets);
   
   printf("no of digits : %d\n",digits);
   
   printf("no of special characters : %d\n",special);
    
   return 0;
 }
