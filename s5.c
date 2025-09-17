#include<stdio.h>
#include<string.h>
 int main()
 {
   char str[100];
   int i,len,words;
   printf("Enter a string :");
   fgets(str,sizeof(str),stdin);
  
   len = strlen(str);
    
    
    for(int i=0; i<len ; i++)
    {
      if(str[i] == ' ')
      {
        words++;
      }
    }
    words+=1;
    printf("no of words %d\n",words);
    
   return 0;
 }
