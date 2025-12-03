#include<stdio.h>
#include<string.h>

int main() {
  char str[200], word[50];
  char words[50][50];
  
  printf("Enter the string: ");
  fgets(str,sizeof str,stdin);
  
  printf("Enter the word to remove: ");
  scanf("%s",word);
  
  //split string into words
  char *token = strtok(str, " \n");
  while(token != NULL) {
     if (strcmp(token, word) != 0){
      printf("%s ",token);
     }
     token = strtok(NULL, " \n");
  }
  printf("\n");
  
  return 0;
}
