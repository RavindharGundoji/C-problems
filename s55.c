#include<stdio.h>
#include<string.h>

int main(){
 char str[100];
 char ch;
 int i,found = -1,len;
 
 printf("Enter a string : \n");
 scanf("%s\n",str);
 
 printf("Enter a character: \n");
 scanf("%c\n",&ch);
 
 len = strlen(str);
 
 for(i=0; i<len;i++){
       if(str[i] == ch){
        found = i;
        break;
       }
 }
 
 if(found != -1)
         printf("The first occurrence of the character '%c' is at position  %d",ch,found +1);
  else
      printf("The character '%c' is not found ",ch);
      
  return 0;    
}
