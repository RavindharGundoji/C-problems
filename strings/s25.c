// replace the spaces in string with any character 
#include<stdio.h>
#include<string.h>

int main(){
char str[100];
int i;
printf("enter the string :");
fgets(str,sizeof str,stdin);

 str[strcspn(str,"\n")] = '\0';     // replaces \n added by fgets with \0 end character of string 
 
 for(i=0; str[i] != '\0';i++){
 if(str[i] == ' '){
           str[i] = 's';
 }
 }
 
 printf("the string after replacement of spaces with s : %s",str);
 
 return 0;
}
