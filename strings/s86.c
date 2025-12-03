#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    char str[200];
    char abr[50];
    int i, j = 0;
    
    printf("Enter a phrase: ");
    fgets(str,sizeof str,stdin);
    
    str[strcspn(str,"\n")];
    
    if(str[0] != '\0' && str[0] != ' '){
       abr[j++] = toupper(str[0]);
    }
    
    for(i = 1; str[i] != '\0'; i++){
       if(str[i - 1] == ' '&& str[i] != ' '){
           abr[j++] = toupper(str[i]);
       }
    }
    
    abr[j] = '\0';
    
    printf("abbreviation: %s\n",abr);
}
