#include<string.h>
#include<stdio.h>
#include<ctype.h>

int main(){
    char str[200];
    int i;
    
    printf("enter s string : ");
    fgets(str,sizeof(str),stdin);
    
    str[strcspn(str,"\n")] = '\0';
    
    for(i=0 ; str[i] != '\0'; i++){
       if(islower(str[i])){
           str[i] = toupper(str[i]);
       }
    }
    
    printf("string in uppercase: %s\n",str);
    
  return 0;  
}
