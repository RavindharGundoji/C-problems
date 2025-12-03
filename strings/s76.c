#include<stdio.h>
#include<string.h>

int main() {
    char str[200];
    int i = 0, j = 0;
    
    printf("Enter a string: ");
    fgets(str,sizeof str,stdin);
    
    // skip leading spaces    i/p  "      hello world"
   while(str[i] == ' ' || str[i] == '\t'){
     i++;
   }
   
   // shift characters to the front 
   while(str[i] != '\0'){
     str[j++] = str[i++];
   }
   str[j] = '\0';
   
   printf("Trimmed string: '%s'\n",str);
   
   return 0;
}
