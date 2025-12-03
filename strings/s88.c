#include<stdio.h>
#include<string.h>

 int rspace(char *str){
    int i=0,j=0;
   int len =strlen(str);
   
   while(i< len){
    str[j++] = str[i]; // copy the first character
    
    // if current char is a space
    if(str[i] == ' '){
    // skip all adjacent spaces
          while(i<len && str[i] == ' ')
                  i++;
    }else{
     i++;
    }
   }
   str[j] = '\0'; // null terminate the final string
    
}
int main(void){
  char str[200];
  
  printf("Enter the string: ");
  fgets(str,sizeof str,stdin);
  
  str[strcspn(str,"\n")] = '\0';
  
  rspace(str);
  printf("%s\n",str);
  
  return 0;
}
