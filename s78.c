#include<stdio.h>
#include<string.h>

int main() {
  char str[200];
  int start = 0, end;
  
  printf("Enter a string: ");
  fgets(str, sizeof str,stdin);
  
  str[strcspn(str, "\n")] = '\0';
  
  while(str[start] == ' ' || str[start] == '\t'){
        start++;
  }
  
  end = strlen(str) - 1;
  while(end >= start && (str[end] == ' ' || str[end] == '\t')){
     end--;
  }
  
  int i, j =0 ;
  for(i = start; i<= end ; i++){
     str[j++] = str[i];
  }
  str[j] = '\0';
  
  printf("Trimmed string: '%s'\n",str);
  
  return 0;
}
