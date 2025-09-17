#include<stdio.h>

 int main()
 {
   char str[100];
   
   printf("Enter a string :");
   scanf("%s",str);
   
    int i=0,length=0;
    while (str[i] !='\0')
    {
       length++;
       i++;
    }
    
    printf("\n entered string length is  =  %d\n",length);
   
   return 0;
 }
