#include<stdio.h>
#include<ctype.h>

void touppercase(char str[]){
    int i;
    for( i =0; str[i] != '\0'; i++){
       str[i] = toupper(str[i]);
    }
}
int main() {
    char str[100];
    
    printf("Enter a string: ");
    fgets(str,sizeof str,stdin);
    
    touppercase(str);
    
    printf("Uppercase string: %s\n",str);
    
    return 0;
}
