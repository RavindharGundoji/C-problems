#include<stdio.h>
#include<string.h>

int main() {
     char str[200], word[50];
     char *token;
     int removed = 0;
     printf("Enter a string : ");
     fgets(str,sizeof str,stdin);
     
     printf("Enter the word to search :");
     scanf("%s", word);
     
     printf("Result: ");
     token = strtok(str," \n");
     while(token != NULL){
      if(strcmp(token,word) == 0 && removed == 0){
         removed = 1;   // skip only the first match
      }else{
         printf("%s ", token);
      }
       token = strtok(NULL, " \n");
     }
     printf("\n");
     
     return 0;
}
