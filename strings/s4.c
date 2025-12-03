#include<stdio.h>
#include<string.h>
 int main()
 {
   char str[100];
   int i,len;
   printf("Enter a string :");
   scanf("%s",str);
  
   printf("\n Characters in the string are : \n");
   len = strlen(str);
    i =len - 1;
    while (i >= 0)
    {
       printf("%c\n",str[i]);
       i--;
    }
    
   return 0;
 }
