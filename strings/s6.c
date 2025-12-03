#include<stdio.h>

int main()
{
 char str1[100];
 char str2[100];
  
   printf("Enter a string  1:");
   fgets(str1,sizeof(str1),stdin);
   printf("Enter a string 2 :");
   fgets(str2,sizeof(str2),stdin);
   
   int  i=0,flag =1;
   
   while (str1[i] == str2[i])
   {
     if(str1[i] == '\0'){
     flag=0;
       break;
       }
     else
        i++;
   }
   if(flag == 0)
    printf(" \n     same   \n");
  else
    printf("  \n  not same \n");
   
}
