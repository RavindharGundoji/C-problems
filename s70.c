#include<stdio.h>
#include<string.h>

int main(){
    char str[200],word[50];
    char *pos , *last = NULL;

    printf("Enter a string:");
  fgets(str,sizeof str,stdin);
  str[strcspn(str, "\n")] = '\0';
  
  
   printf("Enter a word to find:");
  fgets(word,sizeof word,stdin);
  word[strcspn(word, "\n")] = '\0';
  
  pos = strstr(str,word);
  while(pos != NULL){
     last = pos;
      pos = strstr(pos +1 ,word);
  }
  
  if(last != NULL){
    printf("The word  %s last occurs  at position %ld.\n", word,last - str+1);
  }
  else{
    printf("The word %s was not found in the string.\n",word);
  }
  return 0;
  
}
