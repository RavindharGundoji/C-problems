#include<stdio.h>
#include<string.h>

int main(){
 char str[100];
 char ch;
 int i,found = -1,len;
 
 printf("Enter a string : ");
 scanf("%s\n",str);
 
 printf("Enter a character: \n");
 scanf("%c\n",&ch);
 
 len = strlen(str);
 
 printf("Occurrences of '%c' are at positions : ",ch);
 for(i=0; i<len;i++){
       if(str[i] == ch){
       printf("%d ",i+1);
        found = 1;
       }
 }
 
 if(!found)
         printf("\n character '%c' not found in the string. \n ",ch);
  else
      printf("\n");
      
  return 0;    
}
