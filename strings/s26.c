 
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
char str[100];
int i,count = 0;
printf("enter the string :");
fgets(str,sizeof str,stdin);

 str[strcspn(str,"\n")] = '\0';     // replaces \n added by fgets with \0 end character of string 
 
 for(i=0; str[i] != '\0';i++){
 if(ispunct(str[i])){
           count++;
 }
 }
 
 printf("the string after replacement of spaces with s : %d",count);
 
 return 0;
}
