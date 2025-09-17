#include<stdio.h>

 int main()
 {
   char str[100];
   
   printf("Enter a string :");
   scanf("%s",str);
  
   printf("\n Characters in the string are : \n");
    int i=0;
    while (str[i] !='\0')
    {
       printf("%c\n",str[i]);
       i++;
    }
    
   return 0;
 }
