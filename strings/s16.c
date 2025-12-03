#include<stdio.h>
#include<string.h>
int main()
{
  char str[500];
 char word[10] = "sruthi";
 char *token;
 int count = 0;
 
 printf("enter a string: ");
 fgets(str,sizeof(str),stdin);
 
 // removes newline if present 
 str[strcspn(str,"\n")] = '\0';
 
 // split string into words using space as delimiter 
 token = strtok(str, " ,.!?;:");
 
 while(token != NULL){
     if(strcmp(token, word) == 0) {
      count++;
     }
     token = strtok(NULL, " ,.!?;:");
 }
 
 printf("The word 'sruthi' appears %d times . \n", count);
 
 return 0;
}
