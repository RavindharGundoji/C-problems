#include<stdio.h>
#include<string.h>

int main() {
     char str[200], word[50];
     char *token;
     int count = 0;
     printf("Enter a string : ");
     fgets(str,sizeof str,stdin);
     
     printf("Enter the word to search :");
     scanf("%s", word);
     
     // split the string into words using strtok
     token = strtok(str," ,.!?\n");
     while(token != NULL){
      if(strcmp(token,word) == 0){
         count++;
      }
       token = strtok(NULL, " ,.!?\n");
     }
     printf("Occurrences of '%s' = %d\n", word, count);
     
     return 0;
}
