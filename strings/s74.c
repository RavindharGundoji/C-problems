#include<stdio.h>
#include<string.h>

int main() {
  char str[200], word[50];
  char words[50][50];
  int count = 0, i, lastindex = -1;
  
  printf("Enter the string: ");
  fgets(str,sizeof str,stdin);
  
  printf("Enter the word to remove: ");
  scanf("%s",word);
  
  //split string into words
  char *token = strtok(str, " \n");
  while(token != NULL) {
     strcpy(words[count], token);
     if (strcmp(token, word) == 0){
        lastindex = count;
     }
     count++;
     token = strtok(NULL, " \n");
  }
  
  printf("Result: ");
  for(i = 0; i < count; i++){
    if(i == lastindex) continue;
      printf("%s ", words[i]);
  }
  printf("\n");
  
  return 0;
}
