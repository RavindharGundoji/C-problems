#include<stdio.h>
#include<string.h>

int main(){
    char str[200],word[50];
    char *pos;
    int index,found = 0;

    printf("Enter a string:");
  fgets(str,sizeof str,stdin);
  str[strcspn(str, "\n")] = '\0';
  
  
   printf("Enter a word to find:");
  fgets(word,sizeof word,stdin);
  word[strcspn(word, "\n")] = '\0';
  
  pos = strstr(str,word);
  while(pos != NULL){
     found =1;
     index = pos - str+1;
     printf("Found at position %d\n",index);
     pos = strstr(pos+1,word);
  }
  if(!found){
     printf("The wprd %s was not found in the string \n",word);
  }
  
  return 0;
  
}
