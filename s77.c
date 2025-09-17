#include<stdio.h>
#include<string.h>

int main() {
    char str[200];
    int i = 0, j = 0;
    
    printf("Enter a string: ");
    fgets(str,sizeof str,stdin);
    
    str[strcspn(str, "\n")] = '\0';
    
    i = strlen(str) - 1;
    
    
    while (i >= 0 && (str[i] == ' ' || str[i] == '\t')){
      i--;
    }
    
    str[i+1] = '\0';
    
    printf("Trimmed string: '%s'\n",str);
    
    return 0;
}    
