#include<stdio.h>

#include<ctype.h>

int main()
{
  char str[200], result[200];
  int i,j = 0;
  
  printf("enter a string : ");
  fgets(str,sizeof str,stdin);
  
  for(i=0;str[i] != '\0';i++)
  {
   if(isalpha(str[i]))
   {
    result[j++] = str[i];
    
   }
  }
  result[j] = '\0';
  
  printf("the alphabets in the string are %s\n ",result);
  
}


