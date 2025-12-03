#include<stdio.h>
#include<string.h>

int main() {
  char str[200], result[200];
  int  i , j=0;
  
  printf("Enter a string: ");
  fgets(str, sizeof str,stdin);
  
  str[strcspn(str, "\n")] = '\0';
  
  for(i =0 ; str[i] != '\0'; i++){
     if(str[i] != ' '){
        result[j++] = str[i];
     }else if (j == 0 || result[j-1] != ' '){
        result[j++] = ' ';
     }
  }
  result[j] = '\0';
  printf("string after removing extra spaces: '%s'\n", result);
  
  return 0;
}
