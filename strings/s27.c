#include<stdio.h>
#include<string.h>
int main(){
char str[100],c[100];
int i =0 ;

printf("enter the string :");
fgets(str,sizeof str,stdin);

while(str[i] != '\0' && str[i] != '\n'){
       c[i] = str[i];
    i++;
}
 c[i] = '\0';
 
 printf("\n string before newline : %s\n",c);
 return 0;
 }
