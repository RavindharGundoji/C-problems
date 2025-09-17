#include<stdio.h>

int main()
{
 char str[200];
 int i=0;
 
 printf("enter a string : ");
 fgets(str,sizeof str,stdin);
 
 printf("words :  \n");
 
 while(str[i] != '\0'){
      if(str[i] == ' '){
             printf("\n");
      }else if (str[i] != '\n'){
           printf("%c",str[i]);
      }
      i++;
 }
 return 0;
}

